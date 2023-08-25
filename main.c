/*----------------------------------------------------------------------------
 *----------------------------------------------------------------------------*/
#include <MKL25Z4.H>

__asm void Coffee(int a,int b,int c,int d,int e ){
		//for coffee
	
	    //gia na einai nescafe tha prepei a=0,a=h10
	    //gia na einai frappe tha prepei a=1,a=h11
	    //gia na einai gallikos tha prepei a=2,a=h12
	    //gia na einai espresso tha prepei a=3,a=h13
	
			 CMP  r0,#0x0
			 BNE flag2         //an h timh ston kataxwrhth r0 einai diaforh tou 0->tote den tha mpoume sthn sinthiki  opou o kataxwrhths r5 tha parei
		   MOVS r5,#0x0 ///exodos gia nescafe                                           //thn timh 0.anti autou tha pame sto flag2
flag2
	
	     CMP  r0,#0x1
	     BNE  cap_skip 
			 MOVS r5,#0x1  //exodos gia frappe
         
cap_skip		
	
	     CMP  r0,#0x2
			 BNE flag1
			 MOVS r5,#0x2   //exodos gia galliko
      
flag1		 
			 
			 CMP  r0,#0x3
			 BNE flag3
			 MOVS r5,#0x3   //exodos gia espresso
flag3
			 
		//for sugar
			 
	      //gia na einai sketo tha prepei b=1, b=h20
	     //gia na einai metrio tha prepei b=2,b=h21
	     //gia na einai gliko tha prepei b=3, b=h22
	
			 CMP r1,#0x1
			 BNE  flag4
			 MOVS r6,#0x1  //exodos gia sketo
flag4
	
	
			 CMP  r1,#0x2
			 BNE  flag5
			 MOVS r6,#0x2   //exodos gia metrio
flag5
	
	     CMP  r1,#0x3
			 BNE  flag6
			 MOVS r6,#0x3   //exodos gia gliko
flag6			 
			 
			 
		//for milk
			 
		  //gia na mpei gala tha prepei c=1,c=h40
			
			
			
			 CMP  r2,#0x1
			 BNE flag7
			 MOVS r7,#0x1    //exodos gia gala
flag7

			 CMP  r2,#0x0
			 BNE flag10
			 MOVS r7,#0x0    //exodos xwris gala
flag10
			 
		//for cinnamon
			 
			//gia na mpei kanela tha prepei d=1,d=h50
			
			
			  CMP  r3,#0x1    //exodos me kanela
				BNE flag8
			  MOVS r0,#0x1
flag8

			  CMP  r3,#0x0
				BNE flag11
			  MOVS r0,#0x0     //exodos xwris kanela
flag11

		//gia anadeusi
		
		//gia na ginei anadeusi e=1,e=h30
			 CMP r4,#0x1
			 BNE flag9
			 MOVS r1,#0x1     //exodos gia anadeusi
flag9

			 CMP r4,#0x0
			 BNE flag12
			 MOVS r1,#0x0     //exodos xwris anadeusi
flag12
			
}


int main(void)
{
	int e=0;    //xwris anadeusi
	int a=1;    //frappe
	int b=2;    //metrios
	int c=1;    //me gala
	int d=0;    //xwris kanela
	
	Coffee(a,b,c,d,e);
	
	
	while (1)
			;
}
// *******************************ARM University Program Copyright © ARM Ltd 2013*************************************   
