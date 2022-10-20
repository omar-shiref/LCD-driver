    /* include libraries */

       #include "STD_TYPES.H"
       #include "bit_maths.h"
  
    /* DIO layer from MCAL include*/

#include "DIO_Interface.h"
#include "DIO_Private.h"

    /* guard */

        #ifndef _LCD_INTERFACE_H
        #define _LCD_INTERFACE_H

   /* details about the LCD to ease the readability */
 
        #define  PORT_DATA PORTA
        #define  PORT_CTRL PORTB


      /* 
   1- enable pin in LCD connected to PIN3
   2- read and write pin in LCD connected on PIN2
   3- Reg select (RS)on LCD connected on PIN1
      */

        #define  RS PIN1
        #define  RW PIN2
        #define  EN PIN3
 
 
        #define  FNSET      0x80
		#define  ZERO       0
		#define  ONE        0x01
		#define  INIT_VAL   0x20
		#define  DIS_MODE   0x0C
		#define  DIS_CLR    0x10
		#define  ENTR_MODE  0x60
		
		
		
		

      /* functions for the LCD driver

 0- init function
 1- function to send command
 2- function to write Data 
      */
  
      void LCD_Init (void);
	  
	  void LCD_voidWriteData ( u8 Copy_u8Data );
	  
	  void LCD_voidSendCMD ( u8 Copy_u8Cmd);
	  
	  void LCD_voidWriteString ( u8* Copy_pu8String);
	  
	  
	  #endif
    
    