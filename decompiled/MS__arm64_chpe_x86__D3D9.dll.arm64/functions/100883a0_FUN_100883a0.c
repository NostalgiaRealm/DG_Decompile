/*
 * FUN_100883a0 at 100883a0
 * undefined FUN_100883a0(void)
 * Address ranges: 100883a0-100883e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100883a0(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_2 + (param_3 + 0x82) * 4);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    iVar1 = FUN_10121590(param_2,4,1);
    *piVar2 = iVar1;
  }
  return iVar1;
}

