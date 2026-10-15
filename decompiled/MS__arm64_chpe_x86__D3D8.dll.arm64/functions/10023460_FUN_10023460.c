/*
 * FUN_10023460 at 10023460
 * undefined FUN_10023460(void)
 * Address ranges: 10023460-1002351b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10023460(int param_1,undefined8 *param_2)

{
  int iVar1;
  code *extraout_w11;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  if (*(char *)(param_1 + 0x220) == '\0') {
    *(undefined8 *)(param_1 + 0x10c) = param_2[1];
    *(undefined8 *)(param_1 + 0x104) = uVar4;
    *(undefined8 *)(param_1 + 0x11c) = uVar3;
    *(undefined8 *)(param_1 + 0x114) = uVar2;
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    *(undefined8 *)(param_1 + 300) = param_2[5];
    *(undefined8 *)(param_1 + 0x124) = uVar4;
    *(undefined8 *)(param_1 + 0x13c) = uVar3;
    *(undefined8 *)(param_1 + 0x134) = uVar2;
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 8);
    auVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar5._0_8_ & 0xffffffff,auVar5._8_8_ & 0xffffffff);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x21c) * 4);
    *(undefined8 *)(iVar1 + 0x48e8) = param_2[1];
    *(undefined8 *)(iVar1 + 0x48e0) = uVar4;
    *(undefined8 *)(iVar1 + 0x48f8) = uVar3;
    *(undefined8 *)(iVar1 + 0x48f0) = uVar2;
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    *(undefined8 *)(iVar1 + 0x4908) = param_2[5];
    *(undefined8 *)(iVar1 + 0x4900) = uVar4;
    *(undefined8 *)(iVar1 + 0x4918) = uVar3;
    *(undefined8 *)(iVar1 + 0x4910) = uVar2;
    *(undefined4 *)(iVar1 + 0x4920) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(iVar1 + 0x9399) = 1;
  }
  return;
}

