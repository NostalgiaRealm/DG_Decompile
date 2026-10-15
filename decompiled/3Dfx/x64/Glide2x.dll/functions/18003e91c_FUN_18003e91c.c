/*
 * FUN_18003e91c at 18003e91c
 * undefined __fastcall FUN_18003e91c(longlong param_1, uint * param_2, longlong * param_3)
 * Address ranges: 18003e91c-18003f28a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003e91c(longlong param_1,uint *param_2,longlong *param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  longlong lVar8;
  uint uVar9;
  byte bVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  
  bVar10 = (byte)param_2[0x4a];
  bVar6 = *(byte *)((longlong)param_2 + 0x129);
  uVar4 = 4;
  do {
    uVar9 = uVar4 - 1;
    bVar3 = '\x01' << ((byte)uVar9 & 0x1f);
    bVar14 = (bVar10 & bVar3) != 0;
    bVar15 = (bVar6 & bVar3) != 0;
    if ((bVar10 == bVar3) || (((char)param_2[0x4a] == '\0' && (uVar4 == 1)))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((bVar6 == bVar3) || ((*(char *)((longlong)param_2 + 0x129) == '\0' && (uVar4 == 1)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    bVar10 = bVar10 & ~bVar3;
    bVar6 = bVar6 & ~bVar3;
    if (((bVar2) && ((char)param_2[0x6f] == '\0')) && (*(char *)((longlong)param_2 + 0x1bf) == '\0')
       ) {
      bVar14 = true;
    }
    if ((bVar1) && (*(char *)((longlong)param_2 + 0x1be) == '\0')) {
      bVar15 = true;
    }
    if ((bVar14) || (uVar4 == 1)) {
      FUN_18003e7e8(param_1,param_2,param_3,(ulonglong)uVar9,'\0');
    }
    if ((((bVar15) || (uVar4 == 1)) &&
        (FUN_18003e7e8(param_1,param_2,param_3,(ulonglong)uVar9,'\x01'), uVar4 == 1)) &&
       (*(int *)(param_1 + 0x4c) != 0)) {
      FUN_18003d10c((ushort *)(param_2 + 0x2e),(ushort)param_2[0x31]);
    }
    if ((bVar1) && (*(char *)((longlong)param_2 + 0x1be) == '\0')) {
      uVar7 = 0x70;
    }
    else {
      uVar7 = 0xf0;
    }
    if (((bVar2) && ((char)param_2[0x6f] == '\0')) && (*(char *)((longlong)param_2 + 0x1bf) == '\0')
       ) {
      uVar12 = 0x70;
    }
    else {
      uVar12 = 0xf0;
    }
    lVar8 = (ulonglong)uVar9 * 0xe;
    uVar11 = (ushort)uVar12;
    if (((((*(ushort *)(lVar8 + 0xc2 + (longlong)param_2) & 0xefff) ==
           (*(ushort *)(lVar8 + 0xfa + (longlong)param_2) & 0xefff)) &&
         ((*(ushort *)(lVar8 + 0xb8 + (longlong)param_2) & 0xefff) ==
          (*(ushort *)(lVar8 + 0xf0 + (longlong)param_2) & 0xefff))) &&
        ((*(ushort *)(lVar8 + 0xba + (longlong)param_2) & 0xefff) ==
         (*(ushort *)(lVar8 + 0xf2 + (longlong)param_2) & 0xefff))) &&
       (((*(ushort *)(lVar8 + 0xbc + (longlong)param_2) & 0xefff) ==
         (*(ushort *)(lVar8 + 0xf4 + (longlong)param_2) & 0xefff) &&
        ((*(ushort *)(lVar8 + 0xbe + (longlong)param_2) & 0xefff) ==
         (*(ushort *)(lVar8 + 0xf6 + (longlong)param_2) & 0xefff))))) {
      if (!bVar14) goto LAB_18003eba2;
      if ((!bVar15) || (uVar7 != uVar11)) goto LAB_18003eb7e;
      FUN_18003cc58((ushort *)((longlong)param_2 + lVar8 + 0xb8),(int *)param_2,param_3,uVar11,1,
                    '\x01');
    }
    else {
      if (bVar14) {
LAB_18003eb7e:
        FUN_18003cc58((ushort *)((longlong)param_2 + lVar8 + 0xb8),(int *)param_2,param_3,uVar11,1,
                      '\0');
      }
LAB_18003eba2:
      if (bVar15) {
        uVar12 = (ulonglong)uVar7;
        FUN_18003cc58((ushort *)((longlong)param_2 + lVar8 + 0xf0),(int *)param_2,param_3,uVar7,0,
                      '\0');
      }
    }
    lVar13 = 0;
    bVar14 = false;
    if (bVar1) {
      if (*(char *)((longlong)param_2 + 0x1be) != '\0') {
        FUN_18003ae60((int *)param_2,*(ushort *)(lVar8 + 0xfa + (longlong)param_2),0x70,0,8,param_3,
                      '\x01');
      }
      uVar7 = *(ushort *)(lVar8 + 0xfa + (longlong)param_2);
      uVar12 = (ulonglong)uVar7;
      FUN_18003d3d4(param_1,param_2,param_3,uVar7);
    }
    if (bVar2) {
      uVar4 = FUN_18003d638(param_1,param_2,param_3,
                            (ulonglong)*(ushort *)(lVar8 + 0xc2 + (longlong)param_2),
                            *(char *)((longlong)param_2 + 0x1bf));
      if (((uVar4 & 0xf0) == 0x80) || ((uVar4 & 0xf0) == 0xf0)) {
        uVar12 = (ulonglong)(uVar4 & 0xffff);
      }
      else {
        uVar12 = (ulonglong)*(ushort *)(lVar8 + 0xc2 + (longlong)param_2);
      }
      FUN_18003e4fc(param_1,(int *)param_2,param_3,(ushort)uVar12);
      FUN_18003ab80((longlong)param_2,(ushort)uVar4);
    }
    do {
      uVar5 = 0;
      if (*(byte *)(lVar13 + 0xb0 + (longlong)param_2) == uVar9) {
        FUN_1800542e8((longlong)param_2,param_2[lVar13 + 0x20]);
        param_2[lVar13 + 0x20] = 0;
      }
      if (*(byte *)(lVar13 + 0xb3 + (longlong)param_2) == uVar9) {
        FUN_1800542e8((longlong)param_2,param_2[lVar13 + 0x1d]);
        param_2[lVar13 + 0x1d] = 0;
      }
      if (*(byte *)(lVar13 + 0xad + (longlong)param_2) == uVar9) {
        FUN_1800542e8((longlong)param_2,param_2[lVar13 + 0x23]);
        param_2[lVar13 + 0x23] = 0;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    uVar4 = uVar9;
  } while (uVar9 != 0);
  if (*(char *)((longlong)param_2 + 0x1c1) == '\0') {
    FUN_1800542e8((longlong)param_2,param_2[0x2a]);
  }
  else {
    FUN_1800542e8((longlong)param_2,param_2[0x2a] & 0xff | 0x310000);
    uVar5 = (byte)param_2[0x2a] | 0x1d0000;
  }
  param_2[0x2a] = uVar5;
  if (*(char *)((longlong)param_2 + 0x1c1) == '\0') {
    uVar4 = *(uint *)(param_1 + 0x28) & *(uint *)(param_1 + 0x24);
    if (uVar4 == 1) {
LAB_18003f0f3:
      uVar4 = FUN_180054248((longlong)param_2,1,'\x01');
      FUN_18005522c(param_2,param_3,0x2036,(ulonglong)uVar4);
      FUN_18005522c(param_2,param_3,0x38,(ulonglong)uVar4);
      FUN_18005522c(param_2,param_3,0x1c,0x110201);
    }
    else {
      if (uVar4 != 2) {
        if (uVar4 == 3) goto LAB_18003f0f3;
        if (uVar4 != 4) goto LAB_18003f19f;
      }
      uVar4 = FUN_180054248((longlong)param_2,1,'\x01');
      uVar9 = FUN_180054248((longlong)param_2,1,'\x01');
      uVar5 = FUN_180054248((longlong)param_2,1,'\x01');
      FUN_18003cbd0(param_2,param_3,0x110101,uVar12,uVar4);
      FUN_18005522c(param_2,param_3,0x34,(ulonglong)uVar4);
      FUN_18005522c(param_2,param_3,0x33,(ulonglong)uVar4);
      FUN_18005522c(param_2,param_3,0x2f,(ulonglong)uVar9);
      FUN_18005522c(param_2,param_3,0x43,(ulonglong)uVar9);
      FUN_18005522c(param_2,param_3,0x1c,(ulonglong)uVar5);
      FUN_18005522c(param_2,param_3,0x19,(ulonglong)uVar9);
      FUN_18005522c(param_2,param_3,0xe,(ulonglong)uVar4);
      FUN_18005522c(param_2,param_3,0x32,(ulonglong)uVar4);
      FUN_18005522c(param_2,param_3,0x29,(ulonglong)uVar5);
      FUN_18005522c(param_2,param_3,0x1c,(ulonglong)uVar4);
      FUN_18005522c(param_2,param_3,0x3c,(ulonglong)uVar4);
      FUN_18005522c(param_2,param_3,0x1e,(ulonglong)uVar4);
      FUN_18005522c(param_2,param_3,0x24,(ulonglong)uVar4);
      FUN_18005522c(param_2,param_3,0x25,0x110201);
      FUN_1800542e8((longlong)param_2,uVar5);
      FUN_1800542e8((longlong)param_2,uVar9);
      FUN_1800542e8((longlong)param_2,uVar4);
    }
    bVar14 = true;
  }
LAB_18003f19f:
  if ((*(int *)(param_1 + 0x1c) == 0x400) || (*(int *)(param_1 + 0x1c) == 0x404)) {
    uVar7 = *(ushort *)((longlong)param_2 + 0xfa);
    if ((uVar7 & 0xf0) != 0) {
      FUN_18003c7fc((int *)param_2,param_3,uVar7,0xff,uVar7,0x71,1,0.01,'\x01');
      goto LAB_18003f25b;
    }
  }
  else if (bVar14) goto LAB_18003f25b;
  FUN_18005522c(param_2,param_3,0x36,0x110201);
LAB_18003f25b:
  FUN_1800542e8((longlong)param_2,param_2[0x2a]);
  param_2[0x2a] = 0;
  return;
}

