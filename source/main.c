#include <string.h>
#include <stdio.h>

#include <switch.h>

int main(int argc, char **argv)
{
    gfxInitDefault();
    consoleInit(NULL);


     int usleep(useconds_t usec);
    
    printf("febosheep SWITCH\n");
    printf("version 0.5.1\n");
    svcSleepThread(6000000000);
    printf("got UR FRI SWITH GAMES!!\n");
    svcSleepThread(6000000000);
    printf("NOW installign FRII SWITCH CFW HAC\n");
    svcSleepThread(6000000000);
    printf("NOW YOU GET SWITH UPDAT 5.0, FRII THEME!\n");
    svcSleepThread(6000000000);
    printf("getong EVEYRORY NINTENDO GAM FRI\n");
    svcSleepThread(6000000000);
    printf("installing miiberse\n");
    svcSleepThread(6000000000);
    printf("inslteing fleshcart for swith\n");
    svcSleepThread(6000000000);
    printf("installe wonderswon gam\n");
    svcSleepThread(6000000000);
    printf("unbanon deroek from nontondo hebrew!\n");
    svcSleepThread(6000000000);
    printf("leakong fusee jello111...!!\n");
    svcSleepThread(6000000000);
    printf("now rosowitjc relles fri cfw??\n");
    svcSleepThread(3000000000);
    printf("very_nice!!! have god day (pres + to exitE)\n");
    svcSleepThread(6000000000);

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

