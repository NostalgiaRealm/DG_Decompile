/*
 * FUN_10014900 at 10014900
 * undefined FUN_10014900(void)
 * Address ranges: 10014900-100149a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10014900(int param_1)

{
  uint uVar1;
  int iVar2;
  code *extraout_w11;
  undefined1 auVar3 [16];
  undefined8 local_10;
  uint local_8;
  uint local_4;
  
  uVar1 = *(uint *)(param_1 + 0x1e8c);
  iVar2 = *(int *)(param_1 + 0x1e68);
  local_10 = 0;
  local_8 = *(uint *)(iVar2 + 0x14) >> (ulonglong)(uVar1 & 0x1f);
  if (local_8 == 0) {
    local_8 = 1;
  }
  local_4 = *(uint *)(iVar2 + 0x18) >> (ulonglong)(uVar1 & 0x1f);
  if (local_4 == 0) {
    local_4 = 1;
  }
  auVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                     (iVar2,uVar1 + *(int *)(param_1 + 0x1e90) * *(int *)(iVar2 + 0x2c));
  (*extraout_w11)(auVar3._0_8_ & 0xffffffff,auVar3._8_8_,&local_10);
  return;
}

