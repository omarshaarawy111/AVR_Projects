
_main:
	LDI        R27, 255
	OUT        SPL+0, R27
	LDI        R27, 0
	OUT        SPL+1, R27

;Grad Project.c,1 :: 		void main() {
;Grad Project.c,2 :: 		UART1_Init(9600);
	PUSH       R2
	PUSH       R3
	LDI        R27, 51
	OUT        UBRRL+0, R27
	LDI        R27, 0
	OUT        UBRRH+0, R27
	CALL       _UART1_Init+0
;Grad Project.c,3 :: 		UART_Write_Text("hello");
	LDI        R27, #lo_addr(?lstr1_Grad_32Project+0)
	MOV        R2, R27
	LDI        R27, hi_addr(?lstr1_Grad_32Project+0)
	MOV        R3, R27
	CALL       _UART_Write_Text+0
;Grad Project.c,5 :: 		}
L_end_main:
	POP        R3
	POP        R2
L__main_end_loop:
	JMP        L__main_end_loop
; end of _main
