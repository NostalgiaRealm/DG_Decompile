/*
 * FUN_100096b0 at 100096b0
 * undefined FUN_100096b0(void)
 * Address ranges: 100096b0-1000979f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100096b0(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_5c = 0;
  uStack_4c = param_4 & 0xff;
  local_50 = 0x1000;
  local_48 = 8;
  uStack_40 = 0x1000000040;
  puVar1 = (undefined4 *)(param_1 + param_2 * 4 + 0xcfdc);
  local_60 = param_3;
  uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar5 = (*extraout_w11)(uVar4,&local_50,&local_60,puVar1);
  if (iVar5 < 0) {
    bVar3 = false;
  }
  else {
    local_28 = 0;
    local_38 = 0x100000000;
    uStack_30 = 0x10000000000;
    uVar4 = (*pcVar2)();
    iVar5 = (*extraout_w11_00)(uVar4,*puVar1,&local_38);
    bVar3 = -1 < iVar5;
  }
  return bVar3;
}

