#include "Character.hpp"
#include "Enemy.hpp"


Character::Character(std::string const &name) : name(name), ap(40), weapon(NULL){
}

Character::~Character() {
}

void Character::recoverAP() {
    this->ap += 10;
    if (this->ap > 40)
        this->ap = 40;
}

void Character::equip(AWeapon *w) {
    this->weapon = w;
}

void Character::attack(Enemy *e) {
    if (this->weapon && this->getAP() >= this->weapon->getAPCost())
    {
        std::cout << this->name << " attacks " << e->getType() << " with " << this->weapon->getName() << std::endl;
        this->ap -= this->weapon->getAPCost();
        this->weapon->attack();
        e->takeDamage(this->weapon->getDamage());
    }
    else if (this->weapon && this->getAP() < this->weapon->getAPCost())
    {
        std::cout << "Not enough ap" << std::endl;
    }
}

std::string Character::getName() const {
    return this->name;
}

int Character::getAP() const{
    return this->ap;
}

AWeapon *Character::getWeapon() const
{
    return this->weapon;
}

std::ostream &operator<< (std::ostream &os, Character const &ch)
{
    if (ch.getWeapon())
        os << ch.getName() << " has " << ch.getAP() << " AP and wields a " << ch.getWeapon()->getName() << std::endl;
    else
        os << ch.getName() << " has " << ch.getAP() << " AP and is unarmed" << std::endl;
    return os;
}
