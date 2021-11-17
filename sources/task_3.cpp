// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 3.
void swap_el(std::vector<int>& input) {
  int a, b, c;
  a = input[0];
  b = input[1];
  c = input[2];
  input[0] = input[17];
  input[1] = input[18];
  input[2] = input[19];
  input[17] = a;
  input[18] = b;
  input[19] = c;
}
