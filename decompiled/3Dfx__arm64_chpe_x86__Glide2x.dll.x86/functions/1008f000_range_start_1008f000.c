/*
 * range_start_1008f000 at 1008f000
 * undefined range_start_1008f000(void)
 * Address ranges: 1008f000-1008f004
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_1008f005
 */

void range_start_1008f000(void)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = 'x';
  pcVar2 = (char *)(*(code *)0x12345678)(0x12345678,0x12345678,&stack0x00000004);
  if (cVar1 != '\0') {
    return;
  }
  cVar1 = (char)pcVar2;
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  (*(code *)0x12345678)(0x12345678);
  return;
}

