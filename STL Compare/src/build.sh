set -x
g++ -std=c++11 main.cpp -O0 -g -Wall -o benchDebug
g++ -std=c++11 main.cpp -O3 -s -o benchRelease
