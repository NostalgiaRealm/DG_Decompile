/*
 * FUN_10095ee0 at 10095ee0
 * undefined FUN_10095ee0(void)
 * Address ranges: 10095ee0-10095fd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10095ee0(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 int param_6,int param_7,int param_8,int param_9,undefined4 param_10,
                 undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
                 undefined4 param_15,undefined4 param_16,undefined4 param_17)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  bVar1 = 2;
  if (*(int *)(param_2 + param_7 * 4 + 0x26c) == 0) {
    bVar1 = 0;
  }
  bVar2 = 4;
  if (*(int *)(param_2 + param_8 * 4 + 0x26c) == 0) {
    bVar2 = 0;
  }
  bVar3 = 8;
  if (*(int *)(param_2 + param_9 * 4 + 0x26c) == 0) {
    bVar3 = 0;
  }
  local_40 = (uint)(byte)(*(int *)(param_2 + param_6 * 4 + 0x26c) != 0 | bVar1 | bVar2 | bVar3) &
             param_5 & 0xff;
  if (local_40 != 0) {
    local_50 = param_2 + 0x18;
    local_1c = param_17;
    uStack_18 = 0;
    local_20 = param_15;
    local_24 = param_13;
    local_28 = param_11;
    local_2c = 0xe4;
    local_30 = *(undefined4 *)(param_2 + 0xac);
    local_38 = 0;
    uStack_34 = 0x260;
    uStack_3c = *(undefined4 *)(param_2 + 0x2c4);
    local_48 = 1;
    uStack_4c = param_3;
    uStack_44 = param_4;
    FUN_10122a88(&local_50,0x3c);
  }
  return;
}

