#makefile

CC     = gcc

CFLAGS = -W -Wall

SRCS   = main.c app_runner.c book_features.c

LIBS   =
all: flex_db

flex_db: $(SRCS)
	$(CC) $(CFLAGS) -o flex_db $(SRCS) $(LIBS)

clean:
	rm -f flex_db core