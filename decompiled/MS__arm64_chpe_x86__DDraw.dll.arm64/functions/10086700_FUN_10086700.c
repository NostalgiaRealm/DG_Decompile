/*
 * FUN_10086700 at 10086700
 * undefined FUN_10086700(void)
 * Address ranges: 10086700-1008672b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10086700(int param_1,int param_2)

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

