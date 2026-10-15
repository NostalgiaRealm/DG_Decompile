/*
 * FUN_180055e18 at 180055e18
 * int __cdecl FUN_180055e18(int * param_1, uint * param_2, uint param_3, ulonglong param_4, byte param_5, uint param_6, byte param_7)
 * Address ranges: 180055e18-18005628b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180055e18(int *param_1,uint *param_2,uint param_3,ulonglong param_4,byte param_5,
                 uint param_6,byte param_7)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint extraout_w11;
  uint uVar8;
  int extraout_w12;
  uint extraout_w13;
  uint extraout_w14;
  ulonglong uVar9;
  uint *extraout_x15;
  
  uVar9 = (ulonglong)param_3;
  uVar3 = 0;
  if ((param_3 & 0x700000) == 0x100000) {
    puVar6 = (undefined8 *)&DAT_180065f14;
  }
  else if ((param_3 & 0x700000) == 0x200000) {
    puVar6 = (undefined8 *)0x180065f10;
  }
  else {
    uVar5 = 0xe4;
    if ((param_3 & 0x700000) != 0x300000) goto LAB_180055e8c;
    puVar6 = &DAT_180065f0c;
  }
  uVar5 = (uint)*(byte *)((longlong)puVar6 + (param_4 >> 2 & 3));
LAB_180055e8c:
  uVar8 = param_3 >> 0x10 & 3;
  uVar7 = uVar8 + 1;
  if ((1 < uVar7) && (*param_1 != 0x30051 && (*param_1 - 0x51U & 0xfffcffff) == 0)) {
    uVar7 = uVar8 + 2;
  }
  uVar8 = param_3 & 0x40000000;
  if ((param_3 & 0x40000000) == 0) {
    uVar1 = param_3 & 0x3f00 | (uVar7 & 3) << 0x10;
    uVar3 = param_5 & 3;
    if ((param_3 >> 0x1c & 1) == 0) {
      uVar3 = ((((uVar5 >> ((ulonglong)(param_5 >> 6) << 1) & 3) << 2 |
                uVar5 >> (ulonglong)((param_5 >> 4 & 3) << 1) & 3) << 2 |
               uVar5 >> (ulonglong)((param_5 >> 2 & 3) << 1) & 3) << 2 |
               uVar5 >> (ulonglong)(uVar3 << 1) & 3 | uVar1) << 4;
      uVar5 = uVar3 | 6;
      uVar3 = uVar3 | 0x80000006;
    }
    else {
      uVar1 = uVar1 | uVar3;
      uVar5 = uVar1 << 4 | 10;
      uVar3 = uVar1 << 4 | 0x8000000a;
    }
    *param_2 = uVar5;
    bVar2 = (param_3 & 0x88000000) != 0;
    if (bVar2) {
      uVar5 = *(uint *)(&DAT_180065ef8 +
                       ((uVar9 & 0x8000000 | (ulonglong)(param_3 >> 5)) >> 0x1a) * 4);
      *param_2 = uVar3;
      param_2[1] = uVar5;
    }
    uVar5 = (uint)bVar2;
    uVar3 = uVar5 + 1;
    if (uVar7 != 1) {
      if (uVar7 == 2) {
        param_2[uVar3] = param_3 & 0xff;
        uVar3 = uVar5 | 2;
      }
      else if (uVar7 == 3) {
        param_2[uVar3] = param_3 & 0xff;
        param_2[uVar5 + 2] = param_3 & 0xff;
        uVar3 = uVar5 + 3;
      }
    }
    uVar5 = (uint)param_4 >> 4;
    iVar4 = uVar3 + 1;
  }
  else {
    if (uVar7 == 1) {
      uVar7 = param_3 & 0x3f00 | 0x10000;
      uVar3 = param_5 & 3;
      if ((param_3 >> 0x1c & 1) == 0) {
        uVar7 = (((uVar5 >> ((ulonglong)(param_5 >> 6) << 1) & 3) << 2 |
                 uVar5 >> (ulonglong)((param_5 >> 4 & 3) << 1) & 3) << 2 |
                uVar5 >> (ulonglong)((param_5 >> 2 & 3) << 1) & 3) << 2 |
                uVar5 >> (ulonglong)(uVar3 << 1) & 3 | uVar7;
        uVar5 = uVar7 << 4 | 0xc00006;
        uVar3 = 0x80c00006;
      }
      else {
        uVar7 = uVar7 | uVar3;
        uVar5 = uVar7 << 4 | 0xc0000a;
        uVar3 = 0x80c0000a;
      }
      *param_2 = uVar5;
      bVar2 = (param_3 & 0x88000000) != 0;
      if (bVar2) {
        uVar5 = *(uint *)(&DAT_180065ef8 +
                         ((uVar9 & 0x8000000 | (ulonglong)(param_3 >> 5)) >> 0x1a) * 4);
        *param_2 = uVar3 | uVar7 << 4;
        param_2[1] = uVar5;
      }
      uVar3 = bVar2 + 1;
    }
    else if (uVar7 == 2) {
      uVar3 = param_3 & 0x3f00 | 0x20000;
      if ((param_3 >> 0x1c & 1) == 0) {
        uVar3 = (((uVar5 >> ((ulonglong)(param_5 >> 6) << 1) & 3) << 2 |
                 uVar5 >> (ulonglong)((param_5 >> 4 & 3) << 1) & 3) << 2 |
                uVar5 >> (ulonglong)((param_5 >> 2 & 3) << 1) & 3) << 2 |
                uVar5 >> (ulonglong)((param_5 & 3) << 1) & 3 | uVar3;
        uVar7 = uVar3 << 4 | 0x6000006;
        uVar5 = 0x86000006;
      }
      else {
        uVar3 = uVar3 | param_5 & 3;
        uVar7 = uVar3 << 4 | 0x600000a;
        uVar5 = 0x8600000a;
      }
      *param_2 = uVar7;
      bVar2 = (param_3 & 0x88000000) != 0;
      if (bVar2) {
        uVar7 = *(uint *)(&DAT_180065ef8 +
                         ((uVar9 & 0x8000000 | (ulonglong)(param_3 >> 5)) >> 0x1a) * 4);
        *param_2 = uVar5 | uVar3 << 4;
        param_2[1] = uVar7;
      }
      uVar3 = (uint)bVar2;
      param_2[uVar3 + 1] = param_3 & 0xff;
      uVar3 = uVar3 | 2;
    }
    else if (uVar7 == 3) {
      uVar3 = param_3 & 0x3f00 | 0x30000;
      if ((param_3 >> 0x1c & 1) == 0) {
        uVar3 = (((uVar5 >> ((ulonglong)(param_5 >> 6) << 1) & 3) << 2 |
                 uVar5 >> (ulonglong)((param_5 >> 4 & 3) << 1) & 3) << 2 |
                uVar5 >> (ulonglong)((param_5 >> 2 & 3) << 1) & 3) << 2 |
                uVar5 >> (ulonglong)((param_5 & 3) << 1) & 3 | uVar3;
        uVar7 = uVar3 << 4 | 0x30000006;
        uVar5 = 0xb0000006;
      }
      else {
        uVar3 = uVar3 | param_5 & 3;
        uVar7 = uVar3 << 4 | 0x3000000a;
        uVar5 = 0xb000000a;
      }
      *param_2 = uVar7;
      bVar2 = (param_3 & 0x88000000) != 0;
      if (bVar2) {
        uVar7 = *(uint *)(&DAT_180065ef8 +
                         ((uVar9 & 0x8000000 | (ulonglong)(param_3 >> 5)) >> 0x1a) * 4);
        *param_2 = uVar5 | uVar3 << 4;
        param_2[1] = uVar7;
      }
      uVar3 = (uint)bVar2;
      param_2[uVar3 + 1] = param_3 & 0xff;
      param_2[uVar3 + 2] = param_3 & 0xff;
      uVar3 = uVar3 + 3;
    }
    param_2[uVar3] = (uint)param_4 >> 4;
    uVar3 = FUN_1800565d0(param_6,param_7,1,param_4,0,0);
    extraout_x15[extraout_w12 + 1] = uVar3;
    uVar5 = extraout_w13 & 0xff;
    uVar3 = extraout_w12 + 2;
    iVar4 = extraout_w12 + 3;
    param_2 = extraout_x15;
    param_3 = extraout_w14;
    uVar8 = extraout_w11;
  }
  param_2[uVar3] = uVar5;
  if ((param_3 & 0x3f00) == 0x800) {
    uVar3 = 1 << (ulonglong)(param_3 & 0x1f);
    param_1[2] = param_1[2] | uVar3;
    if (uVar8 != 0) {
      param_1[1] = param_1[1] | uVar3;
    }
  }
  return iVar4;
}

