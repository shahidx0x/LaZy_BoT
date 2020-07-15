#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include <sys/stat.h>
#include <windows.h>
inline bool chkdll (const std::string& filename)
{
    struct stat buffer;
    return (stat (filename.c_str(), &buffer) == 0);
}
using namespace std;

int main()
{
    //Debuging
    //system("START CMD");
    string brain_tracker =  "getTime.dll";
    string brain_tracher_sec = "getDay.dll";
    if(chkdll(brain_tracker) == 0 && chkdll(brain_tracher_sec) == 0)
    {
        cout << "BOT BRAIN MISSING : getTime.dll\n";
        cout << "Download it from : www.gitgub.com/tamimxb/AutoBot\n";
        system("timeout 3 > nul");
        system("START www.github.com/tamimxb/Autobot");
        system("pause");
        system("exit");
    }
    else
    {
        system("TITLE LaZy_BoT");
        system("date /t");
        system("pause");
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
        cout <<"[*]Fixing Local Machine Time\n";
        system("timeout 2 > nul ");
        system("net stop w32time > nul");
        system("net start w32time > nul");
        system("w32TM /config /syncfromflags:manual /manualpeerlist:ntp.indiana.edu > nul");
        system("w32tm /config /update > nul");
        cout <<"[*]Time Should Fixed\n";
        // Checking Date and Time For The Class
x:
        cout <<"[*]Checking Class Time.\n";
        // Setting Up External Executable
        system("REN getDay.dll getDay.bat");
        system("getDay.bat > day.conf");
        system("REN getDay.bat getDay.dll");
        cout <<"[*]Checking Class Time\n";
        system("REN getTime.dll getTime.bat");
        system("getTime.bat > time.conf");
        system("REN getTime.bat getTime.dll");
        ifstream fin( "day.conf" );
        string line;
        while( getline( fin, line ) )
        {
            if(line.find( "Monday" ) != string::npos || line.find( "Wednesday" ) != string::npos)
            {

                ifstream fin( "time.conf" );
                string line;
                while( getline( fin, line ) )
                {
                    if(line.find( "10:00" ) != string::npos )
                    {
                        system("START https://bdren.zoom.us/wc/68271724462/join?track_id=&jmf_code=&meeting_result=&tk=&cap=undefined&prefer=0");
                        system("timeout 10 > nul"); //Duration of the class
                        system("taskkill /IM msedge.exe /F > nul"); // Closing Browser
                        system("taskkill /IM firefox.exe /F > nul"); // Closing Browser
                        system("taskkill /IM chrome.exe /F > nul"); // Closing Browser
                    }
                    else if(line.find( "11:30" ) != string::npos )
                    {
                        system("start https://bdren.zoom.us/wc/68969938609/join?track_id=&jmf_code=&meeting_result=&tk=&cap=undefined&prefer=0");
                        system("timeout 10 > nul");
                        system("taskkill /IM msedge.exe /F > nul");
                        system("taskkill /IM firefox.exe /F > nul"); // Closing Browser
                        system("taskkill /IM chrome.exe /F > nul"); // Closing Browser
                    }
                    else
                    {
                        system("timeout 5 > nul");
                        cout << "[*]CLASS : 1 & 2 will be start at 10:00 & 11:30AM\n";
                    }
                }
            }
            else
            {
                system("timeout 3 > nul");
                cout <<"[*]Class 1 & 2 not Today\n";
            }
            if( line.find( "Tuesday" ) != string::npos || line.find( "Thursday" ) != string::npos )
            {
                ifstream fin( "time.conf" );
                string line;
                while( getline( fin, line ) )
                {
                    if(line.find( "19:11" ) != string::npos )
                    {
                        system("START https://bdren.zoom.us/wc/61814360358/join?track_id=&jmf_code=&meeting_result=&tk=&cap=undefined&prefer=0");
                        system("timeout 10 > nul");
                        system("taskkill /IM msedge.exe /F > nul");
                        system("taskkill /IM firefox.exe /F > nul"); // Closing Browser
                        system("taskkill /IM chrome.exe /F > nul"); // Closing Browser
                    }
                    else
                    {
                        cout << "[*]CLASS 3 : Not Started at Yet.\n";
                        system("timeout 5 > nul");
                    }
                }
            }
            else
            {
                system("timeout 3 > nul");
                cout << "[*]CLASS 3 : is not Today.\n";
            }
            system("cls");
            goto x;

        }
    }

}


