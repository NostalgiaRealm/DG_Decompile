/*
 * FUN_10028f80 at 10028f80
 * undefined FUN_10028f80(void)
 * Address ranges: 10028f80-1002903b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028f80(int param_1,undefined8 *param_2)

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
  if (*(char *)(param_1 + 0x3c4) == '\0') {
    *(undefined8 *)(param_1 + 0x2b0) = param_2[1];
    *(undefined8 *)(param_1 + 0x2a8) = uVar4;
    *(undefined8 *)(param_1 + 0x2c0) = uVar3;
    *(undefined8 *)(param_1 + 0x2b8) = uVar2;
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    *(undefined8 *)(param_1 + 0x2d0) = param_2[5];
    *(undefined8 *)(param_1 + 0x2c8) = uVar4;
    *(undefined8 *)(param_1 + 0x2e0) = uVar3;
    *(undefined8 *)(param_1 + 0x2d8) = uVar2;
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 8);
    auVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar5._0_8_ & 0xffffffff,auVar5._8_8_ & 0xffffffff);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x3b4) + *(int *)(param_1 + 0x3c0) * 4);
    *(undefined8 *)(iVar1 + 0x49f8) = param_2[1];
    *(undefined8 *)(iVar1 + 0x49f0) = uVar4;
    *(undefined8 *)(iVar1 + 0x4a08) = uVar3;
    *(undefined8 *)(iVar1 + 0x4a00) = uVar2;
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    *(undefined8 *)(iVar1 + 0x4a18) = param_2[5];
    *(undefined8 *)(iVar1 + 0x4a10) = uVar4;
    *(undefined8 *)(iVar1 + 0x4a28) = uVar3;
    *(undefined8 *)(iVar1 + 0x4a20) = uVar2;
    *(undefined4 *)(iVar1 + 0x4a30) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(iVar1 + 0xac15) = 1;
  }
  return;
}

