#include <iostream>
#include <string>


struct Data{
    std::string a;
    int n;
    std::string b;
};

uintptr_t serialize(Data*   ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
    return reinterpret_cast<struct Data *>(raw);
}

int main()
{
    Data *data = new Data;
    Data *tmp;
    uintptr_t s;

    data->a = "12345678";
    data->b = "asdasdas";
    data->n = 123;
    s = serialize(data);
    tmp = deserialize(s);
    if (data == tmp)
        std::cout << data->a << " " << data->b << " " << data->n << std::endl;
    delete data;
}
