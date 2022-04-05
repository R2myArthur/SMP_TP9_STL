#Makefile
#Created by Corentin and Rémy 29/03/2022

main_stl.out : main_stl.o
	g++ -o main_stl.out main_stl.o

main_stl.o : main_stl.cpp
	g++ -c main_stl.cpp -o main_stl.o
