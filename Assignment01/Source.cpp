INCLUDE Irvine32.inc
 
; Program Template (Assignment01.asm) 
; Program Description: <Program to calculate the sum of A. Formula: A = (A + B) - (C + D)> 
; Author: <max-z00> 
; Creation Date: <2/18/2022> 
; Revisions:  <2/20/2022> 
; Date:Modified : <2/20/2022> 
 
.386
.model flat, stdcall
.stack 4096
ExitProcess PROTO, deExitCode:DWORD
 
.data
	; declare VarA-VarB and intial values
	varA DWORD 4000h
	varB DWORD 5000h
	varC DWORD 3000h
	varD DWORD 2500h 
 
.code
main PROC
	; asign each register eax,ebx,ecx,edx
	mov eax, varA	
	mov ebx, varB
	mov ecx, varC
	mov edx, varD
 
	add eax,ebx	; sum1 of valA and ValB
	add ecx,edx	; sum2 of valC and ValD
 
	sub eax,ecx	;subtract sum1 from sum2
 
 
 
 
 
	
	INVOKE ExitProcess, 0
 
main ENDP
END main
