#include <iostream>
#include <windows.h>

long long a;
long long b;
std::string oper;
void multilog(long long a, long long b);
void divlog(long long a, long long b);
void sublog(long long a, long long b);
void addlog(long long a, long long b);
void textel(std::string);
void text(std::string);
std::string clear;
int main(){
	textel("Hello! Welcome to the calculator. The steps will be laid out for you shortly.");
	
	// Loading timer.
	// int timer = 0 (just declaring it tbh)
	// timer < 5 - How many times Loading... will print to the console 
	// timer++ adds 1 to timer hence why timer < 5 is loading 5 times.
	// Divide total sleep amount by timer. I.E. 1500 / 3 = 300, Sleep = 300, Sleep(300)


	for (int timer = 0; timer < 5; timer++)
	{
		textel("Loading...");
		Sleep(300);
	}


	
	


	// int go_forever = 0;
	//while (go_forever < 5; 
	// Using an int when i do not need to. If i want my loop to go foreveri can just do
	while(true)
	{

		bool clearbool = 0;
		text("Enter your number: ");
		std::cin >> a;
		std::cout << '\n';
		text("Now choose your operator: ");
		std::cin >> oper;
		std::cout << '\n';
		text("Now choose your final number: ");
		std::cin >> b;

		if (oper == "+")
		{
			addlog(a, b);
		}
		if (oper == "-")
		{
			sublog(a, b);
		}
		if (oper == "*")
		{
			multilog(a, b);
		}
		if (oper == "/")
		{
			divlog(a, b);
		}

		std::cout << "\n";

		textel("Whenever you are done with this result, type anything and press enter to clear the console.");
		std::cin >> clear;
		if (clear != "")
		{
			clearbool = 1;
		}


		if (clearbool = 1)
		{
			Sleep(100);
			// Clear console. Asked chat gpt how to properly do this.
			system("cls");
			// Prior implementation of this failed because i was writing system(cls);, Instead of system("cls");/
		}

		
		
	
	//	goto afterfirst; 

	// Commented out our goto, This is making it harder for others to read and sure it might work on
	// my simple program now however later on i do not want this to become habitual use due to needing to be able to read
	// my own code.

	
	
	
	} // END OF LOOP / PROGRAM

}
