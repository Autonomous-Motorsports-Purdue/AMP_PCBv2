# AMP PCB version 2

This PCB attempts to refine the v1 PCB to strip away extraneous components and achieve the best minimal set of components needed for drive, steering, and braking control

## Features

| Name                    | Current Status         | Notes |
|-------------------------|------------------------|-------|
| Foot switch             | Completed              | Master enable for motor controller
| Forward throttle        | Completed              | -
| Reverse throttle        | Completed              | -
| Motor brake control     | Untested               | Primary braking system if working
| Emergency brake control | Completed              | Mechanical brake actuator
| Steering                | Completed              | 0-100% PWM duty cycle control
| LoRa remote control     | Partially tested       | -
| Watchdog timer          | Broken on Rev A        | -
| Hardware serial port    | Completed              | -

---

## Technical Information
- [Teensy 4.0 front pinout](docs/img/Teensy_40_Front_Pinout.png)
- [Teensy 4.0 rear pinout](docs/img/Teensy_40_Rear_Pinout.png)
- [Emergency brake controller truth table](docs/img/Brake_Control_Signals.png)

### Useful links
- [RC Low-pass Filter Design for PWM](http://sim.okawa-denshi.jp/en/PWMtool.php)
- [Software setup for Teensy with Arduino](https://www.pjrc.com/teensy/tutorial.html)

---

## Part Numbers
| Part Number | Description |
|-------------|-------------|
| [776164-1](https://www.digikey.com/en/products/detail/te-connectivity-deutsch-ict-connectors/776164-1/2183727) | AMPSEAL (main motor controller connector) 35-pin connector
| [770520-1](https://www.digikey.com/en/products/detail/te-connectivity-amp-connectors/770520-1/744981) | AMPSEAL crimps

---

## Miscellaneous notes (to check)

- Create documentation for connectors (especially motor controller connector)
- Create complete BOM for PCB