/*
 * FUN_10029350 at 10029350
 * undefined FUN_10029350(void)
 * Address ranges: 10029350-1002937f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029350(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = param_1[1];
  *(undefined4 *)(iVar2 + 0x43d0) = param_1[3];
  FUN_1000fcf0(iVar2,uVar1,1);
  return;
}

