/*
 * FUN_100883e8 at 100883e8
 * undefined FUN_100883e8(void)
 * Address ranges: 100883e8-1008842f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100883e8(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_2 + (param_3 + 0x88) * 4);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    iVar1 = FUN_10121590(param_2,4,1);
    *piVar2 = iVar1;
  }
  return iVar1;
}

