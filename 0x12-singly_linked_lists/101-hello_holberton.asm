	global main   ;Entry point of the program
	extern printf  ;Reference to the printf function
main:  ;Where main function starts
	mov edi, format
	xor eax, eax
	call printf
	mov eax, 0
	ret

format: ; String definition 
	db `Hello, Holberton\n`,0  ; The string to print
