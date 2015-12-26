unsigned short cnt;     // Define variable cnt
void Replace() {
    PORTB = ~PORTB;     // Define new function ‘Replace’
}                       // Function inverts port state

void interrupt() {
    if (PIR1.TMR2IF) {  // If bit TMR2IF = 1,
        cnt++ ;         // Increment variable cnt by 1
        PIR1.TMR2IF = 0;// Reset bit and
        TMR2 = 0;       // reset register TMR2
    }
}
// main
void main() {
    cnt = 0;            // Reset variable cnt
    ANSEL = 0;          // All I/O pins are configured as digital
    ANSELH = 0;
    PORTB = 0b10101010; // Logic state on port B pins
    TRISB = 0;          // All port B pins are configured as outputs
    T2CON = 0xFF;       // Set timer T2
    TMR2 = 0;           // Initial value of timer register TMR2
    PIE1.TMR2IE = 1;    // Enable interrupt
    INTCON = 0xC0;      // Set bits GIE and PEIE
    while (1) {         // Endless loop
        if (cnt > 30) { // Change PORTB after more than 30 interrupts
            Replace();  // Function Replace inverts the port B state
            cnt = 0;    // Reset variable cnt
        }
    }
}

