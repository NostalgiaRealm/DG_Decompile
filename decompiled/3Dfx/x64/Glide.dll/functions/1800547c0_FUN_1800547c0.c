/*
 * FUN_1800547c0 at 1800547c0
 * int __fastcall FUN_1800547c0(uint * param_1, uint * param_2, ulonglong param_3, uint param_4, byte param_5, uint param_6, undefined1 param_7)
 * Address ranges: 1800547c0-180054d2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800547c0(uint *param_1,uint *param_2,ulonglong param_3,uint param_4,byte param_5,
                 uint param_6,undefined1 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  byte bVar11;
  bool bVar12;
  
  uVar6 = (uint)param_3;
  uVar5 = param_3 & 0xffffffff;
  uVar10 = 0;
  uVar7 = uVar6 >> 8;
  uVar2 = (uint)(uVar5 >> 0x14) & 7;
  bVar11 = 0xe4;
  if (uVar2 == 1) {
    bVar11 = (&DAT_180064f04)[(ulonglong)(param_4 >> 2) & 3];
  }
  else if (uVar2 == 2) {
    bVar11 = (&DAT_180064f00)[(ulonglong)(param_4 >> 2) & 3];
  }
  else if (uVar2 == 3) {
    bVar11 = *(byte *)((longlong)&DAT_180064efc + (ulonglong)(param_4 >> 2 & 3));
  }
  uVar3 = (uint)(param_3 >> 0x10) & 3;
  uVar2 = uVar3 + 1;
  puVar4 = param_2;
  if (1 < uVar2) {
    uVar1 = *param_1;
    puVar4 = (uint *)(ulonglong)uVar1;
    if (((uVar1 - 0x51 & 0xfffcffff) == 0) && (uVar1 != 0x30051)) {
      uVar2 = uVar3 + 2;
    }
  }
  if ((param_3 & 0x40000000) == 0) {
    if ((uVar6 >> 0x1c & 1) == 0) {
      uVar3 = ((uint)(byte)(((bVar11 >> (param_5 >> 4 & 3) * '\x02' & 3 |
                             (bVar11 >> (param_5 >> 6) * '\x02') << 2) << 2 |
                            bVar11 >> (param_5 >> 2 & 3) * '\x02' & 3) << 2) |
               bVar11 >> (param_5 & 3) * '\x02' & 3 | (uVar2 & 3) << 0x10 | uVar6 & 0x3f00) << 4;
      uVar7 = uVar3 | 6;
      uVar3 = uVar3 | 0x80000006;
    }
    else {
      uVar3 = (param_5 & 3) << 4 | ((uVar2 & 3) << 8 | uVar7 & 0x3f) << 0xc;
      uVar7 = uVar3 | 10;
      uVar3 = uVar3 | 0x8000000a;
    }
    *param_2 = uVar7;
    bVar12 = (param_3 & 0x88000000) != 0;
    if (bVar12) {
      *param_2 = uVar3;
      param_2[1] = *(uint *)(&DAT_180064ee8 +
                            (((ulonglong)(uVar6 & 0x8000000) | uVar5 >> 5) >> 0x1a) * 4);
    }
    uVar5 = (ulonglong)(bVar12 + 1);
    if (uVar2 == 2) {
      param_2[uVar5] = uVar6 & 0xff;
      uVar5 = (ulonglong)(bVar12 | 2);
    }
    else if (uVar2 == 3) {
      param_2[uVar5] = uVar6 & 0xff;
      uVar5 = (ulonglong)(bVar12 + 3);
      param_2[bVar12 + 2] = uVar6 & 0xff;
    }
    param_2[uVar5] = param_4 >> 4;
    iVar9 = (int)uVar5 + 1;
  }
  else {
    if (uVar2 == 1) {
      if ((uVar6 >> 0x1c & 1) == 0) {
        puVar4 = (uint *)0x0;
        uVar2 = (uVar6 & 0x3f00 |
                 (uint)(byte)(((bVar11 >> (param_5 >> 4 & 3) * '\x02' & 3 |
                               (bVar11 >> (param_5 >> 6) * '\x02') << 2) << 2 |
                              bVar11 >> (param_5 >> 2 & 3) * '\x02' & 3) << 2) |
                 bVar11 >> (param_5 & 3) * '\x02' & 3 | 0x10000) << 4;
        uVar7 = uVar2 | 0xc00006;
        uVar2 = uVar2 | 0x80c00006;
      }
      else {
        uVar2 = (param_5 & 3) << 4 | (uVar7 & 0x3f | 0x100) << 0xc;
        uVar7 = uVar2 | 0xc0000a;
        uVar2 = uVar2 | 0x80c0000a;
      }
      *param_2 = uVar7;
      bVar12 = (param_3 & 0x88000000) != 0;
      if (bVar12) {
        *param_2 = uVar2;
        param_2[1] = *(uint *)(&DAT_180064ee8 +
                              (((ulonglong)(uVar6 & 0x8000000) | uVar5 >> 5) >> 0x1a) * 4);
      }
      uVar10 = (ulonglong)(bVar12 + 1);
      uVar8 = 0;
    }
    else {
      uVar2 = uVar2 - 2;
      uVar8 = (ulonglong)uVar2;
      if (uVar2 == 0) {
        if ((uVar6 >> 0x1c & 1) == 0) {
          uVar2 = (uVar6 & 0x3f00 |
                   (uint)(byte)(((bVar11 >> (param_5 >> 4 & 3) * '\x02' & 3 |
                                 (bVar11 >> (param_5 >> 6) * '\x02') << 2) << 2 |
                                bVar11 >> (param_5 >> 2 & 3) * '\x02' & 3) << 2) |
                   bVar11 >> (param_5 & 3) * '\x02' & 3 | 0x20000) << 4;
          uVar7 = uVar2 | 0x6000006;
          uVar2 = uVar2 | 0x86000006;
        }
        else {
          uVar2 = (param_5 & 3) << 4 | (uVar7 & 0x3f | 0x200) << 0xc;
          uVar7 = uVar2 | 0x600000a;
          uVar2 = uVar2 | 0x8600000a;
        }
        *param_2 = uVar7;
        bVar12 = (param_3 & 0x88000000) != 0;
        if (bVar12) {
          *param_2 = uVar2;
          param_2[1] = *(uint *)(&DAT_180064ee8 +
                                (((ulonglong)(uVar6 & 0x8000000) | uVar5 >> 5) >> 0x1a) * 4);
        }
        uVar2 = (uint)bVar12;
        puVar4 = (uint *)(param_3 & 0xff);
        param_2[uVar2 + 1] = (uint)puVar4;
        uVar10 = (ulonglong)(uVar2 | 2);
      }
      else if (uVar2 == 1) {
        if ((uVar6 >> 0x1c & 1) == 0) {
          uVar2 = (uVar6 & 0x3f00 |
                   (uint)(byte)(((bVar11 >> (param_5 >> 4 & 3) * '\x02' & 3 |
                                 (bVar11 >> (param_5 >> 6) * '\x02') << 2) << 2 |
                                bVar11 >> (param_5 >> 2 & 3) * '\x02' & 3) << 2) |
                   bVar11 >> (param_5 & 3) * '\x02' & 3 | 0x30000) << 4;
          uVar7 = uVar2 | 0x30000006;
          uVar2 = uVar2 | 0xb0000006;
        }
        else {
          uVar2 = (param_5 & 3) << 4 | (uVar7 & 0x3f | 0x300) << 0xc;
          uVar7 = uVar2 | 0x3000000a;
          uVar2 = uVar2 | 0xb000000a;
        }
        *param_2 = uVar7;
        bVar12 = (param_3 & 0x88000000) != 0;
        if (bVar12) {
          *param_2 = uVar2;
          param_2[1] = *(uint *)(&DAT_180064ee8 +
                                (((ulonglong)(uVar6 & 0x8000000) | uVar5 >> 5) >> 0x1a) * 4);
        }
        uVar2 = (uint)bVar12;
        puVar4 = (uint *)(param_3 & 0xff);
        param_2[uVar2 + 1] = (uint)puVar4;
        param_2[uVar2 + 2] = (uint)puVar4;
        uVar10 = (ulonglong)(uVar2 + 3);
      }
    }
    param_2[uVar10] = param_4 >> 4;
    uVar2 = FUN_180055104(param_6,(int)CONCAT71((int7)((ulonglong)puVar4 >> 8),param_7),1,uVar8,0,0)
    ;
    iVar9 = (int)uVar10;
    param_2[iVar9 + 1] = uVar2;
    param_2[iVar9 + 2] = param_6 & 0xff;
    iVar9 = iVar9 + 3;
  }
  if ((uVar6 & 0x3f00) == 0x800) {
    uVar2 = 1 << ((byte)param_3 & 0x1f);
    param_1[2] = param_1[2] | uVar2;
    if ((param_3 & 0x40000000) != 0) {
      param_1[1] = param_1[1] | uVar2;
    }
  }
  return iVar9;
}

