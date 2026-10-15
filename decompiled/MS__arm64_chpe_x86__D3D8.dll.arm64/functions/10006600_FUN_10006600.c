/*
 * FUN_10006600 at 10006600
 * undefined FUN_10006600(void)
 * Address ranges: 10006600-10006813
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006600(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  *(undefined8 *)(param_1 + 0x58b0) = 0;
  *(undefined4 *)(param_1 + 0x58b8) = 0;
  FUN_10020ef0(param_1);
  FUN_10020f90(param_1);
  FUN_100211b0(param_1);
  FUN_100212d0(param_1);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa04) = 0xff;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  bVar2 = *(int *)(param_1 + 0x28) != 0;
  FUN_1001fcb0(param_1,7,bVar2);
  *(uint *)(param_1 + 0x2a8) = (uint)bVar2;
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3,(undefined8 *)(param_1 + 0x2c));
  puVar4 = (undefined4 *)(param_1 + 0x20c);
  uVar3 = (*pcVar1)();
  (*extraout_w11_00)(uVar3,*puVar4);
  puVar5 = (undefined1 *)(param_1 + 0x222);
  uVar3 = (*pcVar1)();
  (*extraout_w11_01)(uVar3,*puVar5);
  puVar5 = (undefined1 *)(DAT_1013ceec + 0x7e9);
  uVar3 = (*pcVar1)();
  (*extraout_w11_02)(uVar3,*puVar5);
  *(undefined8 *)(param_1 + 0x1ec) = 0xfff00000000;
  *(undefined4 *)(param_1 + 500) = 0x45000000;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0x45000000;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  return;
}

