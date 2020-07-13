#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include <sys/stat.h>
inline bool chkdll (const std::string& filename)
{
    struct stat buffer;
    return (stat (filename.c_str(), &buffer) == 0);
}
using namespace std;

int main()
{
    // Debuging
    //system("START CMD");
    string brain_tracker =  "getTime.dll";
    if(chkdll(brain_tracker) == 0)
    {
        cout << "BOT BRAIN MISSING : getTime.dll\n";
        cout << "Download it from : Github\n";
        system("START https://github.com/tamimxb/LaZy_BoT/blob/master/getTime.dll");
        system("pause");
        system("exit");
    }
    else
    {
        system("TITLE LaZy_BoT");
        system("date /t");
        system("pause");
        // Setting Up External Executable
        system("cls");
        cout<< "[*]Starting System\n";
        system("timeout 3 > nul");
        //Check For atleast one B. Dic
        cout << "[*]Checking For Browser\n";
        system("timeout 2 > nul");
        if(system("CD C:\\Program Files (x86)\\Microsoft\\Edge\\Application\\ & DIR msed*.exe > nul")== 0)
        {
            system("timeout 2 > nul ");
            cout <<"[*]Browser Found\n";
        }
        else
        {
            cout <<"[-]NO Browser Found\n";
        }
        system("timeout 2 > nul ");
        // Fixing Your Local Computer Time if not
        cout <<"[*]Fixing Local Machine Time\n\n\n";
        system("timeout 2 > nul ");
        system("net stop w32time > nul");
        system("net start w32time > nul");
        system("w32TM /config /syncfromflags:manual /manualpeerlist:ntp.indiana.edu > nul");
        system("w32tm /config /update > nul");
        cout <<"[*]Time Should Fixed\n";
        // Checking Date and Time For The Class
        //x:
        system("REN getTime.dll get.bat");
        cout <<"[*]Checking Class Time\n";
        system("get.bat > fetched.day");
        system("REN get.bat getTime.dll");
x:
        cout <<"[*]Minimize The Window,It will Open the class automatically.\n";
        ifstream fin( "fetched.day" );
        string line;
        while( getline( fin, line ) )
        {
            if(line.find( "Monday10:00" ) != string::npos || line.find( "Wednesday10:00" ) != string::npos)
            {
                system("START https://bdren.zoom.us/wc/68271724462/join?track_id=&jmf_code=&meeting_result=&tk=&cap=undefined&prefer=0");
                system("timeout 10 > nul"); //Duration of the class
                system("taskkill /IM msedge.exe /F > nul"); // Closing Browser
                system("taskkill /IM firefox.exe /F > nul"); // Closing Browser
                system("taskkill /IM chrome.exe /F > nul"); // Closing Browser
            }
            else
            {
                cout << "CLASS 1 : ERROR\n";
            }
            if( line.find( "Monday11:30" ) != string::npos || line.find( "Wednesday11:30" ) != string::npos )
            {
                system("start https://bdren.zoom.us/wc/68969938609/join?track_id=&jmf_code=&meeting_result=&tk=&cap=undefined&prefer=0");
                system("timeout 10 > nul");
                system("taskkill /IM msedge.exe /F > nul");
                system("taskkill /IM firefox.exe /F > nul"); // Closing Browser
                system("taskkill /IM chrome.exe /F > nul"); // Closing Browser
            }
            else
            {
                cout << "CLASS 2 : ERROR\n";
            }
            if( line.find( "Tuesday11:30" ) != string::npos || line.find( "Thursday11:30" ) != string::npos )
            {
                system("START https://bdren.zoom.us/wc/61814360358/join?track_id=&jmf_code=&meeting_result=&tk=&cap=undefined&prefer=0");
                system("timeout 10 > nul");
                system("taskkill /IM msedge.exe /F > nul");
                system("taskkill /IM firefox.exe /F > nul"); // Closing Browser
                system("taskkill /IM chrome.exe /F > nul"); // Closing Browser
            }
            else
            {
                cout << "CLASS 3 : ERROR\n";
            }

            //else
            //{
            //cout << "[*]Class Not Found";
            // }
            system("cls");
            goto x;

        }
    }

}


