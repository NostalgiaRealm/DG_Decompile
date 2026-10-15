/*
 * range_start_10093000 at 10093000
 * undefined range_start_10093000(void)
 * Address ranges: 10093000-10093004
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_10093005
 */

void range_start_10093000(void)

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

