#include <iostream>

class Fox{
private:
	const bool is_cute = true;
	int age;
	bool floof = true;

public:
	void PetFox(){
		std::cout << "*Happy Fox Sounds*\n";
	}
	
	bool IsFloofy(){
		return floof;
	}

};

int main(){
	Fox fox[20];
	for (int i = 0; i < 20, i++;){
		fox[i].PetFox();
	}

	return 0;
}
