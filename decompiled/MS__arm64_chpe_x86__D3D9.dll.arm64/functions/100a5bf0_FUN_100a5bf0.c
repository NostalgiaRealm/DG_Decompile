/*
 * FUN_100a5bf0 at 100a5bf0
 * undefined FUN_100a5bf0(void)
 * Address ranges: 100a5bf0-100a5c0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100a5bf0(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + -0x88;
  }
  iVar2 = param_2 + -0x88;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}

