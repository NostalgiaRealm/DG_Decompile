/*
 * FUN_180094170 at 180094170
 * undefined __fastcall FUN_180094170(longlong * param_1)
 * Address ranges: 180094170-1800941ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180094170(longlong *param_1)

{
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  local_38 = *(longlong *)((longlong)param_1 + 0x14);
  local_30 = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_2c = (undefined4)param_1[4];
  local_28 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_24 = (undefined4)param_1[5];
  local_20 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_1c = (undefined4)param_1[6];
  local_18 = *(undefined4 *)((longlong)param_1 + 0x34);
  local_14 = (undefined1)param_1[7];
  FUN_180099204(*param_1,(undefined8 *)param_1[1],(int)param_1[2],&local_38);
  return;
}

