package cn.edu.suda;

import org.opencv.core.Core;

/**
 * Created by hjl on 16-3-26.
 */
public class NativeLoader {

    static {
        System.loadLibrary(Core.NATIVE_LIBRARY_NAME);
    }

}
