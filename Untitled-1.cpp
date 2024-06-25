////////////////////////////
//        Libraries
///////////////////////////
#include <iostream>
#include <fstream> // For File Handling
#include <string>
#include <Windows.h> //  For Color
#include <conio.h> //  For getch
#include <iomanip> // For setw 
//------------------------------------
using namespace std;

///////////////////////////////////////////////////////////////////////////////
//   Class Design (Color, Bar Replace, Loading Animation, Banner Design)
//////////////////////////////////////////////////////////////////////////////

class Design
{
public:
    //This Function is used to replace bar in character
    void gotoxy(int x, int y)
    {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);    
    }    
    
    ////////////////////////////
    //      Colors   
    ////////////////////////////
    
    // This Function is used to get colour in other Functions
    void setColor(WORD color) 
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    }

    //This Function is used for White color
    void resetConsoleColor() 
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }

    // Red Signal for Wrong Login
    void LoginFalse()
    {
        setColor(FOREGROUND_RED);
        cout << setw(72) << ""  << "Invalid Username and Password" << endl;
        resetConsoleColor();
    }

    // Green Signal for True Login
    void LoginTrue()
    {
        setColor(FOREGROUND_GREEN);
        cout << endl;
        cout << setw(76.5) << ""  << "Successful Login" << endl;
        resetConsoleColor();
    }

    // Green Signal for Successful Registration
    void registrationTrue() 
    {
        setColor(FOREGROUND_GREEN);
        cout << endl;
        cout << setw(72) << ""  << "Successful Registration!" << endl;
        resetConsoleColor();
    }

    // Red Error for password length less than 8 characters
    void invalidPasswordRed() 
    {
        setColor(FOREGROUND_RED);
        cout << setw(72) << "" << "Password must be at least 8 characters long." << endl;
        resetConsoleColor();
    }

    // Red Error for same username already exists
    void usernameExist() 
    {
        setColor(FOREGROUND_RED);
        cout << setw(70) << "" << "Username already exists. Please choose another one." << endl;
        resetConsoleColor();
    }

    // Red error for password confirmation mismatch
    void confirmWrongRed() 
    {
        setColor(FOREGROUND_RED);
        cout << setw(72) << ""  << "Passwords do not match. Please try again." << endl;
        resetConsoleColor();
    }
    
    ////////////////////////////
    //     Loading Animation   
    ////////////////////////////
    
    // Use in Login class
    void loginAnimation() 
    {    
        int totalBoxes = 20;
        char filledBox = 219; // ASCII code for filled box character
        char emptyBox = ' ';

        for (int i = 0; i <= totalBoxes; ++i) 
        {
            gotoxy(74, 22);
            for (int j = 0; j < i; ++j)
            {
                cout << filledBox;
            }
            for (int j = i; j < totalBoxes; ++j)
            {
                cout << emptyBox;
            }
            Sleep(100); // Adjust speed of animation (milliseconds)
        }
        cout << endl;
    }

    // Use in Registration class 
    void RegistrationAnimation() 
    {
        int totalBoxes = 20;
        char filledBox = 219; // ASCII code for filled box character
        char emptyBox = ' ';

        for (int i = 0; i <= totalBoxes; ++i) 
        {
            gotoxy(74, 24);
            for (int j = 0; j < i; ++j)
            {
                cout << filledBox;
            }
            for (int j = i; j < totalBoxes; ++j)
            {
                cout << emptyBox;
            }
            Sleep(100); // Adjust speed of animation (milliseconds)
        }
        cout << endl;
    }
    
    /////////////////////////
    //		Banner
    ////////////////////////
    void banner()
    {
        setColor(FOREGROUND_GREEN|FOREGROUND_BLUE);
    		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl ;
    	    cout << setw(110) << "  _   _            _                          _     " << endl;     
    		cout << setw(110) << "| \\ | | ___   ___| |_ _   _ _ __ _ __   __ _| |___ " << endl;
   		    cout << setw(110) << "|  \\| |/ _ \\ / __| __| | | | '__| '_ \\ / _` | / __|" << endl;
    	    cout << setw(110) << "|_| \\_|\\___/ \\___|\\__|\\__,_|_|  |_| |_|\\__,_|_|___/" << endl;
    	    resetConsoleColor();
    	    cout << setw(110) << "+-------------------------------------------------+" <<endl;
    	    setColor(FOREGROUND_GREEN|FOREGROUND_BLUE);
    	    cout << setw(110) << "|  M.Ahmad Samdani & Uroobah Ovais, Areej Muskan  |" <<endl;
    	    resetConsoleColor();
    	    cout << setw(110) << "+-------------------------------------------------+"<<endl;
    	    resetConsoleColor();
    }
    
    // start interface
    void showmenu()
    {
    	banner();
    	cout << endl;
        cout << setw(76) << "" << "[R] Regestration " << endl;
		cout << setw(76) << "" << "[L] Login " <<endl;
		cout << setw(76) << "" << "[E] Exit " << endl;
    }      
	
	
	//create design box for weather data
	void showColumnInTable(string head, string data)
	{

    		cout << setw(58) << "| " << "|" << left << setw(20) << head << setw(10) << 
            "|" <<  setw(20) << data << setw(10) << "| |" << right << endl;
  
	}  
	
	void error404()
	{
    	int leftPadding = 93;
    	setColor(FOREGROUND_RED);
    	cout << endl;
    	cout << setw(leftPadding) << "  _  _    ___  _  _   " << endl;
    	cout << setw(leftPadding) << " | || |  / _ \\| || |  " << endl;
   		cout << setw(leftPadding) << " | || |_| | | | || |_ " << endl;
    	cout << setw(leftPadding) << " |__   _| | | |__   _|" << endl;
    	cout << setw(leftPadding) << "    | | | |_| |  | |  " << endl;
    	cout << setw(leftPadding) << "    |_|  \\___/   |_|  " << endl << endl;
    	cout << setw(leftPadding-5) << "NOT FOUND!" << endl;
		resetConsoleColor();
	}
	
	void error12029()
	{
 
    	int leftPadding = 111.5;
    	cout << setw(leftPadding) << " _   _         _____      _                       _   " << endl;
    	cout << setw(leftPadding) << "| \\ | |       |_   _|    | |                     | |  " << endl;
    	cout << setw(leftPadding) << "|  \\| | ___     | | _ __ | |_ ___ _ __ _ __   ___| |_ " << endl;
    	cout << setw(leftPadding) << "| . ` |/ _ \\    | || '_ \\| __/ _ \\ '__| '_ \\ / _ \\ __|" << endl;
    	cout << setw(leftPadding) << "| |\\  | (_) |  _| || | | | ||  __/ |  | | | |  __/ |_ " << endl;
    	cout << setw(leftPadding) << "\\_| \\_/\\___/   \\___/_| |_|\\__\\___|_|  |_| |_|\\___|\\__|" << endl;
                                                      
	}
	
	

	
};


//////////////////////////////////
//     Class for Error Handling    
//////////////////////////////////

class Error
{
public:
    
    // Create Template
    template <typename U>
	// This Function is used to check if the username exists
	bool userExist(const U& username)
    {
        string u, p, c;
        ifstream Read("Info.txt");
        while (Read >> u >> p >> c)
        {
            if (u == username)
            {
                Read.close();
                return true;
            }
        }
        Read.close();
        return false;
    }    
    
    
    // Create Template
	template <typename P> 
	// This Function is used to check the password length  
    bool lenCheck(const P& password)
    {
        return password.length() >= 8;
    }
    
    
    //Create Template
    template <typename A, typename C>
	// This function is used to check if the password and confirm password are equal
	bool passwordCheck(const A& password, const C& confirm)
    {
        return password == confirm;
    }
    
    
    //Create Template
    template <typename ui, typename pa>
	// This Function is used to check if the username exists in the login process         
	bool loginUser(const ui& username, const pa& password)
    {
        string u, p, c;
        ifstream Read("Info.txt");
        while (Read >> u >> p >> c)
        {
            if (u == username && p == password)
            {
                Read.close();
                return true;
            }
        }
        Read.close();
        return false;
    }       
};

////////////////////////////
//   class for auth
///////////////////////////

class Auth
{
	public:
	
	//virtual fuction 
	virtual void user()=0;	
}; 


/////////////////////////////////
//    Class For Registration
////////////////////////////////
// Error (Base Class) , Design (Base Class), Auth (Base Class) For polimorphism
///////////////////////////////
// Registration (Drived Class)
//////////////////////////////
// Multiple Ingeritance
/////////////////////////////


class Registration: public Error, public Design, public Auth
{
	protected:
    	string username, password, confirm;

	public:
		//Default Constructor
    	Registration() {}

    void user()
    {
    	cout << endl;
        cout << setw(98) << "Username: ________________ " << endl;
        cout << endl;
        cout << setw(98) << "Password: ________________ " << endl;
        cout << endl;
        cout << setw(98) << "Confirm:  ________________ " << endl;

        // Input and animation 
        gotoxy(81, 18);
        cin >> username;
        gotoxy(81, 20);
        cin >> password;
        gotoxy(81, 22);
        cin >> confirm;

        // Check if the username exists
        if (userExist(username))
        {
            Design::usernameExist();
            return;    
        }

        // Check the password length
        if (!lenCheck(password))
        {
            Design::invalidPasswordRed();
            return;
        }

        // Check if the password and confirm password are equal
        if (!passwordCheck(password, confirm))
        {
            Design::confirmWrongRed();
            return;
        }

        Design::RegistrationAnimation();
        Design::registrationTrue();
        getch();

		// Save data in File
        ofstream Write("Info.txt", ios::app);
        Write << username << " " << password << " " << confirm << endl;
        Write.close();
    }
};

///////////////////////
// class for Weather
////////////////////////
// Design (Base Class)
///////////////////////
// Single Inheritance
//////////////////////


class Weather: public Design
{
	public:
		string city;
	
	// This Function is use for get city for user
	void getname()
	{
			Design::banner();
			cout << endl;
			cout << setw(103) << "Enter Your Location: ________________ " << endl;
			gotoxy (86,18);
			cin >> city;
	}
	
	//This Function is use  for save city name
	void savename()
	{
		ofstream Write ("city.txt");
		Write << city;
		Write.close();
					
	}	
	
	//This Function is use for run python file
	void getweatherdata()
	{
		savename();
		system("python .\\weather.py");
		
	}
	
	//This Function is user for show  weather data 
	void showWeather()
	{
		char choice;
		string n,c,t,
			   f,w,lat,
			   lon,p,h,v;
		
		// Read data from file
		ifstream Read("city.txt");
		Read >> n >> c >> t >> f >> w >> lat >> lon >> p >> h >> v ;
		Read.close();
		
		if(n == "Wrong")
		{
			Design::error404();
			// set for search weather again and again
    	up:
    	cout << endl << endl;	
    	cout << setw(67) << "Press"; 
    	Design::setColor(FOREGROUND_GREEN);
		cout << " [S]";
		Design::resetConsoleColor();
		cout <<" For Search Weather and ";
		Design::setColor(FOREGROUND_RED);
		cout <<"[E]";
		Design::resetConsoleColor();
		cout <<" For Exit."<<endl;
    	
		// input
		cin >> choice;
		//Clear screen 
    	system("cls");
    	// switch case
    	switch(choice)
    	{
    		case 'S':
    		case 's':
    			Weather::getname();
    			Weather::getweatherdata();
    			Weather::showWeather();
    			system("pause");
    			system("cls");
    			goto up;
    			
    			break;
    			
    			
			default:
				getch();
				return ;
				
				
					
		}

			
		}
		
		if(n == "No")
		{
			Design::error12029();
					// set for search weather again and again
    		up:
    		cout << endl << endl;	
    		cout << setw(67) << "Press"; 
    		Design::setColor(FOREGROUND_GREEN);
			cout << " [S]";
			Design::resetConsoleColor();
			cout <<" For Search Weather and ";
			Design::setColor(FOREGROUND_RED);
			cout <<"[E]";
			Design::resetConsoleColor();
			cout <<" For Exit."<<endl;
    	
			// input
			cin >> choice;
			//Clear screen 
    		system("cls");
    		// switch case
    		switch(choice)
    		{
    			case 'S':
    			case 's':
    				Weather::getname();
    				Weather::getweatherdata();
    				Weather::showWeather();
    				system("pause");
    				system("cls");
    				goto up;
    			
    			break;
    			
    			
				default:
					getch();
					return ;
				
			}	
		}
		
		// set design for shoW data 
		else
		{
			
		
    		int leftPadding = 57;
    		cout << endl;
    		Design::setColor(FOREGROUND_GREEN|FOREGROUND_BLUE);
    		cout << setw(leftPadding) <<"" << "  __________________________________________________"<< endl;
    		cout << setw(leftPadding) <<"" << "/|                                                  |\\"<< endl;
    		Design::resetConsoleColor();
    		this->showColumnInTable("Location", n);
    		this->showColumnInTable("Country", c);
    		this->showColumnInTable("Temprature",t);
    		this->showColumnInTable("Feels Like", f);
    		this->showColumnInTable("Description", w);
    		this->showColumnInTable("Latitude", lat);
    		this->showColumnInTable("Longitude", lon);
    		this->showColumnInTable("Humidity", h);
    		this->showColumnInTable("Visibility", v);
    		Design::setColor(FOREGROUND_GREEN|FOREGROUND_BLUE);
    		cout << setw(leftPadding) <<"" << "\\|__________________________________________________|/"<< endl;
    		Design::resetConsoleColor();
    	
    		// set for search weather again and again
    		u:
    		cout << endl << endl;	
    		cout << setw(67) << "Press"; 
    		Design::setColor(FOREGROUND_GREEN);
			cout << " [S]";
			Design::resetConsoleColor();
			cout <<" For Search Weather and ";
			Design::setColor(FOREGROUND_RED);
			cout <<"[E]";
			Design::resetConsoleColor();
			cout <<" For Exit."<<endl;
    	
		// input
		cin >> choice;
		//Clear screen 
    	system("cls");
    	// switch case
    	switch(choice)
    	{
    		case 'S':
    		case 's':
    			Weather::getname();
    			Weather::getweatherdata();
    			Weather::showWeather();
    			system("pause");
    			system("cls");
    			goto u;
    			
    			break;
    			
    			
			default:
				getch();
				return ;
				
				
					
		}
	}
	}

};


///////////////////////////////
//       class for Login
//////////////////////////////
// Error (Base Class) , Design (Base Class), Auth (Base Class) For polimorphism
///////////////////////////////
// 	  Login (Drived Class)
//////////////////////////////
//   Multiple Inheritance
//////////////////////////////


class Login: public Error,public Weather,public Auth
{
	protected:
    	
		string username,
		 	   password;

	public:
    	// Default Constructor
		Login() 
		{
		}

	// Function
    void user()
    {
    	cout << endl;
        cout << setw(98) << " Username: ________________ " << endl;
        cout << endl;
        cout << setw(98) << " Password: ________________ " << endl;

        gotoxy(81, 18);
        cin >> username;
        gotoxy(81, 20);

        char ch;
        // For replace password in staric
        while ((ch = _getch()) != 13) // character 13 is the Enter key
        {
            if (ch == 8) // Handle backspace
            {
                if (!password.empty())
                {
                    password.pop_back();
                    cout << "\b \b";
                }
            } 
            else
            {
                password.push_back(ch);
                cout << '*'; // Mask the password character with an asterisk
            }
        }
        cout << endl;

        // Check if the username and password are correct
        if (!loginUser(username, password))
        {
            LoginFalse();
            return;
        }
		
		//animation
        Design::loginAnimation();
        // colour output
		Design::LoginTrue();
        //stop screen
		getch();
        //clear screen
		system("cls");
		//get and show wether data
        Weather::getname();
        Weather::getweatherdata();
        Weather::showWeather();
        getch();
        return;
        
        
        
    }
};


int main()
{
    char choice;
    
    // Class Registration Object
	Registration r1;
	
	// Class Login Object
    Login l1;
    
    // Class Design Object
	Design d;
	
	// Class Auth Object
	Auth *ptr;
	
    up:
    here:
		// bannner 	
		d.showmenu();
        cin >> choice;
        // for clear screen
        system("cls");

		// switch case
        switch (choice)
        {
        	
        	// for registration
        case 'R':
        case 'r':

			d.banner();
			// using pointer to call function due to funtion overriding		
			ptr = &r1;
			ptr -> user();
			getch();
			//clear screen
			system("cls");
			goto here;
			

			break;
			
			// for login 
        case 'L':
        case 'l':

        	d.banner();
        	// using pointer to call function due to funtion overriding
        	ptr = &l1;
        	ptr -> user();
        	getch();
        	// clear screen
        	system("cls");
			goto up;
			
			break;
			
			// for close program
        case 'E':
        case 'e':
        	
            
			return 0;
        
		return 0;
        }
    }

