/*
 * FUN_10007270 at 10007270
 * undefined FUN_10007270(void)
 * Address ranges: 10007270-10007483
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10007270(int param_1,undefined4 param_2,undefined4 param_3)

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
  
  *(undefined8 *)(param_1 + 0x6690) = 0;
  *(undefined4 *)(param_1 + 0x6698) = 0;
  FUN_10026e40(param_1);
  FUN_10026ee0(param_1);
  FUN_10027080(param_1);
  FUN_100271a0(param_1);
  *(undefined8 *)(param_1 + 0x2c4) = 0;
  *(undefined8 *)(param_1 + 700) = 0;
  *(undefined8 *)(param_1 + 0x2d4) = 0;
  *(undefined8 *)(param_1 + 0x2cc) = 0;
  *(undefined8 *)(param_1 + 0x2e4) = 0;
  *(undefined8 *)(param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2a8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xcc8) = 0xff;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  bVar2 = *(int *)(param_1 + 0x28) != 0;
  FUN_10025700(param_1,7,bVar2);
  *(uint *)(param_1 + 0x44c) = (uint)bVar2;
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3,(undefined8 *)(param_1 + 0x2c));
  puVar4 = (undefined4 *)(param_1 + 0x3b0);
  uVar3 = (*pcVar1)();
  (*extraout_w11_00)(uVar3,*puVar4);
  puVar5 = (undefined1 *)(param_1 + 0x3c6);
  uVar3 = (*pcVar1)();
  (*extraout_w11_01)(uVar3,*puVar5);
  puVar5 = (undefined1 *)(DAT_10170ad0 + 0x7e9);
  uVar3 = (*pcVar1)();
  (*extraout_w11_02)(uVar3,*puVar5);
  *(undefined8 *)(param_1 + 0x390) = 0xfff00000000;
  *(undefined4 *)(param_1 + 0x398) = 0x45000000;
  *(undefined4 *)(param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0x45000000;
  *(undefined8 *)(param_1 + 0x3a4) = 0;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  return;
}

