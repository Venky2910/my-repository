#include "data.h"
#include "memory.h"
#include "memory.c"

uint8_t* my_itoa(int32_t data,uint8_t* ptr,uint32_t base){
	uint8_t i,rem=0;
	if(base<10){
		for(i=0;data<base;i++){
			*(ptr+i) = data%base;
			data = data/base;
		}
	}
	else{
		for(i=0;data<base;i++){
			rem = data%base;
			if(rem>9)
				*(ptr+i) = ('A'+rem-10);
			else
				*(ptr+i) = rem;
			data = data/base;
		}
	}
	*(ptr+i) = data;
	*(ptr+i+1) = '\0';
	my_reverse(ptr,i);
	return ptr;
}

int32_t* my_atoi(uint8_t* ptr, uint8_t digits, uint8_t base){
	uint8_t i, power,num;
	int32_t value=0;
	for(i=digits-1;i>=0;i--){
		if(*(ptr+i) >= 'A')
			num = *(ptr+i) -'A' + 10;
		else
			num = *(ptr+i) -'0';
		power = my_power(base,i);
		value = value + num*power;
	}
	return value
}			

int32_t my_power(uint8_t base,uint8_t raise){
	uint8_t i;
	int32_t power=0;
	for(i=0;i<raise;i++){
		power = power*base;
	}
	return power;
}		
			
			
			
			
