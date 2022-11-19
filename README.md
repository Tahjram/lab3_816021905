# Integration Testing

In this test, the function is tested alongside the gpio on and off functions in a loop to simulate the operation of the system in a task system using round robin scheduling. This shows that the functions is capable of working alongside the other functions that will make adjustments to the gpio pin and the function is capable of reporting the changes made by the tasks properly. In order to perform the tests, the while loop is removed from the functions to allows for them to exit and allow the other functions to run. This does test the function that does not match the exact state that it will be in for the final operation. The function with the while loop does not, however provide any change to the core purpose of the function. In this test a driver function is used to facilitate the simulation of a round robin task scheduling environment and to call the function amongst the other functions.