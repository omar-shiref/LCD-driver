/* includes */


/* file name : LCD_Char.c */
   
       #include <util/delay.h>
	  

	  #include "LCD_Interface.h"
       
   
   
/* include libraries */

       #include "STD_TYPES.H"
       #include "bit_maths.h"
  
/* DIO layer from MCAL include*/

       #include "DIO_Interface.h"
       #include "DIO_Private.h"
	   
	   
                /* program */	   
	   
	int main (){
		
/*  the direction of pins and ports */	
		DIO_VoidSetPinDir    ( PORT_CTRL, RS, OUTPUT );
		DIO_VoidSetPinDir    ( PORT_CTRL, RW, OUTPUT );
		DIO_VoidSetPinDir    ( PORT_CTRL, EN, OUTPUT );		
		DIO_VoidSetPORTDir   ( PORT_DATA , OUTPUT);
		
		
		u8* name_var[]={"omar shiref"};
		
		LCD_Init();
		   while(1);{
/* program to write your name */
			
			LCD_voidWriteString( name_var );
		}
		
		
		
	}      
 