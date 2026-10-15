/*
 * FUN_10093140 at 10093140
 * undefined FUN_10093140(void)
 * Address ranges: 10093140-1009315f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10093140(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + -0xc0;
  }
  iVar2 = param_2 + -0xc0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}

