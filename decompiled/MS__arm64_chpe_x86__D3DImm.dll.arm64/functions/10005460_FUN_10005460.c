/*
 * FUN_10005460 at 10005460
 * undefined FUN_10005460(void)
 * Address ranges: 10005460-10005513
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10005460(int param_1,undefined8 *param_2)

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
  if (*(char *)(param_1 + 0x224) == '\0') {
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
    *(undefined8 *)(param_1 + 0x144) = param_2[8];
    auVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar5._0_8_ & 0xffffffff,auVar5._8_8_ & 0xffffffff);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x214) + *(int *)(param_1 + 0x220) * 4);
    *(undefined8 *)(iVar1 + 0x914) = param_2[1];
    *(undefined8 *)(iVar1 + 0x90c) = uVar4;
    *(undefined8 *)(iVar1 + 0x924) = uVar3;
    *(undefined8 *)(iVar1 + 0x91c) = uVar2;
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    *(undefined8 *)(iVar1 + 0x934) = param_2[5];
    *(undefined8 *)(iVar1 + 0x92c) = uVar4;
    *(undefined8 *)(iVar1 + 0x944) = uVar3;
    *(undefined8 *)(iVar1 + 0x93c) = uVar2;
    *(undefined8 *)(iVar1 + 0x94c) = param_2[8];
    *(undefined1 *)(iVar1 + 0xa59) = 1;
  }
  return;
}

