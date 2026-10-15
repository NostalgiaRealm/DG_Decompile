/*
 * FUN_10130610 at 10130610
 * undefined FUN_10130610(void)
 * Address ranges: 10130610-1013066b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10130610(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0) || (*(char *)(param_2 + -1 + param_1 + 0x1c) == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18) + (param_2 + -1) * 0x120;
    iVar2 = 0x80;
    if (*(int *)(iVar1 + 4) == 0) {
      iVar2 = 0;
    }
    iVar1 = iVar2 + iVar1 + DAT_1016d05c + 0x20;
  }
  return iVar1;
}

