void timer1() {
	TMR1H = 0;	// clear timer1
	TMR1L = 0;	// before enabling timer 1
	T1CON = 0x01;   // timer 1 configuration
}            


void main() {
	TRISB = 0;
	timer1();
	while(1){}
}
