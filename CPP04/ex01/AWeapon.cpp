#include "AWeapon.hpp"


AWeapon::AWeapon(std::string const & name, int apcost, int damage) : name(name), apcost(apcost), damage(damage)
{
}

AWeapon::AWeapon(const AWeapon &obj) {
    this->damage = obj.damage;
    this->apcost = obj.apcost;
    this->name = obj.name;
}

AWeapon::~AWeapon() {};

std::string AWeapon::getName() const {
    return this->name;
}

int AWeapon::getAPCost() const {
    return this->apcost;
}

int AWeapon::getDamage() const {
    return this->damage;
}

void AWeapon::operator=(const AWeapon &obj) {
    this->damage = obj.damage;
    this->apcost = obj.apcost;
    this->name = obj.name;
}
