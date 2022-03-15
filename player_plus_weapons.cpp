#include <iostream>

/*
typedef int Weapon;
Weapons weapon_id[1000];
*/

class Player{
private:
	float x, y, z = 0.0;
	float speed;
	int max_health;
	int health;
	bool is_alive = true;
//	Weapon weapon = 5;

public:
	float GetHealth(){return health;}
	float GetX(){return x;}
	float GetY(){return y;}
	float GetZ(){return z;}

	void InitializePlayer(){
		health = max_health;
		is_alive = true;

	}

	void SetHealth(int new_health){
		health = new_health;
		if (health <= 0){
			is_alive = false;
		}

	}
/*
	Weapon GetWeapon(int list, int index){
		weapon = list + index;
		return &(weapon);
	}

	Weapon ReturnWeaponId(){
		return weapon;
	}
*/
};

int main(){
	char weapons_list[7] = {'a','b','c','d','e','r','f'};
	Player player;
	player.SetHealth(100);
	std::cout << player.GetHealth(), "\n";

	char weapon = weapons_list[5];
	std::cout << weapon, "\n";

	char* wl = &weapons_list[0];
	*(wl + 4) = 'a';

	weapon = *(wl + 4);

	std::cout << weapon, "\n";
	return 0;

}
