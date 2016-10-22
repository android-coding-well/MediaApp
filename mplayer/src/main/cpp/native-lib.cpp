#include <jni.h>
#include <string>
extern "C"{
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libswscale/swscale.h"
#include "libavutil/imgutils.h"
#include "libavutil/avutil.h"
};
using namespace std;

extern "C"
jstring
Java_com_gosuncn_mplay_MPlayer_stringFromJNI(
        JNIEnv *env,
        jobject /* this */,
        jstring name) {
    string hello = "Hello from C++ , ";
    string  nameStr;
    nameStr   =   (string)env->GetStringUTFChars(name,0);
    av_register_all();
    string s=hello+nameStr+" end ";
    return env->NewStringUTF(s.c_str());
}
