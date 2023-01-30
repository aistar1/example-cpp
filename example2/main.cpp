#include <iostream>
#include <fmt/printf.h>
#include <fmt/chrono.h>

int main(int argc, char *argv[]){

   // Print to stdout
   fmt::print("Hello, world!\n");
   // Hello, world!

   // Format a string 
   std::string s = fmt::format("The answer is {}.", 42);
   fmt::print(s);
   // The answer is 42.Default format: 42s 100ms

   // Print chrono durations 
   using namespace std::literals::chrono_literals;
   fmt::print("Default format: {} {}\n", 42s, 100ms);
   fmt::print("strftime-like format: {:%H:%M:%S}\n", 3h + 15min + 30s);
   // Default format: 42s 100ms
   // strftime-like format: 03:15:30

   return 0;
}