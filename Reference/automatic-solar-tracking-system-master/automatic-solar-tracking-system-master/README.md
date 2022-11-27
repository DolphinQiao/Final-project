# AUTOMATIC SOLAR TRACKING SYSTEM
![title](https://user-images.githubusercontent.com/53783352/71556598-e1b23100-2a60-11ea-8b71-2ebe52138442.jpg)

 <h2>description</h2>
<h3>research behind this</h3>
<p>We know that the major problem in  our India is scarcity of electricity. For the generation of electricity we are going for renewable energy sources due to this there is a unbalance in eco system.
So to solve that now a days we are going solar energy but with present technique we are not using solar energy effectively.
So we are introducing our project i.e., AUTOMATIC SOLAR TRACKING SYSTEM.</p>
<h3>problem statemnet</h3>
 <p>Now a days solar cells are becoming extremely popular for utilizing solar energy to use in different ways such as producing electricity,transportation,cooking etc.Many solar panels have been installed all over the world and most of them are stable.They are installed in the direction of maximum radiation of sunlight.Now the problem arises that the sun is moving.so we cannot use maximum radiation of sun all the time.The position of maximum radiation receiving position only comes once in 24 hours.So to avoid that we are came by this project.By this we can focus maximum radiation of sun on solar panel so we can use solar energy efficiently and effectively at reasonale cost</p>
 <h3>introduction</h3>
 </p>The earth receives 16 x 10^18units of energy from the sun annually. which is 20,000 times the requirement of mankind on the earth.this energy is used by Solar panels to convert light energy into electrical energy.But the existing solar panels are faced to the  single side they can track energy only when sun is in particular direction so the energy in the remaining direction is wastedd so for efficoent usage of solar energy we designed a solar power generation system using moving  solar panel in 180 deg.By this we can track the solar radiations effectively.</p>
 

![block](https://user-images.githubusercontent.com/53783352/71556551-24bfd480-2a60-11ea-9927-90d5e5a6ecf5.jpg)
<h3>block diagram</h3>

 
 
 ![circuit](https://user-images.githubusercontent.com/53783352/71556539-e75b4700-2a5f-11ea-894d-df334605d8ea.jpg)
 <h3>circuit diagram</h3>

 <h3>components required</h3>
 1.Power supply unit
     
   *stepdown transformer<br/>
   *bridge rectifier<br/>
   *regulator<br/>
   *rc filter<br/>
2.Atmel AT89S52
<br/>
3.Driver ic (l293d)
<br/>
4.Stepper motor
<br/>
5.Solar panel
<br/>
6.Ldr(light dependent resistor)
<br/>
7.Lcd display.
<h3>components required</h3>
 <p>The AT89S52 is a low-power, high-performance CMOS 8-bit microcontroller with 8k bytes of in-system programmable Flash memory.
 The device is manufactured using Atmel’s high-density non volatile memory technology and is compatible with the industry-standard 80C51 instruction set and pin out. The on-chip Flash allows the program memory to be reprogrammed in-system or by a conventional non volatile memory programmer.</p>
 <h3> features of atmel</h3>
 *Compatible with MCS-51® Products
 <br/>
*8K Bytes of In-System Programmable (ISP) Flash Memory
<br/>
*Endurance: 1000 Write/Erase Cycles
<br/>
*4.0V to 5.5V Operating Range
<br/>
*Fully Static Operation: 0 Hz to 33 MHz
<br/>
*256 x 8-bit Internal RAM
<br/>
*32 Programmable I/O Lines
<br/>
*Three 16-bit Timer/
<br/>
*Eight Interrupt Sources
<br/>
*Watchdog timer
<br/>
 *two data pointers
 <br/>
*a full duplex serial port
<br/>
*on-chip oscillator
<br/><br/>
<h3>pin diagram</h3>

![pindiagram](https://user-images.githubusercontent.com/53783352/71556792-b3cdec00-2a62-11ea-8983-ae6b725e630e.jpg)

<h3>functional diagram</h3>

![functionaldiagram](https://user-images.githubusercontent.com/53783352/71556814-ebd52f00-2a62-11ea-941a-418c3283d09e.jpg)



<h3>power supply</h3>
  <p>Input to the transformer is 230v,it is stepped down to 12v by using step down transformer.
This 12v ac supply is converted to dc by using bridge rectifier.
And it is regulated to 5v by using 7805.
And it is given to rc filter to remove the ripples.
And this power supply given to microcontroller and driver circuit and lcd display.<p>
 
 
![ps](https://user-images.githubusercontent.com/53783352/71556771-779a8b80-2a62-11ea-9205-6c2b4d361455.jpg)


  <h3>stepper motor</h3>
  <p>Stepper motor is a electro mechanical device which converts electrical pulses into discrete mechanical movements.
The speed of the motor shafts rotation is directly related to the input pulses and the length of the rotation is directly related to the number of input pulses applied.
<br/>
Stepper motor is a electro mechanical device which converts electrical pulses into discrete mechanical movements.
The speed of the motor shafts rotation is directly related to the input pulses and the length of the rotation is directly related to the number of input pulses applied.
</p>

![sm](https://user-images.githubusercontent.com/53783352/71556783-96991d80-2a62-11ea-8d74-d630e8036e6c.jpg)

<h3>About motor driver circuit(L293D)</h3>
<p>Dual H-bridge motor driver ic.
Controls the dc motor 
 wide supply voltage range.
It prevent circuit from thermal shutdown. 
The L293D is designed to provide bidirectional drive currents of up to 600-mA at voltages from 4.5 V to 36 v.
This device is designed to drive inductive loads such as relays, solenoids, dc and bipolar stepping motor.
<br/>

role:interface between thr motors and microcontroller</p>
 ![driver](https://user-images.githubusercontent.com/53783352/71556611-f989b500-2a60-11ea-99cb-847b420da542.jpg)

<h3>About LDR</h3>
<p>LDR stands for light dependent resistor.
In this resistance decreases with increase in intensity of  light.
Used to detect light or sense light.
Made of high resistance element.
  <br/>
    Role of this in our project:-
It senses the sun light gives the signals to the microcontroller.</p>

![ldr](https://user-images.githubusercontent.com/53783352/71556717-c693f100-2a61-11ea-807f-5014122abf1d.jpg)


<h3>About solar panel</h3>
<p>Solar panel is a collection of photo voltaic cells.
Photovoltaic is composed of silicon.this cells
  converts solar energy in to electricity.The
Combination  of photovoltaic cells is used to generates and supply electricity in commercial and residential application.
We can use an array of solar panels to generate 100w t0 320 watts of power.
  <br/>
  Role of solar panel in our project:-
It converts  solar energy to electricity.
</p>


![sp](https://user-images.githubusercontent.com/53783352/71556748-3d30ee80-2a62-11ea-8666-24b8a2373768.jpg)

<h3>WORKING</h3>
<p>Three sensors(LDR) are placed at three directions which are used to sense  the  maximum intensity of light.the output of sensors are fed to microcontroller through in built analog to digital converter.
The microcontroller controlls the rotation of stepper motor according to inputs from sensors and programme dumped in to it through motor driver circuit.Motor driver circuit guide the motor according to instruction given by microcontroller.
</p>
<h3>kit</h3>

![kit](https://user-images.githubusercontent.com/53783352/71556823-08716700-2a63-11ea-86b6-cb924eb1b358.jpg)


<h3>advantages:</h3>
<p>The solar energy can be reused as it is non renewable resource.  <br/>
This is also saves money as there is no need to pay for energy used.  <br/>
Solar tracker can generate more energy than normal solar panel because it tracks more amount of solar energy.  <br/>
there are many kinds of solar trackers like single axis and dual axis they are fitted easily at all places.  <br/></p>
<h3>/applications</h3>
<p>This panels can be used to power the traffic light and street lights.<br/><br/>
These can be used in  home to power the appliance using  solar power.<br/>
*These can be used in industries as more energy can be saved by rotating the panel.<br/>
*It is used to heating the  water.<br/>
*It is used at electric fences.<br/>
*It is used in solar cookers.<br/></p>

<h3>feasibility</h3>
<p>Technical/practical:
     
   *Pollution free <br/>
   *Safety in Design <br/>
   *Usability  <br/>
   *Reduce human error <br/>
   *Portable <br/>
  <br/></p>









 

