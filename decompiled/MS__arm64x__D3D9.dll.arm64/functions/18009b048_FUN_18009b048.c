/*
 * FUN_18009b048 at 18009b048
 * undefined FUN_18009b048(void)
 * Address ranges: 18009b048-18009b17f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18009b048(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  ulonglong local_100;
  undefined8 local_f8;
  uint local_f0;
  undefined1 local_ec;
  undefined1 local_eb;
  undefined2 local_ea;
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
  
  local_100 = 0x4e475349;
  local_f8 = 0x800000000;
  local_d8 = 0x210;
  local_d0 = 1;
  local_e8 = thunk_FUN_180102f80(0x210);
  lStack_e0 = local_e8;
  FUN_1800f5a90(&local_e8,&local_100,0x10);
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
  do {
    uVar6 = 0xf;
    if (uVar4 == 0) {
      pcVar3 = s_SV_POSITION_180235a98;
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
      if (uVar4 == 1) {
        pcVar3 = s_TEXCOORD_180233a70;
        uVar6 = 3;
      }
      else {
        pcVar3 = (char *)0x0;
      }
    }
    uVar2 = func_0x000180212e90(&local_c0,pcVar3);
    local_eb = *(undefined1 *)(param_2 + 0x7f + (ulonglong)uVar4);
    local_100 = (ulonglong)uVar2;
    local_f8 = CONCAT44(3,uVar5);
    local_ea = 0;
    local_f0 = uVar4;
    local_ec = uVar6;
    FUN_1800f5a90(&local_e8,&local_100,0x18);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  FUN_1800f5da0(&local_e8,2,&local_c0);
  lVar1 = local_e8;
  FUN_1800f5a90(param_1,local_e8,lStack_e0 - local_e8);
  thunk_FUN_180102fc0(lVar1);
  return 1;
}

