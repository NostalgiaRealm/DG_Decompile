/*
 * FUN_1800dabb0 at 1800dabb0
 * bool __fastcall FUN_1800dabb0(longlong param_1, longlong param_2, undefined4 * param_3, int param_4, undefined8 param_5)
 * Address ranges: 1800dabb0-1800dac88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800dabb0(longlong param_1,longlong param_2,undefined4 *param_3,int param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  
  if (param_4 == 0) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(&DAT_180100410 + (longlong)param_4 * 4);
    if ((local_1c - 3U < 2) && (*(char *)(param_1 + 0x313) != '\0')) {
      uVar1 = 1;
      local_18 = 0x802;
      goto LAB_1800dac05;
    }
  }
  uVar1 = 0;
  local_18 = 2;
LAB_1800dac05:
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  uStack_48 = param_3[4];
  uStack_44 = param_3[5];
  uStack_40 = param_3[6];
  *(undefined1 *)(param_2 + 0xd6c) = uVar1;
  local_3c = 1;
  local_34 = 0x60;
  local_30 = 2;
  local_28 = param_5;
  local_20 = 1;
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x50))
            (*(longlong **)(param_1 + 0x688),
             *(undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) * 0x18c0 + 0x6b0 + param_1),
             &local_58,param_2 + 8);
  return *(longlong *)(param_2 + 8) != 0;
}

