/*
 * FUN_180035500 at 180035500
 * uint __cdecl FUN_180035500(longlong param_1, int * param_2, longlong * param_3, ulonglong param_4, byte param_5)
 * Address ranges: 180035500-18003615b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180035500(longlong param_1,int *param_2,longlong *param_3,ulonglong param_4,byte param_5)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int *piVar12;
  longlong extraout_x14;
  longlong extraout_x14_00;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint unaff_w27;
  undefined1 auVar16 [12];
  
  cVar1 = *(char *)(param_1 + 0x8c);
  uVar14 = param_4;
  if (cVar1 == '\x01') {
    uVar6 = FUN_180059610((longlong)param_2,1,0);
    uVar7 = 0x150101;
LAB_180035594:
    FUN_1800346e0(param_2,param_3,uVar7,uVar14,(ulonglong)uVar6);
    bVar3 = true;
    if (uVar6 == 0) {
      return unaff_w27;
    }
  }
  else {
    if (cVar1 == '\x02') {
      uVar6 = FUN_180059610((longlong)param_2,1,0);
      uVar7 = 0x110101;
      goto LAB_180035594;
    }
    if (cVar1 != '\x03') {
      return unaff_w27;
    }
    bVar3 = false;
    uVar6 = 0x190101;
  }
  uVar7 = (uint)(ushort)param_4;
  if (((*(uint *)(param_1 + 0x8c) & 0x300) == 0x200) && ((param_4 & 0xdf0) == 0)) {
    bVar3 = false;
  }
  if (bVar3) {
    uVar4 = FUN_180059610((longlong)param_2,4,1);
    uVar15 = (ulonglong)uVar4;
    uVar5 = FUN_180059610((longlong)param_2,2,1);
    uVar14 = (ulonglong)uVar5;
    FUN_18005a530(param_2,param_3,0x34,uVar14,1,(ulonglong)uVar6,0,(ulonglong)(uint)param_2[0x16]);
    FUN_18005a530(param_2,param_3,0x33,uVar14,1,uVar14,0,(ulonglong)(uint)param_2[0x16]);
    FUN_18005a530(param_2,param_3,0x1c,uVar14,2,uVar14,0,0);
    FUN_18005a530(param_2,param_3,0x1e,uVar14,2,uVar14,0x55,(ulonglong)(uint)param_2[0x16]);
    FUN_18005a530(param_2,param_3,0xa7,(ulonglong)uVar5,2,(ulonglong)(uVar5 | 0x10000000),1,
                  (ulonglong)(uint)param_2[0x16]);
    FUN_18005a530(param_2,param_3,0x1e,uVar15,0xf,uVar14,0x55,(ulonglong)(uint)param_2[0x17]);
    uVar6 = uVar4 | 0x10000000;
    FUN_18005a530(param_2,param_3,0xa7,(ulonglong)uVar4,1,(ulonglong)uVar6,0,
                  (ulonglong)(uint)param_2[0x16]);
    FUN_18005a530(param_2,param_3,0xa7,uVar15,2,(ulonglong)uVar6,1,(ulonglong)(uint)param_2[0x16]);
    FUN_18005a530(param_2,param_3,0xa7,(ulonglong)uVar4,4,(ulonglong)uVar6,2,
                  (ulonglong)(uint)param_2[0x16]);
    FUN_18005a530(param_2,param_3,0xa7,(ulonglong)uVar4,8,(ulonglong)uVar6,3,
                  (ulonglong)(uint)param_2[0x16]);
    FUN_18005a530(param_2,param_3,0x1d,uVar15,0xf,(ulonglong)uVar5,0,(ulonglong)uVar4);
    FUN_18005a530(param_2,param_3,1,(ulonglong)uVar4,0xf,(ulonglong)uVar4,0xe4,
                  (ulonglong)(uint)param_2[0x17]);
    FUN_18005a530(param_2,param_3,0x1e,(ulonglong)uVar5,2,(ulonglong)uVar5,0x55,(ulonglong)uVar4);
    FUN_18005a530(param_2,param_3,0x1e,(ulonglong)uVar5,2,uVar14,0x55,(ulonglong)uVar4);
    FUN_18005a530(param_2,param_3,0x1e,(ulonglong)uVar5,2,(ulonglong)uVar5,0x55,(ulonglong)uVar4);
    FUN_18005a530(param_2,param_3,0x1e,(ulonglong)uVar5,2,(ulonglong)uVar5,0x55,(ulonglong)uVar4);
    FUN_18005a530(param_2,param_3,0xa7,(ulonglong)uVar4,1,(ulonglong)(uVar5 | 0x10000000),1,
                  (ulonglong)(uint)param_2[0x16]);
    FUN_18005a530(param_2,param_3,0x1e,uVar15,6,(ulonglong)uVar5,0x55,(ulonglong)(uint)param_2[0x17]
                 );
    FUN_18005a530(param_2,param_3,0xa7,(ulonglong)uVar5,2,(ulonglong)uVar6,2,
                  (ulonglong)(uint)param_2[0x16]);
    FUN_18005a530(param_2,param_3,0,(ulonglong)uVar5,3,uVar14,0x154,(ulonglong)(uVar4 | 0x80000000))
    ;
    FUN_18005a530(param_2,param_3,0xe,(ulonglong)uVar5,1,(ulonglong)uVar5,0,(ulonglong)uVar5);
    FUN_18005a530(param_2,param_3,0xa7,(ulonglong)uVar4,1,(ulonglong)uVar6,2,
                  (ulonglong)(uint)param_2[0x16]);
    FUN_18005a530(param_2,param_3,0xa7,(ulonglong)uVar5,2,(ulonglong)uVar6,1,
                  (ulonglong)(uint)param_2[0x16]);
    FUN_18005a530(param_2,param_3,0,(ulonglong)uVar4,1,(ulonglong)uVar4,0,
                  (ulonglong)(uVar5 | 0x80000000));
    lVar11 = FUN_1800596b0((longlong)param_2,uVar5);
    lVar11 = FUN_1800596b0(lVar11,uVar4);
    uVar6 = FUN_180059610(lVar11,1,1);
    FUN_18005a530(param_2,param_3,0x32,(ulonglong)uVar6,1,(ulonglong)uVar4,0,(ulonglong)uVar5);
    param_2[3] = param_2[3] | 0x700;
  }
  uVar4 = *(uint *)(param_1 + 0x8c) & 0x300;
  if (uVar4 == 0x100) {
LAB_180036058:
    if ((param_5 & 1) == 0) {
      uVar7 = 0x70;
    }
    else {
      uVar7 = FUN_180032ae8((longlong)param_2,0,0,0,0,7,0);
    }
    piVar12 = (int *)FUN_1800324f0((longlong)param_2,uVar7,7);
    iVar8 = FUN_180059b98(piVar12,(uint *)(param_2 + 0x58),uVar6,0,0,0);
    param_2[0x57] = iVar8;
    uVar7 = FUN_180032c00((longlong)param_2,uVar7,0xa4);
    iVar8 = FUN_1800596e8(param_2,(uint *)(param_2 + 0x60),param_2[0x14],0x80,(byte)uVar7,0,0);
    param_2[0x5f] = iVar8;
    uVar7 = (param_2[0x57] + param_2[0x4f] + iVar8) * 0x1000000 + 0x1000000U & 0x7f000000 | 0x2038;
  }
  else {
    if (uVar4 != 0x200) {
      if ((param_4 & 0xdf0) != 0) {
        if ((param_5 & 1) == 0) {
          uVar4 = 0x70;
        }
        else {
          uVar4 = FUN_180032ae8((longlong)param_2,0,0,0,0,7,0);
          uVar4 = uVar4 & 0xffff;
        }
        uVar5 = FUN_180032c38(param_2,(uint)param_4 & 0xffff,uVar4,0,0,0,7,param_3);
        uVar2 = (ushort)uVar5;
        if ((((uVar5 & 0xffff) >> 0xd & 1) != 0) || ((uVar5 & 0xf00) == 0x100)) {
          if (((uVar5 & 0xf0) != 0xf0) && ((uVar5 & 0xf0) != 0x80)) {
            uVar5 = FUN_180032ae8((longlong)param_2,0,0,0,0,7,0);
          }
          FUN_180032e60(param_2,uVar2,(ushort)uVar5,0,7,param_3,1);
        }
        uVar13 = uVar5 & 0xffff;
        uVar9 = FUN_180032ae8((longlong)param_2,uVar13,0,0,0,7,0);
        auVar16 = FUN_1800324f0((longlong)param_2,uVar9,7);
        uVar10 = FUN_180032c00(auVar16._0_8_,auVar16._8_4_,0xa4);
        FUN_1800325f0(param_2,0,uVar13,(byte)uVar10,1,0);
        uVar10 = FUN_180032c00((longlong)param_2,uVar9,0xa4);
        iVar8 = FUN_1800596e8(param_2,(uint *)(param_2 + 0x60),param_2[0x14],0x80,(byte)uVar10,0,0);
        param_2[0x5f] = iVar8;
        FUN_18005a6d8(param_3,(param_2[0x57] + param_2[0x4f] + iVar8) * 0x1000000 + 0x1000000U &
                              0x7f000000,(uint *)(param_2 + 0x4f),(uint *)(param_2 + 0x57),
                      (uint *)(param_2 + 0x5f),(uint *)0x0);
        piVar12 = (int *)FUN_1800324f0((longlong)param_2,uVar4,7);
        iVar8 = FUN_180059b98(piVar12,(uint *)(param_2 + 0x58),uVar6,0,0,0);
        param_2[0x57] = iVar8;
        uVar10 = FUN_180032c00((longlong)param_2,uVar4,0xa4);
        FUN_1800325f0(param_2,1,uVar9,(byte)uVar10,0,0);
        uVar10 = FUN_180032c00((longlong)param_2,uVar4,0xa4);
        FUN_1800325f0(param_2,2,uVar13,(byte)uVar10,0,0);
        FUN_18005a6d8(param_3,(param_2[0x67] + param_2[0x5f] + param_2[0x57] + param_2[0x4f]) *
                              0x1000000 + 0x1000000U & 0x7f000000 | 0x2032,(uint *)(param_2 + 0x4f),
                      (uint *)(param_2 + 0x57),(uint *)(param_2 + 0x5f),(uint *)(param_2 + 0x67));
        if ((uVar9 & 0xf0) == 0x80) {
          FUN_1800596b0((longlong)param_2,param_2[(ulonglong)(uVar9 & 0xf) + 0x26]);
          *(undefined4 *)(extraout_x14_00 + 0x98) = 0;
        }
        if (uVar13 == uVar7 || uVar13 == uVar4) goto LAB_180036124;
joined_r0x00018003604c:
        if ((uVar5 & 0xf0) == 0x80) {
          FUN_1800596b0((longlong)param_2,param_2[(ulonglong)(uVar13 & 0xf) + 0x26]);
          *(undefined4 *)(extraout_x14 + 0x98) = 0;
        }
        goto LAB_180036124;
      }
      goto LAB_180036058;
    }
    if ((param_4 & 0xdf0) == 0) {
      FUN_180032e60(param_2,0,0x70,0,7,param_3,0);
      goto LAB_180036124;
    }
    if ((uVar7 & 0xff0) != 0x100) {
      if ((param_5 & 1) == 0) {
        uVar4 = 0x70;
      }
      else {
        uVar4 = FUN_180032ae8((longlong)param_2,0,0,0,0,7,0);
        uVar4 = uVar4 & 0xffff;
      }
      uVar5 = FUN_180032c38(param_2,(uint)param_4 & 0xffff,uVar4,0,0,0,7,param_3);
      uVar2 = (ushort)uVar5;
      if ((((uVar5 & 0xffff) >> 0xd & 1) != 0) || ((uVar5 & 0xf00) == 0x100)) {
        if (((uVar5 & 0xf0) != 0xf0) && ((uVar5 & 0xf0) != 0x80)) {
          uVar5 = FUN_180032ae8((longlong)param_2,0,0,0,0,7,0);
        }
        FUN_180032e60(param_2,uVar2,(ushort)uVar5,0,7,param_3,1);
      }
      uVar13 = uVar5 & 0xffff;
      piVar12 = (int *)FUN_1800324f0((longlong)param_2,uVar4,7);
      iVar8 = FUN_180059b98(piVar12,(uint *)(param_2 + 0x58),uVar6 | 0x80000000,0,0,0);
      param_2[0x57] = iVar8;
      uVar9 = FUN_180032c00((longlong)param_2,uVar4,0xa4);
      FUN_1800325f0(param_2,1,uVar13,(byte)uVar9,0,0);
      FUN_18005a6d8(param_3,(param_2[0x57] + param_2[0x5f] * 2 + param_2[0x4f]) * 0x1000000 +
                            0x1000000U & 0x7f000000 | 0x2032,(uint *)(param_2 + 0x4f),
                    (uint *)(param_2 + 0x57),(uint *)(param_2 + 0x5f),(uint *)(param_2 + 0x5f));
      if (uVar13 == uVar7 || uVar13 == uVar4) goto LAB_180036124;
      goto joined_r0x00018003604c;
    }
    if ((param_5 & 1) == 0) {
      uVar7 = 0x70;
    }
    else {
      uVar7 = FUN_180032ae8((longlong)param_2,0,0,0,0,7,0);
    }
    piVar12 = (int *)FUN_1800324f0((longlong)param_2,uVar7,7);
    iVar8 = FUN_180059b98(piVar12,(uint *)(param_2 + 0x58),uVar6 | 0x80000000,0,0,0);
    param_2[0x57] = iVar8;
    param_2[0x5f] = 5;
    param_2[0x60] = 0x4006;
    param_2[99] = 0x3f800000;
    param_2[100] = 0x3f800000;
    param_2[0x61] = 0x3f800000;
    param_2[0x62] = 0x3f800000;
    uVar7 = (param_2[0x4f] + iVar8) * 0x1000000 + 0xb000000U & 0x7f000000 | 0x2000;
  }
  FUN_18005a6d8(param_3,uVar7,(uint *)(param_2 + 0x4f),(uint *)(param_2 + 0x57),
                (uint *)(param_2 + 0x5f),(uint *)0x0);
LAB_180036124:
  if (bVar3) {
    FUN_1800596b0((longlong)param_2,uVar6);
  }
  return unaff_w27;
}

