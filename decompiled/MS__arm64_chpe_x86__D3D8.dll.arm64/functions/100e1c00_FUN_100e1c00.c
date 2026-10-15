/*
 * FUN_100e1c00 at 100e1c00
 * undefined FUN_100e1c00(void)
 * Address ranges: 100e1c00-100e1cd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e1c00(int param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  
  FUN_100e0818(param_1);
  FUN_100e09c8(param_1);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar1 = *(int *)(param_1 + 0x910);
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  local_38 = (*extraout_w11)(uVar3);
  local_30 = (undefined4)param_2;
  local_38 = local_38 + (ulonglong)(uint)(iVar1 << 3);
  local_48 = local_38 + 4;
  local_40 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_50 = 0x200000002;
  uVar3 = (*pcVar2)();
  (*extraout_w11_00)(uVar3,2,&local_48,&local_50);
  return;
}

