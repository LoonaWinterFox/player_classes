#include <iostream>

class Player{
private:
	float x, y, z = 0.0;
	float speed;
	int max_health;
	int health;
	bool is_alive = true;
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


};
int main(){
	Player player;
	player.SetHealth(100);
	std::cout << player.GetHealth(), "\n";
	
	return 0;
}
