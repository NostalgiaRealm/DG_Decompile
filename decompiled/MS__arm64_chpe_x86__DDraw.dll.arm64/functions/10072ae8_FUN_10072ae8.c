/*
 * FUN_10072ae8 at 10072ae8
 * undefined FUN_10072ae8(void)
 * Address ranges: 10072ae8-10072beb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10072ae8(int param_1,int param_2,ulonglong param_3,undefined4 param_4,char param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  code *extraout_w11;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined8 local_54;
  undefined4 local_48 [2];
  undefined8 local_40;
  ulonglong uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_54 = 0;
  local_48[0] = 1;
  local_70 = 0;
  pcVar1 = (char *)(param_1 + param_2 * 0x18 + 0x10);
  bVar2 = *pcVar1 != '\0';
  local_60 = 4;
  if (!bVar2) {
    local_60 = 1;
  }
  uStack_5c = 2;
  if (!bVar2) {
    uStack_5c = 0;
  }
  local_58 = (uint)bVar2;
  uStack_38 = param_3 & 0xffffffff;
  local_40 = 0x10000;
  local_20 = 0x100000000;
  local_30 = 0x1000100000001;
  uStack_28 = 0x100000000;
  local_18 = param_4;
  uVar4 = FUN_100729c8(param_1,param_2,&local_60,0,local_48,0,0,param_8,&local_70);
  if ((((uVar4 & 1) != 0) && (*pcVar1 != '\0')) && (param_5 != '\0')) {
    local_68 = 0;
    local_6c = 0;
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3,0,&local_68,&local_6c);
  }
  return local_70;
}

