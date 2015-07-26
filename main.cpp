#include <iostream>
#include <fstream>
#include <string>

#include "graph.h"

int main(int argc, char* argv[])
{
    if(argc != 3)
    {
        std::cerr << "Not enough arguments!\n";
        exit(EXIT_FAILURE);
    }

    Graph g(argv[1]);
    std::string out_file(argv[2]);
    std::ofstream fout(out_file);

    fout << g.num_vertices << " " << g.num_edges << "\n";
    for(int i = 0; i < g.num_vertices; ++i)
    {
        for(int j = 0; j < g.vertex[i].degree; ++j)
        {
            fout << g.vertex[i].neighbors[j]+1 << " ";
        }    
        fout << "\n";
    }
    return 0;
}
