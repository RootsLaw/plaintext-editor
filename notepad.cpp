#include <iostream>
int main()
{
	bool running = true;
	
	while(running){
			std::cout<<"_ _ _Noteapp_ _ _\n";
			std::cout<<"1.  Open file \n";
			std::cout<<"2.  Save file \n";
			std::cout<<"3.  Quit\n";
			
			int choice;
			std::cin>> choice;
			
			if(choice == 1){ 
				std::cout<<"You chose: Open\n";
			}
			else if(choice == 2){
				         std::cout<<"You chose: Save\n";
			}
			else if(choice  == 3){
				         std::cout<<"You chose: Quit \n";
				         running = false;	        
			}
			
	}
}
