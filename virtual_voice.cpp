/*C++ Project: made by Soyam Kapoor, Computer System Engineering, Sukkur IBA University.
This project works as a virtual Assistance*/

#include<iostream>   //include input/output stream library
 #include<windows.h>   //include windows.h library,which allows you to interact with various features and components of the Windows operating system.
  #include<stdio.h>	    //include stdio.h library
   #include<string>	     //include string library
    #include<ctime>		    //include ctime library for current time
    #include "clearscreen.h"   //including user define file which is responsible for clear the screen/console

//Libraries 
using namespace std;	    //using standard namespace library
 void time();			     //declare user defined function
  void date_time();		      //declare user defined function
  
int main(){		//main function 		//initialize main function / starting point of the program
     clear_screen();             //calling function
	
	cout<<"\t<=================================== WELCOME =================================================>"<<endl;//print the statement
    cout<<"\t<=================================== I'M A VIRTUAL ASSISTANT =================================>"<<endl;  //print the statement
    cout<<"\t<=================================== MY NAME IS SOYAM KAPOOR =================================>"<<endl;    //print the statement
    cout<<"\t<=================================== I'M HERE TO HELP YOU ====================================>"<<endl;     //print the statement
    
    // Convert this message to speech using 'espeak' command
string phrase ="WELCOME I AM A VIRTUAL ASSISTANT MY NAME IS SOYAM KAPOOR I AM HERE TO HELP YOU" ; //initialize the string named phrase with the value of WELCOME I AM A VIRTUAL ASSISTANT MY NAME IS SOYAM KAPOOR I AM HERE TO HELP YOU
 string command ="espeak -v+f10 \""+phrase+"\"";                                                      // this will generate command using the string 'phrase' in espeak
  const char *charCommand=command.c_str();                                                                //This converts the 'command' string to a C-style string (const char *) so that it can be passed as an argument to the system() function which accepts only C-style strings
   system(charCommand);                                                                                      //using system to get charcommand
   
     time();           //calling function
      string password;   //declare string
       char query[50];     //declare character array
       
do{//using do-while loop
    cout<<"======================"<<endl; //print the statement
    cout<<"| ENTER THE PASSWORD: |"<<endl;  //print the statement
    cout<<"======================"<<endl;    //print the statement
    
string phrase ="ENTER THE PASSWORD" ;      //declare the string named phrase and initialize the value ENTER THE PASSWORD
  string command ="espeak \""+phrase+"\"";   //This line generates a command to be executed in the terminal using the string 'phrase' in espeak
   const char *charCommand=command.c_str();   //This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);                          //using system to get charcommand

getline(cin,password);  //gets password from user
    
while(password!="Soyam"){//using while loop and run untill while condition is true
    cout<<"====================================================="<<endl;//print the statement
    cout<<"| INCORRECT PASSWORD, PLEASE ENTER CORRECT PASSWORD: |"<<endl;//print the statement
    cout<<"====================================================="<<endl;//print the statement

string phrase ="INCORRECT PASSWORD PLASE ENTER CORRECT PASSWORD" ;//declare the string named phrase and initialize the value ENTER THE PASSWORD
  string command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    const char *charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
      system(charCommand);//using system to get charcommand
	
getline(cin,password);//get password from user	
}

	cout<<"======================"<<endl;//print the statement
    cout<<"| CORRECT PASSWORD: |"<<endl;//print the statement
    cout<<"======================"<<endl;//print the statement

phrase ="CORRECT PASSWORD" ;//initialize the value of phrase "Correct password"
  command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
      system(charCommand);//using system to get charcommand
    
do{//using do-while loop
	cout<<"<================================================================> "<<endl;//print the statement
	cout<<"| HOW CAN I HELP YOU |"<<endl;//print the statement

phrase ="HOW CAN I HELP YOU" ;//initialize value to how can i help you
   command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
      charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
        system(charCommand);//using system to get charcommand
    
cout<<"Your Query=====>"<<endl;//prompt user to enter your query
   gets(query);//gets input from user and store in query(character array)
	
if(strcmp(query,"HI")==0|| strcmp(query,"HELLO")==0|| strcmp(query,"HEY")==0|| strcmp(query,"hello")==0|| strcmp(query,"hi")==0|| strcmp(query,"hey")==0) { //compare value of query entered by user 
	cout<<"HEllo DEAR: "<<endl;//print the statement

phrase ="HELLO DEAR ";//initialize value of phrase to HELLO DEAR
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
      charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
        system(charCommand);//using system to get command
	}
    else if(strcmp(query,"BYE")==0|| strcmp(query,"bye")==0|| strcmp(query,"STOP")==0|| strcmp(query,"Stop")==0|| strcmp(query,"EXIT")==0|| strcmp(query,"exit")==0) { //compare value of query entered by user
		cout<<"THANKYOU SOMUCH FOR YOUR TIME: HAVE A NICE LIFE AHEAD "<<endl;//print the statement
	phrase =" THANKYOU SOMUCH FOR YOUR TIME: HAVE A NICE LIFE AHEAD ";//initialize the value of phrase to THANKYOU SOMUCH FOR YOUR TIME: HAVE A NICE LIFE AHEAD 
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
        system(charCommand);//using system to get command
        return 0;//using system to get command
	}
	else if(strcmp(query,"HOW ARE YOU")==0|| strcmp(query,"how are you")==0|| strcmp(query,"WHATSUP")==0|| strcmp(query,"whatsup")==0|| strcmp(query,"HOW''S YOU DOING")==0|| strcmp(query,"how''s you doing")==0){//compare value of query entered by user
	cout<<"| I'M DOING WELL.THANKYOU FOR ASKING |"<<endl;//print the statement
	phrase ="| I'M DOING WELL THANKYOU FOR ASKING | ";//initialize the value of phrase to I'M DOING WELL THANKYOU FOR ASKING
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
        system(charCommand);//using system to get command
	}
	else if(strcmp(query,"WHO ARE YOU")==0|| strcmp(query,"who are you")==0){//compare the value of query entered by user
	cout<<"| I'M VIRTUAL ASSISTANT, CREATED BY MY MASTER ENGINEER SOYAM KAPOOR |"<<endl;//print the statement
	
	phrase ="| I'M VIRTUAL ASSISTANT, CREATED BY MY MASTER ENGINEER SOYAM KAPOOR |";//initialize the value of phrase to  I'M VIRTUAL ASSISTANT, CREATED BY MY MASTER ENGINEER SOYAM KAPOOR 
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
        system(charCommand);//using system to get command
	}
	
	else if(strcmp(query,"DO YOU KNOW SOYAM KAPOOR")==0|| strcmp(query,"do you know soyam kapoor")==0){//Compare value of query entered by user
	cout<<"| YES |,\n| SOYAM KAPOOR WAS BORN ON 7TH MARCH,2005 AT PANO AQIL |"<<endl;//print the statement
	cout<<"| HE DID HIS INTERMEDIATE FROM CITY SCHOOL AND COLLEGE PANO AQIL |"<<endl;//print the statment
	cout<<"| SOYAM KAPOOR IS CURRENTLY PURSUING BACHLORS OF ENGINEERING IN COMPUTER SYSTEMS ENGINEERING AT SUKKUR IBA UNIVERSITY |"<<endl;//print the statement
	
	//Initialize the value of phrase to YES, SOYAM KAPOOR WAS BORN ON 7TH MARCH,2005 AT PANO AQIL HE DID HIS INTERMEDIATE FROM CITY SCHOOL AND COLLEGE PANO AQIL SOYAM KAPOOR IS CURRENTLY PURSUING BACHLORS OF ENGINEERING IN COMPUTER SYSTEMS ENGINEERING AT SUKKUR IBA UNIVERSITY
	phrase ="YES, SOYAM KAPOOR WAS BORN ON 7TH MARCH,2005 AT PANO AQIL HE DID HIS INTERMEDIATE FROM CITY SCHOOL AND COLLEGE PANO AQIL SOYAM KAPOOR IS CURRENTLY PURSUING BACHLORS OF ENGINEERING IN COMPUTER SYSTEMS ENGINEERING AT SUKKUR IBA UNIVERSITY";
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
	
	}
	else if(strcmp(query,"time")==0|| strcmp(query,"date")==0){//Compare value of query entered by user
		date_time();//calling  function
	}
	
	else if(strcmp(query,"open notepad")==0|| strcmp(query,"OPEN NOTEPAD")==0){//Compare value of query entered by user
		cout<<"| OPENING NOTEPAD |";//print statement
	phrase ="OPENING NOTEPAD" ;//Initialize value of phrase to OPENING NOTEPAD
    command ="espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
		system("notepad");//Open notepad application
	}
	
	else if(strcmp(query,"open word")==0|| strcmp(query,"OPEN WORD")==0){//compare value of query entered by user
		cout<<"| OPENING WORD |";//print the statement
	phrase ="OPENING WORD" ;//Initialize value of phrase to OPENING WORD
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
		system("start winword.exe");//Open Microsoft word application
	}
	else if(strcmp(query,"open excel")==0|| strcmp(query,"OPEN EXCEL")==0){//Comapre the value of query entered by user
		cout<<"| OPENING EXCEL |";//print the statement
	phrase ="OPENING EXCEL" ;//Initialize value of phrase to OPENING EXCEL
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
		system("start excel.exe");//Open Microsoft Excel sheet application
	}
	
	else if(strcmp(query,"open powerpoint")==0|| strcmp(query,"OPEN POWERPOINT")==0){//compare value of query entered by user
		cout<<"| OPENING POWERPOINT |";//print the statment
	phrase ="OPENING POWERPOINT" ;//Initialize value of phrase to OPENING POWERPOINT
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
		system("start powerpnt.exe");//Open Microsoft PowerPoint application
	}
	else if(strcmp(query,"open outlook")==0|| strcmp(query,"OPEN OUTLOOK")==0){//Compare value of query entered by user
		cout<<"| OPENING OUTLOOK |";//print the statement
	phrase ="OPENING OUTLOOK" ;//Initialize value of phrase to OPENING OUTLOOK
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
		system("start outlook.exe");//Open Microsoft Outlook application
	}
	else if(strcmp(query,"open msaccess")==0|| strcmp(query,"OPEN MSACCESS")==0){//Compare value of query entered by user
		cout<<"| OPENING MSACCESS |";//print the statement
	phrase ="OPENING MSACCESS" ;//Initialize the value of phrase to OPENING MSACCESS
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
		system("start msaccess.exe");//Open Microsoft msaccess application
	}
	//These all are msoffice applications
	//Above are msoffice applications
	
	//following are the popular websites
	else if(strcmp(query,"open google")==0|| strcmp(query,"OPEN GOOGLE")==0){//Compare the value of query entered by user
		cout<<"OPENING GOOGLE ";//print the statement
	phrase ="| OPENING GOOGLE |";//Initialize the value of phrase to OPENING GOOGLE 
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
    system("start https://www.google.com");//Open Google 
	}
	else if(strcmp(query,"open facebook")==0|| strcmp(query,"OPEN FACEBOOK")==0){//Compare value of query entered by user
		cout<<"| OPENING FACEBOOK |";//print the statement
	phrase ="OPENING FACEBOOK" ;//Initialuze the value of phrase to OPENING FACEBOOK
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
    system("start https://www.facebook.com");//Open Facebook 
	}
	else if(strcmp(query,"open twitter")==0|| strcmp(query,"OPEN TWITTER")==0){//Compare va;ue of query entered by user
		cout<<"| OPENING TWITTER |";//print the statment
	phrase ="OPENING TWITTER" ;//Initialize value of phrase to OPENING TwITTER
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
    system("start https://www.twitter.com");//Open Twitter
	}
	else if(strcmp(query,"open instagram")==0|| strcmp(query,"OPEN INSTAGRAM")==0){//Compare value of query entered by user
		cout<<"OPENING INSTAGRAM ";//print the statement
	phrase ="| OPENING INSTAGRAM |";//Initializegv value of phrase to OPENING INSTAGRAM
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
    system("start https://www.instagram.com");//Open Instagram
	}
	else if(strcmp(query,"open linkedin")==0|| strcmp(query,"OPEN LINKEDIN")==0){//Compare value of query entered by user
		cout<<"| OPENING LINKEDIN |";//Print the statement
	phrase ="OPENING LINKEDIN" ;//Initialize value of phrase to OPENING LINKEDIN
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
    system("start https://www.linkedin.com");//Open Linkedin
	}
	else if(strcmp(query,"open youtube")==0|| strcmp(query,"OPEN YOUTUBE")==0){//Compare value of query entered by user
		cout<<"| OPENING YOUTUBE |";//Print the statement
	phrase ="OPENING YOUTUBE" ;//Initialize the value of phrase to OPENING YOUTUBE
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
    system("start https://www.youtube.com");//Open Youtube
	}
	
	//Above are popular websites

	//following are the sukkur IBA University websites
	else if(strcmp(query,"open sukkuriba")==0|| strcmp(query,"OPEN SUKKURIBA")==0){//Compare value of query entered by user
		cout<<"| OPENING SUKKUR IBA WEBSITE |";//Print the statement
	phrase ="OPENING SUKKUR IBA WEBSITE" ;//Initialize the value of phrase to OPENING SUKKUR IBA WEBSITE
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
    system("start https://www.iba-suk.edu.pk/");//Open Sukkur IBA Website
	}
	else if(strcmp(query,"open elearningiba")==0|| strcmp(query,"OPEN ELEARNINGIBA")==0){//Compare value of query entered by user
		cout<<"| OPENING ELEARNING |";//Print the statement
	phrase ="OPENING ELEARNING" ;//Initialize the value of phrase to OPENING ELEARING
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
    system("start http://elearning.iba-suk.edu.pk/login/index.php");//Open Sukkur IBA University elearning Portal
	}
	else if(strcmp(query,"open cmsiba")==0|| strcmp(query,"OPEN CMSIBA")==0){//Compare the value of query entered by user
		cout<<"| OPENING CMS SUKKUR IBA |";//Print the statement
	phrase ="OPENING CMS SUKKUR IBA" ;//Initialize the value of phrase to OPENING CMS SUKKUR IBA 
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
    system("start https://pscs.iba-suk.edu.pk/psp/HRCS9/?cmd=login&languageCd=ENG&");//Open Sukkur IBA University CMS portal
	}
	else if(strcmp(query,"open studentportaliba")==0|| strcmp(query,"OPEN STUDENTPORTALIBA")==0){//Compare the value of query entered by user
	cout<<"| OPENING STUDENTPORTAL SUKKUR IBA |";//Print the statement
	phrase ="OPENING STUDENTPORTAL SUKKUR IBA" ;//Initialize the value of phrase to OPENING STUDENT PORTAL SUKKUR IBA
    command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
    system("start http://sibagrades.iba-suk.edu.pk:86/Default.aspx");//Open Sukkur IBA University student portal
	}
	//Above are sukkur IBA University website
		
	else{//otherwise
		cout<<"| SORRY COULD NOT UNDERSTAND PLEASE TRY AGAIN: |"<<endl;//Print the statement
		string phrase ="| SORRY COULD NOT UNDERSTAND PLEASE TRY AGAIN: |";//Initialize the value of phrase to SORRY COULD NOT UNDERSTAND PLEASE TRY AGAIN:  
    string command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    const char *charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
	    }
    }
	while(1);//condition is always true
}
	while(1);//condition is always true
	return 0;//return 0 is used to end the program/ used to successful execution of program.
}
//functionsss
void time(){//Creating user-defined function name time with void type
  time_t now = time(0);//get current system time and store in variable
    tm *time = localtime(&now);//convert system time to string format
	cout<<"\nCurrent date and time is : "<<ctime(&now);
    if (time-> tm_hour > 5 && time->tm_hour < 12){
	cout<<"| GOOD MORNING SWEETHEARTt |"<<endl;//Print the statement
	string phrase = "GOOD MORNING SWEETHEART";//Initialize the value of phrase to OPENING MORNING SWEETHEART
    string command = "espeak -v+f3\"" + phrase + "\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    const char *charCommand = command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
	}
	else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
	cout<<"| GOOD AFTERNOON SWEETHEART |"<<endl;//Print the statement
	string phrase ="GOOD AFTERNOON SWEETHEART" ;//Initialize the value of phrase to GOOD AFTERNOON SWEETHEART
    string command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    const char *charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
	}
	else if(time->tm_hour>16 && time->tm_hour<=19){
	cout<<"| GOOD EVENING SWEETHEART |"<<endl;//Print the statement
	string phrase ="GOOD EVENING SWEETHEART" ;//Initialize the value of phrase to GOOD EVENING SWEETHEART
    string command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    const char *charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
	}
	else if (time-> tm_hour>19 && time->tm_hour <= 5){
	cout<<"| IT'S LATE, YOU SHOUDL SLEEP SWEETHEART |"<<endl;//Print the statement
	string phrase ="| IT'S LATE, YOU SHOUDL SLEEP SWEETHEART |";//Initialize the value of phrase to IT'S LATE, YOU SHOULD SLEEP SWEETHEART
    string command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    const char *charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
	}
}
void date_time(){//Creating user defined function named date_time with voide type
	time_t now=time(0);//get current system time and store in variable
	char *dt= ctime(&now);//convert system time to string format
	cout<<"THE CURRENT DATE & TIME IS: "<<dt<<endl;//print the statement
	
	string phrase ="THE CURRENT DATE & TIME IS" ;//Initialize value of phrase string to THE CURRENT DATE & TIME IS
    string command =" espeak \""+ phrase +"\"";//This line generates a command to be executed in the terminal using the string 'phrase' in espeak
    const char *charCommand=command.c_str();//This line of code assigns the C-string representation of the variable command to the charCommand pointer.
    system(charCommand);//using system to get command
}

