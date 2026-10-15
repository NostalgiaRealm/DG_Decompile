/*
 * FUN_180141350 at 180141350
 * undefined FUN_180141350(void)
 * Address ranges: 180141350-180141443;18014144c-180141747;18014174c-1801417a3;1801417b8-1801417f3;1801417f8-180141833;18014183c-180141cfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x000180141458) */
/* WARNING: Removing unreachable block (ram,0x000180141574) */
/* WARNING: Removing unreachable block (ram,0x0001801415a8) */
/* WARNING: Removing unreachable block (ram,0x0001801415f8) */
/* WARNING: Removing unreachable block (ram,0x0001801415f0) */
/* WARNING: Removing unreachable block (ram,0x0001801415fc) */
/* WARNING: Removing unreachable block (ram,0x000180141618) */
/* WARNING: Removing unreachable block (ram,0x000180141628) */
/* WARNING: Removing unreachable block (ram,0x000180141678) */
/* WARNING: Removing unreachable block (ram,0x00018014184c) */
/* WARNING: Removing unreachable block (ram,0x00018014186c) */
/* WARNING: Removing unreachable block (ram,0x000180141870) */
/* WARNING: Removing unreachable block (ram,0x00018014169c) */
/* WARNING: Removing unreachable block (ram,0x0001801416e4) */
/* WARNING: Removing unreachable block (ram,0x0001801416ec) */
/* WARNING: Removing unreachable block (ram,0x000180141700) */
/* WARNING: Removing unreachable block (ram,0x000180141708) */
/* WARNING: Removing unreachable block (ram,0x00018014170c) */
/* WARNING: Removing unreachable block (ram,0x000180141714) */
/* WARNING: Removing unreachable block (ram,0x00018014171c) */
/* WARNING: Removing unreachable block (ram,0x000180141724) */
/* WARNING: Removing unreachable block (ram,0x000180141738) */
/* WARNING: Removing unreachable block (ram,0x00018014174c) */
/* WARNING: Removing unreachable block (ram,0x000180141758) */
/* WARNING: Removing unreachable block (ram,0x000180141764) */
/* WARNING: Removing unreachable block (ram,0x00018014177c) */
/* WARNING: Removing unreachable block (ram,0x000180141788) */
/* WARNING: Removing unreachable block (ram,0x0001801417b8) */
/* WARNING: Removing unreachable block (ram,0x0001801417cc) */
/* WARNING: Removing unreachable block (ram,0x0001801417d8) */
/* WARNING: Removing unreachable block (ram,0x000180141800) */
/* WARNING: Removing unreachable block (ram,0x0001801417dc) */
/* WARNING: Removing unreachable block (ram,0x00018014183c) */
/* WARNING: Removing unreachable block (ram,0x00018014188c) */

bool FUN_180141350(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  ulonglong *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong extraout_x11_01;
  code *extraout_x11_02;
  longlong extraout_x11_03;
  code *extraout_x11_04;
  longlong extraout_x12;
  longlong extraout_x12_00;
  longlong extraout_x15;
  longlong extraout_x15_00;
  longlong extraout_x15_01;
  longlong lVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  undefined8 uVar24;
  longlong lVar25;
  undefined8 *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined8 uStack_8;
  
  auVar27 = FUN_180104f10();
  puVar8 = auVar27._8_8_;
  lVar19 = auVar27._0_8_;
  lVar4 = extraout_x15 * -0x10;
  *(undefined4 *)(&stack0xfffffffffffffff0 + lVar4) = param_4;
  thunk_FUN_1802236f8(lVar19 + 0xb0);
  uVar22 = *(uint *)(lVar19 + 0x98);
  if (uVar22 != 0) {
    uVar1 = *puVar8;
    uVar14 = 0;
    uVar13 = uVar22;
    do {
      uVar18 = uVar13 + uVar14 >> 1;
      uVar11 = *(ulonglong *)(*(longlong *)(lVar19 + 0x90) + (ulonglong)uVar18 * 0x2f0);
      uVar5 = uVar18;
      if (uVar11 <= uVar1) {
        if (uVar1 <= uVar11) break;
        uVar14 = uVar18 + 1;
        uVar18 = uVar18 + 1;
        uVar5 = uVar13;
      }
      uVar13 = uVar5;
    } while (uVar13 != uVar14);
    if ((uVar18 != uVar22) &&
       (puVar15 = (ulonglong *)(*(longlong *)(lVar19 + 0x90) + (ulonglong)uVar18 * 0x2f0),
       puVar20 = puVar15 + 2, *puVar15 == (ulonglong)uVar1)) goto LAB_1801413fc;
  }
  puVar20 = (ulonglong *)0x0;
LAB_1801413fc:
  *(undefined **)(&stack0xffffffffffffffe8 + lVar4) = __hybrid_os_arm64x_dispatch_icall;
  if (puVar20 == (ulonglong *)0x0) {
    FUN_180222c50(&stack0x00000050 + lVar4,0,0x2e0);
    puVar7 = (undefined8 *)FUN_1802229a8(0x270);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(puVar7 + 3,puVar8,0x254);
    }
    *(undefined8 *)(&stack0x00000050 + lVar4) = 0;
    puVar7 = (undefined8 *)0x0;
  }
  else {
    *(ulonglong **)(&stack0xffffffffffffffd0 + lVar4) = puVar20;
    *(uint **)(&stack0xffffffffffffffc0 + lVar4) = puVar8;
    *(ulonglong **)(&stack0xffffffffffffffc8 + lVar4) = puVar20 + 5;
    uVar22 = 0xffffffff;
    *(longlong *)(&stack0xffffffffffffffb0 + lVar4) = lVar19;
    uVar11 = 0;
    puVar15 = puVar20 + 0x53;
    do {
      uVar21 = puVar20[uVar11 * 10 + 3];
      uVar14 = (uint)uVar11;
      if ((uVar21 == 0) ||
         (*(int *)(&stack0xffffffffffffffb8 + lVar4) = (int)*puVar15,
         ((byte)(&stack0xffffffffffffffb8)[((int)uVar14 >> 3) + lVar4] >> (ulonglong)(uVar14 & 7) &
         1) == 0)) {
        if (uVar22 == 0xffffffff) {
          uVar22 = uVar14;
        }
      }
      else {
        iVar6 = FUN_180222c00(param_3,uVar11 * 0x50 +
                                      *(longlong *)(&stack0xffffffffffffffc8 + lVar4),0x40);
        if (iVar6 == 0) {
          puVar7 = *(undefined8 **)(&stack0xffffffffffffffd0 + lVar4);
          lVar19 = *(longlong *)(&stack0xffffffffffffffb0 + lVar4);
          *(ulonglong *)(lVar19 + 0x78) = uVar21;
          *(undefined8 *)(lVar19 + 0x80) = puVar7[uVar11 * 10 + 4];
          goto LAB_180141ca4;
        }
      }
      uVar14 = uVar14 + 1;
      uVar11 = (ulonglong)uVar14;
    } while ((int)uVar14 < 8);
    lVar19 = *(longlong *)(&stack0xffffffffffffffb0 + lVar4);
    lVar25 = *(longlong *)(&stack0xffffffffffffffc0 + lVar4);
    puVar7 = *(undefined8 **)(&stack0xffffffffffffffd0 + lVar4);
    if (uVar14 == 8) {
      if (uVar22 == 0xffffffff) {
        uVar22 = 0;
      }
      *(uint *)(&stack0xffffffffffffffb8 + lVar4) = uVar22;
      puVar26 = puVar7 + (longlong)(int)uVar22 * 10;
      lVar23 = puVar26[3];
      if (lVar23 != 0) {
        lVar16 = *(longlong *)(lVar19 + -0x28);
        uVar22 = *(uint *)(lVar19 + -0x20);
        *(longlong *)(&stack0xffffffffffffffc0 + lVar4) = lVar16;
        *(ulonglong *)(&stack0xffffffffffffffc8 + lVar4) = lVar16 + (ulonglong)uVar22 * 0x18c0;
        thunk_FUN_1802236f8(lVar16 + 0x620);
        if (lVar23 == *(longlong *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar4) + 0xba0)) {
          *(undefined8 *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar4) + 0xba0) = 0;
        }
        (**(code **)(&stack0xffffffffffffffe8 + lVar4))();
        (*extraout_x11)(lVar23);
        thunk_FUN_18022370c(*(longlong *)(&stack0xffffffffffffffc0 + lVar4) + 0x620);
        lVar23 = *(longlong *)(lVar19 + -0x28);
        uVar22 = *(uint *)(lVar19 + -0x20);
        lVar16 = puVar26[4];
        *(longlong *)(&stack0xffffffffffffffd8 + lVar4) = lVar23;
        *(longlong *)(&stack0xffffffffffffffc0 + lVar4) = lVar16;
        *(ulonglong *)(&stack0xffffffffffffffc8 + lVar4) = lVar23 + (ulonglong)uVar22 * 0x18c0;
        thunk_FUN_1802236f8(lVar23 + 0x620);
        if (lVar16 == *(longlong *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar4) + 0xba0)) {
          *(undefined8 *)(*(longlong *)(&stack0xffffffffffffffc8 + lVar4) + 0xba0) = 0;
        }
        uVar24 = *(undefined8 *)(&stack0xffffffffffffffc0 + lVar4);
        (**(code **)(&stack0xffffffffffffffe8 + lVar4))();
        (*extraout_x11_00)(uVar24);
        thunk_FUN_18022370c(*(longlong *)(&stack0xffffffffffffffd8 + lVar4) + 0x620);
      }
      uVar11 = 0;
      uVar22 = *(uint *)(puVar7 + 2);
      uVar9 = puVar7[1];
      lVar23 = *(longlong *)(lVar19 + -0x28) + (ulonglong)*(uint *)(lVar19 + -0x20) * 0x18c0;
      uVar24 = *(undefined8 *)(lVar23 + 0x6b0);
      if (*(int *)(lVar25 + 8) != 0) {
        *(undefined8 **)(&stack0xffffffffffffffd0 + lVar4) = puVar7;
        *(ulonglong *)(&stack0xffffffffffffffd8 + lVar4) = (ulonglong)uVar22;
        *(undefined8 *)(&stack0xffffffffffffffc0 + lVar4) = uVar24;
        *(longlong *)(&stack0xffffffffffffffc8 + lVar4) = lVar23;
        *(undefined8 **)(&stack0xffffffffffffffb0 + lVar4) = puVar26;
        *(ulonglong **)(&stack0xffffffffffffffe0 + lVar4) = puVar15;
        (&uStack_8)[extraout_x15 * -2] = uVar9;
        puVar12 = &stack0x00000b48 + lVar4;
        puVar10 = &stack0x00000b4c + lVar4;
        do {
          lVar16 = uVar11 << 5;
          lVar23 = lVar25 + (ulonglong)*(byte *)(lVar25 + 0x214 + uVar11) * 8;
          uVar22 = (uint)*(byte *)(lVar23 + 0x19);
          auVar28 = FUN_18018e3e8(*(byte *)(lVar23 + 0x19));
          cVar3 = *(char *)(lVar23 + 0x14);
          *(uint *)(&stack0x00000b38 + lVar16 + lVar4) = uVar22 & 0xf;
          bVar2 = *(byte *)(lVar23 + 0x18);
          *(longlong *)(&stack0x00000b30 + lVar16 + lVar4) = auVar28._0_8_;
          *(int *)(extraout_x12 + lVar16) = (int)cVar3;
          *(undefined4 *)(extraout_x15_00 + lVar16) =
               *(undefined4 *)(&DAT_18022c180 + (ulonglong)bVar2 * 4);
          *(uint *)(extraout_x11_01 + lVar16) = (uint)*(byte *)(lVar23 + 0x17) << 2;
          if (param_3 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(param_3 + (ulonglong)(uint)(int)cVar3 * 4);
          }
          uVar22 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar22;
          *(uint *)(puVar12 + lVar16) = (uint)(iVar6 != 0);
          *(int *)(puVar10 + lVar16) = iVar6;
        } while (uVar22 < auVar28._8_4_);
        puVar15 = *(ulonglong **)(&stack0xffffffffffffffe0 + lVar4);
        puVar26 = *(undefined8 **)(&stack0xffffffffffffffb0 + lVar4);
        uVar24 = *(undefined8 *)(&stack0xffffffffffffffc0 + lVar4);
        lVar23 = *(longlong *)(&stack0xffffffffffffffc8 + lVar4);
        puVar7 = *(undefined8 **)(&stack0xffffffffffffffd0 + lVar4);
      }
      *(undefined8 *)(&stack0xffffffffffffffb0 + lVar4) = 0;
      (**(code **)(&stack0xffffffffffffffe8 + lVar4))();
      (*extraout_x11_02)(uVar24,&stack0x00000b30 + lVar4);
      uVar24 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar4);
      uVar11 = 0;
      *(undefined8 *)(lVar19 + 0x78) = uVar24;
      puVar26[3] = uVar24;
      uVar9 = *(undefined8 *)(lVar23 + 0x6b0);
      uVar22 = *(uint *)(puVar7 + 2);
      uVar24 = puVar7[1];
      if (*(int *)(lVar25 + 0x25c) != 0) {
        *(undefined8 **)(&stack0xffffffffffffffd0 + lVar4) = puVar7;
        *(undefined8 **)(&stack0xffffffffffffffb0 + lVar4) = puVar26;
        *(ulonglong **)(&stack0xffffffffffffffe0 + lVar4) = puVar15;
        *(undefined8 *)(&stack0xffffffffffffffc0 + lVar4) = uVar24;
        *(ulonglong *)(&stack0xffffffffffffffc8 + lVar4) = (ulonglong)uVar22;
        (&uStack_8)[extraout_x15 * -2] = uVar9;
        puVar12 = &stack0x00001348 + lVar4;
        puVar10 = &stack0x0000134c + lVar4;
        do {
          lVar16 = uVar11 << 5;
          lVar23 = lVar25 + (ulonglong)*(byte *)(lVar25 + 0x468 + uVar11) * 8;
          uVar22 = (uint)*(byte *)(lVar23 + 0x26d);
          auVar28 = FUN_18018e3e8(*(byte *)(lVar23 + 0x26d));
          cVar3 = *(char *)(lVar23 + 0x268);
          *(uint *)(&stack0x00001338 + lVar16 + lVar4) = uVar22 & 0xf;
          bVar2 = *(byte *)(lVar23 + 0x26c);
          *(longlong *)(&stack0x00001330 + lVar16 + lVar4) = auVar28._0_8_;
          *(int *)(extraout_x12_00 + lVar16) = (int)cVar3;
          *(undefined4 *)(extraout_x15_01 + lVar16) =
               *(undefined4 *)(&DAT_18022c180 + (ulonglong)bVar2 * 4);
          *(uint *)(extraout_x11_03 + lVar16) = (uint)*(byte *)(lVar23 + 0x26b) << 2;
          if (param_3 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(param_3 + (ulonglong)(uint)(int)cVar3 * 4);
          }
          uVar22 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar22;
          *(uint *)(puVar12 + lVar16) = (uint)(iVar6 != 0);
          *(int *)(puVar10 + lVar16) = iVar6;
        } while (uVar22 < auVar28._8_4_);
        puVar7 = *(undefined8 **)(&stack0xffffffffffffffd0 + lVar4);
        puVar15 = *(ulonglong **)(&stack0xffffffffffffffe0 + lVar4);
        puVar26 = *(undefined8 **)(&stack0xffffffffffffffb0 + lVar4);
        uVar9 = (&uStack_8)[extraout_x15 * -2];
      }
      *(undefined8 *)(&stack0xffffffffffffffb0 + lVar4) = 0;
      (**(code **)(&stack0xffffffffffffffe8 + lVar4))();
      (*extraout_x11_04)(uVar9,&stack0x00001330 + lVar4);
      uVar24 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar4);
      *(undefined8 *)(lVar19 + 0x80) = uVar24;
      puVar26[4] = uVar24;
      iVar6 = (int)*(uint *)(&stack0xffffffffffffffb8 + lVar4) >> 3;
      *(byte *)((longlong)puVar15 + (longlong)iVar6) =
           *(byte *)((longlong)puVar15 + (longlong)iVar6) |
           (byte)(1 << (ulonglong)(*(uint *)(&stack0xffffffffffffffb8 + lVar4) & 7));
    }
LAB_180141ca4:
    *(undefined8 *)(lVar19 + -0x18) = *puVar7;
    *(undefined4 *)(lVar19 + 0x2c) = *(undefined4 *)(&stack0xfffffffffffffff0 + lVar4);
    iVar6 = 8;
    puVar26 = (undefined8 *)(lVar19 + 0x30);
    puVar17 = puVar7 + 0x54;
    do {
      iVar6 = iVar6 + -1;
      *puVar26 = *puVar17;
      puVar26 = puVar26 + 1;
      puVar17 = puVar17 + 1;
    } while (iVar6 != 0);
  }
  thunk_FUN_18022370c(lVar19 + 0xb0);
  return puVar7 != (undefined8 *)0x0;
}

