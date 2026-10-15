/*
 * FUN_1008b610 at 1008b610
 * undefined FUN_1008b610(void)
 * Address ranges: 1008b610-1008b653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1008b610(undefined8 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_2 + 0x2fc);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    iVar1 = FUN_10121590(param_2,4,1);
    *piVar2 = iVar1;
  }
  return iVar1;
}

