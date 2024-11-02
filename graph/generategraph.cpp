//
// Created by Nikos Tsolkas on 22/10/2024.
//

#include <iostream>
#include <fstream>
#include "graph.h"

using namespace std;

int main(int argc,char* argv[])
{
    fstream fp;
    fp.open(argv[1]);
    graph main_graph;
    generate_random_graph(&main_graph,fp);
}