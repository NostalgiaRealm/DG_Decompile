/*
 * FUN_1801b2658 at 1801b2658
 * undefined FUN_1801b2658(void)
 * Address ranges: 1801b2658-1801b2797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801b2658(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  uint local_100;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined2 local_fa;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_f8 = 0x4e475349;
  uStack_f0 = 0x800000000;
  local_d8 = 0x210;
  local_d0 = 1;
  local_e8 = FUN_1802229a8(0x210);
  lStack_e0 = local_e8;
  FUN_180214fe8(&local_e8,&local_f8,0x10);
  uVar4 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  local_f8 = param_1;
  do {
    uVar6 = 0xf;
    if (uVar4 == 0) {
      pcVar3 = s_SV_POSITION_18022d6d8;
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
      if (uVar4 == 1) {
        pcVar3 = s_TEXCOORD_18022a9e0;
        uVar6 = 3;
      }
      else {
        pcVar3 = (char *)0x0;
      }
    }
    local_110 = FUN_180212e90(&local_c0,pcVar3);
    local_fb = *(undefined1 *)(param_2 + 0x7f + (ulonglong)uVar4);
    uStack_10c = 0;
    uStack_104 = 3;
    local_fa = 0;
    local_108 = uVar5;
    local_100 = uVar4;
    local_fc = uVar6;
    FUN_180214fe8(&local_e8,&local_110,0x18);
    uVar1 = local_f8;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  FUN_180213160(&local_e8,2,&local_c0);
  lVar2 = local_e8;
  FUN_180214fe8(uVar1,local_e8,lStack_e0 - local_e8);
  FUN_1802229d8(lVar2);
  return 1;
}

