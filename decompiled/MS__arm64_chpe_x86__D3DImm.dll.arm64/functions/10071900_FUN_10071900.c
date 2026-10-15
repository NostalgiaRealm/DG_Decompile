/*
 * FUN_10071900 at 10071900
 * undefined FUN_10071900(void)
 * Address ranges: 10071900-1007199f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10071900(int param_1,int param_2,ulonglong param_3)

{
  bool bVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  uint local_50;
  undefined8 local_4c;
  undefined4 local_40 [2];
  undefined8 local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_4c = 0;
  local_40[0] = 1;
  local_10 = 0;
  local_60[0] = 0;
  bVar1 = *(char *)(param_1 + param_2 * 0x18 + 0x10) != '\0';
  local_58 = 4;
  if (!bVar1) {
    local_58 = 1;
  }
  uStack_54 = 2;
  if (!bVar1) {
    uStack_54 = 0;
  }
  local_50 = (uint)bVar1;
  uStack_30 = param_3 & 0xffffffff;
  local_38 = 0x10000;
  local_18 = 0x100000000;
  local_28 = 0x1000100000001;
  uStack_20 = 0x100000000;
  FUN_100717e0(param_1,param_2,&local_58,0,local_40,0,in_x6,in_x7,local_60);
  return local_60[0];
}

