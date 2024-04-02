
all: helloworld rename_process

helloworld: helloworld.c
	gcc -o helloworld helloworld.c

rename_process: rename_process.c
	gcc -o rename_process rename_process.c

clean:
	rm helloworld rename_process