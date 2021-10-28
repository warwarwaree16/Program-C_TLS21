#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <ctime>
#include <windows.h>
using namespace std;
//#include<conio.h>
//#include <stdlib.h>
int main() 
{
	char ch;
double vat;	
int ordercode;
int i=0,x=0,choice,transaction=0,level=0,a,b,sleep,itempurchase=0;
int limit=0,quantity,order,pay,change=0,toy;
int yesno=1,totalquantity[100],totalorder[100],total=0,add;
string levelpedas[100],price[100];
string allorder[100],name1,name,icon;
int again = 1;
char *l = " ------------------------------------------------------------------------------\n";	
login: 
string user;
string pass ="";

   

	main:
		
    cout << "\n\n";
	cout << "                           -------------------------\n";
	cout << "                          - - - - - - - - - - - - -\n";		
	cout << "		           	    LOGIN\n";
	cout << "                           - - - - - - - - - - - - -\n";
	cout << "                           -------------------------\n";
	

	cout << "\n\n                               Username: ";
    cin  >> user;
    cout << "\n\n                               Password: ";
    ch = getch(); 

   
while( ch != 13 )
   
    {
      pass.push_back(ch);
      cout << 'x';
      ch = _getch();
    }
  
    cout << "                \n\n \n + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + ";
	if(user == "admin" && pass == "admin")

	{
		
	
	

beginning:
	
do 
{


limit++;
again++;
itempurchase++;
i++;




	
	      			cout << "\n\n\n                           Selamat Datang di Spicy WareHouse!\n";
            
            
            
 				    cout << "                       " << "    _____\n";
   				    cout << "                       " << "   /     \\   ____   ____    __ __\n";
   					cout << "                       " << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";
  					cout << "                       " << " /    Y    \\  ___/|   |   \\|  |  |\n";
  					cout << "                       " << " \\____|____/\\____>____|____|_____|\n\n";


					cout << "\n\t\t\t+ --------------------- +" << endl;   
					cout << "\n\t\t\t| --------------------- |" << endl;
			     	cout << "\n\t\t\t| 1) MAKANAN            |" << endl;
			 		cout << "\t\t\t| 2) MINUMAN            |"   << endl;
					cout << "\n\t\t\t| --------------------- |"	<< endl;
					cout << "\n\t\t\t+ --------------------- +\n\n\n\n\n\n" << endl;
				

		cout << " " <<" Pilih Kategori Pesanan:(1/2) ";
		cin  >> choice;	
system("CLS");

//Makanan	
	if(choice == 1)
	{
			
	 
					cout << "\n\t        -----------------------------------------------"<<endl;
					cout << "\t       |                  MAKANAN - MENU               |"<<endl;
					cout << "\t        -----------------------------------------------\n"<<endl;
	

					cout << "\n        +----------- ^-^ #1 ---------+ \t       +---------- ^-^ #2 ----------+"<<endl;
					cout << "\t|                            |\t       |                            |" << endl;
					cout << "\t|       SEBLAK ORIGINAL      |\t       |     PAKET BAKSO ACI        |" << endl;
					cout << "\t|       Price : 10.000       |\t       |     Price : 10.000         |" << endl;
					cout << "\t|                            |\t       |                            |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +----------- ^-^ #3 ---------+ \t       +---------- ^-^ #4 ----------+"<<endl;
					cout << "\t|                            |\t       |                            |" << endl;
					cout << "\t|       SEBLAK TULANG        |\t       |     PAKET BAKSO TELUR      |" << endl;
					cout << "\t|       Price : 15.000       |\t       |     Price : 15.000         |" << endl;
					cout << "\t|                            |\t       |                            |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;		
					cout << "\n\n        +----------- ^-^ #5 ---------+ \t       +---------- ^-^ #6 ----------+"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|       SEBLAK BACIL         |\t       |     PAKET BAKSO URAT       |"<<endl;
					cout << "\t|       Price : 15.000       |\t       |     Price : 15.000         |"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;	
					cout << "\n\n        +----------- ^-^ #7 ---------+ \t       +---------- ^-^ #8 ---------+"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|       SEBLAK SEAFOOD       |\t       |     PAKET BAKSO MERCON     |"<<endl;
					cout << "\t|       Price : 15.000       |\t       |     Price : 15.000         |"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;			
					cout << "\n\n        +----------- ^_^ #9 ---------+ \t       +---------- ^-^ #10----------+"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|       SEBLAK KOREA         |\t       |     PAKET BAKSO BERANAK    |"<<endl;
					cout << "\t|       Price : 15.000       |\t       |     Price : 20.000         |"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+\n"<<endl;

			
//PILIH MENU
		cout << " " <<" SILAKAN PILIH PESANAN (1-10): ";
		cin  >> ordercode;
					system("CLS");
	
		
		
		
				
			
 if( ordercode == 1 || ordercode == 3 || ordercode == 5 || ordercode == 7 || ordercode == 9 )
 {
 		cout << "\n\n                        " <<" PILIH LEVEL KEPEDASAN \n\n";
		  			cout << "\t\t\t + ------------------------ +"   << endl; 
					cout << "\t\t\t |          LEVEL "<<"          |"   << endl; 
					cout << "\t\t\t |                          |"   << endl; 
					cout << "\t\t\t |     1)    LEVEL 1        |"   << endl;
					cout << "\t\t\t |     2)    LEVEL 2        |"   << endl;
					cout << "\t\t\t |     3)    LEVEL 3        |"   << endl;
					cout << "\t\t\t |     4)    LEVEL 4        |"   << endl;
					cout << "\t\t\t + ------------------------ +\n" << endl;
					
					
	    cout << " " <<" SILAKAN PILIH LEVEL KEPEDASAN (1-4): ";			
		cin  >> level;
 
	
	switch(level)
	{
			case 1:
					levelpedas [i] =" LEVEL 1  ";
					break; 
			
			case 2:
					levelpedas [i] =" LEVEL 2  ";
					break; 
			
			case 3:
					levelpedas [i] =" LEVEL 3  ";
					break;
			
			case 4:
					levelpedas [i] =" LEVEL 4  ";		 
					break;
			default: 
					levelpedas [i] = "   --    ";
	}
 	
}else if (ordercode == 1 || ordercode == 3 || ordercode == 5 || ordercode == 7 || ordercode == 9 )
	{
	levelpedas [i] = "   --    ";
	}
	
	
	
//JUMLAH	
	
	cout << "\n"<< " "  <<" SILAKAN MASUKAN JUMLAH PESANAN: ";
	cin  >> quantity;		
				
		 

	switch(ordercode)
	{
			case 1:
				
					allorder	  [i] = "   SEBLAK ORIGINAL   ";
					price		  [i] = "   10.000  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 10000*quantity;
					break;
		
			case 2:
		
					allorder	  [i] = "   PAKET BAKSO ACI     ";
					price		  [i] = "   10.000  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 10000*quantity;
					break;
		
			case 3:
		 
					allorder	  [i] = "   SEBLAK TULANG       ";
					price		  [i] = "   15.000 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 15000*quantity;
	  				break;
	   				
	   		case 4:
		    
					allorder	  [i] = "   PAKET BAKSO TELUR    ";
					price		  [i] = "   15.000 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 15000*quantity;
	   				break;
	   				
	   		case 5:
		    
					allorder	  [i] = "   SEBLAK BACIL     ";
					price		  [i] = "   15.000 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 15000*quantity;
	   				break;
	   				
	   		case 6:
		    
					allorder	  [i] = "   PAKET BAKSO URAT    ";
					price		  [i] = "   15.000 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 15000*quantity;
	   				break;
					   
			case 7:
		    
					allorder	  [i] = "   SEBLAK SEAFOOD      ";
					price		  [i] = "   15.000 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 15000*quantity;
	   				break;
	   				
			case 8:
		    
					allorder	  [i] = "   PAKET BAKSO MERCON  ";
					price		  [i] = "   15.000 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 15000*quantity;
	   				break;			   
			
			case 9:
		    
					allorder	  [i] = "   SEBLAK KOREA        ";
					price		  [i] = "   15.000 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 15000*quantity;
	   				break;
					   	
			case 10:
		    
					allorder	  [i] = "   PAKET BAKSO BERANAK ";
					price		  [i] = "   20.000 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 20000*quantity;
	   				break;	  		
	} 
//	cout << "\nHow many"<<allorder [i]<<"\n";
	
  
}

//MINUMAN
	if(choice==2)
{
		
					cout << "\n\t\t  -----------------------------------------------"<<endl;
					cout << "\t\t |                   MINUMAN - MENU              |" <<endl;
					cout << "\t\t  -----------------------------------------------\n"<<endl;
			
					
					cout << "\n        +----------- ^-^ #1 ---------+ \t       +---------- ^-^ #2 ----------+"<<endl;
					cout << "\t|                            |\t       |                            |" << endl;
					cout << "\t|          JUS JERUK         |\t       |          JUS JAMBU         |" << endl;
					cout << "\t|        Price : 5.000       |\t       |        Price : 5.000       |" << endl;
					cout << "\t|                            |\t       |                            |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;
					cout << "\n\n        +----------- ^-^ #3 ---------+ \t       +---------- ^-^ #4 ----------+"<<endl;
					cout << "\t|                            |\t       |                            |" << endl;
					cout << "\t|          JUS MELON         |\t       |         JUS MANGGA         |" << endl;
					cout << "\t|        Price : 5.000       |\t       |        Price : 7.000       |" << endl;
					cout << "\t|                            |\t       |                            |" << endl;
					cout << "\t+----------------------------+\t       +----------------------------+" << endl;		
					cout << "\n\n        +----------- ^-^ #5 ---------+ \t       +---------- ^-^ #6 ----------+"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|         JUS ALPUKAT        |\t       |        JUS STROBERI        |" << endl;
					cout << "\t|        Price : 7.000       |\t       |        Price : 7.000       |" << endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;	
					cout << "\n\n        +----------- ^-^ #7 ---------+ \t       +---------- ^-^ #8 ---------+"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|          JUS PISANG        |\t       |        JUS BELIMBING       |" << endl;
					cout << "\t|        Price : 5.000       |\t       |        Price : 5.000       |" << endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+"<<endl;			
					cout << "\n\n        +----------- ^_^ #9 ---------+ \t       +---------- ^-^ #10----------+"<<endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t|          JUS TOMAT         |\t       |          JUS SIRSAK        |" << endl;
					cout << "\t|        Price : 5.000       |\t       |         Price : 5.000      |" << endl;
					cout << "\t|                            |\t       |                            |"<<endl;
					cout << "\t+----------------------------+\t       +----------------------------+\n"<<endl;
						
			
		cout << " " <<" SILAKAN PILIH PESANAN (1-10): ";
		cin  >> ordercode;
	
				
//QUAnTITY	
	
				
		cout << " " <<" SILAKAN MASUKAN JUMLAH PESANAN: ";
		cin  >> quantity; 

	switch(ordercode)
	{
			case 1:
				
					allorder	  [i] = "   JUS JERUK  ";
					price		  [i] = "   5.000  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 5000*quantity;
					break;
		
			case 2:
		
					allorder	  [i] = "   JUS JAMBU   ";
					price		  [i] = "   5.000  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 5000*quantity;
					break;
		
			case 3:
		 
					allorder	  [i] = "   JUS MELON   ";
					price		  [i] = "   5.000  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 5000*quantity;
	  				break;
	  				
	  		case 4:
		    
					allorder	  [i] = "   JUS MANGGA   ";
					price		  [i] = "   7.000  ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 7000*quantity;
	   				break;			
	   				
	   		case 5:
		    
			 		allorder	  [i] = "   JUS ALPUKAT   ";
					price		  [i] = "   7.000  ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 7000*quantity;
	   				break;
	   				
	   		case 6:
		    
					allorder	  [i] = "   JUS STROBERI    ";
					price		  [i] = "   7.000 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 7000*quantity;
	   				break;
	   				
	   		case 7:
		    
					allorder	  [i] = "   JUS PISANG    ";
					price		  [i] = "   5.000  ";
					totalquantity [i] =    quantity;
					totalorder    [i] = 5000*quantity;
	   				break;
					   
			case 8:
		    
					allorder	  [i] = "   JUS BELIMBING   ";
					price		  [i] = "   5.000  ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 5000* quantity;
	   				break;
	   				
			case 9:
		    
					allorder	  [i] = "   JUS TOMAT    ";
					price		  [i] = "   5.000 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 5000*quantity;
	   				break;			   
			
			case 10:
		    
					allorder	  [i] = "   JUS SIRSAK    ";
					price		  [i] = "   5.000 ";
					totalquantity [i] =     quantity;
					totalorder    [i] = 5000*quantity;
	   				break;
	}	
		
}

//ORDER AGAIN
			cout<<"\n\n PESAN LAGI ? [1] YA [0] TIDAK : ";
			cin>>yesno;	
}
		
 while( (yesno == 1) || (yesno != 0 ));
			
			
// Loading
			cout << "\n\n";
			
			cout << "MENGHITUNG TOTAL HARGA ";
			
			for ( a = 1; a <= 2; a ++)
			{
				Sleep(900);
				cout << "...";
				
			}
			
		
			cout << "\n\n\n";

// Receipt
			cout << "                                     SPICY WAREHOUSE \n";
			cout << "                               WARUNG SEBLAK DAN BAKSO \n";
			cout << "                            JALAN KALIURANG KM 7 YOGYAKARTA\n";
			cout << "                      +++++++++++++++++++++++++++++++++++++++\n\n\n";
			
			
// Time and Date			
			time_t now = time(0);
   			char* dt = ctime(&now);
 			 cout <<"\n Waktu : " << dt << endl;
			
			cout << "  Cashier  : ANWARI\n";
			cout << "  Customer : " <<user;
			

		//	char *l = " ------------------------------------------------------------------------------\n";
			cout << "\n\n\n  ANDA TELAH MEMESAN: "<<"\t\t\t\t\t   Transaction # " <<again <<"\n";
			cout << l;	
			cout << "              ITEM\t        |  LEVEL  | HARGA |  JUMLAH  | TOTAL\n";
			cout << l;	
	
				
		for(i = 1; i<=limit; i++)
		{ 
		cout <<allorder[i] <<"  | " <<levelpedas[i] <<"| " <<price[i] <<"  |     "  <<totalquantity[i] <<"      |    " <<totalorder[i] <<"\n";	
		}
	
		cout << l<<"\n";


//TOTAL	
	for(i = 1; i <= limit; i++)
	{
	
		total = total + totalorder[i];
	}
//PAY BILL	
	do
	{
	
	cout<<"                                                           Total:   " << total << "\n";
	cout<<"  PEMBAYARAN : "; 
	cin>> pay;
	
		
		if  (pay < total)
			{
			cout << "\n" << l;
			cout <<"                        TERIMA KASIH ^_^ ";
			cout << "\n" << l;
			}
			
			
		else{
		
				change = pay - total;
				cout << "  KEMBALIAN           : "    << change       <<"\n";
				cout << "  Items Purchased     : "    << itempurchase;
				
  
        cout << "\n\n";
        cout << "                          This serves as your Official Receipt.\n";
		cout << "                           Thank you, and please come again.\n"; 

			}
		
	}
	 while (pay < total);
	 
	 
	 
	 
		cout << "\n\nTRANSAKSI LAIN? [1] YA [0] TIDAK? : ";
		cin  >> again;
	
		if (again == 1)
		{
			goto beginning;
		}
		
		if (again == 0)
		{
			cout << "TERIMAKASIH"; 
		}
	
	
	}
	
	else 
	{
		cout<<"Username or Password is Incorrect";
		goto main;
	}
	
	}
