/*
 * FUN_18014674c at 18014674c
 * undefined FUN_18014674c(void)
 * Address ranges: 18014674c-180146eab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18014674c(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  uint uVar11;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  
  FUN_180221ec0(*(longlong *)(param_2 + 0x76e0) + 0x12c0);
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(param_1,0);
  FUN_180207560(*(longlong *)(*(longlong *)(param_2 + 0x76e0) + 0x1508) + 8,0);
  FUN_180104270(*(longlong *)(param_2 + 0x76d8) + 0x618,0,param_1);
  uVar2 = *(uint *)(param_1 + 0xf8c8);
  if (uVar2 != 0xffffffff) {
    lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x76e0) + 0x1938);
    thunk_FUN_1802236f8(lVar14 + 0x28);
    uVar8 = uVar2 & 0xffff;
    uVar1 = uVar8 + 1;
    if (uVar8 < uVar1) {
      lVar10 = *(longlong *)(*(longlong *)(lVar14 + 0x50) + (ulonglong)(uVar2 >> 0x10) * 0x10 + 8);
      do {
        uVar7 = -1L << ((ulonglong)uVar8 & 0x3f);
        uVar2 = (uVar8 & 0xffffffc0) + 0x40;
        if (uVar1 < uVar2) {
          uVar7 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar1 & 0x3f) & uVar7;
        }
        *(ulonglong *)(lVar10 + (ulonglong)(uVar8 >> 6) * 8) =
             *(ulonglong *)(lVar10 + (ulonglong)(uVar8 >> 6) * 8) & (uVar7 ^ 0xffffffffffffffff);
        uVar8 = uVar2;
      } while (uVar2 < uVar1);
    }
    thunk_FUN_18022370c(lVar14 + 0x28);
  }
  FUN_1801602e8(param_1 + 0xf808);
  FUN_1801517e0(param_1);
  *(undefined4 *)(param_1 + 0xf784) = 0;
  FUN_180163198(param_1 + 0xf790);
  FUN_18015f998(param_1 + 0xf748);
  lVar14 = param_1 + 0xfa18;
  uVar7 = 0;
  do {
    uVar2 = *(uint *)(lVar14 + uVar7 * 4);
    if (uVar2 != 0xffffffff) {
      lVar10 = *(longlong *)(param_2 + 0x76e0);
      uVar1 = *(uint *)(lVar10 + 0x1a40);
      if (uVar1 != 0) {
        uVar8 = 0;
        uVar13 = uVar1;
        do {
          uVar11 = uVar13 + uVar8 >> 1;
          uVar12 = *(ulonglong *)(*(longlong *)(lVar10 + 0x1a38) + (ulonglong)uVar11 * 0x18);
          uVar4 = uVar11;
          if (uVar12 <= uVar2) {
            if (uVar2 <= uVar12) break;
            uVar8 = uVar11 + 1;
            uVar11 = uVar11 + 1;
            uVar4 = uVar13;
          }
          uVar13 = uVar4;
        } while (uVar13 != uVar8);
        if (((uVar11 != uVar1) &&
            (puVar9 = (ulonglong *)(*(longlong *)(lVar10 + 0x1a38) + (ulonglong)uVar11 * 0x18),
            *puVar9 == (ulonglong)uVar2)) && (puVar9 = puVar9 + 2, puVar9 != (ulonglong *)0x0)) {
          *(undefined1 *)(*puVar9 + 0x20) = 0;
        }
      }
    }
    iVar5 = (int)uVar7;
    uVar2 = *(uint *)(lVar14 + (ulonglong)(iVar5 + 1) * 4);
    if (uVar2 != 0xffffffff) {
      lVar10 = *(longlong *)(param_2 + 0x76e0);
      uVar1 = *(uint *)(lVar10 + 0x1a40);
      if (uVar1 != 0) {
        uVar8 = 0;
        uVar13 = uVar1;
        do {
          uVar11 = uVar13 + uVar8 >> 1;
          uVar7 = *(ulonglong *)(*(longlong *)(lVar10 + 0x1a38) + (ulonglong)uVar11 * 0x18);
          uVar4 = uVar11;
          if (uVar7 <= uVar2) {
            if (uVar2 <= uVar7) break;
            uVar8 = uVar11 + 1;
            uVar11 = uVar11 + 1;
            uVar4 = uVar13;
          }
          uVar13 = uVar4;
        } while (uVar13 != uVar8);
        if (((uVar11 != uVar1) &&
            (puVar9 = (ulonglong *)(*(longlong *)(lVar10 + 0x1a38) + (ulonglong)uVar11 * 0x18),
            *puVar9 == (ulonglong)uVar2)) && (puVar9 = puVar9 + 2, puVar9 != (ulonglong *)0x0)) {
          *(undefined1 *)(*puVar9 + 0x20) = 0;
        }
      }
    }
    uVar2 = *(uint *)(lVar14 + (ulonglong)(iVar5 + 2) * 4);
    if (uVar2 != 0xffffffff) {
      lVar10 = *(longlong *)(param_2 + 0x76e0);
      uVar1 = *(uint *)(lVar10 + 0x1a40);
      if (uVar1 != 0) {
        uVar8 = 0;
        uVar13 = uVar1;
        do {
          uVar11 = uVar13 + uVar8 >> 1;
          uVar7 = *(ulonglong *)(*(longlong *)(lVar10 + 0x1a38) + (ulonglong)uVar11 * 0x18);
          uVar4 = uVar11;
          if (uVar7 <= uVar2) {
            if (uVar2 <= uVar7) break;
            uVar8 = uVar11 + 1;
            uVar11 = uVar11 + 1;
            uVar4 = uVar13;
          }
          uVar13 = uVar4;
        } while (uVar13 != uVar8);
        if (((uVar11 != uVar1) &&
            (puVar9 = (ulonglong *)(*(longlong *)(lVar10 + 0x1a38) + (ulonglong)uVar11 * 0x18),
            *puVar9 == (ulonglong)uVar2)) && (puVar9 = puVar9 + 2, puVar9 != (ulonglong *)0x0)) {
          *(undefined1 *)(*puVar9 + 0x20) = 0;
        }
      }
    }
    uVar2 = *(uint *)(lVar14 + (ulonglong)(iVar5 + 3) * 4);
    if (uVar2 != 0xffffffff) {
      lVar10 = *(longlong *)(param_2 + 0x76e0);
      uVar1 = *(uint *)(lVar10 + 0x1a40);
      if (uVar1 != 0) {
        uVar8 = 0;
        uVar13 = uVar1;
        do {
          uVar11 = uVar13 + uVar8 >> 1;
          uVar7 = *(ulonglong *)(*(longlong *)(lVar10 + 0x1a38) + (ulonglong)uVar11 * 0x18);
          uVar4 = uVar11;
          if (uVar7 <= uVar2) {
            if (uVar2 <= uVar7) break;
            uVar8 = uVar11 + 1;
            uVar11 = uVar11 + 1;
            uVar4 = uVar13;
          }
          uVar13 = uVar4;
        } while (uVar13 != uVar8);
        if (((uVar11 != uVar1) &&
            (puVar9 = (ulonglong *)(*(longlong *)(lVar10 + 0x1a38) + (ulonglong)uVar11 * 0x18),
            *puVar9 == (ulonglong)uVar2)) && (puVar9 = puVar9 + 2, puVar9 != (ulonglong *)0x0)) {
          *(undefined1 *)(*puVar9 + 0x20) = 0;
        }
      }
    }
    uVar7 = (ulonglong)(iVar5 + 4U);
  } while (iVar5 + 4U < 0x10);
  uVar2 = *(uint *)(param_1 + 0xfbc0);
  if (uVar2 != 0xffffffff) {
    lVar14 = *(longlong *)(param_2 + 0x76e0);
    uVar1 = *(uint *)(lVar14 + 0x1a40);
    if (uVar1 != 0) {
      uVar8 = 0;
      uVar13 = uVar1;
      do {
        uVar11 = uVar13 + uVar8 >> 1;
        uVar7 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar11 * 0x18);
        uVar4 = uVar11;
        if (uVar7 <= uVar2) {
          if (uVar2 <= uVar7) break;
          uVar8 = uVar11 + 1;
          uVar11 = uVar11 + 1;
          uVar4 = uVar13;
        }
        uVar13 = uVar4;
      } while (uVar13 != uVar8);
      if (((uVar11 != uVar1) &&
          (puVar9 = (ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar11 * 0x18),
          *puVar9 == (ulonglong)uVar2)) && (puVar9 = puVar9 + 2, puVar9 != (ulonglong *)0x0)) {
        *(undefined1 *)(*puVar9 + 0x20) = 0;
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0xfbc4);
  if (uVar2 != 0xffffffff) {
    lVar14 = *(longlong *)(param_2 + 0x76e0);
    uVar1 = *(uint *)(lVar14 + 0x1a40);
    if (uVar1 != 0) {
      uVar8 = 0;
      uVar13 = uVar1;
      do {
        uVar11 = uVar13 + uVar8 >> 1;
        uVar7 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar11 * 0x18);
        uVar4 = uVar11;
        if (uVar7 <= uVar2) {
          if (uVar2 <= uVar7) break;
          uVar8 = uVar11 + 1;
          uVar11 = uVar11 + 1;
          uVar4 = uVar13;
        }
        uVar13 = uVar4;
      } while (uVar13 != uVar8);
      if (((uVar11 != uVar1) &&
          (puVar9 = (ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar11 * 0x18),
          *puVar9 == (ulonglong)uVar2)) && (puVar9 = puVar9 + 2, puVar9 != (ulonglong *)0x0)) {
        *(undefined1 *)(*puVar9 + 0x20) = 0;
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0xfbc8);
  if (uVar2 != 0xffffffff) {
    lVar14 = *(longlong *)(param_2 + 0x76e0);
    uVar1 = *(uint *)(lVar14 + 0x1a40);
    if (uVar1 != 0) {
      uVar8 = 0;
      uVar13 = uVar1;
      do {
        uVar11 = uVar13 + uVar8 >> 1;
        uVar7 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar11 * 0x18);
        uVar4 = uVar11;
        if (uVar7 <= uVar2) {
          if (uVar2 <= uVar7) break;
          uVar8 = uVar11 + 1;
          uVar11 = uVar11 + 1;
          uVar4 = uVar13;
        }
        uVar13 = uVar4;
      } while (uVar13 != uVar8);
      if (((uVar11 != uVar1) &&
          (puVar9 = (ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar11 * 0x18),
          *puVar9 == (ulonglong)uVar2)) && (puVar9 = puVar9 + 2, puVar9 != (ulonglong *)0x0)) {
        *(undefined1 *)(*puVar9 + 0x20) = 0;
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0xfbcc);
  if (uVar2 != 0xffffffff) {
    lVar14 = *(longlong *)(param_2 + 0x76e0);
    uVar1 = *(uint *)(lVar14 + 0x1a40);
    if (uVar1 != 0) {
      uVar8 = 0;
      uVar13 = uVar1;
      do {
        uVar11 = uVar13 + uVar8 >> 1;
        uVar7 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar11 * 0x18);
        uVar4 = uVar11;
        if (uVar7 <= uVar2) {
          if (uVar2 <= uVar7) break;
          uVar8 = uVar11 + 1;
          uVar11 = uVar11 + 1;
          uVar4 = uVar13;
        }
        uVar13 = uVar4;
      } while (uVar13 != uVar8);
      if (((uVar11 != uVar1) &&
          (puVar9 = (ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar11 * 0x18),
          *puVar9 == (ulonglong)uVar2)) && (puVar9 = puVar9 + 2, puVar9 != (ulonglong *)0x0)) {
        *(undefined1 *)(*puVar9 + 0x20) = 0;
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0xfbd0);
  if (uVar2 != 0xffffffff) {
    lVar14 = *(longlong *)(param_2 + 0x76e0);
    uVar1 = *(uint *)(lVar14 + 0x1a40);
    if (uVar1 != 0) {
      uVar8 = 0;
      uVar13 = uVar1;
      do {
        uVar11 = uVar13 + uVar8 >> 1;
        uVar7 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar11 * 0x18);
        uVar4 = uVar11;
        if (uVar7 <= uVar2) {
          if (uVar2 <= uVar7) break;
          uVar8 = uVar11 + 1;
          uVar11 = uVar11 + 1;
          uVar4 = uVar13;
        }
        uVar13 = uVar4;
      } while (uVar13 != uVar8);
      if (((uVar11 != uVar1) &&
          (puVar9 = (ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar11 * 0x18),
          *puVar9 == (ulonglong)uVar2)) && (puVar9 = puVar9 + 2, puVar9 != (ulonglong *)0x0)) {
        *(undefined1 *)(*puVar9 + 0x20) = 0;
      }
    }
  }
  lVar14 = *(longlong *)(param_2 + 0x7730);
  if (lVar14 != 0) {
    FUN_18020dc08(*(undefined8 *)(*(longlong *)(param_2 + 0x76d8) + 0x1b500),lVar14,1);
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_00)(lVar14);
  }
  *(undefined8 *)(param_2 + 0x7730) = 0;
  if (*(longlong *)(param_2 + 0x7738) != 0) {
    FUN_180146480(*(longlong *)(param_2 + 0x7738),1);
  }
  *(undefined8 *)(param_2 + 0x7738) = 0;
  if (*(longlong *)(param_2 + 0x7728) != 0) {
    FUN_180146480(*(longlong *)(param_2 + 0x7728),1);
  }
  *(undefined8 *)(param_2 + 0x7728) = 0;
  if (*(longlong *)(param_2 + 0x7710) != 0) {
    FUN_18020d9f8(*(undefined8 *)(*(longlong *)(param_2 + 0x76d8) + 0x1b500),
                  *(longlong *)(param_2 + 0x7710),0,1);
  }
  if (*(longlong *)(param_2 + 0x7718) != 0) {
    FUN_18020d9f8(*(undefined8 *)(*(longlong *)(param_2 + 0x76d8) + 0x1b500),
                  *(longlong *)(param_2 + 0x7718),0,1);
  }
  if (*(longlong *)(param_2 + 0x7710) != 0) {
    FUN_180146480(*(longlong *)(param_2 + 0x7710),1);
  }
  *(undefined8 *)(param_2 + 0x7710) = 0;
  if (*(longlong *)(param_2 + 0x7718) != 0) {
    FUN_180146480(*(longlong *)(param_2 + 0x7718),1);
  }
  *(undefined8 *)(param_2 + 0x7718) = 0;
  if (*(longlong *)(param_2 + 0x7708) != 0) {
    FUN_180146600();
  }
  *(undefined8 *)(param_2 + 0x7708) = 0;
  if (*(longlong *)(param_2 + 0x7700) != 0) {
    FUN_180146600();
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 0x7700) = 0;
  FUN_1802229d8(uVar6);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  lVar14 = *(longlong *)(param_2 + 0x76d8);
  if ((lVar14 != 0) && (iVar5 = FUN_1801042d0(lVar14 + 8), iVar5 == 0)) {
    if (*(short *)(lVar14 + 0xc) != 0) {
      uVar6 = thunk_FUN_1802239b4(0);
      thunk_FUN_180224008(*(undefined2 *)(lVar14 + 0xc),uVar6);
      if (*(longlong *)(lVar14 + 0x10) != 0) {
        thunk_FUN_1802236bc();
        *(undefined8 *)(lVar14 + 0x10) = 0;
      }
    }
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_01)(lVar14);
  }
  *(undefined8 *)(param_2 + 0x76d8) = 0;
  return;
}

