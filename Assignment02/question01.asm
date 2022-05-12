INCLUDE Irvine32.inc

; Program Template (Assignment02.asm)
; Program Description: <Converting from Big Endian to Small Endian. >
; Author: <max-z00>
; Creation Date: <03-02-2022>
; Revisions: <03-08-2022>
; Date:Modified : <03-13-2022>

.386
.model flat, stdcall
.stack 4096
ExitProcess Proto, deExitCode:DWORD
.data
;declare variables
mybigEndian BYTE 12h,34h,56h,78h
mylittleEndian DWORD ?
.code
main PROC
mov ah, byte ptr mybigEndian+0 ;perform swap
mov al, byte ptr mybigEndian+1
mov word ptr mylittleEndian+2,ax
mov ah, byte ptr mybigEndian+2 ;perform swap
mov al, byte ptr mybigEndian+3
mov word ptr mylittleEndian+2,ax
mov eax, DWORD PTR mybigEndian ;move reverse bytes to eax
mov mylittleEndian, eax ;move reverse to mylittleEndian
;call dumps
call DumpRegs
;invoking Exit
invoke ExitProcess,0
main ENDP
END main
