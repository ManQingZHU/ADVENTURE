OBJS = main.o Character.o Game.o Room.o
CC = g++ -std=c++11
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG) 
LFLAGS = -Wall $(DEBUG)
CPP = main.cpp Character.cpp Game.cpp Room.cpp 
HEADER = Character.h Basement.h Bedroom.h DiningRoom.h\
 Game.h Hallway.h Hero.h Kitchen.h Library.h LivingRoom.h Lobby.h\
 Room.h Washroom.h
SOURCES =  $(HEADER) $(CPP) makefile READme.text

EXE = ADVENTURE

$(EXE) : $(OBJS)
	$(CC) $(LFLAGS) $^ -o $@ 

Character.o : Character.cpp Character.h
	$(CC) $(CFLAGS) $<
	 
Game.o : Game.cpp Game.h
	$(CC) $(CFLAGS) $<
	 
Room.o : Room.cpp Room.h Character.h Hero.h
	$(CC) $(CFLAGS) $<

main.o : main.cpp $(HEADER)
	$(CC) $(CFLAGS) $< 
clean :
	\rm *.o *~ A

tar:
	tar cfv $(EXE).tar $(SOURCES)
