# NRF Playground PTWD

A simple PlatformIO and Arduino based setup to demonstrate some basic concepts with the amazing [Adafruit nrf52 Bluefruit](https://learn.adafruit.com/bluefruit-nrf52-feather-learning-guide/introduction) (using the nordic nrf52832 chip)

# Get Up And Running!

* Install [VSCode](https://code.visualstudio.com/download)
* Install the [PlatformIO](https://platformio.org/) Plugin for VSCode
* Checkout this repository locally

        git clone git@github.com:jongarrison/nrf_playground_ptwd.git

* Open this repository in VSCode and run the PlatformIO Build button (checkmark) at the bottom of the IDE window. If everything is setup, you should see many libraries downloaded and code compiled successfully.
* In a VSCode terminal window run:
    platformio device list
* You should see something like these devices listed (on a mac):

        /dev/cu.usbserial-01D1183E
        --------------------------
        Hardware ID: USB VID:PID=10C4:EA60 SER=01D1183E LOCATION=0-1.4.2
        Description: CP2104 USB to UART Bridge Controller

        /dev/cu.SLAB_USBtoUART
        ----------------------
        Hardware ID: USB VID:PID=10C4:EA60 SER=01D1183E LOCATION=0-1.4.2
        Description: CP2104 USB to UART Bridge Controller
* If you don't see that, you need to install the Silabs CP2104 USB drivers following the [instructions from Adafruit](https://learn.adafruit.com/bluefruit-nrf52-feather-learning-guide/arduino-board-setup#2-dot-1-download-and-install-cp2104-driver-nrf52832-2860615)
* *Run The Code!!!!* - Click PlatformIO's Upload button (right facing arrow) at the bottom of the VSCode IDE 

# More Resources

* [Bluefruit nRF52 Feather Learning Guide](https://learn.adafruit.com/bluefruit-nrf52-feather-learning-guide)
* [Pinout Diagram](https://cdn-learn.adafruit.com/assets/assets/000/046/210/original/Feather_NRF52_Pinout_v1.2.pdf?1504807075)
* [Example project code from Adafruit](https://github.com/adafruit/Adafruit_nRF52_Arduino/tree/master/libraries/Bluefruit52Lib/examples)
