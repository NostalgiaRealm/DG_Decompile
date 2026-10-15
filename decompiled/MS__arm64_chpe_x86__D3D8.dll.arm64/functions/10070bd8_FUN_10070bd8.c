/*
 * FUN_10070bd8 at 10070bd8
 * undefined FUN_10070bd8(void)
 * Address ranges: 10070bd8-10070c1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10070bd8(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_2 + (param_3 + 0x84) * 4);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    iVar1 = FUN_100ee580(param_2,4,1);
    *piVar2 = iVar1;
  }
  return iVar1;
}

