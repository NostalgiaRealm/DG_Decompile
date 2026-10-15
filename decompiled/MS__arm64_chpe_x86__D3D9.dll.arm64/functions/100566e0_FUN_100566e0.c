/*
 * FUN_100566e0 at 100566e0
 * undefined FUN_100566e0(void)
 * Address ranges: 100566e0-1005676f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100566e0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  code *extraout_w11;
  undefined1 auVar3 [16];
  undefined8 local_10;
  uint local_8;
  uint local_4;
  
  param_1 = param_1 + param_2 * 4;
  iVar1 = *(int *)(param_1 + 0xfa80);
  uVar2 = *(uint *)(param_1 + 0xfa94);
  local_10 = 0;
  local_8 = *(uint *)(iVar1 + 0x14) >> (ulonglong)(uVar2 & 0x1f);
  if (local_8 == 0) {
    local_8 = 1;
  }
  local_4 = *(uint *)(iVar1 + 0x18) >> (ulonglong)(uVar2 & 0x1f);
  if (local_4 == 0) {
    local_4 = 1;
  }
  auVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                     (iVar1,uVar2 + *(int *)(iVar1 + 0x2c) * *(int *)(param_1 + 0xfaa4));
  (*extraout_w11)(auVar3._0_8_ & 0xffffffff,auVar3._8_8_,&local_10);
  return;
}

