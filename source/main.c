#include <string.h>
#include <stdio.h>

#include <switch.h>

int main(int argc, char **argv)
{
    gfxInitDefault();
    consoleInit(NULL);

    //Move the cursor to row 16 and column 20 and then prints "Hello World!"
    //To move the cursor you have to print "\x1b[r;cH", where r and c are respectively
    //the row and column where you want your cursor to move
    printf("febosheep SWITCH");
    printf("version 0.5.0");
    svcSleepThread(6000000);
    printf("got UR FRI SWITH GAMES!!");
    svcSleepThread(6000000);
    printf("NOW installign FRII SWITCH CFW HAC");
    svcSleepThread(6000000);
    printf("NOW YOU GET SWITH UPDAT 5.0, FRII THEME!");
    svcSleepThread(6000000);
    printf("getong EVEYRORY NINTENDO GAM FRI");
    svcSleepThread(6000000);
    printf("installing miiberse");
    svcSleepThread(6000000);
    printf("inslteing fleshcart for swith");
    svcSleepThread(6000000);
    printf("very_nice!!! have god day");
    svcSleepThread(6000000);

    while(appletMainLoop())
    {
        //Scan all the inputs. This should be done once for each frame
        hidScanInput();

        //hidKeysDown returns information about which buttons have been just pressed (and they weren't in the previous frame)
        u32 kDown = hidKeysDown(CONTROLLER_P1_AUTO);

        if (kDown & KEY_PLUS) break; // break in order to return to hbmenu

        gfxFlushBuffers();
        gfxSwapBuffers();
        gfxWaitForVsync();
    }

    gfxExit();
    return 0;
}

