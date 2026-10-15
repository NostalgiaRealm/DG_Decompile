/*
 * FUN_1003d450 at 1003d450
 * undefined FUN_1003d450(void)
 * Address ranges: 1003d450-1003d49b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d450(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = param_1[1];
  FUN_100287d0(iVar2,uVar1);
  FUN_1007a780(iVar2 + 0x29b0,uVar1,*(undefined4 *)(iVar2 + 0xd8));
  return;
}

