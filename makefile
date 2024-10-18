run: bin/programa
	./bin/programa 

compilar : main.cpp include/*.hpp 
	g++ main.cpp -I include -o bin/programa 
	


