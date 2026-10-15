/*
 * FUN_10029d40 at 10029d40
 * undefined FUN_10029d40(void)
 * Address ranges: 10029d40-10029d7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029d40(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  iVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  *(undefined4 *)(iVar2 + 0x43d0) = param_1[4];
  FUN_100101a8(iVar2,uVar3,uVar4,uVar1,1);
  return;
}

