#include <stdio.h>
#include <REGX51.H>
sbit led = P2^3;
sbit button = P3^2;
sbit press = P3^7;
bit button_old;

void delay_ms(unsigned int t){
	unsigned int x, y;
	for(x=0; x<t; x++){
		for(y=0; y<123; y++);
	}	
}

void toggle_button(){
	if(button == 0){
			delay_ms(100);
				if((button==0)&&(button_old==1)){
					led=!led;
				}
				button_old=button;
				delay_ms(100);
		}
}

void press_button(){
	if(press ==0){
		delay_ms(100);
		while(press == 0){
			led=!led;
		}
	}
}
void main(void){
	while(1){
		toggle_button();
		press_button();
	}
}
	
