### 4.3.3 Line Tracking Sensor 

#### 4.3.3.1 Introduction

The tracking sensor is actually an infrared sensor. The component used here is the TCRT5000 infrared tube. 
Its working principle is to use different reflectivity of infrared light to colors, then convert the strength of the reflected signal into a current signal. 
During the process of detection, black is active at HIGH level while white is active at LOW level. The detection height is 0-3 cm. 
Keyestudio 3-channel line tracking module has integrated 3 sets of TCRT5000 infrared tube on a single board, which is more convenient for wiring and control. 
By rotating the adjustable potentiometer on the sensor, it can adjust the detection sensitivity of the sensor.

#### 4.3.3.2 Component Knowledge

![Img](./media/img-20251216151913.png)

**Parameters:**

- Operating Voltage: 3.3-5V (DC)
- Interface: 5PIN
- Output Signal: Digital signal
- Detection Height: 0-3 cm


#### 4.3.3.3 Components

| Keyestudio 4.0 development board *1 | Keyestudio 8833 motor driver expansion board *1 | Red LED Module*1 |
| :--: | :--: | :--: |
| ![Img](./media/img-20251216150503.png)| ![Img](./media/img-20251216150522.png)| ![Img](./media/img-20251216150531.png) |
|3P F-F Dupont Wire*1|USB cable*1|5P Dupont wire*1 |
|![Img](./media/img-20251216150603.png)|![Img](./media/img-20251216150614.png)|![Img](./media/img-20251216152248.png)|
|Keyestudio line tracking sensor*1| | |
|![Img](./media/img-20251216152330.png)| | |

#### 4.3.3.4 Wiring Diagram

G, V, S1, S2 and S3 of the line tracking sensor are connected to G（GND), V（VCC), D11, D7 and D8 of the sensor expansion board.

⚠️ **Attention: You do not need to disassemble the Smart Little Turtle Robot and re-connect the module. Here this disgram will be convenient for you to program and write code.**

![Img](./media/img-20251216152353.png)


#### 4.3.3.5 Test Code

![Img](./media/img-20251217161454.png)

#### 4.3.3.6 Test Result

Upload the code, wire up the 4.0 board with a USB cable and open the serial monitor. You can view status of three line tracking sensors. When not signals are received, the value is 1. If we cover the sensor with a white paper, the value will be 0

![Img](./media/img-20251217162515.png)


#### 4.3.3.7  Extension Practice

After knowing its working principle, you can connect an LED to D9 so as to control LED by it.

⚠️ **Attention: You do not need to disassemble the Smart Little Turtle Robot and re-connect the module. Here this disgram will be convenient for you to program and write code.**

![Img](./media/img-20251216152658.png)

![Img](./media/img-20251217161546.png)

Upload the code to development board and power it up with a USB cable.

Make a paper close to the sensor.

Then we can find LED light up when covering the line tracking sensor 