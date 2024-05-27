CC = g++
file = first.cpp main.cpp
DEPS = first.h
objects = main.o first.o

%.o: %.cpp $(DEPS)
	@$(CC) -c -o $@ $<


build: $(objects)
	$(CC) -o test $(objects)
	echo "Bulid Done"

run:
	@./test
	@python code.py

clean:
	del *.o


define function_name 
