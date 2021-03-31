final : updateall
	gcc -w -g main.c branch.c vehicle.c -o final
updateall:
	touch *.c
	touch *.h
clean:
	rm final
