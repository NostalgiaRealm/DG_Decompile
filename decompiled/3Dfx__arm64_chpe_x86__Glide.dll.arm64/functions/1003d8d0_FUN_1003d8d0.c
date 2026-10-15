/*
 * FUN_1003d8d0 at 1003d8d0
 * undefined FUN_1003d8d0(void)
 * Address ranges: 1003d8d0-1003d91b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d8d0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = param_1[1];
  FUN_10028c50(iVar2,uVar1);
  FUN_1007ac00(iVar2 + 0x29b0,uVar1,*(undefined4 *)(iVar2 + 0xd8));
  return;
}

