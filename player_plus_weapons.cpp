
#include <iostream>

typedef int Weapon;
class Player{
Weapons weapon[1000];
private:
	float x, y, z = 0.0;
	float speed;
	int max_health;
	int health;
	bool is_alive = true;
	Weapon weapon[];
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

	Weapon* GetWeapon(int index){
		weapon = index
		return &(weapon);
	}

	Weapon ReturnWeaponId(){
		return weapon;
	}

};
int main(){
	Player player;
	player.SetHealth(100);
	std::cout << player.GetHealth(), "\n";
	player->GetWeapon(10);
	std::cout << player->ReturnWeaponId(), "\n";
	return 0;
}
