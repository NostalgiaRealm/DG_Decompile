/*
 * FUN_18003add0 at 18003add0
 * undefined8 __cdecl FUN_18003add0(longlong * param_1, longlong param_2)
 * Address ranges: 18003add0-18003af5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18003add0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *local_d0;
  undefined8 *puStack_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined2 local_9a;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined2 local_82;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined2 local_6a;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined2 local_52;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined2 local_3a;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined2 local_22;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_a0 = 0;
  local_9a = 0;
  local_20 = 0x4e475349;
  uStack_18 = 0x800000006;
  local_82 = 0;
  local_b0 = 0x98;
  uStack_a8 = 0x300000001;
  local_9b = *(undefined1 *)(param_2 + 0x45);
  local_6a = 0;
  local_84 = 7;
  local_9c = 0xf;
  local_98 = 0x3000000a4;
  uStack_90 = 0x300000000;
  local_83 = *(undefined1 *)(param_2 + 0x44);
  local_88 = 1;
  local_6c = 0xf;
  local_54 = 7;
  local_80 = 0xad;
  uStack_78 = 0x300000000;
  local_70 = 2;
  local_6b = *(undefined1 *)(param_2 + 0x43);
  local_52 = 0;
  local_3c = 7;
  local_3a = 0;
  local_68 = 0xa4;
  uStack_60 = 0x300000000;
  local_58 = 3;
  local_53 = *(undefined1 *)(param_2 + 0x40);
  local_24 = 7;
  local_22 = 0;
  local_b8 = 1;
  local_50 = 0x1000000a4;
  uStack_48 = 0x300000000;
  local_40 = 4;
  local_3b = *(undefined1 *)(param_2 + 0x41);
  local_38 = 0x2000000a4;
  uStack_30 = 0x300000000;
  local_28 = 5;
  local_23 = *(undefined1 *)(param_2 + 0x42);
  local_c0 = 0x210;
  local_d0 = (undefined8 *)thunk_FUN_18005fb88(0x210);
  puStack_c8 = local_d0;
  FUN_180056cf8((longlong *)&local_d0,&local_20,0x10);
  FUN_180056cf8((longlong *)&local_d0,&local_b0,0x90);
  FUN_180056cf8((longlong *)&local_d0,(undefined8 *)"SV_POSITION",0x1b);
  FUN_180056cf8((longlong *)&local_d0,(undefined8 *)&DAT_180064bec,
                (ulonglong)(uint)-((int)puStack_c8 - (int)local_d0) & 3);
  puVar1 = local_d0;
  *(int *)((longlong)local_d0 + 4) = ((int)puStack_c8 - (int)local_d0) + -8;
  FUN_180056cf8(param_1,local_d0,(longlong)puStack_c8 - (longlong)local_d0);
  thunk_FUN_18005fbc8(puVar1);
  return 1;
}

