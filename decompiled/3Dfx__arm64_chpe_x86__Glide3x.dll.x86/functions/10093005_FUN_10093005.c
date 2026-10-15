/*
 * FUN_10093005 at 10093005
 * undefined FUN_10093005(void)
 * Address ranges: 10093005-10093051
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10093005(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = 'x';
  pcVar2 = (char *)(*(code *)0x12345678)
                             (0x12345678,0x12345678,&stack0x00000008,param_1,0x12345678,
                              &stack0x00000000);
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

