#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::multimap<int, int> skills;
    for (int i = 1; i <= n; ++i) {
        int skill;
        std::cin >> skill;
        skills.insert({skill, i});
    }

    int min_teams = std::min({skills.count(1), skills.count(2), skills.count(3)});
    std::cout << min_teams << std::endl;

    auto it1 = skills.find(1);
    auto it2 = skills.find(2);
    auto it3 = skills.find(3);

    for (int i = 0; i < min_teams; ++i) {
        std::cout << (*it1).second << " " << (*it2).second << " " << (*it3).second << std::endl;
        ++it1;
        ++it2;
        ++it3;
    }

    return 0;
}
