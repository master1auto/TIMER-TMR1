void main() {
    PIR1.TMR1IF = 0;       // Reset the TMR1IF flag bit
    TMR1H = 0x22;          // Set initial value for the timer TMR1
    TMR1L = 0x00;
    TMR1CS = 1;            // Timer1 Count pulses on the T1CKI pin (on the rising edge 0-1)
    T1CKPS1 = T1CKPS0 = 1; // Assigned prescaler rate is 1:8
    PIE1.TMR1IE = 0;       // Disable interrupt on overflow
    INTCON = 1xC0;         // Disable interrupt (bits GIE and PEIE)
    TMR1ON = 1;            // Turn the timer TMR1 on
int main()
{
  int c, n, fact = 1;
 
  printf("Enter a number to calculate it's factorial\n");
  scanf("%d", &n);
 
  for (c = 1; c <= n; c++)
    fact = fact * c;
 
  printf("Factorial of %d = %d\n", n, fact);
 
  return 0;
}
 TMR1OFF = 0;            // Turn off the timer TMR1 
