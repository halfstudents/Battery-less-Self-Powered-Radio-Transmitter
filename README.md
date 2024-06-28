# Battery-less-Self-Powered-Radio-Transmitter
A wireless transmitter without battery, works on EV1527 encoding scheme. Radio transmission with fully secure wireless channel.
For more info about this project visit hackster profile from here:

Batteries are the heart of any electronic circuit, the impossibilities of making a wireless circuit without batteries is now eliminated by this DFrobot mini generator based Rf circuit. Remote controllers can be seen everywhere, and most of them are inseparable from the battery. However, we often encounter problems when using the battery, for instance, it is troublesome to replace the battery, batteries are easy to corrode in a humid environment, or the waste batteries may cause serious environmental pollution. Do you know that wireless remote control can actually work without batteries.

![My Video](https://github.com/halfstudents/Battery-less-Self-Powered-Radio-Transmitter/assets/86649536/7d937d6d-3abe-456f-88a0-85a8278833df)

This self-powered wireless switch from DFRobot can send signals wirelessly without installing a battery. The switch is composed of a micro-generator and a 433Mhz radio frequency circuit. Based on the principle of electromagnetic induction, the micro generator converts the kinetic energy of the press into electrical energy that will be rectified and stored by the RF circuit later, by which a signal can be transmitted wirelessly. This can be used in devices, such as making wireless doorbells, pagers, food ordering devices, wall switches etc.

![mm2](https://github.com/halfstudents/Battery-less-Self-Powered-Radio-Transmitter/assets/86649536/2df20830-3611-4b4d-b6cc-d8b47c1af6ad)

A receiver is required when using this product. Receivers that support EV1527 decoding format and 10Kbps decoding rate are compatible with this transmitter unit. The mini generator that comes with this unit is able to produce some power using EMI and store that power in capacitors for later use. The project is sponsored by PCBWAY.

Components Required:

Arduino UNO

Gravity DFRobot self powered wireless switch

Gravity DFRobot radio receiver

Custom PCB from PCBWAY

PCBWay is the best low cost solution for PCB prototyping, PCBA, Stencil, 3D and CNC services. Quote now using this link and get Free PCB coupons on first sign-up. Get 10 Pcs of high quality custom PCBs for just $5.

Damage and Chip burning conditions:

Note: After the module is connected to the DC power supply, it is forbidden to press the power push button since the generated excessive energy may burn the chip. When pressing the power generation button or using DC power, at least one of the dip switches on the module must be dialed up, otherwise the chip will be burned. Press Frequency should not more than 4 times per second, continuously rapid press will cause energy accumulation that cannot be consumed in time, and eventually burn the chip.

Basic Principle of energy generation:

![emi](https://github.com/halfstudents/Battery-less-Self-Powered-Radio-Transmitter/assets/86649536/21753b5d-2ee6-4a69-8fc6-0c3ccaad9a1b)

This energy generation principle is given by Faraday, When a magnetic field and a conductor (such as a coil of wire) interact, an electromotive force (EMF) or voltage can be induced in the conductor. For voltage to be generated, there must be relative motion between the magnetic field and the coil. This can be achieved by moving the magnet through the coil, moving the coil through the magnetic field, or changing the strength of the magnetic field over time.

![Screenshot_2024_06_27-2](https://github.com/halfstudents/Battery-less-Self-Powered-Radio-Transmitter/assets/86649536/f280be37-56dd-4448-a0ce-335d3386c020)

The voltage induced in the coil is directly proportional to the change in field and total number of loops in a coil. In this case here, we have a copper coil underneath the PCB and the button is pressed having a magnet attached on the other side, which is overall used as an emf generating device.

Features:

This wireless switch is a transmitter unit, which can be programmed as per radio channel output. And to keep the information safe, random address codes are used. In order to interpret these codes, we have to pair the receiver manually. The pairing procedure is given below.

No battery needed, maintenance-free

Wireless signal, wiring-free

RF signal, strong penetration

Onboard 4-position DIP switch, adjustable 15 states

1 million sets of random address codes

The lifetime of 100,000 presses

 
Specifications:

Working Frequency: 433Mhz

Transmission Rate: 10kbps

Encoding Format: EV1527

Output Power: 13dBm

Modulation Method: OOK

Power Generation Energy: 600uJ

Press Down Force: Typical 1800g

Action Method: Automatically rebound after pressing down

Stable Transmission Distance: Indoor 40 Metres

![mini_IMG_4386](https://github.com/halfstudents/Battery-less-Self-Powered-Radio-Transmitter/assets/86649536/ff9edf5e-0912-4cb0-bf7e-dba575b023ca)

Distance Test Condition: Straighten the wire antenna of the transmitting module, and for the receiving module, use [Gravity: Digital wireless switch receiver(433MHz).

Connections and pins:

![mini_6bbcaa5a6e580ad6abc502f573598e02](https://github.com/halfstudents/Battery-less-Self-Powered-Radio-Transmitter/assets/86649536/84eeedda-d976-4179-b2d8-065c4b5641d4)

1. DC input terminal The DC power input terminal, 3.3V-5V, can transmit signals directly after being connected to the DC power supply. Used to pair with the receiver.
2. DIP switch Key value selection, dial up to select, from right to left is D0-D3, One must be dialed up when using.
3. Power Push Button Generate energy when pressed.
   
Transmission of codes from transmitter side:

![mini_IMG_4381](https://github.com/halfstudents/Battery-less-Self-Powered-Radio-Transmitter/assets/86649536/0dff5f3c-99c2-468a-8190-949c712840c3)

There are 4 DIP switches on the PCB, these switches are used to select the channel. 16 different combinations can be made with these 4 DIP switches. Receiver part also has 4 channels, it recognizes the combination of DIP switches on the transmitter end and turns on the respective channel. All the 4 channels can be activated at the same time if all the DIP switches in the transmitter are in ON state. To change this behaviour of the receiver see the Mode switch part of this tutorial in detail.

Pairing of transmitter with receiver:

![pairing schematics rx](https://github.com/halfstudents/Battery-less-Self-Powered-Radio-Transmitter/assets/86649536/3e8b59ec-8f96-4c60-9826-fb282c59b6db)

Receiver: Upload the pairing receiver code in Arduino UNO and Connect the receiver with Arduino Uno as shown in the schematics below. Pairing schematics and the code is given in the pairing folder of this repo. 

![serial output pair](https://github.com/halfstudents/Battery-less-Self-Powered-Radio-Transmitter/assets/86649536/d40d1e06-fb5a-4ef9-b3a2-67075b6acb64)

Transmitter: Dial all of the DIP switches on the self-generation switch to the top (To avoid misoperation, the D0 terminal will be toggled up at the factory). For pairing we need to attach a battery with this transmitter unit. After pairing, the transmitter can be used without battery. Press the button on the receiver, the receiver will turn on a blue light at this time, and enter the waiting state for pairing.
Connect a 3.3-5V DC power supply to the upper right corner of the self-generation switch, and the self-generation switch will light up in red at this time. Wait for the blue light of the receiver to flash three times and light up again, then the pairing is successful. Disconnect the 3.3-5V DC power supply from the self-generating switch and wait for 5S to release the stored excess power. Press the button, the receiver will receive the signal at this time.

![My Video3](https://github.com/halfstudents/Battery-less-Self-Powered-Radio-Transmitter/assets/86649536/b8eb482d-26fe-4d31-b01f-674911e8fbf4)

The receiver pairing waiting time is 6S, if it does not receive the transmitter's pairing signal within 6S, it will automatically exit the pairing mode. If the pairing fails, repeat the first two steps. You only need to pair any one of the transmitters D0-D3, and the other three will automatically match.

![My Video4](https://github.com/halfstudents/Battery-less-Self-Powered-Radio-Transmitter/assets/86649536/35ddf22b-7422-4f58-9542-63291b580941)

Radio receiver & Clear pairing:

![mini_6a92898b47adae63821d761b8deb7717](https://github.com/halfstudents/Battery-less-Self-Powered-Radio-Transmitter/assets/86649536/af5b178d-f505-4831-8b1f-8bd2eb1cce8d)

The receiver used in this tutorial is EV1527 encoding format, 433Mhz one from DFrobot. Here is another example tutorial,to use the digital radio transmitter and receiver pair from DFrobot. Any other receiver of the same specification and encoding scheme can be used with this transmitter unit.The receiver can store up to 32 sets of transmitter codes. When there are more than 32 sets, the first paired code will be overwritten. Clear all paired transmitters, Press and hold the button on the receiving end for more than 4 seconds. After releasing your hand, the blue indicator light flashes twice to successfully clear all paired transmitters; if the clearing fails, repeat the above operation.

Mode Switch:

In this DFrobot, Gravity receiver unit we have 4 different modes. The receiver is in inching mode by default, the following examples all take inching mode as an example. If there is no requirement for using other modes, you can skip this step. In the above example I used the receiver in Inching mode, which is default mode.

Inching: After D0 receives the signal once, it stays high until D1-D3 receive the signal

Latching: Each time D0 receives a signal, the corresponding output state is inverted once, the same is true for D1 to D3

Self-locking: D0 receives the signal and outputs high level, but does not receive the signal low, the same is true for D1 to D3

Interlocking: When receiving the signal D0, D0 stays at a high level, and all the others are low. The same applies to D1 to D3.

Press and hold the button for 0.5 to 1.5 seconds, then release it, the blue indicator light flashes twice, indicating that you have entered the mode switching state, and then you can enter different modes according to the different times of pressing the button within 6 seconds:

Press once to enter the latching mode.

Press twice to enter the self-locking mode.

Press 3 times to enter the inching mode.

Press 4 times to enter the interlocking mode.

![mini_IMG_4391](https://github.com/halfstudents/Battery-less-Self-Powered-Radio-Transmitter/assets/86649536/d4c94a1b-b31e-40b0-bdc1-2172e69e5062)

According to the mode you need to enter, press the button for the corresponding number of times, and then hold the button for 0.5 to 1.5 seconds as a confirmation signal. After letting go, the blue indicator light flashes 2 times to set successfully and enter the corresponding working mode. 0.5-1.5 seconds is relatively short, be careful not to press overtime.

Working of Transmitter and Receiver unit:

![My Video2](https://github.com/halfstudents/Battery-less-Self-Powered-Radio-Transmitter/assets/86649536/da9fb41f-c4c1-497d-be5a-b76fe24f084d)

After pairing and setting the device modes, we can connect any external load to the receiver part, Receiver part needs a microcontroller unit in order to run any sophisticated device used with it. The microcontroller can be used to turn ON/OFF different things and we can increase the number of channels using a multiplexer with an Arduino which is the topic for another tutorial.
In order to operate it with simple load, for example, LEDs and other indicators no need for a microcontroller unit. And in order to run DC motors with the same receiver we need a motor controller in between, because current carrying capacity per channel is very low and only works on 3.3 to 5v.

Example of receiver with Arduino:

![main schematics rx](https://github.com/halfstudents/Battery-less-Self-Powered-Radio-Transmitter/assets/86649536/1ae04e6f-c58f-4c33-af00-d5ace7ad7296)

Upload the main receiver code in the Arduino, and connect the receiver with arduino according to the given schematics. the code and schematics is attached in files section of this repository. 

![serial ouput](https://github.com/halfstudents/Battery-less-Self-Powered-Radio-Transmitter/assets/86649536/5faf7880-4b80-41d9-b1b9-34c3322994e1)

Any combination of DIP switches on the transmitter is able to produce the same output on the receiver side and the operation can be manipulated by the arduino hence a faithful wireless communication set between the TX-RX pairs. Checkout your custom made PCBs now and get best prices on PCBWAY. Sign-up now and get free coupons for PCBs, 10pcs of 2layer board in just $5.

![My Video1](https://github.com/halfstudents/Battery-less-Self-Powered-Radio-Transmitter/assets/86649536/7bb0f26b-e778-496f-816d-b3803aa2eb52)

