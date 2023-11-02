#include<iostream>
using namespace std;
int main()
{
    int quant;
    int choice;

    //QUANTITY
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken=0;
    //TOTAL FOOD ITEMS
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken=0;
    
    int Total_rooms = 0, Total_pasta=0,  Total_burger=0,  Total_noodles=0, Total_shake=0,  Total_chicken=0;
    cout<<"\nQuantity of items we have";

    cout<<"\nRooms Available: ";
    cin>>Qrooms;

    cout<<"\nQuantity of Pasta: ";
    cin>>Qpasta;

    cout<<"\nQuantity of Burger: ";
    cin>>Qburger;

    cout<<"\nQuantity of Noodles: ";
    cin>>Qnoodles;

    cout<<"\nQuantity of Shake: ";
    cin>>Qshake;

    cout<<"\nQuantity of Chicken: ";
    cin>>Qchicken;
    m:
    cout<<"\n\t\t PLEASE SELECT FROM THE GVEN MENU OPTION";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chicken";
    cout<<"\n7) Information of today sales and collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please enter your choice! ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\n\n Enter the number of rooms you want: ";

            cin>>quant;
            if(Qrooms - Srooms >= quant)
            {
                Srooms = Srooms+quant;
                Total_rooms = Total_rooms + quant*1200;
                cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!"; 
            }
            else
                cout<<"\n\t Only"<<Qrooms-Srooms<<"Rooms are available in hotel";
                break;
            
            case 2:
            cout<<"\n\n Enter the number of pasta you want: ";

            cin>>quant;
            if(Qpasta - Spasta >= quant)
            {
                Spasta = Spasta + quant;
                Total_pasta = Total_pasta + quant*250;
                cout<<"\n\n\t\t"<<quant<<"pasta is the order!"; 
            }
            else
                cout<<"\n\t Only"<<Qpasta-Spasta<<"pastas are remaining in hotel";
                break;
            
            case 3:
            cout<<"\n\n Enter the number of burger you want: ";

            cin>>quant;
            if(Qburger - Sburger >= quant)
            {
                Sburger = Sburger + quant;
                Total_burger = Total_burger + quant*200;
                cout<<"\n\n\t\t"<<quant<<"pasta is the order!"; 
            }
            else
                cout<<"\n\t Only"<<Qburger-Sburger<<"burger are remaining in hotel";
                break;
            
            case 4:
            cout<<"\n\n Enter the number of Noodles you want: ";

            cin>>quant;
            if(Qnoodles - Snoodles >= quant)
            {
                Snoodles = Snoodles + quant;
                Total_noodles = Total_noodles + quant*250;
                cout<<"\n\n\t\t"<<quant<<"noodle is the order!"; 
            }
            else
                cout<<"\n\t Only"<<Qnoodles-Snoodles<<"noodle are remaining in hotel";
                break;
            
            case 5:
            cout<<"\n\n Enter the number of shake  you want: ";

            cin>>quant;
            if(Qshake - Sshake >= quant)
            {
                Sshake = Sshake + quant;
                Total_shake = Total_shake + quant*250;
                cout<<"\n\n\t\t"<<quant<<"shake is the order!"; 
            }
            else
                cout<<"\n\t Only"<<Qshake-Sshake<<"shake are remaining in hotel";
                break;
            
            case 6:
            cout<<"\n\n Enter the number of chicken-roll you want: ";

            cin>>quant;
            if(Qchicken - Schicken >= quant)
            {
                Schicken = Schicken + quant;
                Total_chicken = Total_chicken + quant*350;
                cout<<"\n\n\t\t"<<quant<<"chicken_roll is the order!"; 
            }
            else
                cout<<"\n\t Only"<<Qchicken-Schicken<<"chicken_roll are remaining in hotel";
                break;
            

           case 7:

			cout<<"\n\t\tDetails of sales and collection ";
			cout<<"\n\n Number of Rooms we had : "<<Qrooms;
			cout<<"\n Number of Rooms we gave for rent : "<<Srooms;
			cout<<"\n Remaining Rooms : "<<Qrooms-Srooms;
			cout<<"\n\n Total Rooms collection for the Day : "<<Total_rooms;
			
			cout<<"\n\n Number of Pastas we had : "<<Qpasta;
			cout<<"\n Number of Pastas we sold : "<<Spasta;
			cout<<"\n Remaining Pastas : "<<Qpasta-Spasta;
			cout<<"\n\n Total Pasta collection for the Day : "<<Total_pasta;
			
			cout<<"\n\n Number of burgers we had : "<<Qburger;
			cout<<"\n Number of burgers we sold : "<<Sburger;
			cout<<"\n Remaining Burgers : "<<Qburger-Sburger;
			cout<<"\n\n Total Burger collection for the Day : "<<Total_burger;
			
			cout<<"\n\n Number of Noodles we had : "<<Qnoodles;
			cout<<"\n Number of Noodles we sold : "<<Snoodles;
			cout<<"\n Remaining Noodles : "<<Qnoodles-Snoodles;
			cout<<"\n\n Total Noodles collection for the Day : "<<Total_noodles;
			
			cout<<"\n\n Number of shakes we had : "<<Qshake;
			cout<<"\n Number of Shakes we sold : "<<Sshake;
			cout<<"\n Remaining Shakes : "<<Qshake-Sshake;
			cout<<"\n\n Total Shakes collection for the Day : "<<Total_shake;
			
			cout<<"\n\n Number of Chicken-roll we had : "<<Qchicken;
			cout<<"\n Number of Chicken-roll we sold : "<<Schicken;
			cout<<"\n Remaining Chicken-roll : "<<Qchicken-Schicken;
			cout<<"\n\n Total Chicken-roll collection for the Day : "<<Total_chicken;
			
			cout<<"\n\n\n Total Collection for the day : "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
			break;
            case 8:
                exit(0);

                default:
                    cout<<"\n Please select the number mentioned above!";
    }
    goto m; //jump statement
    
}