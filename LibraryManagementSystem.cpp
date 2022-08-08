/* LIBRARY MANAGEMENT SYSTEM
   password= kushthisside
*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define gst 0.12
struct id
{ char id[3];
  int code;
};
struct dor
{ int dd;
  char mm[4];
  int yy;
};
struct lib
{   struct id book_code ;
    char name[25];
    char author[25];
    float price;
    char catg[25];
    struct dor date;
    char note[51];
};
int n,i;
lib details[300];
void issue_lib_book(id &);
float sum=0.00;
void issue_comic_book(id &);
void item_price_calculator(id &item_req)
{   char buy_opt[4];
    int qty;
    textcolor(BLUE);
    if(strcmp(item_req.id,"pn")==0)
     { if(item_req.code==1)
       { cout<<"\n\tItem Name: Cello fluid\n\tPrice: Rs.10.00\n\t Speacilality: Writes smoothly, pilot pen, spill proof.\n\tDo you want to buy this? ";
	 cprintf("Do you want to buy this? ");
	 gets(buy_opt);
	 if(strcmpi(buy_opt,"yes")==0||0==strcmpi(buy_opt,"ok"))
	 { cout<<"\nEnter the colour of pen you want to buy:\n\tBlue\n\tBlack\n\tRed\n";
	   char pen_cello_color[6];
	   gets(pen_cello_color);
	   cout<<"\nQuantity:";
	   cin>>qty;
	   if(qty>150)
	    cout<<"\nWe don\'t have so much stock";
	   else
	    sum=sum+(10.00*qty);
	 }
       }
       else if(item_req.code==2)
       {
	 cout<<"\n\tItem Name: Reynolds flow\n\tPrice: Rs.15.00\n\t Speacilality: Japanese technology, gel pen, waterproof ink.\n\tDo you want to buy this? ";
	 cprintf("Do you want to buy this? ");
	 gets(buy_opt);
	 if(strcmpi(buy_opt,"yes")==0||0==strcmpi(buy_opt,"ok"))
	 { cout<<"\nEnter the colour of pen you want to buy:\n\tBlue\n\tBlack\n\tRed\n";
	   char pen_cello_color[6];
	   gets(pen_cello_color);
	   cout<<"\nQuantity:";
	   cin>>qty;
	   if(qty>150)
	    cout<<"\nWe don\'t have so much stock";
	   else sum=sum+(15.00*qty);
	 }
       }
       else if(item_req.code==3)
       { cout<<"\n\tItem Name: Lky9\n\tPrice: Rs.5.00\n\t Speacilality: lasts longer, ball point pen, cheaper.\n\tDo you want to buy this? ";
	 cprintf("Do you want to buy this? ");
	 gets(buy_opt);
	 if(strcmpi(buy_opt,"yes")==0||0==strcmpi(buy_opt,"ok"))
	 { cout<<"\nEnter the colour of pen you want to buy:\n\tBlue\n\tBlack\n\tRed\n";
	   char pen_cello_color[6];
	   gets(pen_cello_color);
	   cout<<"\nQuantity:";
	   cin>>qty;
	   if(qty>150)
	    cout<<"\nWe don\'t have so much stock";
	   else sum=sum+(5.00*qty);
	 }
       }
     }
   else if(strcmp(item_req.id,"nb")==0)
    { if(item_req.code==1)
       { cout<<"\n\tItem Name: Mahak notebook\n\tPrice: Rs.15.00\n\t Speacilality: Thick pages, whiter pages.\n\tDo you want to buy this? ";
	 cprintf("Do you want to buy this? ");
	 gets(buy_opt);
	 if(strcmpi(buy_opt,"yes")==0||0==strcmpi(buy_opt,"ok"))
	 { cout<<"\nEnter the printing style\'s notebook you want to buy:\n\tTwo rule\n\tFour rule\n";
	   char notebook_printing_style[6];
	   gets(notebook_printing_style);
	   cout<<"\nEnter the no of sides printed you want to buy:\n\tSingle sided\n\tDouble sided\n";
	  cout<<"\nQuantity:";
	   cin>>qty;
	   if(qty>100)
	    cout<<"\nWe don\'t have so much stock";
	   else sum=sum+(15.00*qty);
	 }
       }
       else if(item_req.code==2)
       { cout<<"\n\tItem Name: Gurukul register\n\tPrice: Rs.25.00\n\t Speacilality: Good quality pages, eco-friendly.\n\t";
	 cprintf("Do you want to buy this? ");
	 gets(buy_opt);
	 if(strcmpi(buy_opt,"yes")==0||strcmpi(buy_opt,"ok")==0)
	 { cout<<"\nEnter the printing style\'s notebook you want to buy:\n\tTwo rule\n\tFour rule\n";
	   char notebook_printing_style[6];
	   gets(notebook_printing_style);
	   cout<<"\nEnter the no of sides printed you want to buy:\n\tSingle sided\n\tDouble sided\n";
	   cout<<"\nQuantity:";
	   cin>>qty;
	   if(qty>100)
	    cout<<"\nWe don\'t have so much stock";
	   else sum=sum+(25.00*qty);
	 }
       }
       else if(item_req.code==3)
       { cout<<"\n\tItem Name: Mahak drawing book\n\tPrice: 25.00\n\t Speciality: Good quality, thick pages and with page covers to save \n\t\tshadings and paintings.\n\t";
	 cprintf("Do you want to buy this? ");
	 if(strcmpi(buy_opt,"yes")==0||strcmpi(buy_opt,"ok")==0)
	 { cout<<"\nQuantity:";
	   cin>>qty;
	   if(qty>50)
	    cout<<"\nWe don\'t have so much stock";
	   else sum=sum+(25.00*qty);
	 }
       }
    }
    else if(strcmp(item_req.id,"st")==0)
     { if(item_req.code==1)
       { cout<<"\n\tItem Name:Natraj Eraser\n\tPrice: Size dependent\n\t Speacilality: Dustless erasers.\n\t";
	 cprintf("Do you want to buy this? ");
	 gets(buy_opt);
	 if(strcmpi(buy_opt,"yes")==0||0==strcmpi(buy_opt,"ok"))
	 { cout<<"\nEnter the size of eraser you want to buy: \n\tSmall\n\tLarge\n";
	   char Eraser_size[6];
	   gets(Eraser_size);
	   if(strcmpi(Eraser_size,"Large")==0)
	   { cout<<"\nQuantity:";
	     cin>>qty;
	     if(qty>75)
	    cout<<"\nWe don\'t have so much stock";
	   else sum=sum+(10.00*qty);
	   }
	   else
	   { cout<<"\nQuantity:";
	     cin>>qty;
	     if(qty>100)
	    cout<<"\nWe don\'t have so much stock\n";
	   else sum=sum+(5.00*qty);
	   }
	 }
       }
       else if(item_req.code==2)
       { cout<<"\n\tItem Name: Doms ruler\n\tPrice: Size dependent\n\t Specilality: Clear & waterproof markings.\n\t";
	 cprintf("Do you want to buy this? ");
	 gets(buy_opt);
	 if(strcmpi(buy_opt,"yes")==0||0==strcmpi(buy_opt,"ok"))
	 {  cout<<"\n Enter the size of ruler you need: 15 or 30 cms : ";
	    int ruler_size;
	    cin>>ruler_size;
	    switch(ruler_size)
	    { case 15 : cout<<"\nQuantity:";
			cin>>qty;
			if(qty>100)
			 cout<<"\nWe don\'t have so much stock\n";
			else sum=sum+(7.00*qty);
			break;
	      case 30 : cout<<"\nQuantity:";
			cin>>qty;
			if(qty>75)
			 cout<<"\nWe don\'t have so much stock\n";
			else sum=sum+(15.00*qty);
			break;
	      default : cout<<"\nEnter standard values only. Try again next time.";
	    }

	 }
       }
       else if(item_req.code==3)
       { cout<<"\n\tItem Name: Fevicol adhesive\n\tPrice: Rs.10.00\n\t Specilality: wash resistance, easy application.\n\t";
	 cprintf("Do you want to buy this? ");
	 gets(buy_opt);
	 if(strcmpi(buy_opt,"yes")==0||0==strcmpi(buy_opt,"ok"))
	 {  cout<<"\nQuantity:";
	    cin>>qty;
	    if(qty>50)
	    cout<<"\nWe don\'t have so much stock\n";
	   else sum=sum+(10.00*qty);
	 }
       }
       else if(item_req.code==4)
       { cout<<"\n\tItem Name: Pencil\n\tPrice: Rs.5.00\n\t Speciality: Long in size, easy grip and strong & dark lead.\n\t";
	 cprintf("Do you want to buy this? ");
	 gets(buy_opt);
	 if(strcmpi(buy_opt,"yes")==0||0==strcmpi(buy_opt,"ok"))
	 {  cout<<"\nQuantity:";
	    cin>>qty;
	    if(qty>100)
	    cout<<"\nWe don\'t have so much stock\n";
	   else sum=sum+(5.00*qty);
	 }
       }
     }
     else
      { cout<<"\nPlease enter correct code. ";
      }
}
void main()
{  clrscr();
   char card_pass[20],of[4],fe[4];
   char un[50]; char pw[19];
   textcolor(BLUE);
   cout<<"\t\t\t";
   cprintf("CENTRAL LIBRARY BOOK MANAGEMENT SYSTEM");
   cout<<"\n";
   textcolor(RED);
   cprintf("LOGIN");
   textcolor(YELLOW);
   cout<<"\n";
   cprintf("Enter your username:");
   cout<<"\n";
   gets(un);
   cout<<"\n";
   cprintf("Enter the password:");
   cout<<"\n";
   gets(pw);   int i;
   char rpw[25]="kushthisside";
   int PW=strcmp(rpw,pw);
   if(PW==0)
   { start :
     textcolor(GREEN+BLINK);
     cprintf("LOGIN SUCCESSFUL");
     cout<<"\n--------------------------------------------------------------------------------"<<"Welcome Mr.";
     textcolor(10);
     cprintf(un);
     begin :
     cout<<"\n"<<"Well, What do you want to do now\?\n";
     cprintf("1\.Book Details Feedings.");
     cout<<"\n";
     cprintf("2\.Mini stationary.");
     cout<<"\n";
     cprintf("3\.Book Issueing");
     cout<<"\nEnter your choice(1/2/3):\t";
     int donow;
     cin>>donow;
     switch(donow)
     {  case 1 : cout<<"You can now feed the details SIR.\n"<<"How many books will be registered this time\?\n";
		 cin>>n;
		 for(i=0;i<n;i++)
		 {  cout<<"----------------------------------BOOK NO."<<i+1<<"----------------------------------";
		    cout<<"\n";
		    textcolor(5);
		    cprintf("Enter book id:");
		    cout<<"\t";
		    cin>>details[i].book_code.id>>details[i].book_code.code;
		    cout<<"\n";
		    cprintf("Enter the name of the book:");
		    cout<<"\t";
		    gets(details[i].name);
		    cout<<"\n";
		    cprintf("Enter the name of the author:");
		    cout<<"\t";
		    gets(details[i].author);
		    cout<<"\n";
		    cprintf("Enter the price of the book:");
		    cout<<"\t";
		    cin>>details[i].price;
		    cout<<"\n";
		    cprintf("Enter the category:");
		    cout<<"\t";
		    gets(details[i].catg);
		    cout<<"\n";
		    cprintf("Enter today's date\'s(for registration of date of entry of book.)");
		    cout<<"\n" ;
		    cin>>details[i].date.dd>>details[i].date.mm>>details[i].date.yy;
		    cout<<"\n";
		    cprintf("Enter any notes regarding this book");
		    cout<<"\n";
		    gets(details[i].note);
		 }
		 if(n==0);
		 else
		 {  cout<<"\nWould you like to query/search for some book\?(Yes-1 and No-2)  ";
		   int opt;
		   cin>>opt;
		   switch (opt)
		   {  case 1 : cout<<"\nWhich book\'s information you want to query\? ";
				    int bq_no;
				    cin>>bq_no;
				    if(bq_no>n)
				       cout<<"\nSorry SIR, you have entered wrong choice.";
				    else
				    { for(i=(bq_no-1);i<bq_no;i++)
				      { cout<<"\nBook id: ";
					puts(details[i].book_code.id);
					cout<<(details[i].book_code.code);
					cout<<"\nName: ";
					puts(details[i].name);
					cout<<"Author: ";
					puts(details[i].author);
					cout<<"Price: ";
					cout<<details[i].price;
					cout<<"\nCategory: ";
					puts(details[i].catg);
					cout<<"Date: ";
					cout<<(details[i].date.dd)<<"-"<<(details[i].date.mm)<<"-"<<(details[i].date.yy);
					cout<<"\nNote: ";
					puts(details[i].note);
				      }
				    }
				    break;
			   case 2 : cout<<"\nOK SIR, THANK YOU FOR PLEASURE BY GIVING US THE OPPERTUNITY TO HELP YOU.\n";
				    break;
			   default : cout<<"\nSIR, please enter correct choice.";
				    break;
			}
		   }
		   break;
	case 2 :   textcolor(8) ;
		   cout<<"\n\t\t\t";
		   cprintf("BILL PAYMENT WINDOW");
		   cout<<"\n"<<"Enter the name of costumer: ";
		   char consn[25];
		   gets(consn);
		   int d,m;
		   randomize();
		   m=random(12)+1;
		   if(m==4||m==6||m==9||m==11)
		    { d=random(30)+1;
		    }
		   else if(m==2)
		    { d=random(28)+1;
		    }
		   else
		    { d=random(31)+1;
		    }
		   cout<<"\nDate:"<<d<<"/"<<m<<"/2018\n\t\t--";
		   textcolor(RED);
		   cprintf("ITEMS AVIALABLE IN STORE");
		   cout<<"\n--";
		   textcolor(GREEN);
		   cprintf(" Pens");
		   cout<<"\n\tpn 1\n\tpn 2\n\tpn 3\n";
		   cprintf(" Notebooks");
		   cout<<"\n\tnb 1\n\tnb 2\n\tnb 3\n";
		   cprintf(" General Stationary");
		   cout<<"\n\tst 1    (Eraser)\n\tst 2    (Ruler)\n\tst 3    (Fevicol)\n\tst 4    (Pencil)\n";
		   textcolor(WHITE);
		   cout<<"\nEnter the item number as mentioned on the MENU card:";
		   id item_id;
		   cin>>item_id.id>>item_id.code;
		   item_price_calculator(item_id);
		   again_buying:
		   cout<<"Do you want to buy something again?";
		   char buy_again[4];
		   gets(buy_again);
		   if(strcmpi(buy_again,"yes")==0 || 0==strcmpi(buy_again,"ok"))
		   {  cout<<"\nEnter the item number as mentioned on the MENU card for details and buying:";
		      cin>>item_id.id>>item_id.code;
		       item_price_calculator(item_id);
		       goto again_buying;
		   }
		   if(strcmpi(buy_again,"yes")!=0 || strcmpi(buy_again,"ok")!=0)
		   { cout<<"\nSo Mr.";
		     puts(un);
		     cout<<"total amount you have to pay is :";
		     cout<<sum+(sum*gst);
		     cout<<"(Including GST)\n";
		     if(sum!=0)
		     { cout<<"Would you like to pay buy your card?\t";
		       char card_opt[4];
		       gets(card_opt);
		       if(strcmpi(card_opt,"yes")==0 || 0==strcmpi(card_opt,"ok"))
		       { char bof[4],bfe[4],card_password[20];
			cout<<"\nEnter your 8 digit membership code\t";
			gets(bof);
			gets(bfe);
			cout<<"\nEnter your card password:\t";
			gets(card_pass);
			textcolor(GREEN);
			cprintf("\nMr.");
			puts(un);
			cprintf("Rs.");
			cout<<sum+(sum*gst);
			cprintf(" have been debited after your purchase.");
		       }
		     }
		   }
		      break;
	    case 3 :    textcolor(8);
			cout<<"\n\t\t\t";
			cprintf("Book Issueing Window");
			cout<<"\nNote: You can issue one book at a time and that too for just 15 days.";
			issue_choice :
			cout<<"\nWhich type of book you want to issue:\na.Comic book\nb.Library book(make sure that the same book has been entered).";
			char type_issue[15];
			gets(type_issue);
			if((strcmpi(type_issue,"comic")==0)||(strcmpi(type_issue,"comic book")==0)||(strcmpi(type_issue,"a")==0))
			{ cout<<"\n\t\t\t\tComics\n\t\t\t";
			  textcolor(RED);
			  cprintf("COMICS AVIALABLE");
			  cout<<"\n";
			  textcolor(GREEN);
			  cprintf(" Hindi");
			  cout<<"\n\thn 01      Champak\n\thn 02      Nandan\n\thn 03      BalHans\n";
			  cprintf(" English");
			  cout<<"\n\teng 01     Magic Pot\n\teng 02     Champak\n\teng 03     Competitive Vision\n";
			  struct id issue_id;
			  cin>>issue_id.id>>issue_id.code;
			  issue_comic_book(issue_id);
			}
			else if((strcmpi(type_issue,"library")==0)||(strcmpi(type_issue,"lib")==0)||(strcmpi(type_issue,"library book")==0)||(strcmpi(type_issue,"b")==0))
			{  cout<<"\n\t\t\t\tLibrary\nEnter the book id: ";
			   struct id issue_id;
			   cin>>issue_id.id>>issue_id.code;
			   issue_lib_book(issue_id);
			}
			else
			 {  cout<<"\nYou have entered wrong choice!\nTry once again.";
			    int y;
			    for(y=0;y<1;y++)
			    {  goto issue_choice ;
			    }
			 }
		       break;
	    default : cout<<"Enter correct answer from the next time." ;
		      break;
	   }
	  cout<<"\nDo you want to work again? ";
	  char work_again[4];
	  gets(work_again);
	  if(strcmpi(work_again,"yes")==0 || 0==strcmpi(work_again,"ok"))
	  { goto begin ;
	  }
   }
   else
   {
     cout<<"\a\aDon\'t login if you don\'t know the password,\atry once again.";
     cout<<"\n";
     cprintf("Enter the password:");
     cout<<"\n";
     gets(pw);
     char rpw[25]="hey_its_me_kushagra";
     if(strcmp(pw,rpw)==0)
     { cout<<"\nSORRY FOR YOUR DISCOMFORT.\n";
       for(int x=0;x<1;x++)
	goto start ;
     }
     else
      cout<<"\n\a\a\a\aYou have wrong password again.";
   }
   cout<<"\n\t\t\t";
   textcolor(13+BLINK);
   cprintf("Made by: KUSHAGRA SRIVASTAVA");
   cout<<"\n";
   getch();
}
void issue_lib_book(id &issue)
{  char card_pass[20],of[4],fe[4];
   for(i=0;i<n;i++)
    { if(strcmp(details[i].book_code.id,issue.id)==0)
      { cout<<"\nName: ";
	puts(details[i].name);
	cout<<"Author: ";
	puts(details[i].author);
	cout<<"Notes: ";
	puts(details[i].note);
	cout<<"Is this the only book you want to issue? ";
	char issue_conf[4];
	gets(issue_conf);
	if(strcmpi(issue_conf,"yes")==0 || 0==strcmpi(issue_conf,"ok"))
	{ cout<<"\nEnter the 8 digit card number of the member: ";
	  gets(of);
	  gets(fe);
	  cout<<"\nEnter your card password:\t";
	  gets(card_pass);
	  cout<<"This book is issued by ";
	  puts(of);
	  puts(fe);
	}
      }
    }
}
void issue_comic_book(id &issue_comic)
{   char issue_opt[4];int qty;
    char card_pass[20],of[4],fe[4];
    if(strcmp(issue_comic.id,"hn")==0)
     { if(issue_comic.code==01)
       { cout<<"\n\tItem Name: Champak\n\tAge group: 5 to 14 years.: ";
	 cout<<"\nIs this the only book you want to issue? ";
	char issue_conf[4];
	gets(issue_conf);
	if(strcmpi(issue_conf,"yes")==0 || 0==strcmpi(issue_conf,"ok"))
	{ cout<<"\nEnter the 8 digit card number of the member: ";
	  gets(of);
	  gets(fe);
	  cout<<"\nEnter your card password:\t";
	  gets(card_pass);cout<<"This book is issued by ";
	  puts(of);
	}
       }
       else if(issue_comic.code==02)
       { cout<<"\n\tItem Name: Nandan\n\tAge group: 6 to 16 years.:";
	 cout<<"\nIs this the only book you want to issue? ";
	char issue_conf[4];
	gets(issue_conf);
	if(strcmpi(issue_conf,"yes")==0 || 0==strcmpi(issue_conf,"ok"))
	{ cout<<"\nEnter the 8 digit card number of the member: ";
	  gets(of);
	  gets(fe);
	  cout<<"\nEnter your card password:\t";
	  gets(card_pass);
	  cout<<"This book is issued by ";
	  puts(of);
	}
       }
       else if(issue_comic.code==03)
       { cout<<"\n\tItem Name: BalHans\n\tAge group: 6 to 14. ";
	 cout<<"\nIs this the only book you want to issue? ";
	 char issue_conf[4];
	 gets(issue_conf);
	 if(strcmpi(issue_conf,"yes")==0 || 0==strcmpi(issue_conf,"ok"))
	 { cout<<"\nEnter the 8 digit card number of the member: ";
	   gets(of);
	   gets(fe);
	   cout<<"\nEnter your card password:\t";
	   gets(card_pass);
	   cout<<"This book is issued by ";
	   puts(of);
	 }
       }
   else if(strcmp(issue_comic.id,"eng"))
    { if(issue_comic.code==01)
       { cout<<"\n\tItem Name: Magic Pot\n\tAge group: 3 to 12 years ";
	 cout<<"\nIs this the only book you want to issue? ";
	char issue_conf[4];
	gets(issue_conf);
	if(strcmpi(issue_conf,"yes")==0 || 0==strcmpi(issue_conf,"ok"))
	{ cout<<"\nEnter the 8 digit card number of the member: ";
	  gets(of);
	  gets(fe);
	  cout<<"\nEnter your card password:\t";
	  gets(card_pass);
	  cout<<"This book is issued by ";
	  puts(of);
	}
       }
       else if(issue_comic.code==02)
       { cout<<"\n\tItem Name: Champak\n\tAge group: 6 to 14 years.";
	 cout<<"\nIs this the only book you want to issue? ";
	char issue_conf[4];
	gets(issue_conf);
	if(strcmpi(issue_conf,"yes")==0 || 0==strcmpi(issue_conf,"ok"))
	{ cout<<"\nEnter the 8 digit card number of the member: ";
	  gets(of);
	  gets(fe);
	  cout<<"\nEnter your card password:\t";
	  gets(card_pass);
	  cout<<"This book is issued by ";
	  puts(of);
	}
       }
	else if(issue_comic.code==03)
       { cout<<"\n\tItem Name: Competitive vision\n\tAge group: 6 to 14 years.";
	 cout<<"\nIs this the only book you want to issue? ";
	char issue_conf[4];
	gets(issue_conf);
	if(strcmpi(issue_conf,"yes")==0 || 0==strcmpi(issue_conf,"ok"))
	{ cout<<"\nEnter the 8 digit card number of the member: ";
	  gets(of);
	  gets(fe);
	  cout<<"\nEnter your card password:\t";
	  gets(card_pass);
	  cout<<"This book is issued by ";
	  puts(of);
	}
       }
       else
	cout<<"";
     }
    else
      { cout<<"Please enter correct code ";
      }
  }
}





