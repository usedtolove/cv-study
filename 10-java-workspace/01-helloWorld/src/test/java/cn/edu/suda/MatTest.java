package cn.edu.suda;

import org.junit.Test;
import org.opencv.core.Core;
import org.opencv.core.CvType;
import org.opencv.core.Mat;

/**
 * Created by hjl-game on 2016/3/19.
 */
public class MatTest {

    @Test
    public void test1() {
        // load the OpenCV Native Library
        System.loadLibrary(Core.NATIVE_LIBRARY_NAME);
        // identity matrix (3x3)
        Mat mat = Mat.eye(3, 3, CvType.CV_8UC1);
        // output
        System.out.println("mat = " + mat.dump());
    }

}
