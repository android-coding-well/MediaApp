package com.gosuncn.mplay;

/**
 * Created by hwj on 2016/10/18.
 */

public class MPlayer {
    static {
        System.loadLibrary("native-lib");
    }
    private static MPlayer instance;
    public static MPlayer getInstance(){
        if(instance==null){
            instance=new MPlayer();
        }
        return instance;
    }


    public native String stringFromJNI(String name);
}
