/*
 * FUN_10019e20 at 10019e20
 * undefined FUN_10019e20(void)
 * Address ranges: 10019e20-10019f77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019e20(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  FUN_1001c570(*(undefined4 *)(param_1 + 0x365c));
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  uVar4 = *(undefined8 *)param_2;
  uVar3 = 1;
  *(undefined8 *)(param_1 + 0x2b44) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x2b3c) = uVar4;
  *(undefined1 *)(param_1 + 0x3651) = 1;
  iVar2 = FUN_1001cae0(*(undefined4 *)(param_1 + 0x365c),*(undefined4 *)(param_1 + 0x2b1c));
  if (iVar2 != -1) {
    auVar5 = (*pcVar1)();
    iVar2 = (*extraout_w11_00)(auVar5._0_8_ & 0xffffffff,auVar5._8_8_ & 0xffffffff);
    if ((((*param_2 != 0) || (param_2[1] != 0)) || (param_2[2] != *(int *)(iVar2 + 0x20))) ||
       (uVar3 = 1, param_2[3] != *(int *)(iVar2 + 0x24))) {
      uVar3 = 0;
    }
  }
  if (uVar3 != (*(uint *)(param_1 + 0x2cbc) == 0)) {
    *(uint *)(param_1 + 0x2cbc) = uVar3 ^ 1;
    *(undefined1 *)(param_1 + 0x2daa) = 1;
  }
  return;
}

