/*
 * FUN_10010310 at 10010310
 * undefined FUN_10010310(void)
 * Address ranges: 10010310-100104f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10010310(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  code *extraout_w11;
  int iVar6;
  undefined1 auVar7 [16];
  
  puVar1 = (uint *)(param_1 + 0x3620);
  uVar5 = *puVar1 & 0xffff0000 | *puVar1 & 0x3fff | 0x8000;
  *puVar1 = uVar5;
  iVar3 = param_2 + param_4;
  if (param_4 < 0) {
    uVar5 = uVar5 ^ 0x4000;
    *puVar1 = uVar5;
    iVar3 = param_2;
    param_2 = param_2 + param_4;
  }
  iVar6 = param_3 + param_5;
  if (param_5 < 0) {
    uVar5 = uVar5 ^ 0x8000;
    *puVar1 = uVar5;
    iVar6 = param_3;
    param_3 = param_3 + param_5;
  }
  iVar2 = param_3;
  if (*(int *)(param_1 + 0x2b34) != 0) {
    *puVar1 = uVar5 ^ 0x8000;
    iVar2 = *(int *)(param_1 + 0x9c) - iVar6;
    iVar6 = *(int *)(param_1 + 0x9c) - param_3;
  }
  *(undefined1 *)(param_1 + 0x3650) = 1;
  iVar4 = FUN_1001cae0(*(undefined4 *)(param_1 + 0x365c),*(undefined4 *)(param_1 + 0x2b1c));
  if (iVar4 != -1) {
    auVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar4 = (*extraout_w11)(auVar7._0_8_ & 0xffffffff,auVar7._8_8_ & 0xffffffff);
    *(float *)(param_1 + 0x2ce0) =
         (float)(*(int *)(iVar4 + 0x28) * param_2) / (float)*(uint *)(iVar4 + 0x20);
    *(float *)(param_1 + 0x2ce4) =
         (float)(*(int *)(iVar4 + 0x2c) * iVar2) / (float)*(uint *)(iVar4 + 0x24);
    *(float *)(param_1 + 0x2ce8) =
         (float)(uint)((iVar3 - param_2) * *(int *)(iVar4 + 0x28)) / (float)*(uint *)(iVar4 + 0x20);
    *(float *)(param_1 + 0x2cec) =
         (float)(uint)((iVar6 - iVar2) * *(int *)(iVar4 + 0x2c)) / (float)*(uint *)(iVar4 + 0x24);
    *(undefined1 *)(param_1 + 0x2dac) = 1;
  }
  return;
}

