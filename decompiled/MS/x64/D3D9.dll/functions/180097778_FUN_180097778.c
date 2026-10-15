/*
 * FUN_180097778 at 180097778
 * undefined __fastcall FUN_180097778(longlong param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, longlong param_7, uint param_8, uint param_9, uint param_10, uint param_11, undefined8 param_12, undefined8 * param_13, undefined4 param_14, longlong * param_15, undefined8 * param_16)
 * Address ranges: 180097778-180097a93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180097778(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,longlong param_7,uint param_8,uint param_9,
                  uint param_10,uint param_11,undefined8 param_12,undefined8 *param_13,
                  undefined4 param_14,longlong *param_15,undefined8 *param_16)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint in_stack_ffffffffffffeed0;
  float local_1128;
  float local_1124;
  float local_1120;
  float local_111c;
  float local_1118;
  float local_1114;
  float local_1110;
  float local_110c;
  undefined4 local_1108;
  undefined4 local_1104;
  undefined4 local_1100;
  undefined4 local_10fc;
  undefined4 local_10f8;
  undefined4 local_10f4;
  undefined8 local_10f0;
  undefined8 local_10e8;
  undefined8 local_10e0;
  undefined8 local_10d8;
  longlong *local_10d0;
  undefined8 local_10c8;
  undefined8 local_10c0;
  undefined8 local_10b8;
  undefined8 local_10b0;
  undefined8 local_10a8;
  undefined4 local_10a0;
  undefined8 local_109c;
  undefined1 local_1088 [32];
  int local_1068;
  float local_1048 [1024];
  undefined8 uStack_48;
  
  uStack_48 = 0x180097797;
  uVar6 = (ulonglong)param_2;
  (**(code **)(*param_15 + 0x50))(param_15,local_1088);
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0x1ce48) = 0;
  *(undefined8 *)(param_1 + 0x1ce84) = 0;
  if (local_1068 == 0x3c) {
    uVar2 = ~-(uint)((&DAT_1800ff0a8)[uVar6] != '\0') & 0x4000 |
            *(uint *)(&DAT_1800ff0e0 + uVar6 * 4) & 0xf | 0x80000010;
    FUN_1800fbea0((undefined1 *)local_1048,0,0x1000);
    if (param_7 != 0) {
      do {
        uVar3 = (int)uVar5 * 4;
        uVar4 = (int)uVar5 + 1;
        bVar1 = *(byte *)(param_7 + 1 + uVar5 * 4);
        local_1048[uVar3] = (float)*(byte *)(param_7 + 2 + uVar5 * 4);
        local_1048[uVar3 + 1] = (float)bVar1;
        local_1048[uVar3 + 2] = (float)*(byte *)(param_7 + uVar5 * 4);
        local_1048[uVar3 + 3] = (float)*(byte *)(param_7 + 3 + uVar5 * 4);
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < 0x100);
    }
    in_stack_ffffffffffffeed0 = CONCAT31((int3)(in_stack_ffffffffffffeed0 >> 8),1);
    FUN_1800e4e34(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                  *(longlong **)(param_1 + 0x1cf20),
                  (longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x16d0),0x1000,0x2000,
                  (undefined8 *)local_1048,'\0','\x01');
    if (*(int *)(*(longlong *)(param_1 + 0x1cf18) + 4) == 0x10de) {
      FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                    *(ulonglong *)(param_1 + 0x1cf20),0,1,0);
    }
  }
  else if (local_1068 - 0x44U < 2) {
    uVar2 = 0x80004017;
  }
  else if ((local_1068 - 0x46U < 7) && ((0x49U >> (local_1068 - 0x46U & 0x1f) & 1) != 0)) {
    uVar2 = 0x80000016;
  }
  else {
    uVar2 = ~-(uint)((&DAT_1800ff0a8)[uVar6] != '\0') & 0x4000 |
            *(uint *)(&DAT_1800ff0e0 + uVar6 * 4) & 0xf | 0x80000010;
  }
  local_1128 = (float)param_8;
  local_10e8 = 0;
  local_10d0 = param_15;
  local_1124 = (float)param_9;
  local_10c8 = 0;
  local_10b0 = 0;
  local_109c = 0;
  local_1120 = (float)param_10;
  local_111c = (float)param_11;
  local_1100 = param_6;
  local_10f4 = param_5;
  local_10f0 = param_12;
  local_10a0 = param_14;
  if (param_13 == (undefined8 *)0x0) {
    local_10e0 = 0;
  }
  else {
    local_10e0 = *param_13;
  }
  local_10d8 = 0;
  if (param_16 == (undefined8 *)0x0) {
    local_10c0 = 0;
  }
  else {
    local_10c0 = *param_16;
  }
  local_10b8 = 0;
  local_10a8 = 0;
  local_1118 = local_1128;
  local_1114 = local_1124;
  local_1110 = local_1120;
  local_110c = local_111c;
  local_1108 = param_3;
  local_1104 = param_4;
  local_10fc = param_3;
  local_10f8 = param_4;
  FUN_180094c50(param_1,&local_1128,6,param_2,uVar2,'\0','\0',in_stack_ffffffffffffeed0 & 0xffffff00
               );
  return;
}

