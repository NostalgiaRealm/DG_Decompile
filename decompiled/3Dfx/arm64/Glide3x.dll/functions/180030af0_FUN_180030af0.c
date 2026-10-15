/*
 * FUN_180030af0 at 180030af0
 * undefined __cdecl FUN_180030af0(longlong param_1, uint param_2, int * param_3, longlong * param_4)
 * Address ranges: 180030af0-180031ed3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030af0(longlong param_1,uint param_2,int *param_3,longlong *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint extraout_w1;
  uint extraout_w1_00;
  uint extraout_w1_01;
  uint extraout_w1_02;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  FUN_18005a530(param_3,param_4,0x29,(ulonglong)(uint)param_3[0x1c],1,(ulonglong)(uint)param_3[0x1c]
                ,0x54,(ulonglong)(uint)param_3[0x16]);
  uVar8 = param_3[0x1a];
  uVar2 = FUN_180059610((longlong)param_3,2,1);
  lVar14 = (ulonglong)param_2 * 0x1a0;
  uVar18 = (ulonglong)uVar2;
  FUN_18005a530(param_3,param_4,0x32,(ulonglong)uVar8,3,(ulonglong)uVar8,0x154,
                (ulonglong)(param_3[0x12] | 0x40000000));
  FUN_18005a530(param_3,param_4,0x1a,uVar18,3,(ulonglong)uVar8,0x154,0);
  FUN_18005a530(param_3,param_4,0x41,(ulonglong)uVar8,3,(ulonglong)uVar8,0x54,0);
  FUN_18005a530(param_3,param_4,0,(ulonglong)uVar8,0xc,(ulonglong)uVar8,0x140,
                (ulonglong)(uint)param_3[0x17]);
  lVar13 = lVar14 + param_1;
  uVar6 = 5;
  if (*(int *)(lVar13 + 0x134) != 1) {
    uVar6 = 0;
  }
  uVar7 = 10;
  if (*(int *)(lVar13 + 0x138) != 1) {
    uVar7 = 0;
  }
  uVar7 = uVar7 | uVar6;
  uVar6 = (uint)(*(int *)(lVar13 + 0x134) == 2) | (uint)(*(int *)(lVar13 + 0x138) == 2) << 1;
  bVar1 = (&DAT_180067970)[uVar6];
  uVar3 = FUN_180059610((longlong)param_3,4,1);
  uVar16 = (ulonglong)uVar3;
  if (uVar7 != 0) {
    FUN_18005a530(param_3,param_4,0x34,(ulonglong)uVar8,(ulonglong)uVar7,(ulonglong)uVar8,0x1e4,
                  (ulonglong)(uint)param_3[0x17]);
    FUN_18005a530(param_3,param_4,0,uVar16,(ulonglong)(uVar7 & 3),
                  (ulonglong)(param_3[0x13] | 0x40000000),0x44,lVar14 + 0x188);
    FUN_18005a530(param_3,param_4,0x33,(ulonglong)uVar8,(ulonglong)(byte)uVar7,(ulonglong)uVar8,
                  0x1e4,uVar16);
  }
  uVar7 = uVar7 ^ 0xf;
  if (uVar7 != 0) {
    uVar6 = uVar6 | uVar6 << 2;
    uVar4 = FUN_180059610((longlong)param_3,4,1);
    uVar17 = (ulonglong)uVar4;
    FUN_18005a530(param_3,param_4,0xe,(ulonglong)uVar8,(ulonglong)uVar7,(ulonglong)uVar8,0xe4,
                  (ulonglong)(param_3[0x13] | 0x40000000));
    FUN_18005a530(param_3,param_4,0x43,uVar16,(ulonglong)uVar7,(ulonglong)uVar8,0xe4,0);
    if (uVar6 == 0) {
      uVar15 = 0;
    }
    else {
      uVar5 = FUN_180059610((longlong)param_3,4,1);
      uVar15 = (ulonglong)uVar5;
      uVar5 = bVar1 | 0x100;
      FUN_18005a530(param_3,param_4,0x1b,uVar17,(ulonglong)uVar6,uVar16,(ulonglong)uVar5,0);
      FUN_18005a530(param_3,param_4,0x31,uVar15,(ulonglong)uVar6,(ulonglong)uVar8,(ulonglong)uVar5,
                    (ulonglong)(uint)param_3[0x17]);
      FUN_18005a530(param_3,param_4,0x1e,uVar17,(ulonglong)uVar6,uVar17,(ulonglong)uVar5,uVar15);
      FUN_18005a530(param_3,param_4,1,uVar15,(ulonglong)uVar6,uVar17,(ulonglong)uVar5,
                    (ulonglong)(uint)param_3[0x17]);
    }
    FUN_18005a530(param_3,param_4,0,(ulonglong)uVar8,(ulonglong)uVar7,
                  (ulonglong)(uVar3 | 0x80000000),0xe4,(ulonglong)uVar8);
    FUN_18005a530(param_3,param_4,0x38,(ulonglong)uVar8,(ulonglong)uVar7,(ulonglong)uVar8,0xe4,
                  (ulonglong)(param_3[0x13] | 0x40000000));
    FUN_18005a530(param_3,param_4,1,(ulonglong)uVar3,(ulonglong)uVar7,(ulonglong)uVar8,0xe4,
                  (ulonglong)(uint)param_3[0x17]);
    FUN_18005a530(param_3,param_4,0x39,uVar17,(ulonglong)uVar7,(ulonglong)uVar8,0xe4,
                  (ulonglong)(uVar8 | 0x80000000));
    FUN_18005a530(param_3,param_4,1,uVar16,(ulonglong)uVar7,uVar16,0xe4,uVar17);
    FUN_18005a530(param_3,param_4,0,uVar17,(ulonglong)uVar7,(ulonglong)uVar8,0xe4,
                  (ulonglong)(param_3[0x13] | 0x40000000));
    FUN_18005a530(param_3,param_4,0x37,(ulonglong)uVar8,(ulonglong)uVar7,uVar16,0xe4,uVar17);
    if (uVar6 != 0) {
      uVar7 = bVar1 | 0x100;
      FUN_18005a530(param_3,param_4,0,uVar17,(ulonglong)uVar6,(ulonglong)(uVar8 | 0x80000000),
                    (ulonglong)uVar7,(ulonglong)(param_3[0x13] | 0x40000000));
      FUN_18005a530(param_3,param_4,0,uVar17,(ulonglong)uVar6,uVar17,(ulonglong)uVar7,
                    (ulonglong)(uint)param_3[0x17]);
      FUN_18005a530(param_3,param_4,0x37,(ulonglong)uVar8,(ulonglong)uVar6,uVar15,(ulonglong)uVar7,
                    uVar17);
      FUN_18005a530(param_3,param_4,0x31,uVar15,(ulonglong)uVar6,(ulonglong)uVar8,(ulonglong)uVar7,
                    (ulonglong)(uint)param_3[0x17]);
      FUN_18005a530(param_3,param_4,1,uVar15,(ulonglong)uVar6,uVar15,(ulonglong)uVar7,
                    (ulonglong)(param_3[0x13] | 0x40000000));
      FUN_18005a530(param_3,param_4,0,(ulonglong)uVar8,(ulonglong)uVar6,(ulonglong)uVar8,
                    (ulonglong)uVar7,uVar15);
    }
    lVar11 = FUN_1800596b0((longlong)param_3,(uint)uVar15);
    FUN_1800596b0(lVar11,uVar4);
  }
  lVar11 = FUN_1800596b0((longlong)param_3,uVar3);
  uVar6 = FUN_180059610(lVar11,4,1);
  uVar16 = (ulonglong)uVar6;
  FUN_18005a530(param_3,param_4,0x32,(ulonglong)uVar8,0xf,(ulonglong)uVar8,0xf5,
                (ulonglong)(param_3[0x13] | 0x40000000));
  FUN_18005a530(param_3,param_4,0,(ulonglong)uVar8,10,(ulonglong)uVar8,0xf5,
                (ulonglong)(uVar8 | 0x80000000));
  FUN_18005a530(param_3,param_4,0x1b,uVar16,0xf,(ulonglong)uVar8,0xe4,0);
  FUN_18005a530(param_3,param_4,0x36,(ulonglong)uVar8,0xf,uVar16,0x88,0);
  FUN_18005a530(param_3,param_4,0x1e,(ulonglong)uVar8,6,(ulonglong)uVar8,0xe4,uVar16);
  lVar11 = param_1 + (ulonglong)param_2 * 0x1a0;
  if (7 < *(uint *)(lVar11 + 0x130)) {
    FUN_18005a530(param_3,param_4,0x29,(ulonglong)uVar8,0xf,(ulonglong)uVar8,0xe4,
                  (ulonglong)(uint)param_3[0x16]);
  }
  FUN_18005a530(param_3,param_4,0x1e,(ulonglong)uVar8,0xf,(ulonglong)uVar8,0xe4,
                (ulonglong)(param_3[0x12] | 0x40000000));
  lVar12 = FUN_1800596b0((longlong)param_3,uVar6);
  lVar12 = FUN_1800596b0(lVar12,param_3[0x1c]);
  param_3[0x1c] = 0;
  bVar1 = (&DAT_180066908)[*(uint *)(lVar11 + 0x130)];
  uVar6 = FUN_180059610(lVar12,4,1);
  uVar17 = (ulonglong)uVar6;
  uVar7 = FUN_180059610((longlong)param_3,extraout_w1,1);
  uVar16 = (ulonglong)uVar7;
  if (bVar1 < 4) {
    FUN_18005a530(param_3,param_4,1,uVar16,0xf,(ulonglong)uVar8,0xe4,(ulonglong)(uint)param_3[0x17])
    ;
    FUN_18005a530(param_3,param_4,0x29,uVar16,0xf,uVar16,0xe4,(ulonglong)(uint)param_3[0x16]);
    FUN_18005a530(param_3,param_4,0x2a,(ulonglong)uVar8,0xf,(ulonglong)uVar8,0xe4,
                  (ulonglong)(uint)param_3[0x16]);
  }
  uVar3 = uVar8 | 0x10000000;
  FUN_18005a530(param_3,param_4,0xa7,uVar17,1,(ulonglong)uVar3,0,(ulonglong)(uint)param_3[0x16]);
  FUN_18005a530(param_3,param_4,0xa7,uVar17,2,(ulonglong)uVar3,1,(ulonglong)(uint)param_3[0x16]);
  FUN_18005a530(param_3,param_4,0xa7,uVar17,4,(ulonglong)uVar3,2,(ulonglong)(uint)param_3[0x16]);
  FUN_18005a530(param_3,param_4,0xa7,uVar17,8,(ulonglong)uVar3,3,(ulonglong)(uint)param_3[0x16]);
  if (bVar1 < 4) {
    if (*param_3 == 0x51) {
      FUN_18005a530(param_3,param_4,0x55,uVar17,0xf,uVar17,0xe4,uVar16);
    }
    else {
      uVar3 = uVar7 | 0x10000000;
      FUN_18005a530(param_3,param_4,0x55,uVar17,1,uVar17,0,(ulonglong)uVar3);
      FUN_18005a530(param_3,param_4,0x55,uVar17,2,uVar17,0x55,(ulonglong)uVar3);
      FUN_18005a530(param_3,param_4,0x55,uVar17,4,uVar17,0xaa,(ulonglong)uVar3);
      FUN_18005a530(param_3,param_4,0x55,uVar17,8,uVar17,0xff,(ulonglong)uVar3);
    }
  }
  lVar11 = FUN_1800596b0((longlong)param_3,uVar7);
  lVar11 = FUN_1800596b0(lVar11,uVar8);
  uVar8 = FUN_180059610(lVar11,4,1);
  uVar15 = (ulonglong)uVar8;
  uVar7 = FUN_180059610((longlong)param_3,extraout_w1_00,1);
  uVar16 = (ulonglong)uVar7;
  uVar3 = FUN_180059610((longlong)param_3,extraout_w1_01,1);
  if (bVar1 == 1) {
    FUN_18005a530(param_3,param_4,1,(ulonglong)uVar6,0xf,uVar17,0xe4,(ulonglong)(uint)param_3[0x17])
    ;
    uVar4 = uVar6 | 0x10000000;
    FUN_18005a530(param_3,param_4,0xa7,(ulonglong)uVar3,0xf,(ulonglong)uVar4,3,
                  (ulonglong)(uint)param_3[0x16]);
    FUN_18005a530(param_3,param_4,0xa7,uVar16,0xf,(ulonglong)uVar4,2,(ulonglong)(uint)param_3[0x16])
    ;
    FUN_18005a530(param_3,param_4,0xa7,uVar15,0xf,(ulonglong)uVar4,1,(ulonglong)(uint)param_3[0x16])
    ;
    FUN_18005a530(param_3,param_4,0xa7,(ulonglong)uVar6,0xf,(ulonglong)uVar4,0,
                  (ulonglong)(uint)param_3[0x16]);
  }
  else if (bVar1 == 2) {
    uVar5 = FUN_180059610((longlong)param_3,1,1);
    uVar9 = FUN_180059610((longlong)param_3,4,1);
    uVar10 = FUN_180059610((longlong)param_3,extraout_w1_02,1);
    FUN_18005a530(param_3,param_4,0x36,(ulonglong)uVar5,1,(ulonglong)(uint)param_3[0x12],0xe4,
                  lVar14 + 0x130);
    FUN_18005a530(param_3,param_4,0x55,(ulonglong)uVar10,0xf,uVar17,0xe4,
                  (ulonglong)(uint)param_3[0x16]);
    FUN_18005a530(param_3,param_4,1,(ulonglong)uVar9,0xf,uVar17,0xe4,(ulonglong)(uint)param_3[0x17])
    ;
    FUN_18005a530(param_3,param_4,1,(ulonglong)uVar10,0xf,(ulonglong)uVar10,0xe4,
                  (ulonglong)(uint)param_3[0x17]);
    uVar4 = uVar10 | 0x10000000;
    FUN_18005a530(param_3,param_4,0xa7,(ulonglong)uVar3,0xf,(ulonglong)uVar4,3,
                  (ulonglong)(uint)param_3[0x16]);
    FUN_18005a530(param_3,param_4,0xa7,uVar16,0xf,(ulonglong)(uVar9 | 0x10000000),3,
                  (ulonglong)(uint)param_3[0x16]);
    FUN_18005a530(param_3,param_4,0x32,(ulonglong)uVar3,0xf,uVar16,0xe4,
                  (ulonglong)(param_3[0x15] | 0x40000000));
    FUN_18005a530(param_3,param_4,0xa7,uVar16,0xf,(ulonglong)uVar4,2,(ulonglong)(uint)param_3[0x16])
    ;
    FUN_18005a530(param_3,param_4,0xa7,uVar15,0xf,(ulonglong)uVar9 | 0x10000000,2,
                  (ulonglong)(uint)param_3[0x16]);
    FUN_18005a530(param_3,param_4,0x32,uVar16,0xf,uVar15,0xe4,
                  (ulonglong)(param_3[0x15] | 0x40000000));
    FUN_18005a530(param_3,param_4,0xa7,uVar15,0xf,(ulonglong)uVar4,1,(ulonglong)(uint)param_3[0x16])
    ;
    FUN_18005a530(param_3,param_4,0xa7,uVar17,0xf,(ulonglong)uVar9 | 0x10000000,1,
                  (ulonglong)(uint)param_3[0x16]);
    FUN_18005a530(param_3,param_4,0x32,uVar15,0xf,uVar17,0xe4,
                  (ulonglong)(param_3[0x15] | 0x40000000));
    FUN_18005a530(param_3,param_4,0xa7,uVar17,0xf,(ulonglong)uVar4,0,(ulonglong)(uint)param_3[0x16])
    ;
    FUN_18005a530(param_3,param_4,0xa7,(ulonglong)uVar10,0xf,(ulonglong)uVar9 | 0x10000000,0,
                  (ulonglong)(uint)param_3[0x16]);
    FUN_18005a530(param_3,param_4,0x32,uVar17,0xf,(ulonglong)uVar10,0xe4,
                  (ulonglong)(param_3[0x15] | 0x40000000));
    lVar14 = FUN_1800596b0((longlong)param_3,uVar9);
    lVar14 = FUN_1800596b0(lVar14,uVar10);
    FUN_1800596b0(lVar14,uVar5);
  }
  if (param_3[0x19] == 0) {
    if (*(int *)(lVar13 + 0x140) != 1) {
      FUN_18005a530(param_3,param_4,0x40,uVar18,3,uVar18,0x154,0);
    }
  }
  else {
    uVar4 = FUN_180059610((longlong)param_3,2,0);
    FUN_18005a530(param_3,param_4,0x40,(ulonglong)uVar4,3,uVar18,0x154,0);
    FUN_18005a530(param_3,param_4,0x20,(ulonglong)(uint)param_3[0x19],1,
                  (ulonglong)(uint)param_3[0x19],0,(ulonglong)(uint)param_3[0x16]);
    FUN_18005a530(param_3,param_4,0x37,uVar18,3,(ulonglong)(uint)param_3[0x19],0,uVar18);
    FUN_1800596b0((longlong)param_3,param_3[0x19]);
    param_3[0x19] = 0;
  }
  FUN_18005a530(param_3,param_4,0,(ulonglong)uVar8,0xf,uVar15,0xe4,(ulonglong)(uVar6 | 0x80000000));
  FUN_18005a530(param_3,param_4,0x32,uVar17,0xf,(ulonglong)uVar8,0xe4,uVar18);
  FUN_18005a530(param_3,param_4,0,(ulonglong)uVar3,0xf,(ulonglong)uVar3,0xe4,
                (ulonglong)(uVar7 | 0x80000000));
  FUN_18005a530(param_3,param_4,0x32,(ulonglong)uVar7,0xf,(ulonglong)uVar3,0xe4,uVar18);
  FUN_18005a530(param_3,param_4,0,(ulonglong)uVar7,0xf,(ulonglong)uVar7,0xe4,
                (ulonglong)(uVar6 | 0x80000000));
  FUN_18005a530(param_3,param_4,0x32,uVar17,0xf,uVar16,0xe4,uVar18);
  lVar13 = FUN_1800596b0((longlong)param_3,uVar8);
  lVar13 = FUN_1800596b0(lVar13,uVar7);
  lVar13 = FUN_1800596b0(lVar13,uVar3);
  FUN_1800596b0(lVar13,uVar2);
  param_3[(ulonglong)param_2 + 0x23] = uVar6;
  return;
}

