/*
 * FUN_180182360 at 180182360
 * undefined FUN_180182360(void)
 * Address ranges: 180182360-180182437
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180182360(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5,ulonglong param_6,uint param_7,uint param_8,uint param_9,
                  undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  uint local_70 [2];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined8 local_20;
  
  local_70[0] = ((uint)(*(int *)(param_2 + (param_6 & 0xffffffff) * 4 + 0x280) != 0) |
                 (uint)(*(int *)(param_2 + (ulonglong)param_7 * 4 + 0x280) != 0) << 1 |
                 (uint)(*(int *)(param_2 + (ulonglong)param_8 * 4 + 0x280) != 0) << 2 |
                (uint)(*(int *)(param_2 + (ulonglong)param_9 * 4 + 0x280) != 0) << 3) &
                (uint)param_5;
  if (local_70[0] != 0) {
    local_20 = 0;
    local_28 = param_13;
    local_30 = param_12;
    local_38 = param_11;
    local_40 = param_10;
    local_48 = 0xe4;
    local_50 = *(undefined4 *)(param_2 + 0xbc);
    local_60 = 0;
    uStack_58 = 0x260;
    local_68 = *(undefined4 *)(param_2 + 0x2d8);
    FUN_180214c88(param_2 + 0x20,param_3,1,param_4,local_70,0x58);
  }
  return;
}

