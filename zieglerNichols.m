s=tf('s');  
J = 16;
b = 1;
R = 1-(1/16)^2;  %0.99609
L = 1/16;
Kt = sqrt(89-R);  %9.3810
t=(0:0.1:3);
s = tf('s');
Pmotor = Kt/(s*((J*s+b)*(L*s+R)+Kt^2)) ; %posición/tensión de alimentación.

roots(Pmotor.den{1});
pzmap(Pmotor);
rlocus(Pmotor);

figure;
step(Pmotor);
allmargin(Pmotor)
Kcr=151.795547
V=Kcr*Pmotor/(1+Kcr*Pmotor);
step(V)
Pcr=2.05-1.38 %datos sacados gráficamente
Kp=.6*Kcr
Ti=.5*Pcr;
Td=.125*Pcr;
Ki=Kp/Ti
Kd=Td*Kp
K=Kp+Ki/s+Kd*s;
VV=K*Pmotor/(1+K*Pmotor);
step(VV,'m',tf([1],[1]),'b');
Kp2=90;
Ki2=270;
Kd2=13;
K2=Kp2+Ki2/s+Kd2*s;
VV2=K2*Pmotor/(1+K2*Pmotor);
step(VV2,'m',tf([1],[1]),'b');