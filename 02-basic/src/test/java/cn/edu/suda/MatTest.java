package cn.edu.suda;

import org.junit.Test;
import org.opencv.core.*;
import org.opencv.imgcodecs.Imgcodecs;

/**
 * Created by hjl-game on 2016/3/19.
 */
public class MatTest {

    static {
        // load the OpenCV Native Library
        System.loadLibrary(Core.NATIVE_LIBRARY_NAME);
    }

    @Test
    public void test1() {
        Mat image = new Mat(480, 680, CvType.CV_8UC3);
        System.out.println(image);

        Mat image2 = new Mat(new Size(680,480), CvType.CV_8UC3);
        System.out.println(image2);

        Mat image3 = new Mat(new Size(680,480), CvType.CV_8UC3, new Scalar(new double[]{128,0,255}));
        System.out.println(image3.dataAddr()); //取地址很快
//        System.out.println(image3.dump()); //打印数据，Java和C++都很慢
    }

    @Test
    public void test2() {
        String filename = "invalid.png";
        Mat image = Imgcodecs.imread(filename);
        System.out.println(image.dataAddr());
        assert image.dataAddr() == 0;
    }

    @Test
    public void test3() {
        System.getProperties();
        String filename = "src/main/resources/01.jpg";
        Mat image = Imgcodecs.imread(filename);
        System.out.println(image.dataAddr());
        assert image.dataAddr() != 0;
    }


}
