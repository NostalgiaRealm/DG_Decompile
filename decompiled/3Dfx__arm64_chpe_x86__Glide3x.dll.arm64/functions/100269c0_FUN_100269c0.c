/*
 * FUN_100269c0 at 100269c0
 * undefined FUN_100269c0(void)
 * Address ranges: 100269c0-10026a07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100269c0(undefined4 *param_1)

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
  *(undefined4 *)(iVar2 + 0x4038) = param_1[5];
  FUN_1000e3b8(iVar2,uVar3,uVar4,uVar1,uVar5,1);
  return;
}

