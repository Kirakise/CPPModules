#include "Enemy.hpp"

Enemy::Enemy(){};

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type) {
}

Enemy::~Enemy() {};

std::string Enemy::getType() const {
    return this->type;
}

int Enemy::getHP() const {
    return this->hp;
}

void Enemy::takeDamage(int a) {
    if (a > 0)
        this->hp -= a;
    if (this->hp <= 0)
        this->~Enemy();
}
