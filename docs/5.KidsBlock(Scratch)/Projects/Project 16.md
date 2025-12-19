### 4.3.16 Multi-purpose Bluetooth Robot

#### 4.3.16.1 Introduction

![Img](./media/img-20251217112313.png)

In previous projects, the turtle robot car only performs a single function. However, in this lesson, we will integrate all of its functions via Bluetooth control.

#### 4.3.16.2 Download and install APP

⚠️  <span style="color: rgb(255, 76, 65);">**Note: If the APP has already been downloaded and installed before, this step can be skipped directly.**</span>

1. Visit www.keyestudio.com

![Img](./media/img-20251217110856.png)

2. Find “**WiKi**”，and then click "**Docs Tutorials**".

![Img](./media/img-20251217082512.png)

![Img](./media/img-20251217082644.png)

![Img](./media/img-20251217082919.png)

3. Click “**Download_Center**” to find the APP.

![Img](./media/img-20251217083016.png)

![Img](./media/img-20251217083103.png)

**4. Android**

Find “**Turtle Car**” (<span style="color: rgb(255, 76, 65);">**allow APP to access“location”, you could enable “location”in settings of your cellphone**</span>).

![Img](./media/img-20251217083603.png)

Download **Turtle Car.apk**.

![Img](./media/img-20251217083739.png)

Next, follow the instructions to install the app. The app icon is shown below after installation.

![Img](./media/img-20251217084132.png)

Click app to enter the following page.

![Img](./media/img-20251217084158.png)

**5. IOS**

Find “**keyes BT Car**” (<span style="color: rgb(255, 76, 65);">**allow APP to access“location”, you could enable “location”in settings of your cellphone**</span>).

![Img](./media/img-20251217084642.png)

Click **Jump to the App Store** to navigate to the App Store.

![Img](./media/img-20251217085342.png)

Search for "**keyes BT car**" directly in the App Store.

![Img](./media/img-20251217085729.png)

After installation, enter its interface.

![Img](./media/img-20251217085926.png)

Click “**Connect**” to search and pair Bluetooth. 

![Img](./media/img-20251217090000.png)

Click ![Img](./media/img-20251217090015.png) to enter the main page of turtle smart car.

![Img](./media/img-20251217090025.png)


#### 4.3.16.3 Flow Chart

![Img](./media/img-20251217112909.png)

#### 4.3.16.4 Wiring Diagram

1. GND, VCC, SDA and SCL of the 8*8 dot matrix module are connected to G（GND), V（VCC), A4 and A5 of the expansion board.

2. VCC, Trig, Echo and Gnd of the ultrasonic sensor are connected to 5V(V), D12(S), D13(S) and Gnd(G)

3. The servo is connected to G, V and D10. The brown wire is interfaced with Gnd(G), the red wire is interfaced with 5V(V) and the orange wire is interfaced with D10.

4. RXD, TXD, GND and VCC of the BT module are connected to TX, RX, G（GND) and 5V（VCC).
STATE and BRK of the BT module don’t need connection.

5. Since the Keyestudio 8833 motor driver expansion board integrates the IR receiver, pins of the IR receiver are G（GND), V（VCC）and D3

6. G, V, S1, S2 and S3 of the line tracking sensor are connected to G（GND), V（VCC), D11, D7 and D8 of the sensor expansion board.

7. The power is connected to the AT port

⚠️ **Attention: You do not need to disassemble the Smart Little Turtle Robot and re-connect the module. Here this disgram will be convenient for you to program and write code.**

![Img](./media/img-20251217113010.png)

⚠️  <span style="color: rgb(255, 76, 65);">**Note: Remove the BT module when you are uploading the code, otherwise you will fail to upload it.**</span>

#### 4.3.16.5 Test Code

⚠️  <span style="color: rgb(255, 76, 65);">**Note: Remove the BT module when you are uploading the code, otherwise you will fail to upload it. **</span>

![Img](./media/img-20251217171137.png)


#### 4.3.16.6 Test Result

⚠️  <span style="color: rgb(255, 76, 65);">**Note: Remove the BT module when you are uploading the code, otherwise you will fail to upload it.  When the code uploading process is done, open the GPS on your phone, and then reconnect the Bluetooth module.**</span>

Upload the code to the development board, power up and turn the DIP switch to ON. Connect the APP to Bluetooth and control the turtle car via the app. Multiple functions can be achieved.