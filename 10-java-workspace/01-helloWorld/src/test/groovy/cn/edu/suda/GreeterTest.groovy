package cn.edu.suda

import org.junit.Test

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
}
