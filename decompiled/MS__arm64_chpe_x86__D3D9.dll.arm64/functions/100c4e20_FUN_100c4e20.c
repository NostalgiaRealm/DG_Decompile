/*
 * FUN_100c4e20 at 100c4e20
 * undefined FUN_100c4e20(void)
 * Address ranges: 100c4e20-100c4e5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c4e20(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  iVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[4];
  *(undefined4 *)(iVar2 + 0xc38) = param_1[3];
  *(undefined4 *)(iVar2 + 0xc3c) = uVar4;
  FUN_10110388(uVar1,uVar3,0);
  return;
}

