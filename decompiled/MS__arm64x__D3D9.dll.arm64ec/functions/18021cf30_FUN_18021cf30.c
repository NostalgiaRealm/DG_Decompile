/*
 * FUN_18021cf30 at 18021cf30
 * undefined FUN_18021cf30(void)
 * Address ranges: 18021cf30-18021d233
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18021cf30(undefined8 param_1,longlong param_2,byte *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  
  uVar1 = 0xffffffff;
  uVar9 = 0;
  uVar4 = (ulonglong)-(uint)((*param_3 & 1) != 0);
LAB_18021cf64:
  do {
    uVar3 = (uint)uVar4;
    if (uVar3 != 0xffffffff && param_4 << 3 <= uVar3 || uVar1 != 0xffffffff) {
      return;
    }
    if (uVar3 != 0xffffffff) {
      uVar9 = -1L << (uVar4 & 0x3f);
      uVar6 = uVar3 & 0xffffffc0;
      puVar8 = (ulonglong *)(param_3 + (uVar4 >> 6) * 8);
      while (puVar8 < param_3 + param_4) {
        uVar9 = (*puVar8 & uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                (*puVar8 & uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar5 = (uint)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
        if ((1 - (uVar5 >> 6) & 0xff) != 0) {
          uVar6 = uVar5 + uVar6;
          break;
        }
        uVar6 = uVar6 + 0x40;
        uVar9 = 0xffffffffffffffff;
        puVar8 = puVar8 + 1;
      }
      uVar9 = (ulonglong)uVar6;
      if (param_5 + 0x3f >> 6 <= uVar6 - uVar3) {
        uVar3 = uVar3 << 6;
        uVar2 = (ulonglong)uVar3;
        if ((*(byte *)(param_2 + uVar4 * 8) & 1) != 0) {
          uVar3 = 0xffffffff;
        }
        uVar4 = (ulonglong)uVar3;
LAB_18021cfec:
        uVar3 = (uint)uVar4;
        if ((uVar3 != 0xffffffff) && (uVar9 << 6 <= uVar4)) goto LAB_18021d1cc;
        puVar8 = (ulonglong *)(param_2 + uVar9 * 8);
        if (uVar3 == 0xffffffff) {
          uVar7 = -1L << (uVar2 & 0x3f);
          uVar3 = (uint)uVar2 & 0xffffffc0;
          puVar10 = (ulonglong *)(param_2 + (uVar2 >> 6) * 8);
          while (uVar4 = (ulonglong)uVar3, puVar10 < puVar8) {
            uVar7 = uVar7 & (*puVar10 ^ 0xffffffffffffffff);
            uVar4 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
            uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
            uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
            uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
            uVar6 = (uint)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
            if ((1 - (uVar6 >> 6) & 0xff) != 0) {
              uVar4 = (ulonglong)(uVar6 + uVar3);
              break;
            }
            uVar3 = uVar3 + 0x40;
            uVar7 = 0xffffffffffffffff;
            puVar10 = puVar10 + 1;
          }
          goto LAB_18021cfec;
        }
        uVar7 = -1L << (uVar4 & 0x3f);
        uVar2 = (ulonglong)(uVar3 & 0xffffffc0);
        puVar10 = (ulonglong *)(param_2 + (uVar4 >> 6) * 8);
        while (puVar10 < puVar8) {
          uVar7 = (*puVar10 & uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                  (*puVar10 & uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar6 = (uint)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
          if ((1 - (uVar6 >> 6) & 0xff) != 0) {
            uVar2 = (ulonglong)(uVar6 + (int)uVar2);
            break;
          }
          uVar6 = (int)uVar2 + 0x40;
          uVar2 = (ulonglong)uVar6;
          if ((param_5 != 0) && (param_5 < uVar6 - uVar3)) break;
          uVar7 = 0xffffffffffffffff;
          puVar10 = puVar10 + 1;
        }
        if ((int)uVar2 - uVar3 < param_5) {
          uVar4 = 0xffffffff;
          goto LAB_18021cfec;
        }
        uVar1 = uVar3 + param_5;
        if (uVar3 < uVar1) {
          uVar2 = uVar4;
          do {
            uVar7 = -1L << (uVar2 & 0x3f);
            uVar6 = ((uint)uVar2 & 0xffffffc0) + 0x40;
            if (uVar1 < uVar6) {
              uVar7 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar1 & 0x3f) & uVar7;
            }
            *(ulonglong *)(param_2 + (uVar2 >> 6) * 8) =
                 *(ulonglong *)(param_2 + (uVar2 >> 6) * 8) | uVar7;
            uVar2 = (ulonglong)uVar6;
          } while (uVar6 < uVar1);
        }
        uVar4 = uVar4 + 0x3f >> 6;
        if ((uint)uVar4 < uVar1 >> 6) {
          do {
            uVar6 = ((uint)uVar4 & 0xffffffc0) + 0x40;
            uVar2 = -1L << (uVar4 & 0x3f);
            if (uVar1 >> 6 < uVar6) {
              uVar2 = 0xffffffffffffffffU >> (0x40 - ((ulonglong)(uVar1 >> 6) & 0x3f) & 0x3f) &
                      uVar2;
            }
            *(ulonglong *)(param_3 + (uVar4 >> 6) * 8) =
                 *(ulonglong *)(param_3 + (uVar4 >> 6) * 8) | uVar2;
            uVar4 = (ulonglong)uVar6;
          } while (uVar6 < uVar1 >> 6);
        }
        uVar2 = 1L << ((ulonglong)(uVar3 >> 6) & 0x3f);
        uVar4 = *(ulonglong *)(param_3 + (ulonglong)(uVar3 >> 0xc) * 8) &
                (uVar2 ^ 0xffffffffffffffff);
        if (*(longlong *)(param_2 + (ulonglong)(uVar3 >> 6) * 8) == -1) {
          uVar4 = uVar2 | *(ulonglong *)(param_3 + (ulonglong)(uVar3 >> 0xc) * 8);
        }
        *(ulonglong *)(param_3 + (ulonglong)(uVar3 >> 0xc) * 8) = uVar4;
        uVar4 = (ulonglong)(uVar1 >> 6) - 1;
        if ((uVar1 & 0x3f) != 0) {
          uVar4 = (ulonglong)(uVar1 >> 6);
        }
        uVar7 = uVar4 >> 6 & 0x3ffffff;
        uVar11 = 1L << (uVar4 & 0x3f);
        uVar2 = *(ulonglong *)(param_3 + uVar7 * 8) & (uVar11 ^ 0xffffffffffffffff);
        if (*(longlong *)(param_2 + (uVar4 & 0xffffffff) * 8) == -1) {
          uVar2 = uVar11 | *(ulonglong *)(param_3 + uVar7 * 8);
        }
        *(ulonglong *)(param_3 + uVar7 * 8) = uVar2;
        uVar1 = uVar3;
      }
LAB_18021d1cc:
      uVar4 = 0xffffffff;
      goto LAB_18021cf64;
    }
    uVar2 = -1L << (uVar9 & 0x3f);
    uVar3 = (uint)uVar9 & 0xffffffc0;
    puVar8 = (ulonglong *)(param_3 + (uVar9 >> 6) * 8);
    while (uVar4 = (ulonglong)uVar3, puVar8 < param_3 + param_4) {
      uVar2 = uVar2 & (*puVar8 ^ 0xffffffffffffffff);
      uVar4 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar6 = (uint)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
      if ((1 - (uVar6 >> 6) & 0xff) != 0) {
        uVar4 = (ulonglong)(uVar6 + uVar3);
        break;
      }
      uVar3 = uVar3 + 0x40;
      uVar2 = 0xffffffffffffffff;
      puVar8 = puVar8 + 1;
    }
  } while( true );
}

