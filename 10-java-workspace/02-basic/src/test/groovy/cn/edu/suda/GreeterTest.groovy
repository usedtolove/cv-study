package cn.edu.suda

import org.junit.Test
import org.opencv.core.Mat
import org.opencv.imgcodecs.Imgcodecs

/**
 * Created by hjl-game on 2016/3/19.
 */
class GreeterTest {

    @Test
    void testGreeting() {
        def greeter = new Greeter()
        def result = greeter.greeting('jack')
        println result
        assert result == 'Hello, jack'
    }

    @Test
    void test(){
        Class.forName('cn.edu.suda.NativeLoader');

        String filename = "src/main/resources/01.jpg";
        Mat image = Imgcodecs.imread(filename);

        println image.dataAddr()

    }

}
