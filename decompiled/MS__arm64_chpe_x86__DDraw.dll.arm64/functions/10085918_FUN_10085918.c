/*
 * FUN_10085918 at 10085918
 * undefined FUN_10085918(void)
 * Address ranges: 10085918-100859d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085918(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int extraout_w8;
  code *extraout_w11;
  undefined4 local_20 [4];
  
  local_20[0] = 0;
  *(undefined8 *)(*param_1 + param_2 * 0x38) = param_3;
  uVar4 = uRam100b5090;
  uVar3 = _DAT_100b5088;
  uVar2 = _DAT_100b5078;
  iVar1 = *param_1 + param_2 * 0x38;
  *(undefined8 *)(iVar1 + 0x10) = uRam100b5080;
  *(undefined8 *)(iVar1 + 8) = uVar2;
  *(undefined8 *)(iVar1 + 0x20) = uVar4;
  *(undefined8 *)(iVar1 + 0x18) = uVar3;
  *(undefined8 *)(iVar1 + 0x28) = DAT_100b5098;
  uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar5,extraout_w8 + 0x78,local_20);
  *(undefined4 *)(*param_1 + param_2 * 0x38 + 0x30) = local_20[0];
  return;
}

