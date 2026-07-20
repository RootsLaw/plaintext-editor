#include <iostream>
#include <fstream>
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
				std::ifstream file("myfile.txt");

				if (file) {
					std::string line;
	
				while(std::getline(file, line)) {
					std::cout <<line <<"\n";
						}
						}
				else {
		std::cout << "Could  not open. \n";
		}
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

