/*
 * FUN_1800a2ac4 at 1800a2ac4
 * undefined __fastcall FUN_1800a2ac4(longlong param_1)
 * Address ranges: 1800a2ac4-1800a2bc6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a2ac4(longlong param_1)

{
  longlong lVar1;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  local_23 = *(int *)(lVar1 + 0x18) == 1;
  local_18 = *(undefined4 *)(lVar1 + 0xde);
  local_1c = *(undefined4 *)(lVar1 + 0xda);
  local_24 = *(undefined1 *)(lVar1 + 0x26);
  local_2c = *(undefined4 *)(&DAT_180100388 + (longlong)*(int *)(lVar1 + 0xce) * 4);
  local_34 = 0;
  local_38 = *(undefined4 *)(&DAT_1801003a0 + (longlong)*(int *)(lVar1 + 0x1c) * 4);
  local_68 = *(undefined8 *)(param_1 + 0x118);
  local_60 = *(undefined4 *)(param_1 + 0x20);
  local_58 = *(undefined8 *)(param_1 + 0x130);
  local_50 = *(undefined4 *)(param_1 + 0x148);
  local_4c = *(undefined4 *)(param_1 + 0x14c);
  local_48 = *(undefined4 *)(param_1 + 0x128);
  local_44 = *(undefined4 *)(param_1 + 300);
  local_40 = *(undefined4 *)(param_1 + 0x150);
  local_3c = *(undefined4 *)(param_1 + 0x154);
  local_30 = *(undefined4 *)(param_1 + 0x158);
  local_28 = *(undefined4 *)(param_1 + 0x15c);
  local_20 = 0;
  FUN_1800dfe90(*(LARGE_INTEGER *)(param_1 + 0x50),&local_68);
  return;
}

