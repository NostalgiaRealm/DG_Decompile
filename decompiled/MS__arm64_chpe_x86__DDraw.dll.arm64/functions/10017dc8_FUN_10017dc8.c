/*
 * FUN_10017dc8 at 10017dc8
 * undefined FUN_10017dc8(void)
 * Address ranges: 10017dc8-10017eb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10017dc8(int param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  int iVar4;
  undefined1 auStack_70 [32];
  int local_50;
  
  FUN_10020e88(param_3,1,1);
  if (param_3 != 0) {
    FUN_10091460(param_3,0x3c);
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2 & 0xffffffff,auStack_70);
  uVar3 = 1;
  if (local_50 == 0x2c || local_50 == 0x2d) {
    uVar3 = 2;
  }
  iVar4 = (int)(param_2 >> 0x20);
  if (iVar4 != -1) {
    iVar2 = *(int *)(param_1 + 0x14);
    iVar1 = iVar2 + 0x1c;
    (*(code *)PTR_FUN_100ba0a0)(iVar1);
    FUN_10072ec8(iVar2,iVar4,uVar3);
    (*(code *)PTR_FUN_100ba0f0)(iVar1);
  }
  FUN_10072660(*(undefined4 *)(param_1 + 0xc),param_2 & 0xffffffff);
  return;
}

