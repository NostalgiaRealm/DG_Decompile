/*
 * FUN_1003c008 at 1003c008
 * undefined FUN_1003c008(void)
 * Address ranges: 1003c008-1003c13b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003c008(int param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  undefined4 extraout_w11_00;
  undefined8 local_50;
  int local_48;
  int iStack_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  
  (*(code *)PTR_FUN_1016c01c)();
  local_50 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x60);
  puVar4 = (undefined4 *)(param_1 + 0x5c);
  local_48 = *(int *)(param_1 + 0x1c) + -1;
  iStack_44 = *(int *)(param_1 + 0x20) + -1;
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,0,0,*puVar4,*puVar3,&local_50);
  local_3c = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  uVar2 = (ulonglong)*(uint *)(param_1 + 4);
  local_40 = *(undefined4 *)(param_1 + 0x6c);
  local_34 = FUN_1012ed18(*(uint *)(param_1 + 4) + 4);
  local_30 = 0x200000002;
  uStack_28 = 0;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = extraout_w11_00;
  }
  local_50 = CONCAT44(*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x70));
  local_48 = *(undefined4 *)(param_1 + 0x74);
  iStack_44 = *(int *)(param_1 + 0x20);
  FUN_1003e3f8(*(undefined4 *)(param_1 + 0x68),&local_40,uVar2 & 0xffffffff,uVar1);
  return;
}

