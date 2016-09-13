package com.appdevzhang.ndktest;

/**
 * Created by appdevzhang on 16/9/13.
 */
public class NDKTest {
    static {
        System.loadLibrary("MyJniLib");
    }

    public native String getString();
}
