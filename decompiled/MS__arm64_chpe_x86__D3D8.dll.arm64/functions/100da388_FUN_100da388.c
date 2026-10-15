/*
 * FUN_100da388 at 100da388
 * undefined FUN_100da388(void)
 * Address ranges: 100da388-100da43f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100da388(int *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  code *extraout_w11;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_20 [4];
  
  local_20[0] = 0;
  uVar3 = ZEXT48(param_4);
  *(undefined8 *)(*param_1 + param_2 * 0x38) = param_3;
  uVar6 = *param_4;
  uVar5 = param_4[3];
  uVar4 = param_4[2];
  iVar1 = *param_1 + param_2 * 0x38;
  *(undefined8 *)(iVar1 + 0x10) = param_4[1];
  *(undefined8 *)(iVar1 + 8) = uVar6;
  *(undefined8 *)(iVar1 + 0x20) = uVar5;
  *(undefined8 *)(iVar1 + 0x18) = uVar4;
  *(undefined8 *)(iVar1 + 0x28) = param_4[4];
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2,uVar3 & 0xffffffff,local_20);
  *(undefined4 *)(*param_1 + param_2 * 0x38 + 0x30) = local_20[0];
  return;
}

