//
// Created by nino on 30.12.18.
//

#include <cstdio>
#include "sportsActivity.h"

//enum  type {roadCycling, running, swimming, iceHockey};

int sportsActivity::newActivity(enum type type, char* location) {

    int res;
    FILE* fi;
    fi = fopen("/sdcard/Download/testFile.tcx", "r");
    if (fi != NULL){
        fclose(fi);
        res = 0;
    } else {
        res = 1;
    }

    sportsActivity::type = type;
    /*
     * sportsActivity::duration = duration;
    sportsActivity::distance = distance;
    sportsActivity::stress = stress;
    sportsActivity::intensity = intensity;
     */
    return res;
}
