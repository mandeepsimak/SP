JAVASCRIPT = mysql.o javascript.o javascript_main.o
SEATPLAN = seatplan.o seatplan_main.o 
MYSQL = mysql.o mysql_main.o

CC = g++									# compiler variable
CFLAGS = -c #$(DEBUG)					# flag used in compiling and creating object files	
OFLAGS = -o #$(DEBUG)					  	# Object flag
MFLAGS = -L/usr/include/mysql -lmysqlclient -I/usr/include/mysql

# All targets 
all: mysql seatplan.html fields.js 

# target to generate executable file.

seatplan.html: $(SEATPLAN)
	$(CC) $(SEATPLAN) $(OFLAGS) seatplan.html 

fields.js: $(JAVASCRIPT)
	$(CC) $(JAVASCRIPT) $(OFLAGS) fields.js $(MFLAGS)

mysql: $(MYSQL)
	$(CC) $(MYSQL) $(OFLAGS) mysql $(MFLAGS)

# dependencies

seatplan.o: seatplan.cc seatplan.h
	$(CC) $(CFLAGS) seatplan.cc

seatplan_main.o: seatplan_main.cpp seatplan.h
	$(CC) $(CFLAGS) seatplan_main.cpp

javascript.o: javascript.cc javascript.h
	$(CC) $(CFLAGS) javascript.cc $(MFLAGS)

javascript_main.o: javascript_main.cpp javascript.h
	$(CC) $(CFLAGS) javascript_main.cpp $(MFLAGS)

mysql.o: mysql.cc mysql.h
	$(CC) $(CFLAGS) mysql.cc $(MFLAGS)

mysql_main.o: mysql_main.cpp mysql.h
	$(CC) $(CFLAGS) mysql_main.cpp $(MFLAGS)

clean:
	rm -f *.js *.html *.o mysql
