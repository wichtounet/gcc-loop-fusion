#include <iostream>

#include <boost/lexical_cast.hpp>

int main(int argc, char *argv[]){
    std::size_t size = 0;

    if(argc < 2){
        size = 2000;
    } else {
        size = boost::lexical_cast<std::size_t>(argv[1]);
    }

    std::cout << "#include <iostream>" << std::endl;

    std::cout << "static const unsigned long SIZE = 40000000L;" << std::endl;
    std::cout << "static unsigned long A[SIZE];" << std::endl;

    std::cout << "int main(){" << std::endl;
    std::cout << "unsigned long sum = 0;" << std::endl;

    for(int i = 0; i < size; ++i){
        std::cout << "for(unsigned long i = 0; i < SIZE; ++i){" << std::endl;
        std::cout << "\tA[i] = i;" << std::endl;
        std::cout << "}" << std::endl;

        std::cout << "for(unsigned long j = 0; j < SIZE; ++j){" << std::endl;
        std::cout << "\tsum += A[j];" << std::endl;
        std::cout << "}" << std::endl;
    }

    std::cout << "}" << std::endl;

    return 0;
}
