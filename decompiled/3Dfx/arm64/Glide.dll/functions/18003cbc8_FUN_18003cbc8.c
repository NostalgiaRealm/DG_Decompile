/*
 * FUN_18003cbc8 at 18003cbc8
 * undefined __cdecl FUN_18003cbc8(longlong param_1, uint param_2, int * param_3, longlong * param_4)
 * Address ranges: 18003cbc8-18003dceb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003cbc8(longlong param_1,uint param_2,int *param_3,longlong *param_4)

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
  uint extraout_w1;
  uint extraout_w1_00;
  uint extraout_w1_01;
  uint extraout_w1_02;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  FUN_180057ab0(param_3,param_4,0x29,(ulonglong)(uint)param_3[0x1c],1,(ulonglong)(uint)param_3[0x1c]
                ,0x54,(ulonglong)(uint)param_3[0x16]);
  uVar6 = param_3[0x1a];
  uVar2 = FUN_180056b90((longlong)param_3,2,1);
  uVar14 = (ulonglong)uVar2;
  lVar13 = (ulonglong)param_2 * 0x180;
  FUN_180057ab0(param_3,param_4,0x32,(ulonglong)uVar6,3,(ulonglong)uVar6,0x154,
                (ulonglong)(param_3[0x12] | 0x40000000));
  FUN_180057ab0(param_3,param_4,0x1a,uVar14,3,(ulonglong)uVar6,0x154,0);
  FUN_180057ab0(param_3,param_4,0x41,(ulonglong)uVar6,3,(ulonglong)uVar6,0x54,0);
  FUN_180057ab0(param_3,param_4,0,(ulonglong)uVar6,0xc,(ulonglong)uVar6,0x140,
                (ulonglong)(uint)param_3[0x17]);
  lVar12 = lVar13 + param_1;
  uVar5 = 10;
  if (*(int *)(lVar12 + 0x138) != 1) {
    uVar5 = 0;
  }
  uVar3 = 5;
  if (*(int *)(lVar12 + 0x134) != 1) {
    uVar3 = 0;
  }
  uVar5 = uVar5 | uVar3;
  uVar3 = FUN_180056b90((longlong)param_3,4,1);
  uVar16 = (ulonglong)uVar3;
  if (uVar5 != 0) {
    FUN_180057ab0(param_3,param_4,0x34,(ulonglong)uVar6,(ulonglong)uVar5,(ulonglong)uVar6,0x1e4,
                  (ulonglong)(uint)param_3[0x17]);
    FUN_180057ab0(param_3,param_4,0,uVar16,(ulonglong)(uVar5 & 3),
                  (ulonglong)(param_3[0x13] | 0x40000000),0x44,lVar13 + 0x168);
    FUN_180057ab0(param_3,param_4,0x33,(ulonglong)uVar6,(ulonglong)(byte)uVar5,(ulonglong)uVar6,
                  0x1e4,uVar16);
  }
  uVar5 = uVar5 ^ 0xf;
  if (uVar5 != 0) {
    uVar4 = FUN_180056b90((longlong)param_3,4,1);
    FUN_180057ab0(param_3,param_4,0xe,(ulonglong)uVar6,(ulonglong)uVar5,(ulonglong)uVar6,0xe4,
                  (ulonglong)(param_3[0x13] | 0x40000000));
    FUN_180057ab0(param_3,param_4,0x43,uVar16,(ulonglong)uVar5,(ulonglong)uVar6,0xe4,0);
    FUN_180057ab0(param_3,param_4,0,(ulonglong)uVar6,(ulonglong)uVar5,
                  (ulonglong)(uVar3 | 0x80000000),0xe4,(ulonglong)uVar6);
    FUN_180057ab0(param_3,param_4,0x38,(ulonglong)uVar6,(ulonglong)uVar5,(ulonglong)uVar6,0xe4,
                  (ulonglong)(param_3[0x13] | 0x40000000));
    FUN_180057ab0(param_3,param_4,1,(ulonglong)uVar3,(ulonglong)uVar5,(ulonglong)uVar6,0xe4,
                  (ulonglong)(uint)param_3[0x17]);
    FUN_180057ab0(param_3,param_4,0x39,(ulonglong)uVar4,(ulonglong)uVar5,(ulonglong)uVar6,0xe4,
                  (ulonglong)(uVar6 | 0x80000000));
    FUN_180057ab0(param_3,param_4,1,uVar16,(ulonglong)uVar5,uVar16,0xe4,(ulonglong)uVar4);
    FUN_180057ab0(param_3,param_4,0,(ulonglong)uVar4,(ulonglong)uVar5,(ulonglong)uVar6,0xe4,
                  (ulonglong)(param_3[0x13] | 0x40000000));
    FUN_180057ab0(param_3,param_4,0x37,(ulonglong)uVar6,(ulonglong)uVar5,uVar16,0xe4,
                  (ulonglong)uVar4);
    FUN_180056c30((longlong)param_3,uVar4);
  }
  lVar11 = FUN_180056c30((longlong)param_3,uVar3);
  uVar5 = FUN_180056b90(lVar11,4,1);
  uVar16 = (ulonglong)uVar5;
  FUN_180057ab0(param_3,param_4,0x32,(ulonglong)uVar6,0xf,(ulonglong)uVar6,0xf5,
                (ulonglong)(param_3[0x13] | 0x40000000));
  FUN_180057ab0(param_3,param_4,0,(ulonglong)uVar6,10,(ulonglong)uVar6,0xf5,
                (ulonglong)(uVar6 | 0x80000000));
  FUN_180057ab0(param_3,param_4,0x1b,uVar16,0xf,(ulonglong)uVar6,0xe4,0);
  FUN_180057ab0(param_3,param_4,0x36,(ulonglong)uVar6,0xf,uVar16,0x88,0);
  FUN_180057ab0(param_3,param_4,0x1e,(ulonglong)uVar6,6,(ulonglong)uVar6,0xe4,uVar16);
  if (7 < *(uint *)(lVar12 + 0x130)) {
    FUN_180057ab0(param_3,param_4,0x29,(ulonglong)uVar6,0xf,(ulonglong)uVar6,0xe4,
                  (ulonglong)(uint)param_3[0x16]);
  }
  FUN_180057ab0(param_3,param_4,0x1e,(ulonglong)uVar6,0xf,(ulonglong)uVar6,0xe4,
                (ulonglong)(param_3[0x12] | 0x40000000));
  lVar11 = FUN_180056c30((longlong)param_3,uVar5);
  lVar11 = FUN_180056c30(lVar11,param_3[0x1c]);
  param_3[0x1c] = 0;
  bVar1 = (&DAT_180064b68)[*(uint *)(lVar12 + 0x130)];
  uVar5 = FUN_180056b90(lVar11,4,1);
  uVar16 = (ulonglong)uVar5;
  uVar3 = FUN_180056b90((longlong)param_3,extraout_w1,1);
  uVar15 = (ulonglong)uVar3;
  if (bVar1 < 4) {
    FUN_180057ab0(param_3,param_4,1,uVar15,0xf,(ulonglong)uVar6,0xe4,(ulonglong)(uint)param_3[0x17])
    ;
    FUN_180057ab0(param_3,param_4,0x29,uVar15,0xf,uVar15,0xe4,(ulonglong)(uint)param_3[0x16]);
    FUN_180057ab0(param_3,param_4,0x2a,(ulonglong)uVar6,0xf,(ulonglong)uVar6,0xe4,
                  (ulonglong)(uint)param_3[0x16]);
  }
  uVar4 = uVar6 | 0x10000000;
  FUN_180057ab0(param_3,param_4,0xa7,uVar16,1,(ulonglong)uVar4,0,(ulonglong)(uint)param_3[0x16]);
  FUN_180057ab0(param_3,param_4,0xa7,uVar16,2,(ulonglong)uVar4,1,(ulonglong)(uint)param_3[0x16]);
  FUN_180057ab0(param_3,param_4,0xa7,uVar16,4,(ulonglong)uVar4,2,(ulonglong)(uint)param_3[0x16]);
  FUN_180057ab0(param_3,param_4,0xa7,uVar16,8,(ulonglong)uVar4,3,(ulonglong)(uint)param_3[0x16]);
  if (bVar1 < 4) {
    if (*param_3 == 0x51) {
      FUN_180057ab0(param_3,param_4,0x55,uVar16,0xf,uVar16,0xe4,uVar15);
    }
    else {
      uVar4 = uVar3 | 0x10000000;
      FUN_180057ab0(param_3,param_4,0x55,uVar16,1,uVar16,0,(ulonglong)uVar4);
      FUN_180057ab0(param_3,param_4,0x55,uVar16,2,uVar16,0x55,(ulonglong)uVar4);
      FUN_180057ab0(param_3,param_4,0x55,uVar16,4,uVar16,0xaa,(ulonglong)uVar4);
      FUN_180057ab0(param_3,param_4,0x55,uVar16,8,uVar16,0xff,(ulonglong)uVar4);
    }
  }
  lVar11 = FUN_180056c30((longlong)param_3,uVar3);
  lVar11 = FUN_180056c30(lVar11,uVar6);
  uVar6 = FUN_180056b90(lVar11,4,1);
  uVar15 = (ulonglong)uVar6;
  uVar3 = FUN_180056b90((longlong)param_3,extraout_w1_00,1);
  uVar4 = FUN_180056b90((longlong)param_3,extraout_w1_01,1);
  if (bVar1 == 1) {
    FUN_180057ab0(param_3,param_4,1,(ulonglong)uVar5,0xf,uVar16,0xe4,(ulonglong)(uint)param_3[0x17])
    ;
    uVar10 = uVar5 | 0x10000000;
    FUN_180057ab0(param_3,param_4,0xa7,(ulonglong)uVar4,0xf,(ulonglong)uVar10,3,
                  (ulonglong)(uint)param_3[0x16]);
    FUN_180057ab0(param_3,param_4,0xa7,(ulonglong)uVar3,0xf,(ulonglong)uVar10,2,
                  (ulonglong)(uint)param_3[0x16]);
    FUN_180057ab0(param_3,param_4,0xa7,uVar15,0xf,(ulonglong)uVar10,1,(ulonglong)(uint)param_3[0x16]
                 );
    FUN_180057ab0(param_3,param_4,0xa7,(ulonglong)uVar5,0xf,(ulonglong)uVar10,0,
                  (ulonglong)(uint)param_3[0x16]);
  }
  else if (bVar1 == 2) {
    uVar7 = FUN_180056b90((longlong)param_3,1,1);
    uVar8 = FUN_180056b90((longlong)param_3,4,1);
    uVar9 = FUN_180056b90((longlong)param_3,extraout_w1_02,1);
    FUN_180057ab0(param_3,param_4,0x36,(ulonglong)uVar7,1,(ulonglong)(uint)param_3[0x12],0xe4,
                  lVar13 + 0x130);
    FUN_180057ab0(param_3,param_4,0x55,(ulonglong)uVar9,0xf,uVar16,0xe4,
                  (ulonglong)(uint)param_3[0x16]);
    FUN_180057ab0(param_3,param_4,1,(ulonglong)uVar8,0xf,uVar16,0xe4,(ulonglong)(uint)param_3[0x17])
    ;
    FUN_180057ab0(param_3,param_4,1,(ulonglong)uVar9,0xf,(ulonglong)uVar9,0xe4,
                  (ulonglong)(uint)param_3[0x17]);
    uVar10 = uVar9 | 0x10000000;
    FUN_180057ab0(param_3,param_4,0xa7,(ulonglong)uVar4,0xf,(ulonglong)uVar10,3,
                  (ulonglong)(uint)param_3[0x16]);
    FUN_180057ab0(param_3,param_4,0xa7,(ulonglong)uVar3,0xf,(ulonglong)(uVar8 | 0x10000000),3,
                  (ulonglong)(uint)param_3[0x16]);
    FUN_180057ab0(param_3,param_4,0x32,(ulonglong)uVar4,0xf,(ulonglong)uVar3,0xe4,
                  (ulonglong)(param_3[0x15] | 0x40000000));
    FUN_180057ab0(param_3,param_4,0xa7,(ulonglong)uVar3,0xf,(ulonglong)uVar10,2,
                  (ulonglong)(uint)param_3[0x16]);
    FUN_180057ab0(param_3,param_4,0xa7,uVar15,0xf,(ulonglong)uVar8 | 0x10000000,2,
                  (ulonglong)(uint)param_3[0x16]);
    FUN_180057ab0(param_3,param_4,0x32,(ulonglong)uVar3,0xf,uVar15,0xe4,
                  (ulonglong)(param_3[0x15] | 0x40000000));
    FUN_180057ab0(param_3,param_4,0xa7,uVar15,0xf,(ulonglong)uVar10,1,(ulonglong)(uint)param_3[0x16]
                 );
    FUN_180057ab0(param_3,param_4,0xa7,uVar16,0xf,(ulonglong)uVar8 | 0x10000000,1,
                  (ulonglong)(uint)param_3[0x16]);
    FUN_180057ab0(param_3,param_4,0x32,uVar15,0xf,uVar16,0xe4,
                  (ulonglong)(param_3[0x15] | 0x40000000));
    FUN_180057ab0(param_3,param_4,0xa7,uVar16,0xf,(ulonglong)uVar10,0,(ulonglong)(uint)param_3[0x16]
                 );
    FUN_180057ab0(param_3,param_4,0xa7,(ulonglong)uVar9,0xf,(ulonglong)uVar8 | 0x10000000,0,
                  (ulonglong)(uint)param_3[0x16]);
    FUN_180057ab0(param_3,param_4,0x32,uVar16,0xf,(ulonglong)uVar9,0xe4,
                  (ulonglong)(param_3[0x15] | 0x40000000));
    lVar13 = FUN_180056c30((longlong)param_3,uVar8);
    lVar13 = FUN_180056c30(lVar13,uVar9);
    FUN_180056c30(lVar13,uVar7);
  }
  if (param_3[0x19] == 0) {
    if (*(int *)(lVar12 + 0x140) != 1) {
      FUN_180057ab0(param_3,param_4,0x40,uVar14,3,uVar14,0x154,0);
    }
  }
  else {
    uVar10 = FUN_180056b90((longlong)param_3,2,0);
    FUN_180057ab0(param_3,param_4,0x40,(ulonglong)uVar10,3,uVar14,0x154,0);
    FUN_180057ab0(param_3,param_4,0x20,(ulonglong)(uint)param_3[0x19],1,
                  (ulonglong)(uint)param_3[0x19],0,(ulonglong)(uint)param_3[0x16]);
    FUN_180057ab0(param_3,param_4,0x37,uVar14,3,(ulonglong)(uint)param_3[0x19],0,uVar14);
    FUN_180056c30((longlong)param_3,param_3[0x19]);
    param_3[0x19] = 0;
  }
  FUN_180057ab0(param_3,param_4,0,(ulonglong)uVar6,0xf,uVar15,0xe4,(ulonglong)(uVar5 | 0x80000000));
  FUN_180057ab0(param_3,param_4,0x32,uVar16,0xf,(ulonglong)uVar6,0xe4,uVar14);
  FUN_180057ab0(param_3,param_4,0,(ulonglong)uVar4,0xf,(ulonglong)uVar4,0xe4,
                (ulonglong)(uVar3 | 0x80000000));
  FUN_180057ab0(param_3,param_4,0x32,(ulonglong)uVar3,0xf,(ulonglong)uVar4,0xe4,uVar14);
  FUN_180057ab0(param_3,param_4,0,(ulonglong)uVar3,0xf,(ulonglong)uVar3,0xe4,
                (ulonglong)(uVar5 | 0x80000000));
  FUN_180057ab0(param_3,param_4,0x32,uVar16,0xf,(ulonglong)uVar3,0xe4,uVar14);
  lVar12 = FUN_180056c30((longlong)param_3,uVar6);
  lVar12 = FUN_180056c30(lVar12,uVar3);
  lVar12 = FUN_180056c30(lVar12,uVar4);
  FUN_180056c30(lVar12,uVar2);
  param_3[(ulonglong)param_2 + 0x23] = uVar5;
  return;
}

