#include<iostream>
#include <map>

int main()
{
	int player_damage, dragons_number, dragons_damage, bonus;
	std::string ans;
	std::cin >> player_damage  >>  dragons_number;

	std::multimap<int, int> dragons;

	for (int i = 0; i < dragons_number; i++) {
		std::cin >> dragons_damage >> bonus;
		dragons.emplace(dragons_damage, bonus);
	}



	auto it = dragons.begin();
	for (int i = 0; it != dragons.end(); it++, i++) {
		if (player_damage > it->first) {
			player_damage += it->second;
			ans = "YES";
		}
		else {
			ans = "NO";
			break;
		}
	}

	std::cout << ans;
}
