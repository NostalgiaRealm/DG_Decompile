/*
 * FUN_1400131e8 at 1400131e8
 * undefined8 * __cdecl FUN_1400131e8(int param_1, ulonglong param_2)
 * Address ranges: 1400131e8-140013347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1400131e8(int param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 extraout_w1;
  undefined4 extraout_w1_00;
  undefined4 extraout_w1_01;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined *puStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined *puStack_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined *puStack_50;
  undefined1 local_48;
  
  local_90 = 0;
  local_78 = 0;
  local_60 = 0;
  local_a0 = 0x100000000;
  puStack_98 = &DAT_140028ce8;
  local_48 = 0;
  local_88 = 0x100000000;
  puStack_80 = &DAT_140028c3c;
  local_70 = 0x100000000;
  puStack_68 = &DAT_140028c40;
  local_58 = 0x100000005;
  puStack_50 = &DAT_140028c3c;
  uVar1 = param_2;
  if ((DAT_14002d3f4 & 1) == 0) {
    DAT_14002d3f4 = DAT_14002d3f4 | 1;
    FUN_140012d38(&DAT_14002d8a0,param_2,&local_a0);
    FUN_140025270(FUN_1400253b0);
    uVar1 = CONCAT44(extraout_var,extraout_w1);
  }
  if ((DAT_14002d3f4 >> 1 & 1) == 0) {
    DAT_14002d3f4 = DAT_14002d3f4 | 2;
    FUN_140012d38(&DAT_14002d400,uVar1,&local_88);
    FUN_140025270(FUN_140025378);
    uVar1 = CONCAT44(extraout_var_00,extraout_w1_00);
  }
  if ((DAT_14002d3f4 >> 2 & 1) == 0) {
    DAT_14002d3f4 = DAT_14002d3f4 | 4;
    FUN_140012d38(&DAT_14002e1e0,uVar1,&local_70);
    FUN_140025270(FUN_140025340);
    uVar1 = CONCAT44(extraout_var_01,extraout_w1_01);
  }
  if ((DAT_14002d3f4 >> 3 & 1) == 0) {
    DAT_14002d3f4 = DAT_14002d3f4 | 8;
    FUN_140012d38(&DAT_14002dd40,uVar1,&local_58);
    FUN_140025270(FUN_140025308);
  }
  puVar2 = &DAT_14002dd40;
  if ((param_2 & 1) == 0) {
    if (param_1 == 0x100) {
      puVar2 = &DAT_14002e1e0;
    }
    else if (param_1 == 0x101) {
      puVar2 = &DAT_14002d400;
    }
    else if (param_1 == 0x110) {
      puVar2 = &DAT_14002d8a0;
    }
  }
  return puVar2;
}

