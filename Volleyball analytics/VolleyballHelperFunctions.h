#pragma once
#include <string>
#include <vector>


struct VolleyballRecord
{
    std::string playerName;
    std::string homeplace; //ex: Tyler, POLAND
    int height; //in INCHES (not cm, unfortunately)  69
    float killsPerSet;
};

/*First function declaration*/
void printVolleyballFileContents(std::string filename);

/*Second function dec.*/
std::vector<VolleyballRecord> getVolleyBallRecordsFromFile(std::string filename);


void printVolleyballRecords(std::vector<VolleyballRecord> volleyballRecords);
