#include <vector>
#include <iostream>


int main(int argc, char const *argv[])
{
    std::vector<int> args;
     args.push_back(0);

     for (int i = 1; i <= 10; i++)
     {
        args.push_back(i);
     }
     
    for (int name: args){
    std::cout<<name<<std::endl;
    }

    std::cout<<std::endl;
    
    for (auto it = args.begin(); it != args.end();it++)
    {
        std::cout<<*it<<std::endl;
    }

    std::cout<<std::endl;

    auto it = args.begin();
    std::cout<<*(it + 5)<<std::endl;

/* args.pop_back();
args.begin();
args.end();
args.capacity();
args.insert();
args.clear();
args.max_size();
args.erase();
args.at();
args.resize();
 */
    return 0;
}
