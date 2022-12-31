#include<iostream>
using namespace std;

class ticketsbook {
	
	protected :
		int a,b,c,d,e;
		int bill = 0;
		
	public :
		
	ticketsbook(){
		
		cout << "====================================================================="<<endl;
		cout << "\t\t WELCOME TO THE HR CINEMA..."<<endl
		     << "====================================================================="<<endl;
	}
		
		void setdata(){
		
			tmp:
			cout << "Press Any one of below to choose your language...." << endl;
			cout << "Press 1  for English. "<<endl
				 << "Press 2  for Hindi. "<<endl;
			cin  >> a;
			
			switch(a)
			{
				case 1: 
				
				cout << "====================================================================="<<endl;
				cout << "\t\tyou choose English language....."<< endl;
				cout << "====================================================================="<<endl;
				
				cout << "\t\t MOVIE ON BOX OFFICE IS SHOWN BELOW..."<<endl
					 << "---------------------------------------------------------------------"<<endl
					 << "Press 1 for Hera-feri"<<endl
					 << "Press 2 for Dabang"<<endl
					 << "Press 3 for Race"<<endl
					 << "Press 4 for KGF"<<endl;
				cin  >> a;
				
				switch(a)
				{
					case 1:
						system("cls");
						cout << "====================================================================="<<endl;
						cout << "\t\tyou choose a Hera-feri movie..."<<endl
							 << "====================================================================="<<endl
							 << "\t\tSHEET CHATEGORIES GIVEN BELOW WITH PRICE...." << endl
							 << "\t\tCHOOSE ANY ONE BELOW..." << endl
							 << "---------------------------------------------------------------------"<<endl
							 << "Press 1 for Silver Sheet   == 200 INR" << endl
							 << "Press 2 for golden Sheet   == 300 INR" << endl
							 << "Press 3 for platinum Sheet == 400 INR" << endl;
						cin  >> b;
						
						switch(b)
						{
							case 1: 
							
							cout << "Enter no. of ticket you want to buy : ";
							cin  >> b;
							bill += (b*200);
							system("cls");
							cout << "Press 1 for book more ticket...." << endl
								 << "Press 0 for Bill...." << endl;
							cin >> b;
								 if(b == 1)
								{
									goto tmp;
								}
								break;
							
								
							case 2: 
							
							cout << "Enter no. of ticket you want to buy : ";
							cin  >> b;
							bill += (b*300);
								system("cls");
							cout << "Press 1 for book more ticket...." << endl
								 << "Press 0 for Bill...." << endl;
							cin >> b;
								 if(b == 1)
								{
									goto tmp;
								}
								break;
							
							case 3: 
							
							cout << "Enter no. of ticket you want to buy : ";
							cin  >> b;
							bill += (b*400);
								system("cls");
							cout << "Press 1 for book more ticket...." << endl
								 << "Press 0 for Bill...." << endl;
							cin >> b;
								 if(b == 1)
								{
									goto tmp;
								}
								break;
								default :
								cout << "invalid choice..." << b <<endl;
						}
							break;
					
					case 2:
						system("cls");
						cout << "====================================================================="<<endl;
						cout << "\t\tyou choose a Dabang movie..."<<endl
							 << "====================================================================="<<endl
							 << "\t\tSHEET CHATEGORIES GIVEN BELOW WITH PRICE...." << endl
							 << "\t\tCHOOSE ANY ONE BELOW..." << endl
							 << "---------------------------------------------------------------------"<<endl
							 << "Press 1 for Silver Sheet   == 250 INR" << endl
							 << "Press 2 for golden Sheet   == 350 INR" << endl
							 << "Press 3 for platinum Sheet == 450 INR" << endl;
						cin  >> a;
						
						switch(a)
						{
							case 1: 
							
							cout << "Enter no. of ticket you want to buy : ";
							cin  >> c;
							bill += (c*250);
								system("cls");
							cout << "Press 1 for book more ticket...." << endl
								 << "Press 0 for Bill...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
							
								
							case 2: 
							
							cout << "Enter no. of ticket you want to buy : ";
							cin  >> c;
							bill += (c*350);
								system("cls");
							cout << "Press 1 for book more ticket...." << endl
								 << "Press 0 for Bill...." << endl;
							cin >> c;
								 if(c == 1)
								{
									goto tmp;
								}
								break;
							
							case 3: 
							
							cout << "Enter no. of ticket you want to buy : ";
							cin  >> c;
							bill += (c*450);
								system("cls");
							cout << "Press 1 for book more ticket...." << endl
								 << "Press 0 for Bill...." << endl;
							cin  >> c;
								 if(c == 1)
								{
									goto tmp;
								}	
								break;
								default :
								cout << "invalid choice..." << c <<endl;
								
						}
						break;
					
					case 3:
						system("cls");
						cout << "====================================================================="<<endl;
						cout << "\t\tyou choose a Race movie..."<<endl
							 << "====================================================================="<<endl
							 << "\t\tSHEET CHATEGORIES GIVEN BELOW WITH PRICE...." << endl
							 << "\t\tCHOOSE ANY ONE BELOW..." << endl
							 << "---------------------------------------------------------------------"<<endl
							 << "Press 1 for Silver Sheet   == 275 INR" << endl
							 << "Press 2 for golden Sheet   == 375 INR" << endl
							 << "Press 3 for platinum Sheet == 475 INR" << endl;
						cin  >> a;
						
						switch(a)
						{
							case 1: 
							
							cout << "Enter no. of ticket you want to buy : ";
							cin  >> d;
							bill += (d*275);
								system("cls");
							cout << "Press 1 for book more ticket...." << endl
								 << "Press 0 for Bill...." << endl;
							cin >> d;
								 if(d == 1)
								{
									goto tmp;
								}
								break;
							
								
							case 2: 
							
							cout << "Enter no. of ticket you want to buy : ";
							cin  >> d;
							bill += (d*375);
								system("cls");
							cout << "Press 1 for book more ticket...." << endl
								 << "Press 0 for Bill...." << endl;
							cin >> d;
								 if(d == 1)
								{
									goto tmp;
								}
								break;
							
							case 3: 
							
							cout << "Enter no. of ticket you want to buy : ";
							cin  >> d;
							bill += (d*475);
								system("cls");
							cout << "Press 1 for book more ticket...." << endl
								 << "Press 0 for Bill...." << endl;
							cin  >> d;
								 if(d == 1)
								{
									goto tmp;
								}
								break;
								default :
								cout << "invalid choice..." << d <<endl;
						}
							break;
						
					case 4:
						system("cls");
						cout << "====================================================================="<<endl;
						cout << "\t\tyou choose a KGF movie..."<<endl
							 << "====================================================================="<<endl
							 << "\t\tSHEET CHATEGORIES GIVEN BELOW WITH PRICE...." << endl
							 << "\t\tCHOOSE ANY ONE BELOW..." << endl
							 << "---------------------------------------------------------------------"<<endl
							 << "Press 1 for Silver Sheet   == 300 INR" << endl
							 << "Press 2 for golden Sheet   == 400 INR" << endl
							 << "Press 3 for platinum Sheet == 500 INR" << endl;
						cin  >> b;
						
						switch(b)
						{
							case 1: 
							
							cout << "Enter no. of ticket you want to buy : ";
							cin  >> e;
							bill +=( e*300);
								system("cls");
							cout << "Press 1 for book more ticket...." << endl
								 << "Press 0 for Bill...." << endl;
							cin >> e;
								 if(e == 1)
								{
									goto tmp;
								}
								break;
							
								
							case 2: 
							
							cout << "Enter no. of ticket you want to buy : ";
							cin  >> e;
							bill += (e*400);
								system("cls");
							cout << "Press 1 for book more ticket...." << endl
								 << "Press 0 for Bill...." << endl;
							cin >> e;
								 if(e == 1)
								{
									goto tmp;
								}
								break;
							
							case 3: 
							
							cout << "Enter no. of ticket you want to buy : ";
							cin  >> e;
							bill += (e*500);
								system("cls");
							cout << "Press 1 for book more ticket...." << endl
								 << "Press 0 for Bill...." << endl;
							cin  >> e;
								 if(e == 1)
								{
									goto tmp;
								}
								break;
								default :
								cout << "invalid choice..."<< e <<endl;
						}
							break;
				}
					break;
					
			case 2 : 
				
				cout << "====================================================================="<<endl;
				cout << "\t\tAapne Hindi language pasand kiya hay....."<< endl;
				cout << "====================================================================="<<endl;
				
				cout << "\t\t BOX OFFICE PE CHAL RAHI MOVIE ..."<<endl
					 << "---------------------------------------------------------------------"<<endl
					 << "Hera-feri ke liye 1 dabaye"<<endl
					 << "Dabang-2 ke liye 2 dabaye"<<endl
					 << "Race ke liye 3 dabaye"<<endl
					 << "KGF ke liye 4 dabaye"<<endl;
				cin  >> b;
				
				switch(b)
				{
					case 1 :
						
						system("cls");
						cout << "====================================================================="<<endl;
						cout << "\t\tAap ne Hera-feri movie Pasand ki hay..."<<endl
							 << "====================================================================="<<endl
							 << "\t\tSHEET KI CHATEGORIES OR PRICE" << endl
							 << "\t\tNICHE DIYE GAYE MESE EK PASAND KARE..." << endl
							 << "---------------------------------------------------------------------"<<endl
							 << "Silver Sheet ke liye 1 dabaye   == 200 INR" << endl
							 << "golden Sheet ke liye 2 dabaye   == 300 INR" << endl
							 << "platinum Sheet ke liye 3 dabaye == 400 INR" << endl;
						cin  >> b;
						
						switch(b)
						{
							case 1 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*200;
								system("cls");
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> b;
								 if(b == 1)
								{
									goto tmp;
								}
								break;
							
								
							case 2 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*300;
								system("cls");
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> b;
								 if(b == 1)
								{
									goto tmp;
								}
								break;
							
							case 3 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*400;
								system("cls");
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> b;
								 if(b == 1)
								{
									goto tmp;
								}
								break;
								default :
								cout << "sahi input dijiye..." << b <<endl;
						}
							break;
					//case dabang
					
					case 2 :
						system("cls");
						cout << "====================================================================="<<endl;
						cout << "\t\tAap ne Dabang movie Pasand ki hay..."<<endl
							 << "====================================================================="<<endl
							 << "\t\tSHEET KI CHATEGORIES OR PRICE" << endl
							 << "\t\tNICHE DIYE GAYE MESE EK PASAND KARE..." << endl
							 << "---------------------------------------------------------------------"<<endl
							 << "Silver Sheet ke liye 1 dabaye   == 250 INR" << endl
							 << "golden Sheet ke liye 2 dabaye   == 350 INR" << endl
							 << "platinum Sheet ke liye 3 dabaye == 450 INR" << endl;
						cin  >> b;
						
						switch(b)
						{
							case 1 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*250;
								system("cls");
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> b;
								 if(b == 1)
								{
									goto tmp;
								}
								break;
							
								
							case 2 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*350;
								system("cls");
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> b;
								 if(b == 1)
								{
									goto tmp;
								}
								break;
							
							case 3 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*450;
								system("cls");
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin  >> b;
								 if(b == 1)
								{
									goto tmp;
								}
								break;
								default :
								cout << "sahi input dijiye..." << b <<endl;
						}
							break;
					//case race
					
					case 3 :
						system("cls");
						cout << "====================================================================="<<endl;
						cout << "\t\tAap ne Race movie Pasand ki hay..."<<endl
							 << "====================================================================="<<endl
							 << "\t\tSHEET KI CHATEGORIES OR PRICE" << endl
							 << "\t\tNICHE DIYE GAYE MESE EK PASAND KARE..." << endl
							 << "---------------------------------------------------------------------"<<endl
							 << "Silver Sheet ke liye 1 dabaye   == 275 INR" << endl
							 << "golden Sheet ke liye 2 dabaye   == 375 INR" << endl
							 << "platinum Sheet ke liye 3 dabaye == 475 INR" << endl;
						cin  >> b;
						
						switch(b)
						{
							case 1 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*275;
								system("cls");
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> b;
								 if(b == 1)
								{
									goto tmp;
								}
								break;
							
								
							case 2 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*375;
								system("cls");
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> b;
								 if(b == 1)
								{
									goto tmp;
								}
								break;
							
							case 3 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*475;
								system("cls");
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin  >> b;
								 if(b == 1)
								{
									goto tmp;
								}
								break;
								default :
								cout << "sahi input dijiye..." << b <<endl;
						}
							break;
						//case kgf
						
					case 4 :
						
						cout << "====================================================================="<<endl;
						cout << "\t\tAap ne KGF movie Pasand ki hay..."<<endl
							 << "====================================================================="<<endl
							 << "\t\tSHEET KI CHATEGORIES OR PRICE" << endl
							 << "\t\tNICHE DIYE GAYE MESE EK PASAND KARE..." << endl
							 << "---------------------------------------------------------------------"<<endl
							 << "Silver Sheet ke liye 1 dabaye   == 300 INR" << endl
							 << "golden Sheet ke liye 2 dabaye   == 400 INR" << endl
							 << "platinum Sheet ke liye 3 dabaye == 500 INR" << endl;
						cin  >> b;
						
						switch(b)
						{
							case 1 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*300;
								system("cls");
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> b;
								 if(b == 1)
								{
									goto tmp;
								}
								break;	
							case 2 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*400;
								system("cls");
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin >> b;
								 if(b == 1)
								{
									goto tmp;
								}
								break;
							
							case 3 : 
							
							cout << "Kitni ticket buy karoge wo bataye : ";
							cin  >> b;
							bill += b*500;
								system("cls");
							cout << "Aur ticket kharidne k liye 1...." << endl
								 << "Bill ke liye 0 dabaye...." << endl;
							cin  >> b;
								 if(b == 1)
								{
									goto tmp;
								}
								break;
								default :
								cout << "sahi input dijiye..." << b <<endl;
						}
								break;
				}	
			break;
		}
	}
		void getdata(){
			cout << "====================================================================="<<endl;
			cout << " \t\tYour ticket amount  : " << bill << endl;
			cout << "====================================================================="<<endl;
		}
};

int main(){
	ticketsbook B;
	B.setdata();
	B.getdata();
}
