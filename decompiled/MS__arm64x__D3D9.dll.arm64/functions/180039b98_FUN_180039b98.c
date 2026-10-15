/*
 * FUN_180039b98 at 180039b98
 * undefined FUN_180039b98(void)
 * Address ranges: 180039b98-180039ea7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180039b98(void)

{
  ulonglong *puVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong unaff_x19;
  longlong unaff_x20;
  longlong unaff_x21;
  longlong unaff_x22;
  ulonglong uVar18;
  int unaff_w23;
  longlong unaff_x24;
  longlong unaff_x25;
  longlong lVar19;
  longlong unaff_x26;
  longlong unaff_x27;
  uint in_stack_00000010;
  undefined8 in_stack_00000018;
  longlong in_stack_00000028;
  ulonglong in_stack_00000038;
  
  do {
    uVar17 = (uint)unaff_x19;
    iVar2 = (int)uVar17 >> 3;
    plVar8 = *(longlong **)(unaff_x20 + (unaff_x19 & 0xffffffff) * 8);
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(unaff_x21 + 0xe94));
    bVar5 = (*(byte *)((longlong)&stack0x00000018 + (longlong)iVar2) >> (ulonglong)(uVar17 & 7) & 1)
            != 0;
    uVar3 = (undefined1)unaff_w23;
    if (plVar8 == (longlong *)0x0) {
      lVar9 = *(longlong *)(unaff_x21 + 0xfd90 + (unaff_x19 & 0xffffffff) * 8);
      if (lVar9 == 0) {
        uVar18 = (ulonglong)*(uint *)(*(longlong *)(unaff_x21 + 0xf6f8) + 0x180);
      }
      else {
        uVar7 = FUN_18009a5d0(lVar9,bVar5);
        uVar18 = (ulonglong)uVar7;
        if (uVar7 != 0xffffffff) {
          in_stack_00000038 =
               *(ulonglong *)
                (*(longlong *)(unaff_x21 + 0xfd90 + (unaff_x19 & 0xffffffff) * 8) + 0x40);
          *(ulonglong *)(unaff_x21 + 0xfe10 + (unaff_x19 & 0xffffffff) * 8) = in_stack_00000038;
          uVar7 = *(uint *)(unaff_x22 + 0x3a10);
          if (uVar7 != 0) {
            uVar13 = 0;
            uVar11 = uVar7;
            do {
              uVar14 = uVar11 + uVar13 >> 1;
              uVar16 = *(ulonglong *)(*(longlong *)(unaff_x21 + 0xfa08) + (ulonglong)uVar14 * 0x18);
              uVar4 = uVar14;
              if (uVar16 <= in_stack_00000038) {
                if (in_stack_00000038 <= uVar16) break;
                uVar13 = uVar14 + 1;
                uVar14 = uVar14 + 1;
                uVar4 = uVar11;
              }
              uVar11 = uVar4;
            } while (uVar11 != uVar13);
            if (((uVar14 != uVar7) &&
                (puVar15 = (ulonglong *)
                           (*(longlong *)(unaff_x21 + 0xfa08) + (ulonglong)uVar14 * 0x18),
                *puVar15 == in_stack_00000038)) &&
               (puVar1 = puVar15 + 2, puVar1 != (ulonglong *)0x0)) {
              *(undefined1 *)((longlong)puVar15 + 0x17) = uVar3;
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
      bVar12 = *(byte *)((longlong)plVar8 + 0x192);
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,*(undefined4 *)(unaff_x21 + 0xffcc));
      if ((((*(byte *)((longlong)&stack0x00000018 + (longlong)iVar2) >> (ulonglong)(uVar17 & 7) & 1)
            != 0) && ((bVar12 & 1) != 0)) &&
         ((*(int *)(unaff_x21 + 0x7b0) == 0 || (*(int *)(unaff_x21 + 0x7b4) == 0)))) {
        bVar12 = bVar12 & 0xfe;
      }
      if (bVar12 == 1) {
        lVar9 = (**(code **)(*plVar8 + 0xf8))();
        lVar19 = *(longlong *)(*(longlong *)(unaff_x21 + unaff_x27) + 0x1508);
        if (((*(longlong *)(lVar19 + 0xb10) != 0) && (lVar9 != 0)) &&
           (iVar6 = FUN_1800f1b78(*(undefined8 *)(lVar19 + 0xb18),lVar9,0,0,
                                  *(longlong *)(lVar19 + 0xb10),lVar19,0,
                                  *(undefined8 *)(lVar19 + 0xb78)),
           *(int *)(*(longlong *)(lVar19 + 0xb10) + 0x30) != 3 && iVar6 != 0)) {
          FUN_1800e7f80(lVar19,lVar9,0,iVar6,0);
        }
        *(undefined1 *)(unaff_x21 + 0x1018b) = uVar3;
        *(byte *)(unaff_x25 + iVar2) =
             *(byte *)(unaff_x25 + iVar2) | (byte)(unaff_w23 << (ulonglong)(uVar17 & 7));
      }
      plVar8 = *(longlong **)(unaff_x20 + (unaff_x19 & 0xffffffff) * 8);
      uVar7 = (**(code **)(*plVar8 + 0x118))(plVar8,bVar5,0);
      uVar18 = (ulonglong)uVar7;
      if (uVar7 != 0xffffffff) {
        uVar10 = (**(code **)(**(longlong **)(unaff_x20 + (unaff_x19 & 0xffffffff) * 8) + 0xf8))();
        *(undefined8 *)(unaff_x21 + 0xfe10 + (unaff_x19 & 0xffffffff) * 8) = uVar10;
        (**(code **)(**(longlong **)(unaff_x20 + (unaff_x19 & 0xffffffff) * 8) + 0x110))();
        FUN_180038de0();
      }
    }
LAB_180039e10:
    if (uVar17 < 8) {
      *(undefined8 *)(unaff_x21 + 0xfa58 + (unaff_x19 & 0xffffffff) * 8) =
           *(undefined8 *)(unaff_x24 + 0x78d8);
    }
    lVar9 = *(longlong *)(*(longlong *)(unaff_x21 + unaff_x27) + 0x1930);
    plVar8 = *(longlong **)(*(longlong *)(lVar9 + 0x50) + (uVar18 >> 0x10) * 0x10);
    (**(code **)(*plVar8 + 0x48))(plVar8,&stack0x00000028);
    in_stack_00000028 =
         in_stack_00000028 + (ulonglong)(*(int *)(lVar9 + 0x20) * ((uint)uVar18 & 0xffff));
    *(longlong *)(unaff_x26 + (unaff_x19 & 0xffffffff) * 8) = in_stack_00000028;
    uVar17 = (in_stack_00000010 & 0xaaaaaaaa) >> 1 | (in_stack_00000010 & 0x55555555) << 1;
    uVar17 = (uVar17 & 0xcccccccc) >> 2 | (uVar17 & 0x33333333) << 2;
    uVar17 = (uVar17 & 0xf0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f) << 4;
    uVar17 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
    unaff_x19 = LZCOUNT(uVar17 >> 0x10 | uVar17 << 0x10);
    uVar17 = (uint)unaff_x19;
    if ((unaff_w23 - (uVar17 >> 5) & 0xff) == 0) {
      return 0;
    }
    *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar17 >> 3)) =
         *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar17 >> 3)) &
         ((byte)(unaff_w23 << (ulonglong)(uVar17 & 7)) ^ 0xff);
  } while( true );
}

