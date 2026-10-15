/*
 * FUN_1012a940 at 1012a940
 * undefined FUN_1012a940(void)
 * Address ranges: 1012a940-1012a96b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1012a940(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + param_2 * 0x16c0 + 0x19c4);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar2 + 4;
  }
  return iVar1;
}

