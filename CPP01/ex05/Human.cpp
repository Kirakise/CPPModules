#include "Human.hpp"

Human::Human(){
    this->brain = new Brain();
};

Brain *Human::indetify()
{
    return this->brain->indetify();
}

Brain *Human::GetBrain()
{
    return this->brain;
}