int main() {
    Character hero("Arin", 10, 5);
    std::vector<Encounter> adventure_path = {
        Encounter(8, 3),
        Encounter(12, 7),
        Encounter(5, 2)
    };
    int journey_damage = adventureJourney(hero, adventure_path);
    std::cout << hero.getName() << " dealt a total of " << journey_damage << " damage during the adventure!" << std::endl;
    return 0;
}