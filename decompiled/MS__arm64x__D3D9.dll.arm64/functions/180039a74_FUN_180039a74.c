/*
 * FUN_180039a74 at 180039a74
 * undefined FUN_180039a74(void)
 * Address ranges: 180039a74-180039b97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180039a74(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong unaff_x19;
  longlong lVar21;
  longlong unaff_x21;
  longlong unaff_x22;
  int unaff_w23;
  longlong unaff_x24;
  longlong lVar22;
  longlong unaff_x27;
  uint uStack0000000000000010;
  undefined8 in_stack_00000018;
  longlong in_stack_00000028;
  ulonglong in_stack_00000038;
  longlong in_stack_00000040;
  
  if (*(char *)(param_1 + 399) == '\0') {
    uVar20 = 0;
  }
  else {
    uVar20 = *(uint *)(unaff_x21 + 0xffcc);
  }
  uVar20 = (*(uint *)(unaff_x22 + 0x3fc8) | uVar20) & (*(uint *)(unaff_x22 + 0x3680) ^ 0xffffffff);
  uVar13 = (ulonglong)uVar20;
  uVar8 = (uVar20 & 0xaaaaaaaa) >> 1 | (uVar20 & 0x55555555) << 1;
  uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
  uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
  uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
  uStack0000000000000010 = uVar20;
  uVar8 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
  if ((unaff_w23 - (uVar8 >> 5) & 0xff) != 0) {
    puVar12 = (undefined1 *)&stack0x00000010;
    *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar8 >> 3)) =
         *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar8 >> 3)) &
         ((byte)(unaff_w23 << (ulonglong)(uVar8 & 7)) ^ 0xff);
    while( true ) {
      FUN_180038eb0();
      uVar20 = (uint)uVar13;
      uVar8 = (uStack0000000000000010 & 0xaaaaaaaa) >> 1 |
              (uStack0000000000000010 & 0x55555555) << 1;
      uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
      uVar8 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
      if ((unaff_w23 - (uVar8 >> 5) & 0xff) == 0) break;
      puVar12[(int)uVar8 >> 3] =
           puVar12[(int)uVar8 >> 3] & ((byte)(unaff_w23 << (ulonglong)(uVar8 & 7)) ^ 0xff);
    }
  }
  *(undefined4 *)(unaff_x22 + 0x3fc8) = 0;
  uStack0000000000000010 = *(uint *)(unaff_x22 + 0x3680) | uVar20;
  bVar15 = *(byte *)(unaff_x19 + 0x689);
  *(uint *)(unaff_x22 + 0x3680) = uStack0000000000000010;
  *(byte *)(unaff_x19 + 0x689) = uVar20 != 0 | bVar15;
  uVar20 = (uStack0000000000000010 & 0xaaaaaaaa) >> 1 | (uStack0000000000000010 & 0x55555555) << 1;
  uVar20 = (uVar20 & 0xcccccccc) >> 2 | (uVar20 & 0x33333333) << 2;
  uVar20 = (uVar20 & 0xf0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f) << 4;
  uVar20 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
  lVar21 = LZCOUNT(uVar20 >> 0x10 | uVar20 << 0x10);
  uVar20 = (uint)lVar21;
  if ((unaff_w23 - (uVar20 >> 5) & 0xff) == 0) {
    return 0;
  }
  *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar20 >> 3)) =
       *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar20 >> 3)) &
       ((byte)(unaff_w23 << (ulonglong)(uVar20 & 7)) ^ 0xff);
  lVar2 = unaff_x21 + 0xfd10;
  in_stack_00000040 = unaff_x21 + 0xffc8;
  do {
    uVar20 = (uint)lVar21;
    iVar3 = (int)uVar20 >> 3;
    plVar9 = *(longlong **)(lVar2 + lVar21 * 8);
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(unaff_x21 + 0xe94));
    bVar6 = (*(byte *)((longlong)&stack0x00000018 + (longlong)iVar3) >> (ulonglong)(uVar20 & 7) & 1)
            != 0;
    uVar4 = (undefined1)unaff_w23;
    if (plVar9 == (longlong *)0x0) {
      lVar10 = *(longlong *)(unaff_x21 + 0xfd90 + lVar21 * 8);
      if (lVar10 == 0) {
        uVar13 = (ulonglong)*(uint *)(*(longlong *)(unaff_x21 + 0xf6f8) + 0x180);
      }
      else {
        uVar8 = FUN_18009a5d0(lVar10,bVar6);
        uVar13 = (ulonglong)uVar8;
        if (uVar8 != 0xffffffff) {
          in_stack_00000038 = *(ulonglong *)(*(longlong *)(unaff_x21 + 0xfd90 + lVar21 * 8) + 0x40);
          *(ulonglong *)(unaff_x21 + 0xfe10 + lVar21 * 8) = in_stack_00000038;
          uVar8 = *(uint *)(unaff_x22 + 0x3a10);
          if (uVar8 != 0) {
            uVar16 = 0;
            uVar14 = uVar8;
            do {
              uVar17 = uVar14 + uVar16 >> 1;
              uVar19 = *(ulonglong *)(*(longlong *)(unaff_x21 + 0xfa08) + (ulonglong)uVar17 * 0x18);
              uVar5 = uVar17;
              if (uVar19 <= in_stack_00000038) {
                if (in_stack_00000038 <= uVar19) break;
                uVar16 = uVar17 + 1;
                uVar17 = uVar17 + 1;
                uVar5 = uVar14;
              }
              uVar14 = uVar5;
            } while (uVar14 != uVar16);
            if (((uVar17 != uVar8) &&
                (puVar18 = (ulonglong *)
                           (*(longlong *)(unaff_x21 + 0xfa08) + (ulonglong)uVar17 * 0x18),
                *puVar18 == in_stack_00000038)) &&
               (puVar1 = puVar18 + 2, puVar1 != (ulonglong *)0x0)) {
              *(undefined1 *)((longlong)puVar18 + 0x17) = uVar4;
              *(char *)puVar1 = (char)*puVar1 + '\x01';
              goto LAB_180039e10;
            }
          }
          in_stack_00000018 = CONCAT71(0x1000000000000,uVar4);
          FUN_180041b90(unaff_x21 + 64000,&stack0x00000038,&stack0x00000018);
        }
      }
    }
    else {
      bVar15 = *(byte *)((longlong)plVar9 + 0x192);
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(unaff_x21 + 0xffcc));
      if ((((*(byte *)((longlong)&stack0x00000018 + (longlong)iVar3) >> (ulonglong)(uVar20 & 7) & 1)
            != 0) && ((bVar15 & 1) != 0)) &&
         ((*(int *)(unaff_x21 + 0x7b0) == 0 || (*(int *)(unaff_x21 + 0x7b4) == 0)))) {
        bVar15 = bVar15 & 0xfe;
      }
      if (bVar15 == 1) {
        lVar10 = (**(code **)(*plVar9 + 0xf8))();
        lVar22 = *(longlong *)(*(longlong *)(unaff_x21 + unaff_x27) + 0x1508);
        if (((*(longlong *)(lVar22 + 0xb10) != 0) && (lVar10 != 0)) &&
           (iVar7 = FUN_1800f1b78(*(undefined8 *)(lVar22 + 0xb18),lVar10,0,0,
                                  *(longlong *)(lVar22 + 0xb10),lVar22,0,
                                  *(undefined8 *)(lVar22 + 0xb78)),
           *(int *)(*(longlong *)(lVar22 + 0xb10) + 0x30) != 3 && iVar7 != 0)) {
          FUN_1800e7f80(lVar22,lVar10,0,iVar7,0);
        }
        *(undefined1 *)(unaff_x21 + 0x1018b) = uVar4;
        *(byte *)(in_stack_00000040 + iVar3) =
             *(byte *)(in_stack_00000040 + iVar3) | (byte)(unaff_w23 << (ulonglong)(uVar20 & 7));
      }
      plVar9 = *(longlong **)(lVar2 + lVar21 * 8);
      uVar8 = (**(code **)(*plVar9 + 0x118))(plVar9,bVar6,0);
      uVar13 = (ulonglong)uVar8;
      if (uVar8 != 0xffffffff) {
        uVar11 = (**(code **)(**(longlong **)(lVar2 + lVar21 * 8) + 0xf8))();
        *(undefined8 *)(unaff_x21 + 0xfe10 + lVar21 * 8) = uVar11;
        (**(code **)(**(longlong **)(lVar2 + lVar21 * 8) + 0x110))();
        FUN_180038de0();
      }
    }
LAB_180039e10:
    if (uVar20 < 8) {
      *(undefined8 *)(unaff_x21 + 0xfa58 + lVar21 * 8) = *(undefined8 *)(unaff_x24 + 0x78d8);
    }
    lVar10 = *(longlong *)(*(longlong *)(unaff_x21 + unaff_x27) + 0x1930);
    plVar9 = *(longlong **)(*(longlong *)(lVar10 + 0x50) + (uVar13 >> 0x10) * 0x10);
    (**(code **)(*plVar9 + 0x48))(plVar9,&stack0x00000028);
    in_stack_00000028 =
         in_stack_00000028 + (ulonglong)(*(int *)(lVar10 + 0x20) * ((uint)uVar13 & 0xffff));
    *(longlong *)(unaff_x21 + 0xfa98 + lVar21 * 8) = in_stack_00000028;
    uVar20 = (uStack0000000000000010 & 0xaaaaaaaa) >> 1 | (uStack0000000000000010 & 0x55555555) << 1
    ;
    uVar20 = (uVar20 & 0xcccccccc) >> 2 | (uVar20 & 0x33333333) << 2;
    uVar20 = (uVar20 & 0xf0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f) << 4;
    uVar20 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
    lVar21 = LZCOUNT(uVar20 >> 0x10 | uVar20 << 0x10);
    uVar20 = (uint)lVar21;
    if ((unaff_w23 - (uVar20 >> 5) & 0xff) == 0) {
      return 0;
    }
    *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar20 >> 3)) =
         *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar20 >> 3)) &
         ((byte)(unaff_w23 << (ulonglong)(uVar20 & 7)) ^ 0xff);
  } while( true );
}

