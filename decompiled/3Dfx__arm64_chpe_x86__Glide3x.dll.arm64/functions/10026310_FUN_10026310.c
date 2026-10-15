/*
 * FUN_10026310 at 10026310
 * undefined FUN_10026310(void)
 * Address ranges: 10026310-1002634f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10026310(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  iVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  *(undefined4 *)(iVar2 + 0x4038) = param_1[4];
  FUN_1000e308(iVar2,uVar3,uVar4,uVar1,1);
  return;
}

