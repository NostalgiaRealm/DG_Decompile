/*
 * FUN_10072d70 at 10072d70
 * undefined FUN_10072d70(void)
 * Address ranges: 10072d70-10072d9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10072d70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + param_2 * 0x16c0 + 0x19cc);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar2 + 4;
  }
  return iVar1;
}

