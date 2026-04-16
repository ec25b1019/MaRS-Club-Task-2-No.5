# MaRS-Club-Task-2-No.5
My task number is 5. I have uploaded the code in this repo. Also I have attached the TinkerCad simulation link. 

TinkerCad Simulation Link: https://www.tinkercad.com/things/0km1hKsh5Hk-mars-task-2

Code logic explanation:

  The Arduino program counts the number of obstacles detected by an IR sensor and displays the count on an LCD display. First, the program sets up the LCD using the `LiquidCrystal_I2C` library and sets pin 9 as an input, where the IR sensor is connected. It also starts serial communication and displays the title “No.of Obstacles” on the first line of the LCD.

Inside the loop, the program keeps checking the sensor value using `digitalRead`. It uses two variables, `prev` and `current`, to store the previous and current sensor readings. This helps the program detect when a new object passes in front of the sensor. Normally, the sensor gives a value of 1 when there is no object and 0 when an object is detected. The program looks for a change from 1 to 0, which means a new obstacle has just appeared. When this change happens, the counter variable `sum` is increased by 1.

After increasing the count, the updated value is shown on the second line of the LCD and also printed in the serial monitor. A small delay is added to make the readings stable. This logic is important for the task because it makes sure each obstacle is counted only once, even if it stays in front of the sensor for some time. In this way, the program correctly counts the number of objects and displays the result clearly.
