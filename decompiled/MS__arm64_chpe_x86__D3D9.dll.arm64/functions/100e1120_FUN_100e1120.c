/*
 * FUN_100e1120 at 100e1120
 * undefined FUN_100e1120(void)
 * Address ranges: 100e1120-100e170f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100e1120(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  ulonglong extraout_x1;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  code *extraout_w11;
  code *extraout_w11_00;
  int extraout_w15;
  uint *puVar21;
  uint uVar22;
  ulonglong uVar23;
  char local_50 [4];
  uint auStack_4c [3];
  
  iVar10 = FUN_100013c0();
  iVar7 = extraout_w15 * -0x10;
  pcVar5 = local_50 + iVar7;
  *(int *)(&stack0xffffffd8 + iVar7) = param_3;
  iVar11 = DAT_10175b54;
  uVar16 = 0x8876086c;
  puVar21 = (uint *)extraout_x1;
  if (puVar21 == (uint *)0x0) {
    return 0x8876086c;
  }
  if (param_3 == 0) {
    return 0x8876086c;
  }
  if (((*(uint *)(iVar10 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    *pcVar5 = '\0';
    *(undefined4 *)(iVar11 + 0x1c) = 1;
  }
  else {
    *pcVar5 = '\x01';
    iVar11 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar11 == 0) {
      FUN_100071d0(0);
    }
  }
  uVar2 = *puVar21;
  if ((4 < uVar2 + 0xff00) && (1 < uVar2 + 0xfe00 && uVar2 != 0xffff0300))
  goto switchD_100e1250_default;
  auStack_4c[extraout_w15 * -4] = 0;
  iVar13 = *(int *)(iVar10 + 0x50);
  uVar22 = *(uint *)(iVar13 + 0xcc);
  iVar11 = 0;
  if (uVar22 < uVar2) {
    uVar14 = 0x7fffffff;
  }
  else {
    uVar14 = *(undefined4 *)(iVar13 + 300);
    iVar11 = iVar13 + 0x108;
  }
  switch(uVar2 >> 8 & 0xff) {
  case 1:
    cVar9 = FUN_10022fe0(extraout_x1 & 0xffffffff,&stack0x00000208 + iVar7,
                         auStack_4c + extraout_w15 * -4);
    break;
  case 2:
    cVar9 = FUN_100eda90(extraout_x1 & 0xffffffff,iVar11,&stack0x00000208 + iVar7,
                         auStack_4c + extraout_w15 * -4);
    break;
  case 3:
    cVar9 = FUN_100ef028(extraout_x1 & 0xffffffff,uVar14,&stack0x00000208 + iVar7,
                         auStack_4c + extraout_w15 * -4);
    break;
  default:
    goto switchD_100e1250_default;
  }
  if ((cVar9 == '\0' || uVar22 < uVar2) ||
     (puVar12 = (undefined4 *)FUN_101321c0(0x20), puVar12 == (undefined4 *)0x0))
  goto switchD_100e1250_default;
  *(undefined8 *)(puVar12 + 1) = 0;
  puVar12[3] = puVar12;
  *puVar12 = &PTR_FUN_1015fb48;
  uVar23 = 0;
  puVar12[4] = iVar10 + -0x66b4;
  *(undefined8 *)(puVar12 + 5) = 0;
  puVar12[7] = 0;
  uVar2 = auStack_4c[extraout_w15 * -4];
  *(undefined4 **)(&stack0xffffffcc + iVar7) = puVar12;
  uVar18 = 0;
  if (uVar2 != 0) {
    do {
      iVar11 = (int)uVar18;
      uVar6 = uVar18 & 1;
      uVar22 = iVar11 + 1;
      uVar18 = (ulonglong)uVar22;
      uVar23 = ((ulonglong)puVar21[iVar11] << (uVar6 << 5)) + uVar23;
    } while (uVar22 < uVar2);
  }
  uVar22 = *(uint *)(iVar10 + 0xa4);
  *(undefined4 *)(&stack0xffffffc8 + iVar7) = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (uVar22 != 0) {
    uVar20 = 0;
    uVar17 = uVar22;
    do {
      uVar19 = uVar17 + uVar20 >> 1;
      uVar18 = *(ulonglong *)(*(int *)(iVar10 + 0xa0) + uVar19 * 0x18);
      uVar8 = uVar19;
      if (uVar18 <= uVar23) {
        if (uVar23 <= uVar18) break;
        uVar20 = uVar19 + 1;
        uVar19 = uVar20;
        uVar8 = uVar17;
      }
      uVar17 = uVar8;
    } while (uVar17 != uVar20);
    if (((uVar19 != uVar22) &&
        (puVar1 = (ulonglong *)(*(int *)(iVar10 + 0xa0) + uVar19 * 0x18), *puVar1 == uVar23)) &&
       (puVar1 = puVar1 + 2, puVar1 != (ulonglong *)0x0)) {
      uVar22 = (*(int **)puVar1)[1];
      if (uVar22 != 0) {
        iVar11 = **(int **)puVar1;
        *(int *)(&stack0xffffffc0 + iVar7) = iVar10;
        *(undefined4 **)(&stack0xffffffc4 + iVar7) = puVar12;
        *(ulonglong *)(&stack0xffffffd0 + iVar7) = uVar23;
        uVar20 = 0;
        auStack_4c[extraout_w15 * -4 + 1] = (uint)puVar1;
        auStack_4c[extraout_w15 * -4 + 2] = 0x8876086c;
LAB_100e13f0:
        if (*(uint *)(iVar11 + 0x218 + uVar20 * 0x228) != uVar2) goto LAB_100e141c;
        puVar4 = (undefined4 *)(iVar11 + uVar20 * 0x228);
        iVar10 = FUN_10132550(extraout_x1 & 0xffffffff,puVar4[0x87],
                              ((ulonglong)uVar2 & 0x3fffffff) << 2);
        if (iVar10 != 0) goto LAB_100e141c;
        uVar16 = auStack_4c[extraout_w15 * -4 + 2];
        iVar10 = *(int *)(&stack0xffffffc0 + iVar7);
        uVar23 = *(ulonglong *)(&stack0xffffffd0 + iVar7);
        puVar12 = *(undefined4 **)(&stack0xffffffc4 + iVar7);
        uVar14 = (**(code **)(&stack0xffffffc8 + iVar7))();
        (*extraout_w11_00)(uVar14,puVar12);
        *puVar4 = puVar12;
        iVar11 = FUN_100e57d0(iVar10 + 0xb0,&stack0xffffffcc + iVar7,puVar4);
        uVar22 = iVar11 + 8;
        piVar3 = *(int **)auStack_4c[extraout_w15 * -4 + 1];
        puVar21 = (uint *)(piVar3 + 1);
        uVar17 = *puVar21;
        if (uVar20 < uVar17) {
          uVar20 = uVar20 + 1;
          if (uVar20 < uVar17) {
            auStack_4c[extraout_w15 * -4 + 1] = uVar22;
            auStack_4c[extraout_w15 * -4 + 2] = uVar16;
            *(ulonglong *)(&stack0xffffffd0 + iVar7) = uVar23;
            do {
              iVar11 = *piVar3 + uVar20 * 0x228;
              FUN_101325a0(iVar11 + -0x228,iVar11,0x228);
              uVar17 = *puVar21;
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar17);
            uVar22 = auStack_4c[extraout_w15 * -4 + 1];
            uVar16 = auStack_4c[extraout_w15 * -4 + 2];
            uVar23 = *(ulonglong *)(&stack0xffffffd0 + iVar7);
          }
          *puVar21 = uVar17 - 1;
        }
        if (uVar22 == 0) goto LAB_100e1434;
        goto LAB_100e1544;
      }
    }
  }
LAB_100e1434:
  iVar11 = uVar2 * 4;
  if (uVar2 >> 0x1e != 0) {
    iVar11 = -1;
  }
  iVar11 = FUN_101322b0(iVar11);
  iVar13 = 0;
  if ((iVar11 == 0) || (iVar13 = FUN_101321c0(0x1270), iVar13 == 0)) {
LAB_100e1690:
    FUN_101322d0(iVar11);
    FUN_10132260(iVar13,0x1270);
  }
  else {
    FUN_101325a0(iVar11,extraout_x1 & 0xffffffff,((ulonglong)uVar2 & 0x3fffffff) << 2);
    FUN_101325a0(iVar13,&stack0x00000208 + iVar7,0x1270);
    auStack_4c[extraout_w15 * -4 + 1] = iVar10 + 0xac;
    uVar14 = (**(code **)(&stack0xffffffc8 + iVar7))();
    iVar15 = (*extraout_w11)(uVar14,iVar11,iVar13,puVar12);
    if (iVar15 == 0) goto LAB_100e1690;
    puVar4 = (undefined4 *)auStack_4c[extraout_w15 * -4 + 1];
    *(uint *)(&stack0x000001f8 + iVar7) = uVar2;
    *(int *)(&stack0x000001fc + iVar7) = iVar11;
    *(undefined4 **)(&stack0xffffffe0 + iVar7) = puVar12;
    *(int *)(&stack0xffffffe4 + iVar7) = iVar15;
    *(int *)(&stack0xffffffe8 + iVar7) = iVar13;
    *(ulonglong *)(&stack0x00000200 + iVar7) = uVar23;
    uVar14 = *puVar4;
    FUN_1000bfb0(uVar14,&stack0x00000539 + iVar7,&stack0xffffffec + iVar7,0xe0);
    FUN_1000bfb0(uVar14,&stack0x00000398 + iVar7,&stack0x000001b0 + iVar7,0x10);
    FUN_1000bfb0(uVar14,&stack0x000004a8 + iVar7,&stack0x000001d4 + iVar7,0x10);
    iVar10 = FUN_100e57d0(iVar10 + 0xb0,&stack0xffffffcc + iVar7,&stack0xffffffe0 + iVar7);
    uVar22 = iVar10 + 8;
    if (uVar22 == 0) goto LAB_100e1690;
LAB_100e1544:
    uVar2 = auStack_4c[extraout_w15 * -4];
    iVar10 = uVar2 * 4;
    if (uVar2 >> 0x1e != 0) {
      iVar10 = -1;
    }
    iVar10 = FUN_101322b0(iVar10);
    if (iVar10 != 0) {
      piVar3 = puVar12 + 7;
      *piVar3 = iVar10;
      puVar12[5] = uVar22;
      FUN_101325a0(iVar10,extraout_x1 & 0xffffffff,((ulonglong)uVar2 & 0x3fffffff) << 2);
      uVar14 = *(undefined4 *)(&stack0xffffffd8 + iVar7);
      puVar12[6] = uVar2;
      uVar16 = FUN_100e6fa0(puVar12,&DAT_1015e500,uVar14);
      if (-1 < (int)uVar16) goto switchD_100e1250_default;
      FUN_101322d0(*piVar3);
      *piVar3 = 0;
      puVar12[6] = 0;
    }
  }
  *puVar12 = &PTR_FUN_1015fb48;
  FUN_10132260(puVar12,0x20);
switchD_100e1250_default:
  if (*pcVar5 == '\0') {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  else {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  return uVar16;
LAB_100e141c:
  uVar20 = uVar20 + 1;
  if (uVar22 <= uVar20) goto code_r0x100e1428;
  goto LAB_100e13f0;
code_r0x100e1428:
  uVar16 = auStack_4c[extraout_w15 * -4 + 2];
  iVar10 = *(int *)(&stack0xffffffc0 + iVar7);
  puVar12 = *(undefined4 **)(&stack0xffffffc4 + iVar7);
  uVar23 = *(ulonglong *)(&stack0xffffffd0 + iVar7);
  goto LAB_100e1434;
}

