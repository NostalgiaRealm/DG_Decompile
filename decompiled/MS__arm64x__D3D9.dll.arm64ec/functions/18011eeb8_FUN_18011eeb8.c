/*
 * FUN_18011eeb8 at 18011eeb8
 * undefined FUN_18011eeb8(void)
 * Address ranges: 18011eeb8-18011efbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011eeb8(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,int param_5
                  ,undefined4 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong local_160 [3];
  undefined *local_148;
  undefined8 local_140;
  undefined *puStack_138;
  ulonglong local_130;
  ulonglong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  
  uVar1 = *(uint *)(param_3 + 0xc);
  local_160[1] = 0;
  local_160[2] = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110._0_2_ = 0;
  local_140 = 0;
  local_128 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  local_e0 = 0;
  param_2 = param_2 + (ulonglong)(uVar1 * param_5);
  local_130 = (ulonglong)uVar1;
  uStack_118 = 0x200000200000000;
  local_160[0] = param_2 + (ulonglong)*(byte *)(param_3 + 0x17) * 4;
  local_148 = &DAT_18022a470;
  if (*(char *)(param_3 + 0x8c) != -1) {
    local_128 = (ulonglong)uVar1;
    local_148 = (undefined *)(param_2 + (ulonglong)*(byte *)(param_3 + 0x8f) * 4);
    uStack_118 = CONCAT17(*(undefined1 *)(param_3 + 0x90),0x200000000);
  }
  uVar2 = uStack_118;
  puStack_138 = &DAT_18022a468;
  if (*(char *)(param_3 + 0x24) != -1) {
    local_120 = (ulonglong)uVar1;
    puStack_138 = (undefined *)(param_2 + (ulonglong)*(byte *)(param_3 + 0x27) * 4);
    uStack_110._0_2_ = (ushort)*(byte *)(param_3 + 0x28) << 8;
  }
  if (*(char *)(param_3 + 0x1c) != -1) {
    local_160[2] = param_2 + (ulonglong)*(byte *)(param_3 + 0x1f) * 4;
    local_120 = CONCAT44(uVar1,(undefined4)local_120);
    uStack_118 = CONCAT44(uStack_118._4_4_,(uint)*(byte *)(param_3 + 0x1d));
    uVar3 = uStack_118;
    uStack_118._7_1_ = SUB81(uVar2,7);
    uStack_118._0_7_ = CONCAT16(*(undefined1 *)(param_3 + 0x20),(int6)uVar3);
  }
  lStack_f8 = param_1 + 0x3d4;
  uStack_110 = (ulonglong)CONCAT23(1,CONCAT12(*(int *)(param_3 + 4) != 0,(short)uStack_110));
  FUN_1801260c8(param_1,local_160,0,param_6);
  return;
}

