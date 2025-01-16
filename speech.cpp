#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
// #include <tchar.h>
using namespace std;

void greeting()
{
    time_t t = time(0);
    tm *time=localtime(&t);
    if(time->tm_hour<12)
    {
        cout<<"\nGood Morning, Dev!\n"<<endl;
        string phrase = "Good Morning, Dev";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if(time->tm_hour>12 && time->tm_hour<=16)
    {
        cout<<"\nGood Afternoon, Dev!\n"<<endl;
        string phrase = "Good Afternoon, Dev";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if(time->tm_hour>16 && time->tm_hour<24)
    {
        cout<<"\nGood Evening, Dev!\n"<<endl;
        string phrase = "Good Evening, Dev";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime()
{
    time_t now=time(0);
    char *d_t =ctime(&now);
    cout<<d_t;
}

void introduction()
{
    cout<<"Welcome Master, I'm Goku at your service\n\n";
    string phrase = "Welcome Master, I'm Goku at your service";
    string command = "espeak \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);

}

int main()
{
    greeting();
    introduction();

    string ch;//for user commands

    do
    {

        STARTUPINFO start;
        PROCESS_INFORMATION process;
        ZeroMemory(&start, sizeof(start));
        start.cb = sizeof(start);
        ZeroMemory(&process, sizeof(process));

        cout<<"How can i help you?\n";
        string phrase = "How can i help you?";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
        
        // cout<<"Your Query......"<<endl;
        // string ph = "Your Query";
        // string com = "espeak \"" + ph + "\"";
        // const char *charComman = com.c_str();
        // system(charComman);
        getline(cin,ch);
        // cout<<"\n";
        // cout<<"\nHere is the result of your query......\n";
        // string phr = "Here is the result of your query";
        // string comm = "espeak \"" + phr + "\"";
        // const char *charComm = comm.c_str();
        // system(charComm);

        if(ch=="hi" || ch=="hey" || ch=="hello")
        {
            cout<<"Hola Master\n\n";
            string phrase = "Hola Master";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
        else if(ch=="Who are you")
        {
            cout<<"Main Goku, ekk virtual assistant jisse aapne baanaya hai\n\n";
            string phrase = "Main Goku, ekk virtual assistant jisse aapne baanaya hai ";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
        else if(ch=="bye" || ch=="exit" || ch=="stop")
        {
            cout<<"Good Bye, Sire!";
            string phrase = "Good Bye, Sire";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            exit(0);
        }
        else if(ch=="How are you" || ch=="whatsup")
        {
            cout<<"I'm good sire,how can i help you\n\n";
            string phrase = "I'm good sire,how can i help you";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
        else if(ch=="date" || ch=="time" || ch=="aaj din kya hai")
        {
            cout<<"Today date and time is ";
            string phrase = "Today date and time is";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            datetime();
            cout<<"\n";
        }
        else if(ch=="open notepad")
        {
            cout<<"opening notepad.......\n\n";
            string phrase = "opening notepad";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            if (!CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, 0, NULL, NULL, &start, &process))
            {
                cout << "Failed to open Notepad. Error: " << GetLastError() << endl;
            }
        }
        else if(ch=="open google")
        {
            cout<<"opening google.......\n\n";
            string phrase = "opening google";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            ShellExecute(0, 0, "https://www.google.com/webhp?hl=en&sa=X&ved=0ahUKEwiygtLHqMeKAxW8wzgGHYdAOp4QPAgI", 0, 0, SW_SHOW);
        }
        else if(ch=="open youtube")
        {
            cout<<"opening youtube.......\n\n";
            string phrase = "opening youtube";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            ShellExecute(0, 0, "https://www.youtube.com/", 0, 0, SW_SHOW);
        }

        else if(ch=="open chatgpt" || ch=="open gpt")
        {
            cout<<"opening chatgpt.......\n\n";
            string phrase = "opening chatgpt";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            ShellExecute(0, 0, "https://chatgpt.com/", 0, 0, SW_SHOW);
        }

        else if(ch=="open firefox" || ch=="open mozilla")
        {
            cout<<"opening mozilla firefox........\n\n";
            string phrase = "opening mozilla firefox";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            if (!CreateProcess(TEXT("C:\\Program Files\\Mozilla Firefox\\firefox.exe"), NULL, NULL, NULL, FALSE, 0, NULL, NULL, &start, &process))
            {
                cout << "Failed to open Firefox. Error: " << GetLastError() << endl;
            }
        }

        else if(ch=="open google chrome" || ch=="open chrome" || ch=="open gc")
        {
            cout<<"opening google chrome........\n\n";
            string phrase = "opening google chrome";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            if (!CreateProcess(TEXT("C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe"), NULL, NULL, NULL, FALSE, 0, NULL, NULL, &start, &process))
            {
                cout << "Failed to open Chrome. Error: " << GetLastError() << endl;
            }
        }

        else if(ch=="aaye haaye song")
        {
            cout<<"opening song..........\n\n";
            string phrase = "opening aaye haaye song on youtube";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            ShellExecute(0, 0, "https://www.youtube.com/watch?v=uChhQpHMmXE&ab_channel=T-Series", 0, 0, SW_SHOW);
        }

        else if(ch=="spiderman")
        {
            cout<<"opening spiderman image.........\n\n";
            string phrase = "opening spiderman image";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            ShellExecute(0, 0, "C:\\Users\\amazone world\\Pictures\\spiderman.jpg", 0, 0, SW_SHOW);
        }

        else
        {
            cout<<"Sorry I couldn't understand your query, Please Try again!\n\n";
            string phrase = "Sorry I couldn't understand your query, Please Try again!";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }

    } while (1);
    return 0;   
}