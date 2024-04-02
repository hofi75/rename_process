
all: helloworld call_execvp

helloworld: helloworld.c
	gcc -o helloworld helloworld.c

call_execvp: call_execvp.c
	gcc -o call_execvp call_execvp.c

clean:
	rm helloworld call_execvp