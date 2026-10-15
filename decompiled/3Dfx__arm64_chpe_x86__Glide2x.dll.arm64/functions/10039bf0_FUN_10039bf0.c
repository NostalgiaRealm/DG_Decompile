/*
 * FUN_10039bf0 at 10039bf0
 * undefined FUN_10039bf0(void)
 * Address ranges: 10039bf0-10039c33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10039bf0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = FUN_1002b708(*(undefined4 *)(*param_1 + 0x315c));
  *(bool *)iVar1 = iVar2 != 0;
  return;
}

