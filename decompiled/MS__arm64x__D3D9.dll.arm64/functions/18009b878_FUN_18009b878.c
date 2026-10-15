/*
 * FUN_18009b878 at 18009b878
 * undefined FUN_18009b878(void)
 * Address ranges: 18009b878-18009baaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009b878(undefined8 param_1,uint *param_2,uint param_3,ulonglong param_4,
                  undefined4 param_5,uint param_6)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar11;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar12;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  bVar5 = (*param_2 & 0x400) != 0;
  lVar2 = 5;
  if (bVar5) {
    lVar2 = 7;
  }
  lVar3 = 6;
  if (bVar5) {
    lVar3 = 8;
  }
  uVar1 = (uint)(*(char *)((longlong)param_2 + lVar2) != '\0') |
          (uint)(*(char *)((longlong)param_2 + lVar3) != '\0') << 1;
  uVar7 = (ulonglong)uVar1;
  uVar6 = param_6;
  if (param_6 == 0) {
    if (uVar1 == 0) {
      uVar6 = (param_3 & 0xc0000) + 0x40000 | param_3 & 0xff83ffff | 0x100000;
    }
    else if (uVar1 == 1) {
      uVar6 = (param_3 & 0xc0000) + 0x80000 | param_3 & 0xff83ffff | 0x200000;
    }
    else if (uVar1 == 2) {
      uVar6 = (param_3 & 0xc0000) + 0x40000 | param_3 & 0xff83ffff | 0x300000;
    }
    else if (uVar1 == 3) {
      uVar6 = FUN_1800f42d0(param_2 + 4,4,1);
    }
    else {
      uVar6 = 0;
    }
  }
  uVar4 = (&DAT_18022d730)[uVar7 & 0xffffffff];
  uVar8 = 0x27;
  if ((*param_2 & 0x1000) == 0) {
    uVar8 = 0x20;
  }
  if ((*param_2 & 0xf) - 3 < 2) {
    uVar9 = 0x84;
    uVar10 = 0x7c;
  }
  else {
    uVar9 = 0x80;
    uVar10 = 0x78;
  }
  uVar1 = (byte)(&DAT_18022d734)[uVar7 & 0xffffffff] | 0x100;
  if ((int)param_4 == 0) {
    FUN_1800f5730(param_2 + 4,param_1,1,uVar6,uVar4,param_3,uVar1,param_2[0x17],0,
                  CONCAT44(uVar12,uVar9),0);
    FUN_1800f5730(param_2 + 4,param_1,uVar8,uVar6,uVar4,uVar6,uVar1,param_2[0x17],0,uVar10,0);
  }
  else {
    FUN_1800f5730(param_2 + 4,param_1,uVar8,uVar6,uVar4,param_3,uVar1,param_4 & 0xffffffff,
                  CONCAT44(uVar11,(uint)(byte)(&DAT_18022d734)[uVar7 & 0xffffffff]) | 0x100,0);
  }
  FUN_18009b5d0(param_1,param_2,param_5,uVar6);
  if ((param_6 != uVar6) &&
     (((uVar6 & 0xff) != (param_3 & 0xff) || ((uVar6 >> 8 & 0x3f) != (param_3 >> 8 & 0x3f))))) {
    FUN_1800f4370(param_2 + 4,uVar6);
  }
  return;
}

