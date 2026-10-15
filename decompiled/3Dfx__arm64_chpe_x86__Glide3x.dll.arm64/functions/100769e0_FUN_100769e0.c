/*
 * FUN_100769e0 at 100769e0
 * undefined FUN_100769e0(void)
 * Address ranges: 100769e0-10076a0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100769e0(int param_1,int param_2)

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

