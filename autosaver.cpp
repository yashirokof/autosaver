#define WINVER 0x0500
#include <windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<winable.h>
#include<time.h>
#include<winable.h>

void name()
{
  SetConsoleTitle("AutoSaver");
}

void logo()
{
printf("                                                 DreamSoft And Tech. BD.                                      \n");
printf("                                         ?????                          ????????????                          \n");
printf("                                        ???????                     ???????????????????                       \n");
printf("                                       ?????????                   ??????????????????????                     \n");
printf("                                       ?????????                 ??????????     ??????????                    \n");
printf("                                      ???????????                ??????              ??????                   \n");
printf("                                     ?????? ??????              ??????                ??????                  \n");
printf("                                    ??????   ?????              ??????                 ?????                  \n");
printf("                                    ?????     ?????              ??????                                       \n");
printf("                                   ??????     ??????             ?????????                                    \n");
printf("                                  ??????       ??????              ???????????????                            \n");
printf("                                  ?????        ??????                ??????????????????                       \n");
printf("                                 ?????          ??????                   ????????????????                     \n");
printf("                                ???????????????????????                         ???????????                   \n");
printf("                                ????????????????????????                             ???????                  \n");
printf("                               ?????????????????????????       ?????                   ??????                 \n");
printf("                              ???????????????????????????      ??????                  ??????                 \n");
printf("                              ?????                 ??????      ??????                 ??????                 \n");
printf("                             ??????                 ???????     ???????               ??????                  \n");
printf("                            ??????                   ??????      ???????????      ?????????                   \n");
printf("                            ?????                    ???????       ???????????????????????                    \n");
printf("                           ??????                     ???????        ???????????????????                      \n");
printf("                          ??????                       ??????           ?????????????                         \n");
printf("                                             Where Your Dream Comes True.                                   \n\n\n\n");
}

void about()
{
    printf(" Welcome To AutoSaver. \n For Auto Saving Data Please Don't Close This Application. \n Minimize That. \n In This Version You Will Get 1 Hour Tension Free Work, No Need To Save Any Thing By Pressing \"CTRL+S\". \n AutoSaver Automatically Do It For You. \n You Have To Just Save First Time On Your Hard_Disk Location Where You Want To Save Your File. \n \n \n");
printf("\n Name : AutoSaver.exe \n Version : 1.1.7 \n Creation Date : 04 October 2018 \n Created By : Dream Soft & Tech. \n Admin : Hrishikesh Sarkar Hriday \n Creator : Hrishikesh Sarkar Hriday \n Email : yashoriokof@gmail.com \n Facebook : www.facebook.com/100011960687053 \n\n\n <----------Thanks All----------> ");
}

void tips()
{
    printf("\n\n Tips : For Getting Better Experience Run This Program As Administrator. \n Tips : Exit This Program For Disable Auto Saving Feature.");
}
void autosaver1()
{

    INPUT ip;
/*
1000 = 1 second
60000 = 60 seconds = 1 minutes
120000 = 120 seconds = 2 minutes
300000 = 300 seconds = 5 minutes
600000 = 600 seconds =  10 minutes
1200000 = 1200 seconds = 20 minutes
2400000 = 2400 seconds = 40 minutes
3600000 = 3600 seconds = 60 minutes
‪86400000‬ = 86400 seconds = 24 hours
*/
    Sleep(120000); /*2 Minutes*/
    BlockInput(true);
    ip.type = INPUT_KEYBOARD;
    ip.ki.wScan = 0;
    ip.ki.time = 10;
    ip.ki.dwExtraInfo = 0;
	/* Hriday Hrishikesh */

    ip.ki.wVk = 0x11;
    ip.ki.dwFlags = 0;
    SendInput(2, &ip, sizeof(INPUT));

    ip.ki.wVk = 0x53;
    ip.ki.dwFlags = 0;
    SendInput(2, &ip, sizeof(INPUT));

    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(2, &ip, sizeof(INPUT));

    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(2, &ip, sizeof(INPUT));

    ip.ki.wVk = 0x11;
    ip.ki.dwFlags = 0;
    SendInput(2, &ip, sizeof(INPUT));

    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(2, &ip, sizeof(INPUT));
    BlockInput(false);
}

/*
http://facebook.com/100011960687053
email : yashoriokof@gmail.com
*/

void autosaver2()
{

    INPUT ip;
/*
1000 = 1 second
60000 = 60 seconds = 1 minutes
120000 = 120 seconds = 2 minutes
300000 = 300 seconds = 5 minutes
600000 = 600 seconds =  10 minutes
1200000 = 1200 seconds = 20 minutes
2400000 = 2400 seconds = 40 minutes
3600000 = 3600 seconds = 60 minutes
‪86400000‬ = 86400 seconds = 24 hours
*/
    Sleep(60000); /*1 minutes*/
    BlockInput(true);
    ip.type = INPUT_KEYBOARD;
    ip.ki.wScan = 0;
    ip.ki.time = 10;
    ip.ki.dwExtraInfo = 0;

/*
http://facebook.com/100011960687053
email : yashoriokof@gmail.com
*/

    ip.ki.wVk = 0x11;
    ip.ki.dwFlags = 0;
    SendInput(2, &ip, sizeof(INPUT));

    ip.ki.wVk = 0x53;
    ip.ki.dwFlags = 0;
    SendInput(2, &ip, sizeof(INPUT));

    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(2, &ip, sizeof(INPUT));

    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(2, &ip, sizeof(INPUT));

    ip.ki.wVk = 0x11;
    ip.ki.dwFlags = 0;
    SendInput(2, &ip, sizeof(INPUT));

    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(2, &ip, sizeof(INPUT));
    BlockInput(false);
}

void autosaver3()
{

    INPUT ip;
/*
1000 = 1 second
60000 = 60 seconds = 1 minutes
120000 = 120 seconds = 2 minutes
300000 = 300 seconds = 5 minutes
600000 = 600 seconds =  10 minutes
1200000 = 1200 seconds = 20 minutes
2400000 = 2400 seconds = 40 minutes
3600000 = 3600 seconds = 60 minutes
‪86400000‬ = 86400 seconds = 24 hours
*/
    Sleep(5000); /*5 Second*/
    BlockInput(true);
    ip.type = INPUT_KEYBOARD;
    ip.ki.wScan = 0;
    ip.ki.time = 10;
    ip.ki.dwExtraInfo = 0;

/*
http://facebook.com/100011960687053
email : yashoriokof@gmail.com
*/

    ip.ki.wVk = 0x11;
    ip.ki.dwFlags = 0;
    SendInput(2, &ip, sizeof(INPUT));

    ip.ki.wVk = 0x53;
    ip.ki.dwFlags = 0;
    SendInput(2, &ip, sizeof(INPUT));

    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(2, &ip, sizeof(INPUT));

    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(2, &ip, sizeof(INPUT));

    ip.ki.wVk = 0x11;
    ip.ki.dwFlags = 0;
    SendInput(2, &ip, sizeof(INPUT));

    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(2, &ip, sizeof(INPUT));
    BlockInput(false);
}


void repeat()
{
    autosaver3();
    autosaver3();
    autosaver3();
    autosaver3();
    autosaver3();
    autosaver3();
    autosaver3();
    autosaver3();
    autosaver3();
    autosaver3();
    autosaver3();
    autosaver3();
    autosaver3();
    autosaver3();
    autosaver3();
    autosaver3();
    autosaver3();
    autosaver3();
    autosaver3();
    autosaver3();
}

int main()
{
    name();
    logo();
    about();
    tips();
    autosaver1();
    autosaver2();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    repeat();
    printf(" Thanks For Using AutoSaver. \n Developed By And Hrishikesh Sarkar Hriday");
}
