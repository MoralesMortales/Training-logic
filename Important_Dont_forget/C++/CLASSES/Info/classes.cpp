#include <iostream>
#include <string>
#include <list>
class Youtube_Channel{

public:
    std::string Channel_Name;
    std::string Channel_Owner;
    int suscribers;
    std::list<std::string> VideoTtiles;

};


void print_Data(Youtube_Channel Subject){
    std::cout<<Subject.Channel_Name<<"\n";
    std::cout<<Subject.suscribers<<" Suscribers\n";
    std::cout<<Subject.Channel_Owner<<"\n";
    for (std::string VideoTtiles: Subject.VideoTtiles)
    {
         std::cout<<VideoTtiles<<"\n";
    }
    
   
}

int main(int argc, char const *argv[])
{
    Youtube_Channel Carlos_Channel;
    Carlos_Channel.Channel_Name = "Carlos_Channel";
    Carlos_Channel.suscribers = 1000;
    Carlos_Channel.Channel_Owner = "Carlos";
    Carlos_Channel.VideoTtiles = {"D","S","F"};

    print_Data(Carlos_Channel);

    return 0;
}
