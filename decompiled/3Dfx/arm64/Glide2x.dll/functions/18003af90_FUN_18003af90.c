/*
 * FUN_18003af90 at 18003af90
 * undefined8 __cdecl FUN_18003af90(longlong * param_1)
 * Address ranges: 18003af90-18003b08f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18003af90(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *puStack_28;
  undefined8 local_20;
  undefined1 local_18;
  
  local_60 = 0x4e47534f;
  uStack_58 = 0x800000000;
  local_20 = 0x210;
  local_18 = 1;
  local_30 = (undefined8 *)thunk_FUN_18005fb88(0x210);
  puStack_28 = local_30;
  FUN_180056cf8((longlong *)&local_30,&local_60,0x10);
  local_60 = 0x38;
  uStack_58 = 0x300000000;
  local_50 = 0xf00000000;
  local_48 = 0x100000038;
  uStack_40 = 0x100000000;
  local_38 = 0xe0100000001;
  FUN_180056cf8((longlong *)&local_30,&local_60,0x18);
  FUN_180056cf8((longlong *)&local_30,&local_48,0x18);
  FUN_180056cf8((longlong *)&local_30,(undefined8 *)s_SV_TARGET_18006b720,10);
  FUN_180056cf8((longlong *)&local_30,(undefined8 *)&DAT_180064bf0,
                (ulonglong)(uint)-((int)puStack_28 - (int)local_30) & 3);
  puVar1 = local_30;
  *(int *)((longlong)local_30 + 4) = ((int)puStack_28 - (int)local_30) + -8;
  *(undefined4 *)(local_30 + 1) = 2;
  FUN_180056cf8(param_1,local_30,(longlong)puStack_28 - (longlong)local_30);
  thunk_FUN_18005fbc8(puVar1);
  return 1;
}

