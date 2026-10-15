/*
 * FUN_180031ad4 at 180031ad4
 * undefined __fastcall FUN_180031ad4(longlong param_1, uint * param_2, longlong * param_3)
 * Address ranges: 180031ad4-180032479
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180031ad4(longlong param_1,uint *param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  ushort extraout_AX;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  longlong lVar8;
  uint uVar9;
  byte bVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  
  bVar10 = (byte)param_2[0x4a];
  bVar6 = *(byte *)((longlong)param_2 + 0x129);
  uVar14 = 4;
  do {
    uVar9 = uVar14 - 1;
    bVar4 = '\x01' << ((byte)uVar9 & 0x1f);
    bVar15 = (bVar10 & bVar4) != 0;
    bVar16 = (bVar6 & bVar4) != 0;
    if ((bVar10 == bVar4) || (((char)param_2[0x4a] == '\0' && (uVar14 == 1)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar6 == bVar4) || ((*(char *)((longlong)param_2 + 0x129) == '\0' && (uVar14 == 1)))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    bVar10 = bVar10 & ~bVar4;
    bVar6 = bVar6 & ~bVar4;
    if (((bVar3) && ((char)param_2[0x6f] == '\0')) && (*(char *)((longlong)param_2 + 0x1bf) == '\0')
       ) {
      bVar15 = true;
    }
    if ((bVar2) && (*(char *)((longlong)param_2 + 0x1be) == '\0')) {
      bVar16 = true;
    }
    if ((bVar15) || (uVar14 == 1)) {
      FUN_180031920(param_1,param_2,param_3,(ulonglong)uVar9,'\0');
    }
    if (((bVar16) || (uVar14 == 1)) &&
       (FUN_180031920(param_1,param_2,param_3,(ulonglong)uVar9,'\x01'), uVar14 == 1)) {
      iVar1 = *(int *)(param_1 + 0x634);
      if ((*(int *)(param_1 + 0x4c) != 0) || (iVar1 != 0)) {
        FUN_18002fdfc((ushort *)(param_2 + 0x2e),(ushort)param_2[0x31],0,
                      -(uint)(*(int *)(param_1 + 0x4c) != 0) & 0x40,-(uint)(iVar1 != 0) & 0x640,
                      -(uint)(iVar1 != 0) & 0x650,param_2,param_3);
      }
    }
    if ((bVar2) && (*(char *)((longlong)param_2 + 0x1be) == '\0')) {
      uVar7 = 0x70;
    }
    else {
      uVar7 = 0xf0;
    }
    if (((bVar3) && ((char)param_2[0x6f] == '\0')) && (*(char *)((longlong)param_2 + 0x1bf) == '\0')
       ) {
      uVar12 = 0x70;
    }
    else {
      uVar12 = 0xf0;
    }
    lVar8 = (ulonglong)uVar9 * 0xe;
    uVar11 = (ushort)uVar12;
    if ((((*(ushort *)(lVar8 + 0xc2 + (longlong)param_2) & 0xefff) ==
          (*(ushort *)(lVar8 + 0xfa + (longlong)param_2) & 0xefff)) &&
        ((*(ushort *)(lVar8 + 0xb8 + (longlong)param_2) & 0xefff) ==
         (*(ushort *)(lVar8 + 0xf0 + (longlong)param_2) & 0xefff))) &&
       (((*(ushort *)(lVar8 + 0xba + (longlong)param_2) & 0xefff) ==
         (*(ushort *)(lVar8 + 0xf2 + (longlong)param_2) & 0xefff) &&
        (((*(ushort *)(lVar8 + 0xbc + (longlong)param_2) & 0xefff) ==
          (*(ushort *)(lVar8 + 0xf4 + (longlong)param_2) & 0xefff) &&
         ((*(ushort *)(lVar8 + 0xbe + (longlong)param_2) & 0xefff) ==
          (*(ushort *)(lVar8 + 0xf6 + (longlong)param_2) & 0xefff))))))) {
      if (!bVar15) goto LAB_180031d91;
      if ((!bVar16) || (uVar7 != uVar11)) goto LAB_180031d6d;
      FUN_18002f948((ushort *)((longlong)param_2 + lVar8 + 0xb8),(int *)param_2,param_3,uVar11,1,
                    '\x01');
    }
    else {
      if (bVar15) {
LAB_180031d6d:
        FUN_18002f948((ushort *)((longlong)param_2 + lVar8 + 0xb8),(int *)param_2,param_3,uVar11,1,
                      '\0');
      }
LAB_180031d91:
      if (bVar16) {
        uVar12 = (ulonglong)uVar7;
        FUN_18002f948((ushort *)((longlong)param_2 + lVar8 + 0xf0),(int *)param_2,param_3,uVar7,0,
                      '\0');
      }
    }
    lVar13 = 0;
    bVar15 = false;
    if (bVar2) {
      if (*(char *)((longlong)param_2 + 0x1be) != '\0') {
        FUN_18002db50((int *)param_2,*(ushort *)(lVar8 + 0xfa + (longlong)param_2),0x70,0,8,param_3,
                      '\x01');
      }
      uVar7 = *(ushort *)(lVar8 + 0xfa + (longlong)param_2);
      uVar12 = (ulonglong)uVar7;
      FUN_180030538(param_1,param_2,param_3,uVar7);
    }
    if (bVar3) {
      uVar14 = FUN_18003079c(param_1,param_2,param_3,
                             (ulonglong)*(ushort *)(lVar8 + 0xc2 + (longlong)param_2),
                             *(char *)((longlong)param_2 + 0x1bf));
      param_1 = CONCAT44((int)((ulonglong)param_1 >> 0x20),uVar14);
      uVar7 = extraout_AX;
      if (((extraout_AX & 0xf0) != 0x80) && ((extraout_AX & 0xf0) != 0xf0)) {
        uVar7 = *(ushort *)(lVar8 + 0xc2 + (longlong)param_2);
      }
      uVar12 = (ulonglong)uVar7;
      FUN_180031634(param_1,(int *)param_2,param_3,uVar7);
      FUN_18002d870((longlong)param_2,extraout_AX);
    }
    do {
      uVar5 = 0;
      if (*(byte *)(lVar13 + 0xb0 + (longlong)param_2) == uVar9) {
        FUN_1800568f4((longlong)param_2,param_2[lVar13 + 0x20]);
        param_2[lVar13 + 0x20] = 0;
      }
      if (*(byte *)(lVar13 + 0xb3 + (longlong)param_2) == uVar9) {
        FUN_1800568f4((longlong)param_2,param_2[lVar13 + 0x1d]);
        param_2[lVar13 + 0x1d] = 0;
      }
      if (*(byte *)(lVar13 + 0xad + (longlong)param_2) == uVar9) {
        FUN_1800568f4((longlong)param_2,param_2[lVar13 + 0x23]);
        param_2[lVar13 + 0x23] = 0;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    uVar14 = uVar9;
  } while (uVar9 != 0);
  if (*(char *)((longlong)param_2 + 0x1c1) == '\0') {
    FUN_1800568f4((longlong)param_2,param_2[0x2a]);
  }
  else {
    FUN_1800568f4((longlong)param_2,param_2[0x2a] & 0xff | 0x310000);
    uVar5 = (byte)param_2[0x2a] | 0x1d0000;
  }
  param_2[0x2a] = uVar5;
  if (*(char *)((longlong)param_2 + 0x1c1) == '\0') {
    uVar14 = *(uint *)(param_1 + 0x28) & *(uint *)(param_1 + 0x24);
    if (uVar14 == 1) {
LAB_1800322e2:
      uVar14 = FUN_180056854((longlong)param_2,1,'\x01');
      FUN_180057838(param_2,param_3,0x2036,(ulonglong)uVar14);
      FUN_180057838(param_2,param_3,0x38,(ulonglong)uVar14);
      FUN_180057838(param_2,param_3,0x1c,0x110201);
    }
    else {
      if (uVar14 != 2) {
        if (uVar14 == 3) goto LAB_1800322e2;
        if (uVar14 != 4) goto LAB_18003238e;
      }
      uVar14 = FUN_180056854((longlong)param_2,1,'\x01');
      uVar9 = FUN_180056854((longlong)param_2,1,'\x01');
      uVar5 = FUN_180056854((longlong)param_2,1,'\x01');
      FUN_18002f8c0(param_2,param_3,0x110101,uVar12,uVar14);
      FUN_180057838(param_2,param_3,0x34,(ulonglong)uVar14);
      FUN_180057838(param_2,param_3,0x33,(ulonglong)uVar14);
      FUN_180057838(param_2,param_3,0x2f,(ulonglong)uVar9);
      FUN_180057838(param_2,param_3,0x43,(ulonglong)uVar9);
      FUN_180057838(param_2,param_3,0x1c,(ulonglong)uVar5);
      FUN_180057838(param_2,param_3,0x19,(ulonglong)uVar9);
      FUN_180057838(param_2,param_3,0xe,(ulonglong)uVar14);
      FUN_180057838(param_2,param_3,0x32,(ulonglong)uVar14);
      FUN_180057838(param_2,param_3,0x29,(ulonglong)uVar5);
      FUN_180057838(param_2,param_3,0x1c,(ulonglong)uVar14);
      FUN_180057838(param_2,param_3,0x3c,(ulonglong)uVar14);
      FUN_180057838(param_2,param_3,0x1e,(ulonglong)uVar14);
      FUN_180057838(param_2,param_3,0x24,(ulonglong)uVar14);
      FUN_180057838(param_2,param_3,0x25,0x110201);
      FUN_1800568f4((longlong)param_2,uVar5);
      FUN_1800568f4((longlong)param_2,uVar9);
      FUN_1800568f4((longlong)param_2,uVar14);
    }
    bVar15 = true;
  }
LAB_18003238e:
  if ((*(int *)(param_1 + 0x1c) == 0x400) || (*(int *)(param_1 + 0x1c) == 0x404)) {
    uVar7 = *(ushort *)((longlong)param_2 + 0xfa);
    if ((uVar7 & 0xf0) != 0) {
      FUN_18002f4ec((int *)param_2,param_3,uVar7,0xff,uVar7,0x71,1,0.01,'\x01');
      goto LAB_18003244a;
    }
  }
  else if (bVar15) goto LAB_18003244a;
  FUN_180057838(param_2,param_3,0x36,0x110201);
LAB_18003244a:
  FUN_1800568f4((longlong)param_2,param_2[0x2a]);
  param_2[0x2a] = 0;
  return;
}

