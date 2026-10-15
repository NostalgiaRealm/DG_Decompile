/*
 * FUN_180037628 at 180037628
 * undefined8 __fastcall FUN_180037628(longlong * param_1)
 * Address ranges: 180037628-18003774e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180037628(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_58 = 0x4e47534f;
  local_4c = CONCAT44(local_4c._4_4_,8);
  local_18 = 0x210;
  local_50 = 0;
  local_10 = 1;
  local_28 = (undefined8 *)thunk_FUN_18005d6fc(0x210);
  local_20 = local_28;
  FUN_1800552ac((longlong *)&local_28,&local_58,0x10);
  local_50 = 0;
  local_58 = 0x38;
  local_4c = 3;
  local_44 = 0xf;
  local_40 = 0x38;
  local_3c = 1;
  local_34 = 1;
  local_30 = 1;
  local_2c = 0xe01;
  FUN_1800552ac((longlong *)&local_28,&local_58,0x18);
  FUN_1800552ac((longlong *)&local_28,(undefined8 *)&local_40,0x18);
  FUN_1800552ac((longlong *)&local_28,(undefined8 *)s_SV_TARGET_18006c730,10);
  FUN_1800552ac((longlong *)&local_28,(undefined8 *)&DAT_180063c40,
                (ulonglong)(-((int)local_20 - (int)local_28) & 3));
  puVar1 = local_28;
  *(int *)((longlong)local_28 + 4) = ((int)local_20 - (int)local_28) + -8;
  *(undefined4 *)(local_28 + 1) = 2;
  FUN_1800552ac(param_1,local_28,(longlong)local_20 - (longlong)local_28);
  uVar2 = FUN_18005d720(puVar1);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}

