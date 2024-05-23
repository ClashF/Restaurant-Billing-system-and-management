#include <iostream>
#include <string>
using namespace std;
class popsalon
{
	int flavour;
	int size;
	int wrapper;
	int topping1;
	int topping2;
	int total_bill;
	string customer_name;
	int customer_contact;
	string customer_email;
	int customer_choice;
public:
	void set_flavour()
	{
		cout << "\t\tWELCOME TO POP SALON ";
		cout << "\n\tFlavours";
		cout << "\n1.Chocolate\n2.English toffee\n3.Salted Caramel\n4.Caramel\n5.Jalapeno";
		cout << "\n6.Cheese\n7.Plain salted\n8.Butter\n9.Spiced Cheese\n10.Salt and Pepper\n11.Garlic";
		cout << "\nEnter your flavour number:";
		cin >> flavour;
	}
	void set_price()
	{ do
	{
		cout<<"Which size do you want?";
		cout<<"\n1.Small(Rs100)\n2.Medium(Rs250)\n3.Large(Rs500)\n4.Large size tin pack(Rs750)";
		cout<<"\nEnter your choice:";
		cin>>size;
		if(size>=5)
		{
			cout<<"Invalid choice.\nEnter again:";
			cin>>size;
		}
	}
	while(size>=5);
	}
	void set_wrapper()
	{
		cout<<"Do you to include gift wrapper with your popcorn? ";
		cout<<"\nPrice of Wrapper: Rs 50";
		cout<<"\nPress 1 for YES or press 0 for NO:";
		cin>>wrapper;
		if(wrapper==1)
		{
			cout<<"Thank you for purchasing gift wrapper. Rs 50 have been added to your total bill.";
		}
		else if(wrapper==0)
		{
			cout<<"You have not purchased gift wrapper.";
		}
	}
	void additional_topping()
	{
		cout<<"\nDo you want extra toppings on your popcorn?";
		cout<<"\nPress 1 for YES or press 0 for NO:";
		cin>>topping1;
		if(topping1==1)
		{
		cout<<"\tWe have 3 toppings";
		cout<<"\n1.Chocolate sause (Rs 50)\n2.Caramel sause (Rs 30)\n3.Melted cheese (Rs 60)";
		cout<<"\nEnter your choice:";
		cin>>topping2; 
		if(topping2==1)
		{
			cout<<"You have selected chocolate sause. Rs 50 have added to your total bill.";
		}
		else if(topping2==2)
		{
			cout<<"You have selected caramel sause. Rs 30  have added to your total bill.";
		}
		else if(topping2==3)
		{
			cout<<"You have selected melted cheese. Rs 60  have added to your total bill.";
		}
	}
	else if(topping1==0)
	{
		cout<<"You have not selected additional topping.";
	}
}
void display()
{
	{
			if (flavour == 1)
			{
				cout << "\nYou have selected chocolate.";
			}
			else if (flavour == 2)
			{
				cout << "\nYou have selected English toffee.";
			}
			else if (flavour == 3)
			{
				cout << "\nYou have selected Salted Caramel.";
			}
			else if (flavour == 4)
			{
				cout << "\nYou have selected Salted Caramel.";
			}
			else if (flavour == 5)
			{
				cout << "\nYou have selected Jalapeno.";
			}
			else if (flavour == 6)
			{
				cout << "\nYou have selected Cheese.";
			}
			else if (flavour == 7)
			{
				cout << "\nYou have selected Plain Salted.";
			}
			else if (flavour == 8)
			{
				cout << "\nYou have selected Butter.";
			}
			else if (flavour == 9)
			{
				cout << "\nYou have selected Spiced Cheese.";
			}
			else if (flavour == 10)
			{
				cout << "\nYou have selected English Salt and Pepper.";
			}
			else if (flavour == 11)
			{
				cout << "\nYou have selected Garlic.";
			}
		}
		{
		if(size==1)
		{
	      total_bill=100;
	      cout<<"\nRs 100 included in total bill.";
		}
		else if(size==2)
		{
			total_bill=250;
			cout<<"\nRs 250 included in total bill.";
		}
		else if(size==3)
		{
			total_bill=500;
			cout<<"\nRs 500 included in total bill.";
		}
		else if(size==4)
		{
			total_bill=750;
			cout<<"\nRs 750 included in total bill.";
		}
	}
	{
	if(wrapper==1)
	{
		total_bill+=50;
		cout<<"\nGift wrapper included.";
	}
}
{
	if(topping2==1)
	{
		total_bill+=50;
		cout<<"\nAdditional chocolate sause topping.";
	}
	else if(topping2==2)
	{
		total_bill+=30;
		cout<<"\nAdditional caramel sause topping.";
	}
	else if(topping2==3)
	{
		total_bill+=60;
		cout<<"\nAdditional melted cheese topping.";
}
cout<<"\nTotal bill:"<<total_bill;
}
}
void customer_information()
{
	cout<<"\nFor service quality inspection and to keep you updated with monthly product promotions.";
	cout<<"\n\tPlease provide the following information.";
	{
	cin.ignore();
	cout<<"\nName:";
    getline(cin,customer_name);
}
    cout<<"\nContact number:";
    cin>>customer_contact;
    {
    	cin.ignore();
    	 cout<<"\nEmail address:";
   	getline(cin, customer_email);
}

   {
    cout<<"\nHow was our service?";
    cout<<"\nPress 1 for Good \nPress 2 for Neutral \nPress 3 for bad:";
    cin>>customer_choice;
    if(customer_choice==1)
    {
    	cout<<"Thank you for appreciating our services. We aim to provide better services to you.";
	}
	else if(customer_choice==2)
	{
		cout<<"We are trying to get better. Please be with us.";
	}
	else if(customer_choice==3)
	{
		cout<<"We will improve our services and will not give you any chance to complain. Cooperate with us.";
	}
}
}
popsalon()
{
	set_flavour();
    set_price();
	set_wrapper();
	additional_topping();
	customer_information();
}
~popsalon()
{
	cout<<"\n\tTHANK YOU!!";
}
 };
	int main()
	{
		popsalon obj;
		obj.display();
	}
