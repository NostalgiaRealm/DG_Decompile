/*
 * FUN_10023e79 at 10023e79
 * undefined4 __fastcall FUN_10023e79(void * param_1, int param_2)
 * Address ranges: 10023e79-10024027
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10023e79(void *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined1 local_8f;
  undefined2 local_8e;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined2 local_76;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined2 local_5e;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined2 local_46;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_16;
  undefined4 *local_14;
  int local_10;
  
  local_8f = *(undefined1 *)(param_2 + 0x3d);
  local_77 = *(undefined1 *)(param_2 + 0x3c);
  local_5f = *(undefined1 *)(param_2 + 0x3b);
  local_98 = 3;
  local_88 = 3;
  local_80 = 3;
  local_68 = 3;
  local_50 = 3;
  local_4c = 3;
  local_47 = *(undefined1 *)(param_2 + 0x38);
  local_2f = *(undefined1 *)(param_2 + 0x39);
  local_8c = 0xa4;
  local_5c = 0xa4;
  local_44 = 0xa4;
  local_17 = *(undefined1 *)(param_2 + 0x3a);
  local_2c = 0xa4;
  local_64 = 2;
  local_28 = 2;
  local_b4 = 0x4e475349;
  local_b0 = 0;
  local_a8 = 8;
  local_ac = 6;
  local_a4 = 0x98;
  local_a0 = 0;
  local_9c = 1;
  local_94 = 0;
  local_90 = 0xf;
  local_8e = 0;
  local_84 = 0;
  local_7c = 1;
  local_78 = 7;
  local_76 = 0;
  local_74 = 0xad;
  local_70 = 0;
  local_6c = 0;
  local_60 = 0xf;
  local_5e = 0;
  local_58 = 0;
  local_54 = 0;
  local_48 = 7;
  local_46 = 0;
  local_40 = 1;
  local_3c = 0;
  local_38 = 3;
  local_34 = 4;
  local_30 = 7;
  local_2e = 0;
  local_24 = 0;
  local_20 = 3;
  local_1c = 5;
  local_18 = 7;
  local_16 = 0;
  FUN_1001d8cf(&local_14,0x210);
  FUN_1004e63f(&local_14,&local_b4,0x10);
  FUN_1004e63f(&local_14,&local_a4,0x90);
  FUN_1004e63f(&local_14,(undefined4 *)"SV_POSITION",0x1b);
  FUN_1004e63f(&local_14,(undefined4 *)&DAT_100593c8,-(local_10 - (int)local_14) & 3);
  local_14[1] = (local_10 - (int)local_14) - 8;
  FUN_1004e63f(param_1,local_14,local_10 - (int)local_14);
  uVar1 = thunk_FUN_10055686(local_14);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

