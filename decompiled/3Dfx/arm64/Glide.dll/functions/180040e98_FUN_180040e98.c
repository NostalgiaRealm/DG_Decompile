/*
 * FUN_180040e98 at 180040e98
 * uint __cdecl FUN_180040e98(longlong param_1, int * param_2, longlong * param_3, ulonglong param_4, byte param_5)
 * Address ranges: 180040e98-180041b2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180040e98(longlong param_1,int *param_2,longlong *param_3,ulonglong param_4,byte param_5)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int *piVar13;
  longlong extraout_x14;
  longlong extraout_x14_00;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [12];
  
  cVar1 = *(char *)(param_1 + 0x8c);
  bVar4 = false;
  if (cVar1 == '\x01') {
    uVar7 = FUN_180056b90((longlong)param_2,1,1);
    bVar3 = true;
    FUN_180057ab0(param_2,param_3,0x38,(ulonglong)uVar7,1,0x410102,0xff,
                  (ulonglong)(uint)param_2[0x16]);
LAB_180040f80:
    uVar5 = 0;
    if (uVar7 == 0) goto LAB_180041af4;
  }
  else {
    bVar3 = false;
    if (cVar1 == '\x02') {
      uVar15 = param_4;
      uVar7 = FUN_180056b90((longlong)param_2,1,0);
      FUN_1800404d8(param_2,param_3,0x110101,uVar15,(ulonglong)uVar7);
      bVar4 = true;
      goto LAB_180040f80;
    }
    if (cVar1 != '\x03') {
      return 0;
    }
    uVar7 = 0x190101;
  }
  uVar11 = (uint)(ushort)param_4;
  if (((*(uint *)(param_1 + 0x8c) & 0x300) == 0x200) && ((param_4 & 0xdf0) == 0)) {
    bVar4 = false;
  }
  if (bVar4) {
    uVar5 = FUN_180056b90((longlong)param_2,4,1);
    uVar16 = (ulonglong)uVar5;
    uVar6 = FUN_180056b90((longlong)param_2,2,1);
    uVar15 = (ulonglong)uVar6;
    bVar3 = true;
    FUN_180057ab0(param_2,param_3,0x34,uVar15,1,(ulonglong)uVar7,0,(ulonglong)(uint)param_2[0x16]);
    FUN_180057ab0(param_2,param_3,0x33,uVar15,1,uVar15,0,(ulonglong)(uint)param_2[0x16]);
    FUN_180057ab0(param_2,param_3,0x1c,uVar15,2,uVar15,0,0);
    FUN_180057ab0(param_2,param_3,0x1e,uVar15,2,uVar15,0x55,(ulonglong)(uint)param_2[0x16]);
    FUN_180057ab0(param_2,param_3,0xa7,(ulonglong)uVar6,2,(ulonglong)(uVar6 | 0x10000000),1,
                  (ulonglong)(uint)param_2[0x16]);
    FUN_180057ab0(param_2,param_3,0x1e,uVar16,0xf,uVar15,0x55,(ulonglong)(uint)param_2[0x17]);
    uVar7 = uVar5 | 0x10000000;
    FUN_180057ab0(param_2,param_3,0xa7,(ulonglong)uVar5,1,(ulonglong)uVar7,0,
                  (ulonglong)(uint)param_2[0x16]);
    FUN_180057ab0(param_2,param_3,0xa7,uVar16,2,(ulonglong)uVar7,1,(ulonglong)(uint)param_2[0x16]);
    FUN_180057ab0(param_2,param_3,0xa7,(ulonglong)uVar5,4,(ulonglong)uVar7,2,
                  (ulonglong)(uint)param_2[0x16]);
    FUN_180057ab0(param_2,param_3,0xa7,(ulonglong)uVar5,8,(ulonglong)uVar7,3,
                  (ulonglong)(uint)param_2[0x16]);
    FUN_180057ab0(param_2,param_3,0x1d,uVar16,0xf,(ulonglong)uVar6,0,(ulonglong)uVar5);
    FUN_180057ab0(param_2,param_3,1,(ulonglong)uVar5,0xf,(ulonglong)uVar5,0xe4,
                  (ulonglong)(uint)param_2[0x17]);
    FUN_180057ab0(param_2,param_3,0x1e,(ulonglong)uVar6,2,(ulonglong)uVar6,0x55,(ulonglong)uVar5);
    FUN_180057ab0(param_2,param_3,0x1e,(ulonglong)uVar6,2,uVar15,0x55,(ulonglong)uVar5);
    FUN_180057ab0(param_2,param_3,0x1e,(ulonglong)uVar6,2,(ulonglong)uVar6,0x55,(ulonglong)uVar5);
    FUN_180057ab0(param_2,param_3,0x1e,(ulonglong)uVar6,2,(ulonglong)uVar6,0x55,(ulonglong)uVar5);
    FUN_180057ab0(param_2,param_3,0xa7,(ulonglong)uVar5,1,(ulonglong)(uVar6 | 0x10000000),1,
                  (ulonglong)(uint)param_2[0x16]);
    FUN_180057ab0(param_2,param_3,0x1e,uVar16,6,(ulonglong)uVar6,0x55,(ulonglong)(uint)param_2[0x17]
                 );
    FUN_180057ab0(param_2,param_3,0xa7,(ulonglong)uVar6,2,(ulonglong)uVar7,2,
                  (ulonglong)(uint)param_2[0x16]);
    FUN_180057ab0(param_2,param_3,0,(ulonglong)uVar6,3,uVar15,0x154,(ulonglong)(uVar5 | 0x80000000))
    ;
    FUN_180057ab0(param_2,param_3,0xe,(ulonglong)uVar6,1,(ulonglong)uVar6,0,(ulonglong)uVar6);
    FUN_180057ab0(param_2,param_3,0xa7,(ulonglong)uVar5,1,(ulonglong)uVar7,2,
                  (ulonglong)(uint)param_2[0x16]);
    FUN_180057ab0(param_2,param_3,0xa7,(ulonglong)uVar6,2,(ulonglong)uVar7,1,
                  (ulonglong)(uint)param_2[0x16]);
    FUN_180057ab0(param_2,param_3,0,(ulonglong)uVar5,1,(ulonglong)uVar5,0,
                  (ulonglong)(uVar6 | 0x80000000));
    lVar12 = FUN_180056c30((longlong)param_2,uVar6);
    lVar12 = FUN_180056c30(lVar12,uVar5);
    uVar7 = FUN_180056b90(lVar12,1,1);
    FUN_180057ab0(param_2,param_3,0x32,(ulonglong)uVar7,1,(ulonglong)uVar5,0,(ulonglong)uVar6);
    param_2[3] = param_2[3] | 0x700;
  }
  uVar5 = *(uint *)(param_1 + 0x8c) & 0x300;
  if (uVar5 == 0x100) {
LAB_180041a28:
    if ((param_5 & 1) == 0) {
      uVar5 = 0x70;
    }
    else {
      uVar5 = FUN_18003e8e0((longlong)param_2,0,0,0,0,7,0);
    }
    piVar13 = (int *)FUN_18003e308((longlong)param_2,uVar5,7);
    iVar8 = FUN_180057118(piVar13,(uint *)(param_2 + 0x58),uVar7,0,0,0);
    param_2[0x57] = iVar8;
    uVar11 = FUN_18003e9f8((longlong)param_2,uVar5,0xa4);
    iVar8 = FUN_180056c68(param_2,(uint *)(param_2 + 0x60),param_2[0x14],0x80,(byte)uVar11,0,0);
    param_2[0x5f] = iVar8;
    uVar11 = (param_2[0x57] + param_2[0x4f] + iVar8) * 0x1000000 + 0x1000000U & 0x7f000000 | 0x2038;
  }
  else {
    if (uVar5 != 0x200) {
      if ((param_4 & 0xdf0) != 0) {
        if ((param_5 & 1) == 0) {
          uVar5 = 0x70;
        }
        else {
          uVar5 = FUN_18003e8e0((longlong)param_2,0,0,0,0,7,0);
          uVar5 = uVar5 & 0xffff;
        }
        uVar6 = FUN_18003ea30(param_2,(uint)param_4 & 0xffff,uVar5,0,0,0,7,param_3);
        uVar2 = (ushort)uVar6;
        if ((((uVar6 & 0xffff) >> 0xd & 1) != 0) || ((uVar6 & 0xf00) == 0x100)) {
          if (((uVar6 & 0xf0) != 0xf0) && ((uVar6 & 0xf0) != 0x80)) {
            uVar6 = FUN_18003e8e0((longlong)param_2,0,0,0,0,7,0);
          }
          FUN_18003ec58(param_2,uVar2,(ushort)uVar6,0,7,param_3,1);
        }
        uVar14 = uVar6 & 0xffff;
        uVar9 = FUN_18003e8e0((longlong)param_2,uVar14,0,0,0,7,0);
        auVar17 = FUN_18003e308((longlong)param_2,uVar9,7);
        uVar10 = FUN_18003e9f8(auVar17._0_8_,auVar17._8_4_,0xa4);
        FUN_18003e3e8(param_2,0,uVar14,(byte)uVar10,1,0);
        uVar10 = FUN_18003e9f8((longlong)param_2,uVar9,0xa4);
        iVar8 = FUN_180056c68(param_2,(uint *)(param_2 + 0x60),param_2[0x14],0x80,(byte)uVar10,0,0);
        param_2[0x5f] = iVar8;
        FUN_180057c58(param_3,(param_2[0x57] + param_2[0x4f] + iVar8) * 0x1000000 + 0x1000000U &
                              0x7f000000,(uint *)(param_2 + 0x4f),(uint *)(param_2 + 0x57),
                      (uint *)(param_2 + 0x5f),(uint *)0x0);
        piVar13 = (int *)FUN_18003e308((longlong)param_2,uVar5,7);
        iVar8 = FUN_180057118(piVar13,(uint *)(param_2 + 0x58),uVar7,0,0,0);
        param_2[0x57] = iVar8;
        uVar10 = FUN_18003e9f8((longlong)param_2,uVar5,0xa4);
        FUN_18003e3e8(param_2,1,uVar9,(byte)uVar10,0,0);
        uVar10 = FUN_18003e9f8((longlong)param_2,uVar5,0xa4);
        FUN_18003e3e8(param_2,2,uVar14,(byte)uVar10,0,0);
        FUN_180057c58(param_3,(param_2[0x67] + param_2[0x5f] + param_2[0x57] + param_2[0x4f]) *
                              0x1000000 + 0x1000000U & 0x7f000000 | 0x2032,(uint *)(param_2 + 0x4f),
                      (uint *)(param_2 + 0x57),(uint *)(param_2 + 0x5f),(uint *)(param_2 + 0x67));
        if ((uVar9 & 0xf0) == 0x80) {
          FUN_180056c30((longlong)param_2,param_2[(ulonglong)(uVar9 & 0xf) + 0x26]);
          *(undefined4 *)(extraout_x14_00 + 0x98) = 0;
        }
        if (uVar14 == uVar11 || uVar14 == uVar5) goto LAB_180041af4;
joined_r0x000180041a1c:
        if ((uVar6 & 0xf0) == 0x80) {
          FUN_180056c30((longlong)param_2,param_2[(ulonglong)(uVar14 & 0xf) + 0x26]);
          *(undefined4 *)(extraout_x14 + 0x98) = 0;
        }
        goto LAB_180041af4;
      }
      goto LAB_180041a28;
    }
    if ((param_4 & 0xdf0) == 0) {
      uVar5 = 0x70;
      FUN_18003ec58(param_2,0,0x70,0,7,param_3,0);
      goto LAB_180041af4;
    }
    if ((uVar11 & 0xff0) != 0x100) {
      if ((param_5 & 1) == 0) {
        uVar5 = 0x70;
      }
      else {
        uVar5 = FUN_18003e8e0((longlong)param_2,0,0,0,0,7,0);
        uVar5 = uVar5 & 0xffff;
      }
      uVar6 = FUN_18003ea30(param_2,(uint)param_4 & 0xffff,uVar5,0,0,0,7,param_3);
      uVar2 = (ushort)uVar6;
      if ((((uVar6 & 0xffff) >> 0xd & 1) != 0) || ((uVar6 & 0xf00) == 0x100)) {
        if (((uVar6 & 0xf0) != 0xf0) && ((uVar6 & 0xf0) != 0x80)) {
          uVar6 = FUN_18003e8e0((longlong)param_2,0,0,0,0,7,0);
        }
        FUN_18003ec58(param_2,uVar2,(ushort)uVar6,0,7,param_3,1);
      }
      uVar14 = uVar6 & 0xffff;
      piVar13 = (int *)FUN_18003e308((longlong)param_2,uVar5,7);
      iVar8 = FUN_180057118(piVar13,(uint *)(param_2 + 0x58),uVar7 | 0x80000000,0,0,0);
      param_2[0x57] = iVar8;
      uVar9 = FUN_18003e9f8((longlong)param_2,uVar5,0xa4);
      FUN_18003e3e8(param_2,1,uVar14,(byte)uVar9,0,0);
      FUN_180057c58(param_3,(param_2[0x57] + param_2[0x5f] * 2 + param_2[0x4f]) * 0x1000000 +
                            0x1000000U & 0x7f000000 | 0x2032,(uint *)(param_2 + 0x4f),
                    (uint *)(param_2 + 0x57),(uint *)(param_2 + 0x5f),(uint *)(param_2 + 0x5f));
      if (uVar14 == uVar11 || uVar14 == uVar5) goto LAB_180041af4;
      goto joined_r0x000180041a1c;
    }
    if ((param_5 & 1) == 0) {
      uVar5 = 0x70;
    }
    else {
      uVar5 = FUN_18003e8e0((longlong)param_2,0,0,0,0,7,0);
    }
    piVar13 = (int *)FUN_18003e308((longlong)param_2,uVar5,7);
    iVar8 = FUN_180057118(piVar13,(uint *)(param_2 + 0x58),uVar7 | 0x80000000,0,0,0);
    param_2[0x57] = iVar8;
    param_2[0x5f] = 5;
    param_2[0x60] = 0x4006;
    param_2[99] = 0x3f800000;
    param_2[100] = 0x3f800000;
    param_2[0x61] = 0x3f800000;
    param_2[0x62] = 0x3f800000;
    uVar11 = (param_2[0x4f] + iVar8) * 0x1000000 + 0xb000000U & 0x7f000000 | 0x2000;
  }
  FUN_180057c58(param_3,uVar11,(uint *)(param_2 + 0x4f),(uint *)(param_2 + 0x57),
                (uint *)(param_2 + 0x5f),(uint *)0x0);
LAB_180041af4:
  if (bVar3) {
    FUN_180056c30((longlong)param_2,uVar7);
  }
  return uVar5;
}

