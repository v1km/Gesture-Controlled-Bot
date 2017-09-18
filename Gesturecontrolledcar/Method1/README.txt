for components and circuit 
refer the circuit diagram.
the approximate range is 90-100m of module in open area.

In this method,
two ics are used namely ht12e(encoder) and ht12d(decoder)
and a single arduino on transmitting side. 
Scenario:
the transmitter side contains one arduino to take readings from 
accelerometer and encodes them and transmits them through rf 433 mhz module.
the receiver side collects data through receiver of 433 mhz module
and decodes it and perform the task of giving signals to motor driver ic. 


Note:
you may have to change the reading in arduino code because the readings noted in code is as per the adxl335 with sensitivity of 6g.
if the changes required:
keep the module straight cnstant and note the reading and accordingly change the code of x and y values.
Similarly do for the right tilt,upper tilt,lower tilt,back tilt.

for any queries mail me on :
vikasmali1498@hotmail.com