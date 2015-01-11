CC=g++
CCFLAGS=-std=c++98
NAME=baignoire

clean:
	rm $(NAME)

etape1:
	$(CC) $(CCFLAGS) main.cpp etape_1/*.cpp -o $(NAME)

etape2:
	$(CC) $(CCFLAGS) main.cpp etape_2/*.cpp -o $(NAME)

etape3:
	$(CC) $(CCFLAGS) main.cpp etape_3/*.cpp -o $(NAME)

etape4:
	$(CC) $(CCFLAGS) main.cpp etape_4/*.cpp -o $(NAME)

etape6:
	$(CC) $(CCFLAGS) main.cpp etape_6/*.cpp -o $(NAME)
