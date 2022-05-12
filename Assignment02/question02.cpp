INCLUDE Irvine32.inc

; Program Template (Assignment02.asm)
; Program Description: <Copying values of an array and also sum up values of the array>
; Author: <max-z00>
; Creation Date: <03-02-2022>
; Revisions: <03-012-2022>
; Date:Modified : <03-13-2022>
;
; This is not completed it will work fine but you will only get the sum of the array
; I have not gotten to part b)
  
.386
.model flat, stdcall
.stack 4096
ExitProcess Proto, deExitCode:DWORD
.data
;declare variables
source dword 1,2,3,4,5,6,7,8,9,10
count = LENGTHOF source
target dword count DUP(?)
;declare sum varable
sum dword ?
; declare msg variables
msgHex BYTE "Hexadecimal value of sum is : ",0
msgDec BYTE "Sum of the array Source equals:",0
.code
main PROC
;Begin
mov edi,0
mov ecx, count ;loop counter
mov eax,0 ;the result will be of 32 bits
L1:
add eax,source[edi] ;adding to eax address of source
add edi,TYPE source ;points to the next element
loop L1
mov sum,eax ;set the sum to the eax register
call DumpRegs ;dump registers
;write the hexadecimal vlaue
mov edx, offset msgHex
call WriteString
call Writehex
call Crlf
;write the decimal value for sum
mov edx, offset msgDec
call WriteString
call WriteDec
;Invoke exit
INVOKE ExitProcess,0
main ENDP
END main
