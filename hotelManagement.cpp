#include <iostream>
using namespace std;

 main()
 {
    int quant;
    int choice;
    //Quantity
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;
    //food item sold
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;
    //total price of item
    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0;
  
  cout<<"\n\n\tQuantity of itme we have!";
  cout<<"\n\nRooms available: ";
  cin>>Qrooms;
  cout<<"\n Quantity of pasta: ";
  cin>>Qpasta;
  cout<<"\n Quantity of Burger: ";
  cin>>Qburger;
  cout<<"\n Quantity of noodles: ";
  cin>>Qnoodles;
  cout<<"\n Quantity of shake: ";
  cin>>Qshake;
  cout<<"\n Quantity of chicken: ";
  cin>>Qchicken;
 
  m:
  cout<<"\n\n---------------------------------------------------------------------------------------------------------------------------\n\n";
  cout<<"\n\tPlease select from menu option ";
  cout<<"\n\n 1)Rooms";
  cout<<"\n 2)Pasta";
  cout<<"\n 3)Burger";
  cout<<"\n 4)Noodles";
  cout<<"\n 5)Shakes";
  cout<<"\n 6)Chicken";
  cout<<"\n 7)Information regarding sales and collection";
  cout<<"\n 8)Exist";
  
  cout<<"\n\n\n\t Please enter your choice ";
  cin>>choice;

  switch (choice)
  {
  case 1:
       cout<<"\nEnter the number of room you want: ";
       cin>>quant;

       if(Qrooms-Srooms>=quant)
       {
         Srooms=Srooms+quant;
         Total_rooms=Total_rooms+quant*1200;
         cout<<"\n\t"<<quant<<" room/rooms have been alloted to you!";

       }
       else
        cout<<"\n\t only "<<Qrooms-Srooms<<" room/rooms remaining in hotel !";
        break;
       
   
   case 2:
       cout<<"\nEnter the number of pasta you want: ";
       cin>>quant;

       if(Qpasta-Spasta>=quant)
       {
         Spasta=Spasta+quant;
         Total_pasta=Total_pasta+quant*250;
         cout<<"\n\t"<<quant<<" pastas have been alloted to you!";

       }
       else
        cout<<"\n\t only "<<Qpasta-Spasta<<" pastas remaining in hotel !";
        break;
        
     
   case 3:
       cout<<"\nEnter the number of burger you want: ";
       cin>>quant;

       if(Qburger-Sburger>=quant)
       {
         Sburger=Sburger+quant;
         Total_rooms=Total_rooms+quant*120;
         cout<<"\n\t"<<quant<<" burgers have been alloted to you!";

       }
       else
        cout<<"\n\t only "<<Qburger-Sburger<<" burgers remaining in hotel !";
        break;


   case 4:
       cout<<"\nEnter the number of noodles you want: ";
       cin>>quant;

       if(Qnoodles-Snoodles>=quant)
       {
         Snoodles=Snoodles+quant;
         Total_noodles=Total_noodles+quant*140;
         cout<<"\n\t"<<quant<<" noodles have been alloted to you!";

       }
       else
        cout<<"\n\t only "<<Qnoodles-Snoodles<<" noodles remaining in hotel !";
        break;
         
       
   case 5:
       cout<<"\nEnter the number of shake you want: ";
       cin>>quant;

       if(Qshake-Sshake>=quant)
       {
         Sshake=Sshake+quant;
         Total_shake=Total_shake+quant*150;
         cout<<"\n\t"<<quant<<" shakes have been alloted to you!";

       }
       else 
        cout<<"\n\t only "<<Qshake-Sshake<<" shakes remaining in hotel !";
        break;

    
     case 6:
       cout<<"\nEnter the chicken of room you want: ";
       cin>>quant;

       if(Qchicken-Schicken>=quant)
       {
         Schicken=Schicken+quant;
         Total_chicken=Total_chicken+quant*160;
         cout<<"\n\t"<<quant<<" chicken have been alloted to you!";

       }
       else
        cout<<"\n\t only "<<Qchicken-Schicken<<" chicken remaining in hotel !";
        break;
       

      case 7:
         cout<<"\n\t\t Details of sales and collections ";
         cout<<"\n\n Number of rooms we had: "<<Qrooms;
         cout<<"\n\n Number of rooms we gave for rent: "<<Srooms;
         cout<<"\n\n Remaining rooms: "<<Qrooms-Srooms;
         cout<<"\n\n Total room collection for the day: "<<Total_rooms;

         cout<<"\n\n Number of pasta we had: "<<Qpasta;
         cout<<"\n\n Number of pasta we gave: "<<Spasta;
         cout<<"\n\n Remaining pasta: "<<Qpasta-Spasta;
         cout<<"\n\n Total pasta collection for the day: "<<Total_pasta;

         cout<<"\n\n Number of burger we had: "<<Qburger;
         cout<<"\n\n Number of burger we gave: "<<Sburger;
         cout<<"\n\n Remaining burger: "<<Qburger-Sburger;
         cout<<"\n\n Total burger collection for the day: "<<Total_burger;

         cout<<"\n\n Number of Noodles we had: "<<Qnoodles;
         cout<<"\n\n Number of Noodles we gave: "<<Snoodles;
         cout<<"\n\n Remaining Noodles: "<<Qnoodles-Snoodles;
         cout<<"\n\n Total Noodles collection for the day: "<<Total_noodles;

         cout<<"\n\n Number of shakes we had: "<<Qshake;
         cout<<"\n\n Number of Shakes we gave: "<<Sshake;
         cout<<"\n\n Remaining shakes: "<<Qshake-Sshake;
         cout<<"\n\n Total shakes collection for the day: "<<Total_shake;

         cout<<"\n\n Number of chicken-roll we had: "<<Qchicken;
         cout<<"\n\n Number of chicken-roll we gave: "<<Schicken;
         cout<<"\n\n Remaining chicken-roll: "<<Qchicken-Schicken;
         cout<<"\n\n Total chicken-roll collection for the day: "<<Total_chicken;

         cout<<"\n\n\n Total collection for the day= Rs."<<Total_burger+Total_chicken+Total_noodles+Total_pasta+Total_rooms+Total_shake;
         break;

         case 8:
            exit(0);

            default:
         cout<<"Please select the Number mentioned above!";   

  }
  goto m;
  
 }