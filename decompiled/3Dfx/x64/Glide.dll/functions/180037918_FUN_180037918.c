/*
 * FUN_180037918 at 180037918
 * undefined1 __fastcall FUN_180037918(longlong * param_1, longlong param_2)
 * Address ranges: 180037918-180037acf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180037918(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined1 local_94;
  undefined1 local_93;
  undefined2 local_92;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined2 local_7a;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined2 local_62;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined2 local_4a;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined2 local_32;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined2 local_1a;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_93 = *(undefined1 *)(param_2 + 0x45);
  local_7b = *(undefined1 *)(param_2 + 0x44);
  local_63 = *(undefined1 *)(param_2 + 0x43);
  local_4b = *(undefined1 *)(param_2 + 0x40);
  local_33 = *(undefined1 *)(param_2 + 0x41);
  local_1b = *(undefined1 *)(param_2 + 0x42);
  local_68 = 2;
  local_2c = 2;
  local_18 = 0x4e475349;
  local_c = 8;
  local_10 = 6;
  local_a8 = 0x98;
  local_a0 = 1;
  local_9c = 3;
  local_94 = 0xf;
  local_92 = 0;
  local_90 = 0xa4;
  local_8c = 3;
  local_84 = 3;
  local_80 = 1;
  local_7c = 7;
  local_7a = 0;
  local_78 = 0xad;
  local_70 = 0;
  local_6c = 3;
  local_64 = 0xf;
  local_62 = 0;
  local_60 = 0xa4;
  local_58 = 0;
  local_54 = 3;
  local_50 = 3;
  local_4c = 7;
  local_4a = 0;
  local_48 = 0xa4;
  local_44 = 1;
  local_3c = 3;
  local_38 = 4;
  local_34 = 7;
  local_32 = 0;
  local_30 = 0xa4;
  local_24 = 3;
  local_20 = 5;
  local_1c = 7;
  local_1a = 0;
  local_b8 = 0x210;
  local_b0 = 1;
  local_c8 = (undefined8 *)thunk_FUN_18005db9c(0x210);
  local_c0 = local_c8;
  FUN_180055754((longlong *)&local_c8,&local_18,0x10);
  FUN_180055754((longlong *)&local_c8,&local_a8,0x90);
  FUN_180055754((longlong *)&local_c8,(undefined8 *)"SV_POSITION",0x1b);
  FUN_180055754((longlong *)&local_c8,(undefined8 *)&DAT_180063c3c,
                (ulonglong)(-((int)local_c0 - (int)local_c8) & 3));
  puVar1 = local_c8;
  *(int *)((longlong)local_c8 + 4) = ((int)local_c0 - (int)local_c8) + -8;
  FUN_180055754(param_1,local_c8,(longlong)local_c0 - (longlong)local_c8);
  FUN_18005dbc0(puVar1);
  return 1;
}

