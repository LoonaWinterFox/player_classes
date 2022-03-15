#include <iostream>

class Fox{
private:
	const bool is_cute = true;
	int age;
	bool floof = true;

public:
	void Pet(char* response){
		char message[] = "*Happy Fox Sounds*\n";
		for (int i = 0; i < sizeof(message); i++){
			response[i] = message[i];
		}
	}
	
	bool GetFloofy(){
		return floof;
	}

};

int main(){
	Fox fox;
/*
	for (int i = 0; i < 20, i++;){
		fox[i].Pet();
	}
*/
	char out[100];
	fox.Pet(out);
	std::cout << out, "\n";
	return 0;
}
