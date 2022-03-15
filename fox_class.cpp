#include <iostream>

class Fox{
private:
	const bool is_cute = true;
	int age;
	bool floof = true;

public:
	void Pet(char* response){
		char message[] = "*Happy Fox Sounds*";
		for (int i = 0; i < sizeof(message); i++){
			response[i] = message[i];
		}
	}
	
	bool GetFloofy(){
		return floof;
	}

};

int main(){
	Fox fox[20];

	char out[100];
	for (int i = 0; i < 20; i++){
		std::cout << "Petting Fox Number" << i + 1 << "\n";
		fox[i].Pet(out);
		std::cout << out << "\n";
	}
/*
	char out[100];
	fox.Pet(out);
	std::cout << out << "\n";
*/
	return 0;
}
