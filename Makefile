CC=g++
NAME=baignoire

clean:
	rm $(NAME)

etape1:
	$(CC) main.cpp etape_1/*.cpp -o $(NAME)

etape2:
	$(CC) main.cpp etape_2/*.cpp -o $(NAME)

etape3:
	$(CC) main.cpp etape_3/*.cpp -o $(NAME)

etape4:
	$(CC) main.cpp etape_4/*.cpp -o $(NAME)

etape6:
	$(CC) main.cpp etape_6/*.cpp -o $(NAME)
