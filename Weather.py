import requests
import json

api =  "9bb78ca39f6959bc88295acdce3dc761"

f = open("city.txt", "r")
city = f.readline()
f.close()

url = f"http://api.openweathermap.org/data/2.5/weather?q={city}&units=metric&appid={api}"


f = open("city.txt", "w")
try:
    data = requests.get(url).text
    result = json.loads(data)
except:
    f.write("No InterNet")
    f.close()
    quit()

try:
    
    f.write (f'{result["name"]}\n') # City Name
    f.write(f'{result["sys"]["country"]}\n') # Country
    f.write(f'{float(round(result["main"]["temp"]))}C\n') # Tempratur
    f.write(f'{result["main"]["feels_like"]}C\n') # Feels Like
    f.write(f'{result["weather"][0]["main"]}\n') # Weather
    f.write(f'{result["coord"]["lat"]}\n') # Latitude
    f.write(f'{result["coord"]["lon"]}\n') # Longitude
    f.write(f'{result["main"]["pressure"]}hPa\n') # Pressure [hecto Pascal (100)]
    f.write(f'{result["main"]["humidity"]}%\n') # Humidity
    f.write(f'{result["visibility"]/1000} km') # Visibility
    
except:
    f.write("Wrong Search")
f.close()