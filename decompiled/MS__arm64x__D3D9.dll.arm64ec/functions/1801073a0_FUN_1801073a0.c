/*
 * FUN_1801073a0 at 1801073a0
 * undefined FUN_1801073a0(void)
 * Address ranges: 1801073a0-1801073d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801073a0(char *param_1,uint param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *param_1;
  uVar2 = 0;
  while( true ) {
    if (cVar1 == -1) {
      return 0;
    }
    if ((byte)param_1[uVar2] == param_2) break;
    uVar2 = (ulonglong)((int)uVar2 + 1);
    cVar1 = param_1[uVar2];
  }
  return 1;
}

