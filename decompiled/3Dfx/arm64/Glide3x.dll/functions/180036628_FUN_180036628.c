/*
 * FUN_180036628 at 180036628
 * undefined __cdecl FUN_180036628(longlong param_1, int * param_2, longlong * param_3)
 * Address ranges: 180036628-180036eb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036628(longlong param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint extraout_w0;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint extraout_w1;
  uint extraout_w1_00;
  longlong lVar9;
  ushort uVar10;
  ushort uVar11;
  int *piVar12;
  byte bVar13;
  int *piVar14;
  ulonglong uVar15;
  int *piVar16;
  longlong extraout_x14;
  longlong extraout_x14_00;
  longlong extraout_x14_01;
  longlong lVar17;
  ulonglong extraout_x15;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint local_60;
  uint local_5c;
  
  uVar19 = 4;
  local_60 = (uint)*(byte *)((longlong)param_2 + 0x129);
  local_5c = (uint)*(byte *)(param_2 + 0x4a);
  do {
    iVar18 = (int)uVar19;
    uVar8 = 1 << (ulonglong)(iVar18 - 1U & 0x1f);
    uVar7 = uVar8 & 0xff;
    uVar6 = uVar7 & local_5c;
    uVar7 = uVar7 & local_60;
    uVar8 = uVar8 & 0xff;
    if ((local_5c == uVar8) || (bVar2 = false, (char)param_2[0x4a] == '\0' && iVar18 == 1)) {
      bVar2 = true;
    }
    if ((local_60 == uVar8) ||
       (bVar3 = false, *(char *)((longlong)param_2 + 0x129) == '\0' && iVar18 == 1)) {
      bVar3 = true;
    }
    local_5c = local_5c & (uVar8 ^ 0xffffffff);
    local_60 = local_60 & (uVar8 ^ 0xffffffff);
    if (((bVar2) && ((char)param_2[0x6f] == '\0')) && (*(char *)((longlong)param_2 + 0x1bf) == '\0')
       ) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (uVar6 != 0) {
      bVar4 = true;
    }
    if ((bVar3) && (*(char *)((longlong)param_2 + 0x1be) == '\0')) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (uVar7 != 0) {
      bVar5 = true;
    }
    if (bVar4 || iVar18 == 1) {
      FUN_180036490(param_1,param_2,param_3,(ulonglong)(iVar18 - 1),'\0');
    }
    if ((bVar5 || iVar18 == 1) &&
       (FUN_180036490(param_1,param_2,param_3,(ulonglong)(iVar18 - 1),'\x01'), iVar18 == 1)) {
      iVar1 = *(int *)(param_1 + 0x634);
      if ((*(int *)(param_1 + 0x4c) != 0) || (iVar1 != 0)) {
        uVar6 = 0x650;
        if (iVar1 == 0) {
          uVar6 = 0;
        }
        uVar7 = 0x640;
        if (iVar1 == 0) {
          uVar7 = 0;
        }
        uVar8 = 0x40;
        if (*(int *)(param_1 + 0x4c) == 0) {
          uVar8 = 0;
        }
        FUN_180034b70((ushort *)(param_2 + 0x2e),(uint)*(ushort *)(param_2 + 0x31),0,uVar8,uVar7,
                      uVar6,param_2,param_3);
      }
    }
    if ((bVar3) && (*(char *)((longlong)param_2 + 0x1be) == '\0')) {
      uVar11 = 0x70;
    }
    else {
      uVar11 = 0xf0;
    }
    if (((bVar2) && ((char)param_2[0x6f] == '\0')) && (*(char *)((longlong)param_2 + 0x1bf) == '\0')
       ) {
      uVar10 = 0x70;
    }
    else {
      uVar10 = 0xf0;
    }
    uVar6 = iVar18 - 1;
    uVar19 = (ulonglong)uVar6;
    if ((((*(ushort *)((longlong)param_2 + uVar19 * 0xe + 0xc2) & 0xefff) ==
          (*(ushort *)((longlong)param_2 + uVar19 * 0xe + 0xfa) & 0xefff)) &&
        ((*(ushort *)((longlong)param_2 + uVar19 * 0xe + 0xb8) & 0xefff) ==
         (*(ushort *)((longlong)param_2 + uVar19 * 0xe + 0xf0) & 0xefff))) &&
       (((*(ushort *)((longlong)param_2 + uVar19 * 0xe + 0xba) & 0xefff) ==
         (*(ushort *)((longlong)param_2 + uVar19 * 0xe + 0xf2) & 0xefff) &&
        (((*(ushort *)((longlong)param_2 + uVar19 * 0xe + 0xbc) & 0xefff) ==
          (*(ushort *)((longlong)param_2 + uVar19 * 0xe + 0xf4) & 0xefff) &&
         ((*(ushort *)((longlong)param_2 + uVar19 * 0xe + 0xbe) & 0xefff) ==
          (*(ushort *)((longlong)param_2 + uVar19 * 0xe + 0xf6) & 0xefff))))))) {
      if (!bVar4) goto LAB_1800368c0;
      if (!bVar5 || uVar11 != uVar10) goto LAB_1800368a0;
      piVar16 = param_2 + 0x2e;
      uVar15 = 1;
      bVar13 = 1;
      uVar11 = uVar10;
LAB_1800368d8:
      FUN_180034750((ushort *)((longlong)piVar16 + uVar19 * 0xe),param_2,param_3,uVar11,bVar13,
                    uVar15);
    }
    else {
      if (bVar4) {
LAB_1800368a0:
        FUN_180034750((ushort *)((longlong)param_2 + uVar19 * 0xe + 0xb8),param_2,param_3,uVar10,1,0
                     );
      }
LAB_1800368c0:
      if (bVar5) {
        piVar16 = param_2 + 0x3c;
        uVar15 = 0;
        bVar13 = 0;
        goto LAB_1800368d8;
      }
    }
    if (bVar3) {
      if (*(char *)((longlong)param_2 + 0x1be) != '\0') {
        FUN_180032e60(param_2,*(ushort *)((longlong)param_2 + uVar19 * 0xe + 0xfa),0x70,0,8,param_3,
                      1);
      }
      FUN_180035290(param_1,param_2,param_3,
                    (uint)*(ushort *)((longlong)param_2 + uVar19 * 0xe + 0xfa));
    }
    if (bVar2) {
      FUN_180035500(param_1,param_2,param_3,
                    (ulonglong)*(ushort *)((longlong)param_2 + uVar19 * 0xe + 0xc2),
                    *(byte *)((longlong)param_2 + 0x1bf));
      uVar7 = extraout_w0 & 0xf0;
      if (uVar7 == 0x80 || uVar7 == 0xf0) {
        uVar11 = (ushort)extraout_w0;
      }
      else {
        uVar11 = *(ushort *)((longlong)param_2 + uVar19 * 0xe + 0xc2);
      }
      FUN_180036188(param_1,param_2,param_3,uVar11);
      if (uVar7 == 0x80) {
        FUN_1800596b0((longlong)param_2,param_2[(ulonglong)(extraout_w0 & 0xf) + 0x26]);
        *(undefined4 *)(extraout_x14 + (extraout_x15 & 0xffffffff) * 4) = 0;
      }
    }
    lVar9 = 0;
    piVar16 = param_2 + 0x20;
    piVar14 = param_2 + 0x1d;
    piVar12 = param_2 + 0x23;
    do {
      lVar17 = (longlong)param_2 + lVar9;
      if (*(byte *)(lVar17 + 0xb0) == uVar6) {
        param_2 = (int *)FUN_1800596b0((longlong)param_2,piVar16[lVar9]);
        piVar16[lVar9] = 0;
        lVar17 = extraout_x14_00;
      }
      if (*(byte *)(lVar17 + 0xb3) == uVar6) {
        param_2 = (int *)FUN_1800596b0((longlong)param_2,piVar14[lVar9]);
        piVar14[lVar9] = 0;
        lVar17 = extraout_x14_01;
      }
      if (*(byte *)(lVar17 + 0xad) == uVar6) {
        param_2 = (int *)FUN_1800596b0((longlong)param_2,piVar12[lVar9]);
        piVar12[lVar9] = 0;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 3);
  } while (uVar6 != 0);
  if (*(char *)((longlong)param_2 + 0x1c1) == '\0') {
    FUN_1800596b0((longlong)param_2,param_2[0x2a]);
    uVar6 = 0;
  }
  else {
    FUN_1800596b0((longlong)param_2,param_2[0x2a] & 0xffU | 0x310000);
    uVar6 = param_2[0x2a] & 0xffU | 0x1d0000;
  }
  param_2[0x2a] = uVar6;
  if (*(char *)((longlong)param_2 + 0x1c1) == '\0') {
    uVar6 = *(uint *)(param_1 + 0x28) & *(uint *)(param_1 + 0x24);
    if ((uVar6 - 1 & 0xfffffffd) == 0) {
      uVar6 = FUN_180059610((longlong)param_2,1,1);
      uVar19 = (ulonglong)uVar6;
      FUN_18005a530(param_2,param_3,0x2036,uVar19,1,0x190100,0,0);
      FUN_18005a530(param_2,param_3,0x38,uVar19,1,uVar19,0,(ulonglong)(uint)param_2[0x16]);
      FUN_18005a530(param_2,param_3,0x1c,0x110201,1,uVar19,0,0);
    }
    else {
      if ((uVar6 - 2 & 0xfffffffd) != 0) goto LAB_180036de4;
      uVar6 = FUN_180059610((longlong)param_2,1,1);
      uVar19 = (ulonglong)uVar6;
      uVar7 = FUN_180059610((longlong)param_2,extraout_w1,1);
      uVar20 = (ulonglong)uVar7;
      uVar8 = FUN_180059610((longlong)param_2,extraout_w1_00,1);
      uVar15 = (ulonglong)uVar8;
      FUN_1800346e0(param_2,param_3,0x110101,piVar12,uVar19);
      FUN_18005a530(param_2,param_3,0x34,uVar19,1,uVar19,0,(ulonglong)(uint)param_2[0x16]);
      FUN_18005a530(param_2,param_3,0x33,uVar19,1,uVar19,0,(ulonglong)(uint)param_2[0x16]);
      FUN_18005a530(param_2,param_3,0x2f,uVar20,1,uVar19,0,0);
      FUN_18005a530(param_2,param_3,0x43,uVar20,1,uVar20,0,0);
      FUN_18005a530(param_2,param_3,0x1c,uVar15,1,uVar20,0,0);
      FUN_18005a530(param_2,param_3,0x19,uVar20,1,uVar20,0,0);
      FUN_18005a530(param_2,param_3,0xe,uVar19,1,uVar19,0,uVar20);
      FUN_18005a530(param_2,param_3,0x32,uVar19,1,uVar19,0,(ulonglong)(uint)param_2[0x16]);
      FUN_18005a530(param_2,param_3,0x29,uVar15,1,uVar15,0,(ulonglong)(uint)param_2[0x16]);
      FUN_18005a530(param_2,param_3,0x1c,uVar19,1,uVar19,0,0);
      FUN_18005a530(param_2,param_3,0x3c,uVar19,1,uVar15,0,uVar19);
      FUN_18005a530(param_2,param_3,0x1e,uVar19,1,uVar19,0,(ulonglong)(uint)param_2[0x12]);
      FUN_18005a530(param_2,param_3,0x24,uVar19,1,uVar19,0,(ulonglong)(uint)param_2[0x16]);
      FUN_18005a530(param_2,param_3,0x25,0x110201,1,uVar19,0,(ulonglong)(uint)param_2[0x16]);
      lVar9 = FUN_1800596b0((longlong)param_2,uVar8);
      lVar9 = FUN_1800596b0(lVar9,uVar7);
      FUN_1800596b0(lVar9,uVar6);
    }
    bVar2 = true;
  }
  else {
LAB_180036de4:
    bVar2 = false;
  }
  if ((*(int *)(param_1 + 0x1c) - 0x400U & 0xfffffffb) == 0) {
    uVar11 = *(ushort *)((longlong)param_2 + 0xfa);
    if ((uVar11 & 0xf0) == 0) {
      uVar6 = 0xff;
      if ((uVar11 & 0xff0) != 0x100) {
        uVar6 = 0;
      }
      FUN_18005a530(param_2,param_3,0x36,0x110201,1,(ulonglong)(uint)param_2[0x16],0xe4,
                    (ulonglong)uVar6);
    }
    else {
      FUN_180034420(param_2,param_3,(uint)uVar11,0xff,(uint)uVar11,0x71,1,1);
    }
  }
  else if (!bVar2) {
    FUN_18005a530(param_2,param_3,0x36,0x110201,1,(ulonglong)(uint)param_2[0x16],0xe4,0);
  }
  FUN_1800596b0((longlong)param_2,param_2[0x2a]);
  param_2[0x2a] = 0;
  return;
}

