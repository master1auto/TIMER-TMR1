void  TIMER1_isr(){
set_timer1(0x0BDC);
}

void (){
     set_tris_b(0b01111111);
     RB7=0;
     setup_timer_1(T1_INTERNAL|T1_DIV_BY_8);
     enable_interrupts(INT_TIMER1);
     enable_interrupts(GLOBAL);
     set_timer1(0x0BDC);
     while(true);
}


