/*
 * FUN_1800bbd28 at 1800bbd28
 * undefined FUN_1800bbd28(void)
 * Address ranges: 1800bbd28-1800bc223
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800bbd28(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong extraout_x15;
  undefined4 uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  uint *puVar14;
  
  auVar28 = FUN_180001640();
  puVar14 = auVar28._8_8_;
  lVar20 = auVar28._0_8_;
  lVar7 = extraout_x15 * -0x10;
  *(longlong *)(&stack0xffffffffffffffe0 + lVar7) = param_3;
  *(undefined4 *)(&stack0xffffffffffffffa8 + lVar7) = 0x8876086c;
  if ((puVar14 == (uint *)0x0) || (param_3 == 0)) goto LAB_1800bc200;
  if (((*(uint *)(lVar20 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    uVar22 = 0;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
LAB_1800bbd98:
    *(undefined4 *)(&stack0xffffffffffffffa4 + lVar7) = uVar22;
  }
  else {
    uVar22 = 1;
    iVar9 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar9 != 0) goto LAB_1800bbd98;
    FUN_180003398();
    *(undefined4 *)(&stack0xffffffffffffffa4 + lVar7) = 1;
  }
  uVar4 = *puVar14;
  if ((uVar4 + 0xff00 < 5) || (uVar4 + 0xfe00 < 2 || uVar4 == 0xffff0300)) {
    lVar19 = *(longlong *)(lVar20 + 0x60);
    *(undefined4 *)(&stack0xffffffffffffffa0 + lVar7) = 0;
    uVar16 = *(uint *)(lVar19 + 0xcc);
    lVar24 = 0;
    if (uVar16 < uVar4) {
      uVar22 = 0x7fffffff;
    }
    else {
      uVar22 = *(undefined4 *)(lVar19 + 300);
      lVar24 = lVar19 + 0x108;
    }
    if ((uVar4 & 0xff00) == 0x100) {
      cVar8 = FUN_18000f500(puVar14,&stack0x00000220 + lVar7,&stack0xffffffffffffffa0 + lVar7);
    }
    else if ((uVar4 & 0xff00) == 0x200) {
      cVar8 = FUN_1800cbb58(puVar14,lVar24,&stack0x00000220 + lVar7,&stack0xffffffffffffffa0 + lVar7
                           );
    }
    else {
      if ((uVar4 & 0xff00) != 0x300) goto LAB_1800bc134;
      cVar8 = FUN_1800cce70(puVar14,uVar22,&stack0x00000220 + lVar7,&stack0xffffffffffffffa0 + lVar7
                           );
    }
    if ((cVar8 != '\0' && uVar4 <= uVar16) &&
       (puVar10 = (undefined8 *)FUN_180102f80(0x38), puVar10 != (undefined8 *)0x0)) {
      *puVar10 = &PTR_FUN_1802367f8;
      puVar10[1] = 0;
      puVar10[4] = 0;
      *(undefined4 *)(puVar10 + 5) = 0;
      lVar24 = 0;
      puVar10[2] = puVar10;
      puVar10[3] = lVar20 + -0x6838;
      uVar27 = 0;
      puVar10[6] = 0;
      uVar17 = 0;
      uVar4 = *(uint *)(&stack0xffffffffffffffa0 + lVar7);
      uVar23 = CONCAT44(0,uVar4);
      *(undefined8 **)(&stack0xffffffffffffffd0 + lVar7) = puVar10;
      if (uVar4 != 0) {
        do {
          puVar1 = puVar14 + uVar17;
          uVar21 = uVar17 & 1;
          uVar16 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar16;
          uVar27 = ((ulonglong)*puVar1 << (uVar21 << 5)) + uVar27;
        } while (uVar16 < uVar4);
      }
      uVar16 = *(uint *)(lVar20 + 0xe8);
      if (uVar16 != 0) {
        uVar18 = 0;
        uVar15 = uVar16;
        do {
          uVar5 = uVar15 + uVar18 >> 1;
          uVar17 = (ulonglong)uVar5;
          uVar21 = *(ulonglong *)(*(longlong *)(lVar20 + 0xe0) + uVar17 * 0x18);
          if (uVar21 <= uVar27) {
            if (uVar27 <= uVar21) break;
            uVar18 = uVar5 + 1;
            uVar17 = (ulonglong)(uVar5 + 1);
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
        } while (uVar15 != uVar18);
        if ((((uint)uVar17 != uVar16) &&
            (puVar2 = (ulonglong *)(*(longlong *)(lVar20 + 0xe0) + uVar17 * 0x18), *puVar2 == uVar27
            )) && (puVar2 = puVar2 + 2, puVar2 != (ulonglong *)0x0)) {
          uVar16 = *(uint *)((longlong *)*puVar2 + 1);
          if (uVar16 != 0) {
            lVar24 = *(longlong *)*puVar2;
            *(undefined8 **)(&stack0xffffffffffffffc0 + lVar7) = puVar10;
            *(ulonglong *)(&stack0xffffffffffffffc8 + lVar7) = uVar27;
            *(ulonglong **)(&stack0xffffffffffffffd8 + lVar7) = puVar2;
            uVar27 = 0;
            *(undefined8 *)(&stack0xffffffffffffffb0 + lVar7) = 0;
            *(longlong *)(&stack0xffffffffffffffb8 + lVar7) = lVar20;
LAB_1800bbf98:
            lVar20 = uVar27 * 0x238;
            uVar18 = (uint)uVar27;
            if (*(uint *)(lVar24 + 0x224 + lVar20) != uVar4) goto LAB_1800bbfc0;
            iVar9 = func_0x000180222c00(puVar14,*(undefined8 *)(lVar24 + 0x228 + lVar20),uVar23 << 2
                                       );
            if (iVar9 != 0) goto LAB_1800bbfc0;
            *(longlong *)(&stack0xffffffffffffffb0 + lVar7) = lVar20 + lVar24;
            puVar10 = *(undefined8 **)(&stack0xffffffffffffffc0 + lVar7);
            uVar27 = *(ulonglong *)(&stack0xffffffffffffffc8 + lVar7);
            puVar3 = *(undefined8 **)(&stack0xffffffffffffffb0 + lVar7);
            lVar20 = *(longlong *)(&stack0xffffffffffffffb8 + lVar7);
            puVar26 = *(undefined8 **)(&stack0xffffffffffffffd8 + lVar7);
            (**(code **)(*(longlong *)puVar3[1] + 8))((longlong *)puVar3[1],puVar10);
            *puVar3 = puVar10;
            lVar25 = FUN_1800c0b30(lVar20 + 0xf8,&stack0xffffffffffffffd0 + lVar7,puVar3);
            plVar11 = (longlong *)*puVar26;
            uVar16 = *(uint *)(plVar11 + 1);
            lVar19 = lVar25;
            if (uVar18 < uVar16) {
              uVar18 = uVar18 + 1;
              if (uVar18 < uVar16) {
                *(longlong *)(&stack0xffffffffffffffb0 + lVar7) = lVar25;
                do {
                  thunk_FUN_180001218(*plVar11 + (ulonglong)(uVar18 - 1) * 0x238,
                                      *plVar11 + (ulonglong)uVar18 * 0x238,0x238);
                  uVar16 = *(uint *)(plVar11 + 1);
                  uVar18 = uVar18 + 1;
                } while (uVar18 < uVar16);
                lVar19 = *(longlong *)(&stack0xffffffffffffffb0 + lVar7);
              }
              *(uint *)(plVar11 + 1) = uVar16 - 1;
            }
            lVar24 = 0;
            if (lVar25 == -8) goto LAB_1800bbfd8;
            lVar24 = lVar19 + 8;
            goto LAB_1800bc0bc;
          }
        }
      }
      goto LAB_1800bbfd8;
    }
  }
LAB_1800bc134:
  if (*(int *)(&stack0xffffffffffffffa4 + lVar7) == 0) {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  else {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
LAB_1800bc200:
  return *(undefined4 *)(&stack0xffffffffffffffa8 + lVar7);
LAB_1800bbfc0:
  uVar27 = (ulonglong)(uVar18 + 1);
  if (uVar16 <= uVar18 + 1) goto code_r0x0001800bbfcc;
  goto LAB_1800bbf98;
code_r0x0001800bbfcc:
  lVar24 = *(longlong *)(&stack0xffffffffffffffb0 + lVar7);
  lVar20 = *(longlong *)(&stack0xffffffffffffffb8 + lVar7);
  puVar10 = *(undefined8 **)(&stack0xffffffffffffffc0 + lVar7);
  uVar27 = *(ulonglong *)(&stack0xffffffffffffffc8 + lVar7);
LAB_1800bbfd8:
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar23;
  lVar19 = uVar23 << 2;
  if (SUB168(auVar28 * ZEXT816(4),8) != 0) {
    lVar19 = -1;
  }
  lVar19 = thunk_FUN_180102f80(lVar19);
  lVar25 = 0;
  if ((lVar19 != 0) && (lVar25 = FUN_180102f80(0x1270), lVar25 != 0)) {
    thunk_FUN_180001218(lVar19,puVar14,uVar23 << 2);
    thunk_FUN_180001218(lVar25,&stack0x00000220 + lVar7,0x1270);
    plVar11 = *(longlong **)(*(longlong *)(lVar20 + 0xf0) + 0x28);
    lVar12 = (**(code **)(*plVar11 + 0x110))(plVar11,lVar19,lVar25,puVar10);
    if (lVar12 != 0) {
      *(undefined8 **)(&stack0xffffffffffffffe8 + lVar7) = puVar10;
      *(longlong *)(&stack0xfffffffffffffff0 + lVar7) = lVar12;
      *(longlong *)(&stack0xfffffffffffffff8 + lVar7) = lVar25;
      *(uint *)(&stack0x0000020c + lVar7) = uVar4;
      *(longlong *)(&stack0x00000210 + lVar7) = lVar19;
      *(ulonglong *)(&stack0x00000218 + lVar7) = uVar27;
      uVar13 = func_0x00018010a4a8(lVar12,&stack0x00000551 + lVar7,&stack0x00000000 + lVar7,0xe0);
      uVar13 = func_0x00018010a4a8(uVar13,&stack0x000003b0 + lVar7,&stack0x000001c4 + lVar7,0x10);
      func_0x00018010a4a8(uVar13,&stack0x000004c0 + lVar7,&stack0x000001e8 + lVar7);
      lVar24 = FUN_1800c0b30(lVar20 + 0xf8,&stack0xffffffffffffffd0 + lVar7,
                             &stack0xffffffffffffffe8 + lVar7);
      lVar24 = lVar24 + 8;
    }
  }
  if (lVar24 == 0) {
    thunk_FUN_180102fc0(lVar19);
    FUN_180102fc0(lVar25,0x1270);
  }
LAB_1800bc0bc:
  if (lVar24 != 0) {
    uVar4 = *(uint *)(&stack0xffffffffffffffa0 + lVar7);
    uVar27 = CONCAT44(0,uVar4);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar27;
    lVar20 = uVar27 << 2;
    if (SUB168(auVar6 * ZEXT816(4),8) != 0) {
      lVar20 = -1;
    }
    lVar20 = thunk_FUN_180102f80(lVar20);
    if (lVar20 != 0) {
      puVar10[4] = lVar24;
      puVar10[6] = lVar20;
      thunk_FUN_180001218(lVar20,puVar14,uVar27 << 2);
      uVar13 = *(undefined8 *)(&stack0xffffffffffffffe0 + lVar7);
      *(uint *)(puVar10 + 5) = uVar4;
      iVar9 = FUN_1800c2220(puVar10,&DAT_180229548,uVar13);
      *(int *)(&stack0xffffffffffffffa8 + lVar7) = iVar9;
      if (-1 < iVar9) goto LAB_1800bc134;
      thunk_FUN_180102fc0(puVar10[6]);
      puVar10[6] = 0;
      *(undefined4 *)(puVar10 + 5) = 0;
    }
  }
  *puVar10 = &PTR_FUN_1802367f8;
  FUN_180102fc0(puVar10,0x38);
  goto LAB_1800bc134;
}

