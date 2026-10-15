/*
 * FUN_10019930 at 10019930
 * undefined FUN_10019930(void)
 * Address ranges: 10019930-10019a87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019930(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  FUN_1001bfa8(*(undefined4 *)(param_1 + 0x32dc));
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  uVar4 = *(undefined8 *)param_2;
  uVar3 = 1;
  *(undefined8 *)(param_1 + 0x2a08) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x2a00) = uVar4;
  *(undefined1 *)(param_1 + 0x32d1) = 1;
  iVar2 = FUN_1001c518(*(undefined4 *)(param_1 + 0x32dc),*(undefined4 *)(param_1 + 0x29e0));
  if (iVar2 != -1) {
    auVar5 = (*pcVar1)();
    iVar2 = (*extraout_w11_00)(auVar5._0_8_ & 0xffffffff,auVar5._8_8_ & 0xffffffff);
    if ((((*param_2 != 0) || (param_2[1] != 0)) || (param_2[2] != *(int *)(iVar2 + 0x20))) ||
       (uVar3 = 1, param_2[3] != *(int *)(iVar2 + 0x24))) {
      uVar3 = 0;
    }
  }
  if (uVar3 != (*(uint *)(param_1 + 0x2b7c) == 0)) {
    *(uint *)(param_1 + 0x2b7c) = uVar3 ^ 1;
    *(undefined1 *)(param_1 + 0x2c62) = 1;
  }
  return;
}

