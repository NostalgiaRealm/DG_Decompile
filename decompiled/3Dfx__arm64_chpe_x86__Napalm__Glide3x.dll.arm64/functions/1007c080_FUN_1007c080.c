/*
 * FUN_1007c080 at 1007c080
 * undefined FUN_1007c080(void)
 * Address ranges: 1007c080-1007c0ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007c080(int param_1,int param_2)

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

