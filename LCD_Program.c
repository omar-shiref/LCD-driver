       #include "LCD_Interface.h"   

   /* include libraries */

       #include "STD_TYPES.H"
       #include "bit_maths.h"
  
    /* DIO layer from MCAL include*/

       #include "DIO_Interface.h"
       #include "DIO_Private.h"
	   


/* implementation file */


void LCD_Init (void);{
		   
		   
		   
	   }
	  
void LCD_voidWriteData ( u8 Copy_u8Data );{
	/* RS HIGH RW LOW*/
	DIO_VoidSetPinvalue(PORT_CTRL, RS, HIGH);
    DIO_VoidSetPinvalue(PORT_CTRL, RW, LOW);	  
		  
		  /* LATCH ENABLE PIN*/
		  
	DIO_VoidSetPinvalue(PORT_CTRL, EN, HIGH);
	delay_ms(2);
    DIO_VoidSetPinvalue(PORT_CTRL, EN, LOW);	  
	delay_ms(2);	  
		  
		  
	DIO_VoidSetPortvalue(PORT_DATA,  Copy_u8Data);	  
		  
	  }


void LCD_voidSendCMD ( u8 Copy_u8Cmd);{
	/* CHANGE RS TO LOW TO SEND COMMAND*/
	DIO_VoidSetPinvalue(PORT_CTRL, RS, LOW);
    DIO_VoidSetPinvalue(PORT_CTRL, RW, LOW);	
		  
		  /* LATCH ENABLE PIN*/
		  
	DIO_VoidSetPortvalue(PORT_CTRL,  Copy_u8Cmd);	  

		  
		  
	  }
	   
	   