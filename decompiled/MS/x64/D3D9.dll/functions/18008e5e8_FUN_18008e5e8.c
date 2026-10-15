/*
 * FUN_18008e5e8 at 18008e5e8
 * undefined8 * __fastcall FUN_18008e5e8(undefined8 * param_1, longlong param_2, undefined4 param_3, undefined4 param_4, uint param_5, uint param_6, int param_7, uint param_8, undefined1 param_9)
 * Address ranges: 18008e5e8-18008e6f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18008e5e8(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             uint param_5,uint param_6,int param_7,uint param_8,undefined1 param_9)

{
  longlong lVar1;
  
  FUN_1800931dc(param_1,param_2,*(uint *)(param_2 + 0x28),param_3,param_4,param_5,param_6,param_7,
                param_8,param_9);
  *(undefined4 *)(param_1 + 0x1d) = 1;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_180102d98;
  param_1[0x1c] = &PTR_LAB_180102cf0;
  param_1[0x22] = param_2;
  lVar1 = *(longlong *)(param_2 + 0x1cf10);
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 4);
  param_1[0x23] = lVar1;
  param_1[0x25] = lVar1 + 0x6b0 + (ulonglong)*(uint *)(param_1 + 4) * 0x18c0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x100;
  *(undefined4 *)(param_1 + 0x1d) = 1;
  return param_1;
}

