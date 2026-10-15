/*
 * FUN_180016a80 at 180016a80
 * undefined __fastcall FUN_180016a80(longlong param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined8 param_7, undefined4 param_8)
 * Address ranges: 180016a80-180016af9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016a80(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined8 *)(param_1 + 0x118) = param_2;
  local_38 = FUN_180015f54(param_1);
  local_40 = param_5;
  local_30 = param_7;
  local_3c = param_6;
  local_28 = param_8;
  local_20 = 0;
  local_18 = 0;
  local_48 = param_3;
  local_44 = param_4;
  (**(code **)(**(longlong **)(param_1 + 0x100) + 0x58))(*(longlong **)(param_1 + 0x100),&local_48);
  return;
}

