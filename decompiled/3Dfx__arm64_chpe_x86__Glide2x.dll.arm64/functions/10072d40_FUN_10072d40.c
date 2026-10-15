/*
 * FUN_10072d40 at 10072d40
 * undefined FUN_10072d40(void)
 * Address ranges: 10072d40-10072d6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10072d40(int param_1,int param_2)

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

