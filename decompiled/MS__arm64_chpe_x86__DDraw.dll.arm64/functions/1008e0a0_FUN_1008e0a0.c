/*
 * FUN_1008e0a0 at 1008e0a0
 * undefined FUN_1008e0a0(void)
 * Address ranges: 1008e0a0-1008e0fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1008e0a0(int param_1,int param_2)

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
    iVar1 = iVar2 + iVar1 + DAT_100bb02c + 0x20;
  }
  return iVar1;
}

