#include <iostream>

int main(int argc, char **argv) {
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << " <inputfiles> <outputfile>" << std::endl;
        return 1;
    }
}
