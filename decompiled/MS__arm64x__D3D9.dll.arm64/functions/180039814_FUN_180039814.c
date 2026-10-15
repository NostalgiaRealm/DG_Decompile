/*
 * FUN_180039814 at 180039814
 * undefined FUN_180039814(void)
 * Address ranges: 180039814-180039a73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180039814(longlong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong in_x5;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  longlong unaff_x19;
  ulonglong unaff_x20;
  longlong unaff_x21;
  longlong unaff_x22;
  longlong lVar21;
  ulonglong uVar22;
  int unaff_w23;
  longlong unaff_x24;
  longlong unaff_x25;
  longlong lVar23;
  longlong unaff_x26;
  longlong unaff_x27;
  uint in_stack_00000010;
  undefined8 in_stack_00000018;
  longlong in_stack_00000028;
  longlong lStack0000000000000040;
  
  lStack0000000000000040 = param_1;
  while( true ) {
    uVar7 = (uint)unaff_x20;
    iVar2 = (int)uVar7 >> 3;
    plVar9 = *(longlong **)(unaff_x26 + (unaff_x20 & 0xffffffff) * 8);
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(unaff_x21 + 0xe98));
    bVar5 = (*(byte *)((longlong)&stack0x00000018 + (longlong)iVar2) >> (ulonglong)(uVar7 & 7) & 1)
            != 0;
    uVar3 = (undefined1)unaff_w23;
    if (plVar9 == (longlong *)0x0) {
      lVar10 = *(longlong *)(unaff_x21 + 0xfec0 + (unaff_x20 & 0xffffffff) * 8);
      if (lVar10 == 0) {
        uVar22 = (ulonglong)*(uint *)(*(longlong *)(unaff_x21 + 0xf6f8) + 0x180);
      }
      else {
        uVar7 = FUN_18009a5d0(lVar10,bVar5);
        uVar22 = (ulonglong)uVar7;
        if (uVar7 != 0xffffffff) {
          *(undefined8 *)(unaff_x21 + 0xfee8 + (unaff_x20 & 0xffffffff) * 8) =
               *(undefined8 *)
                (*(longlong *)(unaff_x21 + 0xfec0 + (unaff_x20 & 0xffffffff) * 8) + 0x40);
          FUN_180039000();
        }
      }
    }
    else {
      bVar15 = *(byte *)((longlong)plVar9 + 0x192);
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(unaff_x21 + 0xffd4));
      if ((((*(byte *)((longlong)&stack0x00000018 + (longlong)iVar2) >> (ulonglong)(uVar7 & 7) & 1)
            != 0) && ((bVar15 & 1) != 0)) &&
         ((*(int *)(unaff_x21 + 0x7b0) == 0 || (*(int *)(unaff_x21 + 0x7b4) == 0)))) {
        bVar15 = bVar15 & 0xfe;
      }
      if (bVar15 == 1) {
        lVar10 = (**(code **)(*plVar9 + 0xf8))();
        lVar21 = *(longlong *)(*(longlong *)(unaff_x21 + unaff_x27) + 0x1508);
        if (((*(longlong *)(lVar21 + 0xb10) != 0) && (lVar10 != 0)) &&
           (iVar6 = FUN_1800f1b78(*(undefined8 *)(lVar21 + 0xb18),lVar10,0,0,
                                  *(longlong *)(lVar21 + 0xb10),lVar21,0,
                                  *(undefined8 *)(lVar21 + 0xb78)),
           *(int *)(*(longlong *)(lVar21 + 0xb10) + 0x30) != 3 && iVar6 != 0)) {
          FUN_1800e7f80(lVar21,lVar10,0,iVar6,0);
        }
        *(undefined1 *)(unaff_x21 + 0x1018b) = uVar3;
        *(byte *)(in_x5 + iVar2) =
             *(byte *)(in_x5 + iVar2) | (byte)(unaff_w23 << (ulonglong)(uVar7 & 7));
      }
      plVar9 = *(longlong **)(unaff_x26 + (unaff_x20 & 0xffffffff) * 8);
      uVar7 = (**(code **)(*plVar9 + 0x118))(plVar9,bVar5,1);
      uVar22 = (ulonglong)uVar7;
      if (uVar7 != 0xffffffff) {
        uVar11 = (**(code **)(**(longlong **)(unaff_x26 + (unaff_x20 & 0xffffffff) * 8) + 0xf8))();
        *(undefined8 *)(unaff_x21 + 0xfee8 + (unaff_x20 & 0xffffffff) * 8) = uVar11;
        (**(code **)(**(longlong **)(unaff_x26 + (unaff_x20 & 0xffffffff) * 8) + 0x110))();
        FUN_180039000();
      }
    }
    lVar10 = *(longlong *)(*(longlong *)(unaff_x21 + unaff_x27) + 0x1930);
    plVar9 = *(longlong **)(*(longlong *)(lVar10 + 0x50) + (uVar22 >> 0x10) * 0x10);
    (**(code **)(*plVar9 + 0x48))(plVar9,&stack0x00000028);
    in_stack_00000028 =
         in_stack_00000028 + (ulonglong)(*(int *)(lVar10 + 0x20) * ((uint)uVar22 & 0xffff));
    *(longlong *)(unaff_x25 + (unaff_x20 & 0xffffffff) * 8) = in_stack_00000028;
    uVar7 = (in_stack_00000010 & 0xaaaaaaaa) >> 1 | (in_stack_00000010 & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    unaff_x20 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
    uVar7 = (uint)unaff_x20;
    if ((unaff_w23 - (uVar7 >> 5) & 0xff) == 0) break;
    *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar7 >> 3)) =
         *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar7 >> 3)) &
         ((byte)(unaff_w23 << (ulonglong)(uVar7 & 7)) ^ 0xff);
  }
  if (*(char *)(lStack0000000000000040 + 399) == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(unaff_x21 + 0xffcc);
  }
  uVar7 = (*(uint *)(unaff_x22 + 0x3fc8) | uVar7) & (*(uint *)(unaff_x22 + 0x3680) ^ 0xffffffff);
  uVar22 = (ulonglong)uVar7;
  uVar8 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
  uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
  uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
  uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
  in_stack_00000010 = uVar7;
  uVar8 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
  if ((unaff_w23 - (uVar8 >> 5) & 0xff) != 0) {
    puVar13 = &stack0x00000010;
    *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar8 >> 3)) =
         *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar8 >> 3)) &
         ((byte)(unaff_w23 << (ulonglong)(uVar8 & 7)) ^ 0xff);
    while( true ) {
      FUN_180038eb0();
      uVar7 = (uint)uVar22;
      uVar8 = (in_stack_00000010 & 0xaaaaaaaa) >> 1 | (in_stack_00000010 & 0x55555555) << 1;
      uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
      uVar8 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
      if ((unaff_w23 - (uVar8 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)puVar13 + (longlong)((int)uVar8 >> 3)) =
           *(byte *)((longlong)puVar13 + (longlong)((int)uVar8 >> 3)) &
           ((byte)(unaff_w23 << (ulonglong)(uVar8 & 7)) ^ 0xff);
    }
  }
  *(undefined4 *)(unaff_x22 + 0x3fc8) = 0;
  in_stack_00000010 = *(uint *)(unaff_x22 + 0x3680) | uVar7;
  bVar15 = *(byte *)(unaff_x19 + 0x689);
  *(uint *)(unaff_x22 + 0x3680) = in_stack_00000010;
  *(byte *)(unaff_x19 + 0x689) = uVar7 != 0 | bVar15;
  uVar7 = (in_stack_00000010 & 0xaaaaaaaa) >> 1 | (in_stack_00000010 & 0x55555555) << 1;
  uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  lVar10 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
  uVar7 = (uint)lVar10;
  if ((unaff_w23 - (uVar7 >> 5) & 0xff) == 0) {
    return 0;
  }
  *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar7 >> 3)) =
       *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar7 >> 3)) &
       ((byte)(unaff_w23 << (ulonglong)(uVar7 & 7)) ^ 0xff);
  lVar21 = unaff_x21 + 0xfd10;
  lStack0000000000000040 = unaff_x21 + 0xffc8;
  do {
    uVar7 = (uint)lVar10;
    iVar2 = (int)uVar7 >> 3;
    plVar9 = *(longlong **)(lVar21 + lVar10 * 8);
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(unaff_x21 + 0xe94));
    bVar5 = (*(byte *)((longlong)&stack0x00000018 + (longlong)iVar2) >> (ulonglong)(uVar7 & 7) & 1)
            != 0;
    if (plVar9 == (longlong *)0x0) {
      lVar12 = *(longlong *)(unaff_x21 + 0xfd90 + lVar10 * 8);
      if (lVar12 == 0) {
        uVar22 = (ulonglong)*(uint *)(*(longlong *)(unaff_x21 + 0xf6f8) + 0x180);
      }
      else {
        uVar8 = FUN_18009a5d0(lVar12,bVar5);
        uVar22 = (ulonglong)uVar8;
        if (uVar8 != 0xffffffff) {
          uVar17 = *(ulonglong *)(*(longlong *)(unaff_x21 + 0xfd90 + lVar10 * 8) + 0x40);
          *(ulonglong *)(unaff_x21 + 0xfe10 + lVar10 * 8) = uVar17;
          uVar8 = *(uint *)(unaff_x22 + 0x3a10);
          if (uVar8 != 0) {
            uVar16 = 0;
            uVar14 = uVar8;
            do {
              uVar18 = uVar14 + uVar16 >> 1;
              uVar20 = *(ulonglong *)(*(longlong *)(unaff_x21 + 0xfa08) + (ulonglong)uVar18 * 0x18);
              uVar4 = uVar18;
              if (uVar20 <= uVar17) {
                if (uVar17 <= uVar20) break;
                uVar16 = uVar18 + 1;
                uVar18 = uVar18 + 1;
                uVar4 = uVar14;
              }
              uVar14 = uVar4;
            } while (uVar14 != uVar16);
            if (((uVar18 != uVar8) &&
                (puVar19 = (ulonglong *)
                           (*(longlong *)(unaff_x21 + 0xfa08) + (ulonglong)uVar18 * 0x18),
                *puVar19 == uVar17)) && (puVar1 = puVar19 + 2, puVar1 != (ulonglong *)0x0)) {
              *(undefined1 *)((longlong)puVar19 + 0x17) = uVar3;
              *(char *)puVar1 = (char)*puVar1 + '\x01';
              goto LAB_180039e10;
            }
          }
          in_stack_00000018 = CONCAT71(0x1000000000000,uVar3);
          FUN_180041b90(unaff_x21 + 64000,&stack0x00000038,&stack0x00000018);
        }
      }
    }
    else {
      bVar15 = *(byte *)((longlong)plVar9 + 0x192);
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(unaff_x21 + 0xffcc));
      if ((((*(byte *)((longlong)&stack0x00000018 + (longlong)iVar2) >> (ulonglong)(uVar7 & 7) & 1)
            != 0) && ((bVar15 & 1) != 0)) &&
         ((*(int *)(unaff_x21 + 0x7b0) == 0 || (*(int *)(unaff_x21 + 0x7b4) == 0)))) {
        bVar15 = bVar15 & 0xfe;
      }
      if (bVar15 == 1) {
        lVar12 = (**(code **)(*plVar9 + 0xf8))();
        lVar23 = *(longlong *)(*(longlong *)(unaff_x21 + unaff_x27) + 0x1508);
        if (((*(longlong *)(lVar23 + 0xb10) != 0) && (lVar12 != 0)) &&
           (iVar6 = FUN_1800f1b78(*(undefined8 *)(lVar23 + 0xb18),lVar12,0,0,
                                  *(longlong *)(lVar23 + 0xb10),lVar23,0,
                                  *(undefined8 *)(lVar23 + 0xb78)),
           *(int *)(*(longlong *)(lVar23 + 0xb10) + 0x30) != 3 && iVar6 != 0)) {
          FUN_1800e7f80(lVar23,lVar12,0,iVar6,0);
        }
        *(undefined1 *)(unaff_x21 + 0x1018b) = uVar3;
        *(byte *)(lStack0000000000000040 + iVar2) =
             *(byte *)(lStack0000000000000040 + iVar2) | (byte)(unaff_w23 << (ulonglong)(uVar7 & 7))
        ;
      }
      plVar9 = *(longlong **)(lVar21 + lVar10 * 8);
      uVar8 = (**(code **)(*plVar9 + 0x118))(plVar9,bVar5,0);
      uVar22 = (ulonglong)uVar8;
      if (uVar8 != 0xffffffff) {
        uVar11 = (**(code **)(**(longlong **)(lVar21 + lVar10 * 8) + 0xf8))();
        *(undefined8 *)(unaff_x21 + 0xfe10 + lVar10 * 8) = uVar11;
        (**(code **)(**(longlong **)(lVar21 + lVar10 * 8) + 0x110))();
        FUN_180038de0();
      }
    }
LAB_180039e10:
    if (uVar7 < 8) {
      *(undefined8 *)(unaff_x21 + 0xfa58 + lVar10 * 8) = *(undefined8 *)(unaff_x24 + 0x78d8);
    }
    lVar12 = *(longlong *)(*(longlong *)(unaff_x21 + unaff_x27) + 0x1930);
    plVar9 = *(longlong **)(*(longlong *)(lVar12 + 0x50) + (uVar22 >> 0x10) * 0x10);
    (**(code **)(*plVar9 + 0x48))(plVar9,&stack0x00000028);
    in_stack_00000028 =
         in_stack_00000028 + (ulonglong)(*(int *)(lVar12 + 0x20) * ((uint)uVar22 & 0xffff));
    *(longlong *)(unaff_x21 + 0xfa98 + lVar10 * 8) = in_stack_00000028;
    uVar7 = (in_stack_00000010 & 0xaaaaaaaa) >> 1 | (in_stack_00000010 & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    lVar10 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
    uVar7 = (uint)lVar10;
    if ((unaff_w23 - (uVar7 >> 5) & 0xff) == 0) {
      return 0;
    }
    *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar7 >> 3)) =
         *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar7 >> 3)) &
         ((byte)(unaff_w23 << (ulonglong)(uVar7 & 7)) ^ 0xff);
  } while( true );
}

