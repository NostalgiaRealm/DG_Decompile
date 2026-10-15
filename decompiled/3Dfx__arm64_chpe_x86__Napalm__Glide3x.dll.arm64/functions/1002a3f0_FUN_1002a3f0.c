/*
 * FUN_1002a3f0 at 1002a3f0
 * undefined FUN_1002a3f0(void)
 * Address ranges: 1002a3f0-1002a437
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002a3f0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *param_1;
  iVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  *(undefined4 *)(iVar2 + 0x43d0) = param_1[5];
  FUN_10010258(iVar2,uVar3,uVar4,uVar1,uVar5,1);
  return;
}

