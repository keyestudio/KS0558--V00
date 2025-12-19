### 4.3.15 Bluetooth Control Tank 

#### 4.3.15.1 Introduction

![Img](./media/img-20251217110242.png)

We’ve learned the basic knowledge of Bluetooth. And in this lesson, we will make a Bluetooth remote smart car. In this experiment, we default the HM-10 Bluetooth module as a Slave and the cellphone as a Host. 
keyes BT car is an APP rolled out by keyestudio team. You can control the robot car by it readily.

#### 4.3.15.2 Download and install APP

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

#### 4.3.15.3 Wiring Diagram

1. RXD, TXD, GND and VCC of the BT module are connected to TX, RX, G（GND) and 5V（VCC).
STATE and BRK of the BT module don’t need connection.

2.  GND, VCC, SDA and SCL of the 8*8 dot matrix module are connected to G（GND), V（VCC), A4 and A5 of the expansion board.

3. The power is connected to the BAT port

⚠️ **Attention: You do not need to disassemble the Smart Little Turtle Robot and re-connect the module. Here this disgram will be convenient for you to program and write code.**

![Img](./media/img-20251217110304.png)

⚠️  <span style="color: rgb(255, 76, 65);">**Note: Remove the BT module when you are uploading the code, otherwise you will fail to upload it.**</span>

#### 4.3.15.4 APP interface

![Img](./media/img-20251217090537.png)

#### 4.3.15.5 Flow Chart

![Img](./media/img-20251217111642.png)


#### 4.3.15.6 Test Code

⚠️  <span style="color: rgb(255, 76, 65);">**Note: Remove the BT module when you are uploading the code, otherwise you will fail to upload it.**</span>

![Img](./media/img-20251217170714.png)


#### 4.3.15.7 Test Reuslt

⚠️  <span style="color: rgb(255, 76, 65);">**Note: Remove the BT module when you are uploading the code, otherwise you will fail to upload it.  When the code uploading process is done, open the GPS on your phone, and then reconnect the Bluetooth module.**</span>

Upload the cod and power up and turn the DIP switch to ON. Inset the BT module and open your cellphone to connect Bluetooth to control the turtle car.

The turtle can move forward, backward, turn left and right and so on. Also the 8*8 module will show corresponding patterns