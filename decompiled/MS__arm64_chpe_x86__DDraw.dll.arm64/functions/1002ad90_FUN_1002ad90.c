/*
 * FUN_1002ad90 at 1002ad90
 * undefined FUN_1002ad90(void)
 * Address ranges: 1002ad90-1002adcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002ad90(undefined4 *param_1)

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
  FUN_1006f598(uVar1,uVar3,0);
  return;
}

