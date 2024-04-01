#include <stdio.h>
#include <REGX51.H>
sbit led = P2^3;
sbit button = P3^2;

void delay_ms(unsigned int t){
	unsigned int x, y;
	for(x=0; x<t; x++){
		for(y=0; y<123; y++);
	}	
}

void main(void){
	led = 1;
	while(1){
		if(button == 0){
			if(led == 1) {
				led=0;
			}
			else led = 1;
		}
	}
}