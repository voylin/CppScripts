#!/bin/bash

mkdir -p build    # Create the build folder if needed
rm -rf build/*    # Clean the build folder

g++ -o build/engine.so -fPIC -shared src_engine/*.cpp -lglfw -lGL   # Compile shared object
g++ -Wl,-rpath=./build -o build/game src_game/*.cpp -Isrc_engine -lglfw -lGL   # Compile the game


# Run after compilation question
read -p "Do you want to run the program (Y/n)? " answer
if [[ $answer == "Y" || $answer == "y" ]]; then
  echo "Compiling complete"
  ./build/game
else
  echo "Compiling complete - not launching game!"
fi