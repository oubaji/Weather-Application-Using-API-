# Weather Application

This repository contains a simple console-based weather application written in C++. The application allows users to register, log in, and check the weather for a specified location. It includes basic features such as user authentication, error handling, and console design elements like colored text and loading animations.

## Features

- **User Registration**: Users can create an account by providing a username, password, and password confirmation. The application checks for existing usernames, password length, and password confirmation matching.
- **User Login**: Registered users can log in by entering their username and password. The password input is masked with asterisks for security.
- **Weather Information**: After successful login, users can enter a city name to fetch and display the current weather information using a Python script.
- **Console Design**: The application includes various design elements such as banners, colored text, loading animations, and custom error messages to enhance the user experience.

## File Structure

- **main.cpp**: Contains the main application logic, including the `main` function and class definitions for `Design`, `Error`, `Auth`, `Registration`, `Weather`, and `Login`.
- **Info.txt**: Stores user registration information.
- **city.txt**: Temporary file used to store city names for weather queries.
- **weather.py**: Python script that fetches weather information based on the city name provided. (Note: This script should be implemented separately to fetch data from a weather API).

## Class Overview

### Design
- Handles console design elements like setting cursor position, changing text color, displaying banners, and showing loading animations.

### Error
- Provides utility functions for error checking such as checking if a username exists, password length validation, and password confirmation matching.

### Auth
- Abstract base class for user authentication.

### Registration
- Inherits from `Error`, `Design`, and `Auth`. Handles user registration, including input validation and saving user data to a file.

### Weather
- Inherits from `Design`. Handles weather-related functionality such as getting the city name from the user, saving the city name, running the Python script to fetch weather data, and displaying the weather information.

### Login
- Inherits from `Error`, `Weather`, and `Auth`. Handles user login, including input masking for passwords, validating login credentials, and fetching/displaying weather data after successful login.

## Usage

1. **Compile the Code**: Use a C++ compiler to compile the `main.cpp` file.
2. **Run the Application**: Execute the compiled binary.
3. **Register or Log In**: Follow the on-screen instructions to register a new user or log in with an existing account.
4. **Check Weather**: After logging in, enter a city name to fetch and display the current weather information.

## Note

- Ensure you have the necessary Python environment set up and the `weather.py` script implemented to fetch weather data from a weather API.
- The application is designed to run on Windows due to the use of Windows-specific libraries for console handling (`Windows.h`).

## Contributing

Feel free to contribute to this project by opening issues or submitting pull requests. Your contributions are welcome!

## License

This project is licensed under the MIT License. See the LICENSE file for details.
