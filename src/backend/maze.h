#ifndef MY_MAZE_H
#define MY_MAZE_H
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

#include "data.h"

namespace my {
class Maze {
 public:
  Maze(Data *obj) { obj_ = obj; };
  ~Maze(){};
  void SetStartFinish(int s, int f);
  std::vector<int> &GetPath();
  std::vector<std::vector<int>> &GetMazeGraph();
  void PrintPath();

 private:
  Data *obj_;
  void ClearMaze();
  void ClearSize();
  void MakeGraph();
  void MakePath();
  int row_;
  int col_;
  std::vector<int> walls_;
  std::vector<int> floors_;
  std::vector<std::vector<int>> graph_;
  std::vector<int> path_;
  int start_, finish_;
};
}  // namespace my

#endif