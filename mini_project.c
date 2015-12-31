void Timer1(){
 TMR1H = 0;    // clear timer1
 TMR1L = 0;    // before enabling timer 1
 T1CON = 0x01; // timer on
}
void main(){
TRISB = 0;  // Make RB0 pin output
Timer1();   // Intialize timer 1
while(1){}
}
