/*
 * FUN_100e0ad0 at 100e0ad0
 * undefined FUN_100e0ad0(void)
 * Address ranges: 100e0ad0-100e10fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e0ad0(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  ulonglong extraout_x1;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  code *extraout_w11;
  int extraout_w15;
  uint *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  char local_50 [4];
  int aiStack_4c [3];
  
  iVar12 = FUN_100013c0();
  iVar8 = extraout_w15 * -0x10;
  pcVar6 = local_50 + iVar8;
  *(int *)(&stack0xffffffd8 + iVar8) = param_3;
  iVar13 = DAT_10175b54;
  iVar18 = -0x7789f794;
  puVar24 = (uint *)extraout_x1;
  if (puVar24 == (uint *)0x0) {
    return -0x7789f794;
  }
  if (param_3 == 0) {
    return -0x7789f794;
  }
  if (((*(uint *)(iVar12 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    *pcVar6 = '\0';
    *(undefined4 *)(iVar13 + 0x1c) = 1;
  }
  else {
    *pcVar6 = '\x01';
    iVar13 = (*(code *)PTR_FUN_1016c120)(iVar13);
    if (iVar13 == 0) {
      FUN_100071d0(0);
    }
  }
  uVar2 = *puVar24;
  if ((1 < uVar2 + 0x1ff00) && (1 < uVar2 + 0x1fe00 && uVar2 != 0xfffe0300))
  goto switchD_100e0c00_default;
  FUN_101325d0(&stack0x00000850 + iVar8,0,0x4a70);
  *(undefined4 *)(&stack0xffffffc4 + iVar8) = 0;
  uVar20 = *(uint *)(*(int *)(iVar12 + 0x50) + 0xc4);
  if (uVar20 < uVar2) {
    uVar17 = 0x7fffffff;
  }
  else {
    uVar17 = *(undefined4 *)(*(int *)(iVar12 + 0x50) + 0x128);
  }
  switch(uVar2 >> 8 & 0xff) {
  case 1:
    cVar11 = FUN_10024568(extraout_x1 & 0xffffffff,*(undefined4 *)(iVar12 + -0x58e0),uVar17,
                          &stack0x00000850 + iVar8,&stack0xffffffc4 + iVar8);
    break;
  case 2:
    cVar11 = FUN_100f1140(extraout_x1 & 0xffffffff,*(undefined4 *)(iVar12 + -0x58e0),
                          &stack0x00000850 + iVar8,&stack0xffffffc4 + iVar8);
    break;
  case 3:
    cVar11 = FUN_100f2648(extraout_x1 & 0xffffffff,*(undefined4 *)(iVar12 + -0x58e0),uVar17,
                          &stack0x00000850 + iVar8,&stack0xffffffc4 + iVar8);
    break;
  default:
    goto switchD_100e0c00_default;
  }
  if ((cVar11 == '\0' || uVar20 < uVar2) ||
     (puVar14 = (undefined4 *)FUN_101321c0(0x1c), puVar14 == (undefined4 *)0x0))
  goto switchD_100e0c00_default;
  *(undefined8 *)(puVar14 + 1) = 0;
  puVar14[3] = puVar14;
  *puVar14 = &PTR_FUN_1015fd7c;
  uVar26 = 0;
  puVar14[4] = iVar12 + -0x66b4;
  *(undefined8 *)(puVar14 + 5) = 0;
  uVar2 = *(uint *)(&stack0xffffffc4 + iVar8);
  uVar25 = (ulonglong)uVar2;
  uVar21 = 0;
  *(undefined4 **)(&stack0xffffffcc + iVar8) = puVar14;
  if (uVar2 != 0) {
    do {
      iVar13 = (int)uVar21;
      uVar7 = uVar21 & 1;
      uVar20 = iVar13 + 1;
      uVar21 = (ulonglong)uVar20;
      uVar26 = ((ulonglong)puVar24[iVar13] << (uVar7 << 5)) + uVar26;
    } while (uVar20 < uVar2);
  }
  uVar20 = *(uint *)(iVar12 + 0x6c);
  if (uVar20 != 0) {
    uVar23 = 0;
    uVar19 = uVar20;
    do {
      uVar22 = uVar19 + uVar23 >> 1;
      uVar21 = *(ulonglong *)(*(int *)(iVar12 + 0x68) + uVar22 * 0x18);
      uVar9 = uVar22;
      if (uVar21 <= uVar26) {
        if (uVar26 <= uVar21) break;
        uVar23 = uVar22 + 1;
        uVar22 = uVar23;
        uVar9 = uVar19;
      }
      uVar19 = uVar9;
    } while (uVar19 != uVar23);
    if (((uVar22 != uVar20) &&
        (puVar1 = (ulonglong *)(*(int *)(iVar12 + 0x68) + uVar22 * 0x18), *puVar1 == uVar26)) &&
       (puVar1 = puVar1 + 2, puVar1 != (ulonglong *)0x0)) {
      uVar20 = (*(int **)puVar1)[1];
      if (uVar20 != 0) {
        iVar18 = **(int **)puVar1;
        *(ulonglong *)(&stack0xffffffd0 + iVar8) = uVar26;
        aiStack_4c[extraout_w15 * -4] = -0x7789f794;
        aiStack_4c[extraout_w15 * -4 + 1] = (int)puVar14;
        uVar23 = 0;
        aiStack_4c[extraout_w15 * -4 + 2] = iVar12;
        *(ulonglong **)(&stack0xffffffc0 + iVar8) = puVar1;
LAB_100e0dac:
        if (*(uint *)(iVar18 + 0x858 + uVar23 * 0x870) != uVar2) goto LAB_100e0dd8;
        puVar5 = (undefined4 *)(iVar18 + uVar23 * 0x870);
        iVar12 = FUN_10132550(extraout_x1 & 0xffffffff,puVar5[0x217],(uVar25 & 0x3fffffff) << 2);
        if (iVar12 != 0) goto LAB_100e0dd8;
        iVar18 = aiStack_4c[extraout_w15 * -4];
        puVar14 = (undefined4 *)aiStack_4c[extraout_w15 * -4 + 1];
        iVar12 = aiStack_4c[extraout_w15 * -4 + 2];
        uVar26 = *(ulonglong *)(&stack0xffffffd0 + iVar8);
        *puVar5 = puVar14;
        iVar13 = FUN_100e5ac8(iVar12 + 0x78,&stack0xffffffcc + iVar8,puVar5);
        iVar13 = iVar13 + 8;
        piVar3 = (int *)**(int **)(&stack0xffffffc0 + iVar8);
        puVar24 = (uint *)(piVar3 + 1);
        uVar20 = *puVar24;
        if (uVar23 < uVar20) {
          uVar23 = uVar23 + 1;
          if (uVar23 < uVar20) {
            *(ulonglong *)(&stack0xffffffd0 + iVar8) = uVar26;
            *(uint *)(&stack0xffffffc0 + iVar8) = uVar2;
            aiStack_4c[extraout_w15 * -4] = iVar18;
            *(int *)(&stack0xffffffc8 + iVar8) = iVar13;
            do {
              iVar18 = *piVar3 + uVar23 * 0x870;
              FUN_101325a0(iVar18 + -0x870,iVar18,0x870);
              uVar20 = *puVar24;
              uVar23 = uVar23 + 1;
            } while (uVar23 < uVar20);
            uVar26 = *(ulonglong *)(&stack0xffffffd0 + iVar8);
            iVar18 = aiStack_4c[extraout_w15 * -4];
            uVar25 = (ulonglong)*(uint *)(&stack0xffffffc0 + iVar8);
            iVar13 = *(int *)(&stack0xffffffc8 + iVar8);
          }
          *puVar24 = uVar20 - 1;
        }
        if (iVar13 == 0) goto LAB_100e0df4;
        goto LAB_100e1034;
      }
    }
  }
LAB_100e0df4:
  *(undefined4 *)(&stack0xffffffc8 + iVar8) = 0;
  iVar13 = (int)uVar25 * 4;
  if (uVar25 >> 0x1e != 0) {
    iVar13 = -1;
  }
  iVar13 = FUN_101322b0(iVar13);
  *(int *)(&stack0xffffffc0 + iVar8) = iVar13;
  iVar15 = FUN_101321c0(0x4a70);
  aiStack_4c[extraout_w15 * -4] = iVar15;
  if ((iVar13 == 0) || (iVar15 == 0)) {
    aiStack_4c[extraout_w15 * -4 + 2] = 0;
    bVar10 = false;
    puVar5 = (undefined4 *)(iVar12 + 0x74);
  }
  else {
    uVar17 = *(undefined4 *)(iVar12 + 0x74);
    aiStack_4c[extraout_w15 * -4 + 1] = iVar12 + 0x74;
    iVar16 = FUN_1001a108(uVar17,extraout_x1 & 0xffffffff,&stack0x00000850 + iVar8);
    aiStack_4c[extraout_w15 * -4 + 2] = iVar16;
    iVar15 = 0;
    if (iVar16 != 0) {
      FUN_101325a0(iVar13,extraout_x1 & 0xffffffff,(uVar25 & 0x3fffffff) << 2);
      FUN_101325a0(aiStack_4c[extraout_w15 * -4],&stack0x00000850 + iVar8,0x4a70);
      uVar17 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar15 = (*extraout_w11)(uVar17,iVar13,aiStack_4c[extraout_w15 * -4],0);
      *(int *)(&stack0xffffffc8 + iVar8) = iVar15;
    }
    bVar10 = iVar15 != 0;
    puVar5 = (undefined4 *)aiStack_4c[extraout_w15 * -4 + 1];
  }
  if (bVar10) {
    iVar15 = aiStack_4c[extraout_w15 * -4];
    *(ulonglong *)(&stack0x00000848 + iVar8) = uVar26;
    uVar17 = *puVar5;
    *(undefined4 **)(&stack0xffffffe0 + iVar8) = puVar14;
    *(undefined4 *)(&stack0xffffffe4 + iVar8) = *(undefined4 *)(&stack0xffffffc8 + iVar8);
    iVar13 = aiStack_4c[extraout_w15 * -4 + 2];
    *(int *)(&stack0xffffffe8 + iVar8) = iVar15;
    *(undefined2 *)(&stack0xffffffec + iVar8) = 0xffff;
    *(int *)(&stack0x00000840 + iVar8) = iVar13;
    *(undefined4 *)(&stack0x00000844 + iVar8) = 0;
    *(int *)(&stack0x00000838 + iVar8) = (int)uVar25;
    *(undefined4 *)(&stack0x0000083c + iVar8) = *(undefined4 *)(&stack0xffffffc0 + iVar8);
    FUN_1000bfb0(uVar17,&stack0x00000c9f + iVar8,&stack0xffffffec + iVar8,0x400);
    FUN_1000bfb0(uVar17,&stack0x00005115 + iVar8,&stack0x000007f0 + iVar8,0x10);
    FUN_1000bfb0(uVar17,&stack0x00005228 + iVar8,&stack0x00000814 + iVar8,0x10);
    iVar13 = FUN_100e5ac8(iVar12 + 0x78,&stack0xffffffcc + iVar8,&stack0xffffffe0 + iVar8);
    iVar13 = iVar13 + 8;
    if (iVar13 == 0) goto LAB_100e1078;
LAB_100e1034:
    uVar17 = *(undefined4 *)(iVar13 + 0x85c);
    uVar4 = *(undefined4 *)(&stack0xffffffd8 + iVar8);
    puVar14[6] = *(undefined4 *)(&stack0xffffffc4 + iVar8);
    puVar14[5] = uVar17;
    iVar18 = FUN_100ec150(puVar14,&DAT_1015e4f0,uVar4);
    if (-1 < iVar18) goto switchD_100e0c00_default;
    puVar14[5] = 0;
    puVar14[6] = 0;
  }
  else {
LAB_100e1078:
    FUN_10132260(aiStack_4c[extraout_w15 * -4 + 2],0);
    FUN_101322d0(*(undefined4 *)(&stack0xffffffc0 + iVar8));
    FUN_10132260(aiStack_4c[extraout_w15 * -4],0x4a70);
  }
  *puVar14 = &PTR_FUN_1015fd7c;
  FUN_10132260(puVar14,0x1c);
switchD_100e0c00_default:
  if (*pcVar6 == '\0') {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  else {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  return iVar18;
LAB_100e0dd8:
  uVar23 = uVar23 + 1;
  if (uVar20 <= uVar23) goto code_r0x100e0de4;
  goto LAB_100e0dac;
code_r0x100e0de4:
  iVar12 = aiStack_4c[extraout_w15 * -4 + 2];
  iVar18 = aiStack_4c[extraout_w15 * -4];
  puVar14 = (undefined4 *)aiStack_4c[extraout_w15 * -4 + 1];
  uVar26 = *(ulonglong *)(&stack0xffffffd0 + iVar8);
  goto LAB_100e0df4;
}

