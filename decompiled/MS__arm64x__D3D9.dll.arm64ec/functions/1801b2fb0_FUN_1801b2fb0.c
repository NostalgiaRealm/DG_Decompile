/*
 * FUN_1801b2fb0 at 1801b2fb0
 * undefined FUN_1801b2fb0(void)
 * Address ranges: 1801b2fb0-1801b320b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b2fb0(undefined8 param_1,uint *param_2,uint param_3,uint param_4,undefined4 param_5,
                  uint param_6)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint local_a0 [2];
  uint local_98;
  uint local_90;
  uint local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  bVar4 = (*param_2 & 0x400) != 0;
  lVar2 = 5;
  if (bVar4) {
    lVar2 = 7;
  }
  lVar3 = 6;
  if (bVar4) {
    lVar3 = 8;
  }
  uVar1 = (uint)(*(char *)((longlong)param_2 + lVar2) != '\0') |
          (uint)(*(char *)((longlong)param_2 + lVar3) != '\0') << 1;
  uVar6 = (ulonglong)uVar1;
  local_88 = param_4;
  uVar5 = param_6;
  if (param_6 == 0) {
    if (uVar1 == 0) {
      uVar5 = (param_3 & 0xc0000) + 0x40000 | param_3 & 0xff83ffff | 0x100000;
    }
    else if (uVar1 == 1) {
      uVar5 = (param_3 & 0xc0000) + 0x80000 | param_3 & 0xff83ffff | 0x200000;
    }
    else if (uVar1 == 2) {
      uVar5 = (param_3 & 0xc0000) + 0x40000 | param_3 & 0xff83ffff | 0x300000;
    }
    else if (uVar1 == 3) {
      uVar5 = FUN_180213760(param_2 + 4,4,1);
    }
    else {
      uVar5 = 0;
    }
  }
  uVar7 = 0x27;
  if ((*param_2 & 0x1000) == 0) {
    uVar7 = 0x20;
  }
  if ((*param_2 & 0xf) - 3 < 2) {
    local_78._0_4_ = 0x84;
    uVar8 = 0x7c;
  }
  else {
    local_78._0_4_ = 0x80;
    uVar8 = 0x78;
  }
  uVar1 = (byte)(&DAT_18022d734)[uVar6 & 0xffffffff] | 0x100;
  uVar9 = (uint)(byte)(&DAT_18022d730)[uVar6 & 0xffffffff];
  local_a0[0] = uVar9;
  local_98 = param_3;
  local_90 = uVar1;
  if (local_88 == 0) {
    local_88 = param_2[0x17];
    local_70 = 0;
    local_80 = 0;
    FUN_180214c88(param_2 + 4,param_1,1,uVar5,local_a0,0x38);
    local_88 = param_2[0x17];
    local_70 = 0;
    local_78 = CONCAT44(local_78._4_4_,uVar8);
    local_80 = 0;
    local_a0[0] = uVar9;
    local_98 = uVar5;
    local_90 = uVar1;
    FUN_180214c88(param_2 + 4,param_1,uVar7,uVar5,local_a0,0x38);
  }
  else {
    local_78 = 0;
    local_80 = CONCAT44(local_80._4_4_,(uint)(byte)(&DAT_18022d734)[uVar6 & 0xffffffff]) | 0x100;
    FUN_180214c88(param_2 + 4,param_1,uVar7,uVar5,local_a0,0x30);
  }
  FUN_1801b2c88(param_1,param_2,param_5,uVar5);
  if ((param_6 != uVar5) &&
     (((uVar5 & 0xff) != (param_3 & 0xff) || ((uVar5 >> 8 & 0x3f) != (param_3 >> 8 & 0x3f))))) {
    FUN_180213800(param_2 + 4,uVar5);
  }
  return;
}

