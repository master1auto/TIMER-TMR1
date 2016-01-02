void timer1() {
    int deley;
	TMR1H = 0;
	TMR1L = 0;
	T1CON = 0x01;
	deley(30);
	//deley = /2 ; // we fine a problem over here
}
void main() {
	TRISB = 0;
	timer1();
int c, n, fact = 1;
    printf("Enter a number to calculate it's factorial\n");
    scanf("%d", &n);
    for (c = 1; c <= n; c++){
        fact = fact * c;
        printf("Factorial of %d = %d\n", n, fact);}
	while(1){}
}
