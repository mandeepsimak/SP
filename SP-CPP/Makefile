GETDETAILS = getdetails.o getdetails_main.o

CC = g++									# compiler variable
CFLAGS = -c #$(DEBUG)			   # flag used in compiling and creating object files	
OFLAGS = -o #$(DEBUG)				# Object flag
MFLAGS = -L/usr/include/mysql -lmysqlclient -I/usr/include/mysql
CGIFLAG = -lcgicc

# All targets 
all: getdetails.cgi

# target to generate executable file.

getdetails.cgi: $(GETDETAILS)
	$(CC) $(GETDETAILS) $(OFLAGS) getdetails.cgi $(CGIFLAG)

# dependencies

getdetails.o: getdetails.cc getdetails.h
	$(CC) $(CFLAGS) getdetails.cc $(CGIFLAG)

getdetails_main.o: getdetails_main.cpp getdetails.h
	$(CC) $(CFLAGS) getdetails_main.cpp $(CGIFLAG)

clean:
	rm -f *.cgi
	
