/*
 * FUN_1001f480 at 1001f480
 * undefined FUN_1001f480(void)
 * Address ranges: 1001f480-1001f523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001f480(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  code *extraout_w11;
  undefined1 auVar3 [16];
  undefined8 local_10;
  uint local_8;
  uint local_4;
  
  param_1 = param_1 + param_2 * 4;
  uVar1 = *(uint *)(param_1 + 0x1f80);
  iVar2 = *(int *)(param_1 + 0x1f6c);
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
                     (iVar2,uVar1 + *(int *)(param_1 + 0x1f90) * *(int *)(iVar2 + 0x2c));
  (*extraout_w11)(auVar3._0_8_ & 0xffffffff,auVar3._8_8_,&local_10);
  return;
}

