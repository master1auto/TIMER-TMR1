void timer1() {
	PIR1.TMR1IF = 0;       // Reset the TMR1IF flag bit
	TMR1H = 0x22;          // Set initial value for the timer TMR1
	TMR1L = 0x00;
	TMR1CS = 0;            // Timer1 counts pulses from internal oscillator
	T1CKPS1 = T1CKPS0 = 1; // Assigned prescaler rate is 1:8
	PIE1.TMR1IE = 1;       // Enable interrupt on overflow
	INTCON = 0xC0;         // Enable interrupt (bits GIE and PEIE)
	TMR1ON_bit = 1;        // Start the timer 
	}
void main() {
 	double cpu_time_used,start, end;
 	start = clock();
	int c, n, fact = 1;	// Declaration Variable 
	TRISB = 0;		// Using port B as an out
	timer1();		// Using timer1 function 
    for (c = 1; c <= n; c++){   // In order to calculate a vector
        fact = fact * c;
        TMR1ON_bit = 0;		// Stop the timer
        end = clock();
        cpu_time_used = clock*(end-start);
	while(1){}
	}
