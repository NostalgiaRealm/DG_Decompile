/*
 * FUN_1006ba18 at 1006ba18
 * undefined FUN_1006ba18(void)
 * Address ranges: 1006ba18-1006bad3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006ba18(int *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  code *extraout_w11;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined4 local_20 [4];
  
  local_20[0] = 0;
  *(undefined8 *)(*param_1 + param_2 * 0x40) = param_3;
  uVar4 = *param_4;
  uVar3 = param_4[3];
  uVar2 = param_4[2];
  iVar1 = *param_1 + param_2 * 0x40;
  *(undefined8 *)(iVar1 + 0x10) = param_4[1];
  *(undefined8 *)(iVar1 + 8) = uVar4;
  *(undefined8 *)(iVar1 + 0x20) = uVar3;
  *(undefined8 *)(iVar1 + 0x18) = uVar2;
  uVar2 = param_4[4];
  *(undefined8 *)(iVar1 + 0x30) = param_4[5];
  *(undefined8 *)(iVar1 + 0x28) = uVar2;
  *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_4 + 6);
  auVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(auVar5._0_8_ & 0xffffffff,auVar5._8_8_ & 0xffffffff,local_20);
  *(undefined4 *)(*param_1 + param_2 * 0x40 + 0x3c) = local_20[0];
  return;
}

