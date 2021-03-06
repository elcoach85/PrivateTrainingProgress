#include <jni.h>
#include <string>
#include "sportsActivity.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_haeberlen_nino_privatetrainingprogress_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    sportsActivity activity1;
    char location[4] = "loc";
    int success = activity1.newActivity(activity1.iceHockey,location);

    char buffer [50];
    sprintf(buffer, "Current training state is: %d",success);
    std::string hello = buffer;
    return env->NewStringUTF(hello.c_str());
}
