/*
 * FUN_1002dbd2 at 1002dbd2
 * undefined4 __fastcall FUN_1002dbd2(void * param_1)
 * Address ranges: 1002dbd2-1002dcba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1002dbd2(void *param_1)

{
  undefined4 uVar1;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined2 local_2f;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  int local_10;
  
  local_24 = 0x4e47534f;
  local_18 = 8;
  local_20 = 0;
  local_1c = 0;
  FUN_10027e48(&local_14,0x210);
  FUN_1004874e(&local_14,&local_24,0x10);
  local_2c = 0x38;
  local_44 = 0x38;
  local_28 = 0;
  local_40 = 1;
  local_38 = 1;
  local_34 = 1;
  local_30 = 1;
  local_24 = 0;
  local_20 = 3;
  local_1c = 0;
  local_18 = 0xf;
  local_3c = 0;
  local_2f = 0xe;
  local_2d = 0;
  FUN_1004874e(&local_14,&local_2c,0x18);
  FUN_1004874e(&local_14,&local_44,0x18);
  FUN_1004874e(&local_14,(undefined4 *)s_SV_TARGET_10059658,10);
  FUN_1004874e(&local_14,(undefined4 *)&DAT_10053ef8,-(local_10 - (int)local_14) & 3);
  local_14[2] = 2;
  local_14[1] = (local_10 - (int)local_14) + -8;
  FUN_1004874e(param_1,local_14,local_10 - (int)local_14);
  uVar1 = thunk_FUN_1004f626(local_14);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

