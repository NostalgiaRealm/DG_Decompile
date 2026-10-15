/*
 * FUN_18005dc40 at 18005dc40
 * undefined __cdecl FUN_18005dc40(undefined8 param_1, longlong param_2, byte * param_3, uint param_4, uint param_5)
 * Address ranges: 18005dc40-18005df3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005dc40(undefined8 param_1,longlong param_2,byte *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  
  uVar1 = 0xffffffff;
  uVar9 = 0;
  uVar5 = (ulonglong)-(uint)((*param_3 & 1) != 0);
LAB_18005dc70:
  do {
    uVar4 = (uint)uVar5;
    if (uVar4 != 0xffffffff && param_4 << 3 <= uVar4 || uVar1 != 0xffffffff) {
      return;
    }
    if (uVar4 != 0xffffffff) {
      uVar9 = -1L << (uVar5 & 0x3f);
      uVar7 = uVar4 & 0xffffffc0;
      puVar3 = (ulonglong *)(param_3 + (uVar5 >> 6) * 8);
      while (puVar3 < param_3 + param_4) {
        uVar9 = (*puVar3 & uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                (*puVar3 & uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar6 = (uint)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
        if ((1 - (uVar6 >> 6) & 0xff) != 0) {
          uVar7 = uVar6 + uVar7;
          break;
        }
        uVar7 = uVar7 + 0x40;
        uVar9 = 0xffffffffffffffff;
        puVar3 = puVar3 + 1;
      }
      uVar9 = (ulonglong)uVar7;
      if (param_5 + 0x3f >> 6 <= uVar7 - uVar4) {
        uVar4 = uVar4 << 6;
        uVar2 = (ulonglong)uVar4;
        if ((*(byte *)(param_2 + uVar5 * 8) & 1) != 0) {
          uVar4 = 0xffffffff;
        }
        uVar5 = (ulonglong)uVar4;
LAB_18005dcf8:
        uVar4 = (uint)uVar5;
        if ((uVar4 != 0xffffffff) && (uVar9 << 6 <= uVar5)) goto LAB_18005ded8;
        puVar3 = (ulonglong *)(param_2 + uVar9 * 8);
        if (uVar4 == 0xffffffff) {
          uVar8 = -1L << (uVar2 & 0x3f);
          uVar4 = (uint)uVar2 & 0xffffffc0;
          puVar10 = (ulonglong *)(param_2 + (uVar2 >> 6) * 8);
          while (uVar5 = (ulonglong)uVar4, puVar10 < puVar3) {
            uVar8 = uVar8 & (*puVar10 ^ 0xffffffffffffffff);
            uVar5 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
            uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
            uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
            uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
            uVar7 = (uint)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
            if ((1 - (uVar7 >> 6) & 0xff) != 0) {
              uVar5 = (ulonglong)(uVar7 + uVar4);
              break;
            }
            uVar4 = uVar4 + 0x40;
            uVar8 = 0xffffffffffffffff;
            puVar10 = puVar10 + 1;
          }
          goto LAB_18005dcf8;
        }
        uVar8 = -1L << (uVar5 & 0x3f);
        uVar2 = (ulonglong)(uVar4 & 0xffffffc0);
        puVar10 = (ulonglong *)(param_2 + (uVar5 >> 6) * 8);
        while (puVar10 < puVar3) {
          uVar8 = (*puVar10 & uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                  (*puVar10 & uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar7 = (uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
          if ((1 - (uVar7 >> 6) & 0xff) != 0) {
            uVar2 = (ulonglong)(uVar7 + (int)uVar2);
            break;
          }
          uVar7 = (int)uVar2 + 0x40;
          uVar2 = (ulonglong)uVar7;
          if ((param_5 != 0) && (param_5 < uVar7 - uVar4)) break;
          uVar8 = 0xffffffffffffffff;
          puVar10 = puVar10 + 1;
        }
        if ((int)uVar2 - uVar4 < param_5) {
          uVar5 = 0xffffffff;
          goto LAB_18005dcf8;
        }
        uVar1 = uVar4 + param_5;
        if (uVar4 < uVar1) {
          uVar2 = uVar5;
          do {
            uVar7 = ((uint)uVar2 & 0xffffffc0) + 0x40;
            uVar8 = -1L << (uVar2 & 0x3f);
            if (uVar1 < uVar7) {
              uVar8 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar1 & 0x3f) & uVar8;
            }
            *(ulonglong *)(param_2 + (uVar2 >> 6) * 8) =
                 *(ulonglong *)(param_2 + (uVar2 >> 6) * 8) | uVar8;
            uVar2 = (ulonglong)uVar7;
          } while (uVar7 < uVar1);
        }
        uVar5 = uVar5 + 0x3f >> 6;
        if ((uint)uVar5 < uVar1 >> 6) {
          do {
            uVar7 = ((uint)uVar5 & 0xffffffc0) + 0x40;
            uVar2 = -1L << (uVar5 & 0x3f);
            if (uVar1 >> 6 < uVar7) {
              uVar2 = 0xffffffffffffffffU >> (0x40 - ((ulonglong)(uVar1 >> 6) & 0x3f) & 0x3f) &
                      uVar2;
            }
            *(ulonglong *)(param_3 + (uVar5 >> 6) * 8) =
                 *(ulonglong *)(param_3 + (uVar5 >> 6) * 8) | uVar2;
            uVar5 = (ulonglong)uVar7;
          } while (uVar7 < uVar1 >> 6);
        }
        uVar2 = 1L << ((ulonglong)(uVar4 >> 6) & 0x3f);
        uVar5 = *(ulonglong *)(param_3 + (ulonglong)(uVar4 >> 0xc) * 8) &
                (uVar2 ^ 0xffffffffffffffff);
        if (*(longlong *)(param_2 + (ulonglong)(uVar4 >> 6) * 8) == -1) {
          uVar5 = uVar2 | *(ulonglong *)(param_3 + (ulonglong)(uVar4 >> 0xc) * 8);
        }
        *(ulonglong *)(param_3 + (ulonglong)(uVar4 >> 0xc) * 8) = uVar5;
        uVar5 = (ulonglong)(uVar1 >> 6) - 1;
        if ((uVar1 & 0x3f) != 0) {
          uVar5 = (ulonglong)(uVar1 >> 6);
        }
        uVar8 = uVar5 >> 6 & 0x3ffffff;
        uVar11 = 1L << (uVar5 & 0x3f);
        uVar2 = *(ulonglong *)(param_3 + uVar8 * 8) & (uVar11 ^ 0xffffffffffffffff);
        if (*(longlong *)(param_2 + (uVar5 & 0xffffffff) * 8) == -1) {
          uVar2 = uVar11 | *(ulonglong *)(param_3 + uVar8 * 8);
        }
        *(ulonglong *)(param_3 + uVar8 * 8) = uVar2;
        uVar1 = uVar4;
      }
LAB_18005ded8:
      uVar5 = 0xffffffff;
      goto LAB_18005dc70;
    }
    uVar2 = -1L << (uVar9 & 0x3f);
    uVar4 = (uint)uVar9 & 0xffffffc0;
    puVar3 = (ulonglong *)(param_3 + (uVar9 >> 6) * 8);
    while (uVar5 = (ulonglong)uVar4, puVar3 < param_3 + param_4) {
      uVar2 = uVar2 & (*puVar3 ^ 0xffffffffffffffff);
      uVar5 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar7 = (uint)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
      if ((1 - (uVar7 >> 6) & 0xff) != 0) {
        uVar5 = (ulonglong)(uVar7 + uVar4);
        break;
      }
      uVar4 = uVar4 + 0x40;
      uVar2 = 0xffffffffffffffff;
      puVar3 = puVar3 + 1;
    }
  } while( true );
}

