CXX = g++
EXEC = prog
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

all : $(EXEC)

%.o : %.cpp
	$(CXX) -o $@ -c $<

$(EXEC) : $(OBJ)
		$(CXX) -o $@ $^

clear : 
		rm *.o
start : all
		./$(EXEC) 

# variables spéciales :
# $@ -> nom cible
# $< -> nom première dépendance
# $^ -> liste dépendances
# $? -> liste dépendances plus récentes que la cible
# $* -> nom fichier, sans son extension
