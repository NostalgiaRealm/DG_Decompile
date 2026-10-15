/*
 * FUN_180015fb4 at 180015fb4
 * undefined __fastcall FUN_180015fb4(longlong * param_1, longlong param_2, undefined8 param_3, undefined8 param_4, undefined4 param_5, undefined4 param_6, tagPOINT param_7, undefined8 * param_8, undefined1 param_9, uint param_10, longlong param_11, RECT * param_12)
 * Address ranges: 180015fb4-18001607a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180015fb4(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,tagPOINT param_7,undefined8 *param_8,
                  undefined1 param_9,uint param_10,longlong param_11,RECT *param_12)

{
  undefined8 in_stack_ffffffffffffff68;
  undefined8 in_stack_ffffffffffffff70;
  undefined8 in_stack_ffffffffffffff98;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_11 == 0) {
    param_11 = param_1[0x11];
  }
  local_30 = param_5;
  local_2c = param_6;
  local_28 = (undefined4)param_1[0x18];
  local_24 = (undefined4)param_1[3];
  local_20 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_1c = (undefined4)param_1[0x16];
  local_18 = *(undefined4 *)((longlong)param_1 + 0xb4);
  local_48 = (int)param_1[0x15];
  local_44 = (undefined4)param_1[0x12];
  local_40 = *(undefined4 *)((longlong)param_1 + 0xac);
  local_3c = *(undefined4 *)((longlong)param_1 + 0x94);
  local_38 = param_11;
  FUN_180031628(param_1,&local_38,(longlong *)param_1[0x10],param_2,in_stack_ffffffffffffff68,
                in_stack_ffffffffffffff70,param_7,param_8,param_12,param_10,
                in_stack_ffffffffffffff98,param_9,&local_48);
  return;
}

