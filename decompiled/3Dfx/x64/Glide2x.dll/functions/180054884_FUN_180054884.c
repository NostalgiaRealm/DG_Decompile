/*
 * FUN_180054884 at 180054884
 * int __fastcall FUN_180054884(uint * param_1, uint * param_2, ulonglong param_3, byte param_4, uint param_5, undefined1 param_6)
 * Address ranges: 180054884-180054b42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180054884(uint *param_1,uint *param_2,ulonglong param_3,byte param_4,uint param_5,
                 undefined1 param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined7 uVar8;
  undefined8 uVar7;
  uint uVar9;
  uint uVar10;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar11;
  
  uVar3 = (uint)param_3;
  uVar13 = uVar3 & 0xff;
  uVar14 = (uint)(param_3 >> 8) & 0x3f;
  uVar9 = (uint)(param_3 >> 0x10) & 3;
  uVar1 = uVar13;
  if (0x10000 < (uVar3 & 0x30000)) {
    uVar1 = (uint)(param_3 >> 0xe) & 3;
  }
  if ((uVar14 == 6) || (puVar6 = param_2, uVar14 == 7)) {
    uVar10 = *param_1;
    puVar6 = (uint *)(ulonglong)uVar10;
    if (((uVar10 - 0x51 & 0xfffcffff) == 0) &&
       ((uVar10 != 0x30051 && ((uVar3 & 0x30000) == 0x10000)))) {
      uVar9 = uVar9 + 1;
    }
  }
  uVar10 = ~((uint)(param_3 >> 0x1b) & 0x1f) & 4;
  uVar11 = (ulonglong)uVar10;
  uVar8 = (undefined7)((ulonglong)puVar6 >> 8);
  if ((param_3 & 0x88000000) == 0) {
    if ((param_3 & 0x40000000) == 0) {
      if ((param_3 & 0x10000000) == 0) {
        uVar3 = FUN_180054b44(uVar3,param_4,uVar9,uVar10,0,0);
      }
      else {
        uVar3 = FUN_180054c5c(uVar3,(int)CONCAT71(uVar8,param_4),uVar9,uVar11,0,0);
      }
      *param_2 = uVar3;
      iVar2 = 1;
      param_2[1] = uVar1;
      param_2[2] = uVar13;
    }
    else {
      uVar4 = 3;
      if (1 < uVar9) {
        uVar4 = 0;
      }
      uVar5 = -(uint)(1 < uVar9) & 3;
      uVar7 = 0;
      if ((param_3 & 0x10000000) == 0) {
        uVar3 = FUN_180054b44(uVar3,param_4,uVar9,uVar10,uVar4,uVar5);
      }
      else {
        uVar3 = FUN_180054c5c(uVar3,(uint)param_4,uVar9,uVar11,uVar4,uVar5);
      }
      uVar12 = (ulonglong)(uVar9 + 1);
      *param_2 = uVar3;
      param_2[1] = uVar1;
      param_2[2] = uVar13;
      uVar1 = FUN_180054c5c(param_5,(int)CONCAT71((int7)((ulonglong)uVar7 >> 8),param_6),1,uVar11,0,
                            0);
      param_2[uVar12] = uVar1;
      param_2[uVar9 + 2] = param_5 & 0xff;
      iVar2 = 3;
    }
  }
  else if ((param_3 & 0x40000000) == 0) {
    if ((param_3 & 0x10000000) == 0) {
      uVar10 = FUN_180054b44(uVar3,param_4,uVar9,uVar10,0,0);
    }
    else {
      uVar10 = FUN_180054c5c(uVar3,(int)CONCAT71(uVar8,param_4),uVar9,uVar11,0,0);
    }
    param_2[2] = uVar1;
    *param_2 = uVar10 | 0x80000000;
    param_2[3] = uVar13;
    param_2[1] = *(uint *)(&DAT_180064ee8 +
                          (((ulonglong)(uVar3 & 0x8000000) | (param_3 & 0xffffffff) >> 5) >> 0x1a) *
                          4);
    iVar2 = 2;
  }
  else {
    uVar4 = 3;
    if (1 < uVar9) {
      uVar4 = 0;
    }
    uVar5 = -(uint)(1 < uVar9) & 3;
    uVar7 = 0;
    if ((param_3 & 0x10000000) == 0) {
      uVar10 = FUN_180054b44(uVar3,param_4,uVar9,uVar10,uVar4,uVar5);
    }
    else {
      uVar10 = FUN_180054c5c(uVar3,(uint)param_4,uVar9,uVar11,uVar4,uVar5);
    }
    uVar12 = (ulonglong)(uVar9 + 2);
    *param_2 = uVar10 | 0x80000000;
    param_2[2] = uVar1;
    param_2[3] = uVar13;
    param_2[1] = *(uint *)(&DAT_180064ee8 +
                          (((ulonglong)(uVar3 & 0x8000000) | (param_3 & 0xffffffff) >> 5) >> 0x1a) *
                          4);
    uVar1 = FUN_180054c5c(param_5,(int)CONCAT71((int7)((ulonglong)uVar7 >> 8),param_6),1,uVar11,0,0)
    ;
    param_2[uVar12] = uVar1;
    param_2[uVar9 + 3] = param_5 & 0xff;
    iVar2 = 4;
  }
  if (uVar14 == 6) {
    param_1[4] = param_1[4] | 1 << ((byte)param_3 & 0x1f);
  }
  else if (uVar14 == 7) {
    param_1[3] = param_1[3] | 1 << ((byte)param_3 & 0x1f);
  }
  return iVar2 + uVar9;
}

