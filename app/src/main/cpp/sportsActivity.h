//
// Created by nino on 30.12.18.
//

#ifndef PRIVATETRAININGPROGRESS_SPORTSACTIVITY_H
#define PRIVATETRAININGPROGRESS_SPORTSACTIVITY_H


class sportsActivity {
public:
    enum type{roadCycling, running, swimming, iceHockey};
    int newActivity(type type, char* location);

private:
    type type;
    float duration;
    float distance;
    float stress;
    float intensity;
};



#endif //PRIVATETRAININGPROGRESS_SPORTSACTIVITY_H
