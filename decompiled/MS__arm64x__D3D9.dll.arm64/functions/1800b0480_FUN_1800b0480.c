/*
 * FUN_1800b0480 at 1800b0480
 * undefined FUN_1800b0480(void)
 * Address ranges: 1800b0480-1800b0a53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b0480(longlong param_1,uint param_2,longlong *param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  
  uVar4 = (ulonglong)param_2;
  if ((param_2 - 0x10 < 0xf0 || 0x103 < param_2) && (param_2 != 0x104)) {
    return 0x8876086c;
  }
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar5 = true;
    iVar6 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar6 == 0) {
      FUN_180003398();
    }
  }
  iVar6 = 1;
  plVar15 = (longlong *)0x0;
  plVar14 = (longlong *)0x0;
  if (param_3 != (longlong *)0x0) {
    iVar7 = (**(code **)(*param_3 + 0x50))(param_3);
    if (iVar7 == 3) {
LAB_1800b054c:
      plVar15 = param_3 + -0x13;
    }
    else if (iVar7 == 4) {
      plVar14 = param_3 + -0x23;
    }
    else if (iVar7 == 5) goto LAB_1800b054c;
  }
  uVar9 = param_2 - 0x100;
  uVar12 = (ulonglong)uVar9;
  if (uVar9 < 5) {
    if (plVar15 == (longlong *)0x0) {
      plVar16 = (longlong *)0x0;
      if (plVar14 != (longlong *)0x0) {
        iVar6 = (int)plVar14[0x20];
        lVar10 = plVar14[3];
        plVar16 = plVar14;
        goto LAB_1800b058c;
      }
    }
    else {
      iVar6 = *(int *)((longlong)plVar15 + 0x7c);
      lVar10 = plVar15[3];
      plVar16 = plVar15;
LAB_1800b058c:
      lVar17 = 0;
      if (lVar10 != 0) {
        lVar17 = lVar10 + -0x6838;
      }
      if ((((iVar6 == 3) || ((iVar6 == 2 && (*(int *)(param_1 + -0x59d0) != 3)))) || (lVar17 != 0))
         && (lVar17 != param_1 + -0x6838)) goto LAB_1800b0a10;
    }
    if (*(char *)(param_1 + -0x642c) == '\0') {
      lVar10 = param_1 + uVar12 * 8;
      if (plVar16 == *(longlong **)(lVar10 + -0x5480)) goto LAB_1800b0a10;
      if (plVar15 == (longlong *)0x0) {
        if (plVar14 != (longlong *)0x0) {
          lVar17 = plVar14[0x1c];
          iVar6 = (int)plVar14[0x1f];
          goto LAB_1800b0668;
        }
        bVar1 = false;
        (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x1a8))
                  (*(longlong **)(param_1 + -0x6810),uVar9,0,0,0);
        plVar14 = (longlong *)0x0;
      }
      else {
        lVar17 = plVar15[0xb];
        iVar6 = *(int *)((longlong)plVar15 + 0x74);
        plVar14 = plVar15;
LAB_1800b0668:
        bVar1 = iVar6 - 0x28U < 2;
        (**(code **)(*plVar14 + 8))(plVar14);
        *(uint *)(plVar14 + 7) = 1 << (ulonglong)(param_2 - 0xf0 & 0x1f) | *(uint *)(plVar14 + 7);
        (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x1a8))
                  (*(longlong **)(param_1 + -0x6810),uVar9,0,lVar17,0);
      }
      lVar17 = *(longlong *)(lVar10 + -0x5480);
      if (lVar17 != 0) {
        *(uint *)(lVar17 + 0x38) =
             *(uint *)(lVar17 + 0x38) & (1 << (ulonglong)(param_2 - 0xf0 & 0x1f) ^ 0xffffffffU);
        (**(code **)(**(longlong **)(lVar10 + -0x5480) + 0x10))();
      }
      *(longlong **)(lVar10 + -0x5480) = plVar14;
      if ((plVar14 == (longlong *)0x0) || (*(char *)((longlong)plVar14 + 0x3e) == '\0')) {
        iVar6 = 0;
      }
      else {
        iVar6 = 1;
      }
      uVar8 = 1 << (ulonglong)(uVar9 & 0x1f);
      *(uint *)(param_1 + -0x3c) =
           iVar6 << (ulonglong)(uVar9 & 0x1f) | *(uint *)(param_1 + -0x3c) & (uVar8 ^ 0xffffffff);
      if (bVar1) {
        uVar9 = *(uint *)(param_1 + -0x38) | uVar8;
        uVar8 = *(uint *)(param_1 + -0x34) | uVar8;
      }
      else {
        uVar9 = *(uint *)(param_1 + -0x38) & (uVar8 ^ 0xffffffff);
        uVar8 = *(uint *)(param_1 + -0x34) & (uVar8 ^ 0xffffffff);
      }
      *(uint *)(param_1 + -0x38) = uVar9;
      *(uint *)(param_1 + -0x34) = uVar8;
      goto LAB_1800b0a10;
    }
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 8))(plVar16);
    }
    lVar10 = *(longlong *)
              (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    lVar17 = lVar10 + uVar12 * 8;
    plVar14 = *(longlong **)(lVar17 + 0x4fc0);
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))();
    }
    *(longlong **)(lVar17 + 0x4fc0) = plVar16;
    lVar10 = lVar10 + ((ulonglong)(uVar9 >> 6) + 0x15a7) * 8;
    uVar4 = uVar12;
    param_2 = uVar9;
  }
  else {
    if (plVar15 == (longlong *)0x0) {
      if (plVar14 != (longlong *)0x0) {
        lVar17 = plVar14[0x1c];
        iVar7 = (int)plVar14[0x1f];
        iVar11 = (int)plVar14[0x20];
        bVar13 = 0;
        lVar10 = 0;
        if (plVar14[3] != 0) {
          lVar10 = plVar14[3] + -0x6838;
        }
        goto LAB_1800b07c8;
      }
      plVar14 = (longlong *)0x0;
      lVar17 = 0;
      iVar7 = 0;
      bVar13 = 0;
    }
    else {
      lVar17 = plVar15[0xb];
      iVar11 = *(int *)((longlong)plVar15 + 0x7c);
      lVar10 = 0;
      if (plVar15[3] != 0) {
        lVar10 = plVar15[3] + -0x6838;
      }
      iVar7 = *(int *)((longlong)plVar15 + 0x74);
      bVar13 = (byte)(int)plVar15[0xe] & 1;
      plVar14 = plVar15;
LAB_1800b07c8:
      if (((iVar11 == 3) || (((iVar11 == 2 && (*(int *)(param_1 + -0x59d0) != 3)) || (lVar10 != 0)))
          ) && (lVar10 != param_1 + -0x6838)) goto LAB_1800b0a10;
    }
    if (*(char *)(param_1 + -0x642c) == '\0') {
      lVar10 = param_1 + uVar4 * 8;
      if (plVar14 != *(longlong **)(lVar10 + -0x5500)) {
        bVar1 = plVar14 == (longlong *)0x0;
        if (bVar1) {
          (**(code **)(**(longlong **)(param_1 + -0x6810) + 0xd8))
                    (*(longlong **)(param_1 + -0x6810),param_2,0,0,0,0,0,0);
          uVar9 = 1 << (ulonglong)(param_2 & 0x1f);
        }
        else {
          (**(code **)(*plVar14 + 8))(plVar14);
          uVar9 = 1 << (ulonglong)(param_2 & 0x1f);
          *(uint *)(plVar14 + 7) = *(uint *)(plVar14 + 7) | uVar9;
          (**(code **)(**(longlong **)(param_1 + -0x6810) + 0xd8))
                    (*(longlong **)(param_1 + -0x6810),param_2,0,lVar17,0,0,0,0);
        }
        bVar2 = iVar7 - 0x28U < 2;
        lVar17 = *(longlong *)(lVar10 + -0x5500);
        if (lVar17 != 0) {
          *(uint *)(lVar17 + 0x38) = *(uint *)(lVar17 + 0x38) & (uVar9 ^ 0xffffffff);
          (**(code **)(**(longlong **)(lVar10 + -0x5500) + 0x10))();
        }
        *(longlong **)(param_1 + (ulonglong)param_2 * 8 + -0x5500) = plVar14;
        lVar10 = param_1 + (ulonglong)param_2;
        *(uint *)(param_1 + -0x5b24) =
             (uint)((plVar14 != (longlong *)0x0) != (bool)*(char *)(lVar10 + -0x5b78)) <<
             (ulonglong)(param_2 & 0x1f) | *(uint *)(param_1 + -0x5b24);
        *(bool *)(lVar10 + -0x5b78) = plVar14 != (longlong *)0x0;
        uVar8 = *(uint *)(param_1 + -0x44) & (uVar9 ^ 0xffffffff);
        if (!bVar1 && bVar2) {
          uVar8 = *(uint *)(param_1 + -0x44) | uVar9;
        }
        uVar3 = *(uint *)(param_1 + -0x40) & (uVar9 ^ 0xffffffff);
        if (!bVar1 && bVar2) {
          uVar3 = uVar9 | *(uint *)(param_1 + -0x40);
        }
        *(uint *)(param_1 + -0x44) = uVar8;
        *(uint *)(param_1 + -0x40) = uVar3;
        *(byte *)(param_1 + -0x5b28) = *(byte *)(param_1 + -0x5b28) | bVar13;
        *(undefined1 *)(lVar10 + -0x5b68) = 0;
        lVar10 = *(longlong *)(param_1 + (ulonglong)param_2 * 8 + -0x5500);
        if ((lVar10 == 0) || (*(char *)(lVar10 + 0x3e) == '\0')) {
          iVar6 = 0;
        }
        *(uint *)(param_1 + -0x5b20) =
             iVar6 << (ulonglong)(param_2 & 0x1f) |
             *(uint *)(param_1 + -0x5b20) & (uVar9 ^ 0xffffffff);
      }
      goto LAB_1800b0a10;
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 8))(plVar14);
    }
    lVar10 = *(longlong *)
              (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    lVar17 = lVar10 + uVar4 * 8;
    plVar15 = *(longlong **)(lVar17 + 0x5310);
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    *(longlong **)(lVar17 + 0x5310) = plVar14;
    lVar10 = lVar10 + ((ulonglong)(param_2 >> 6) + 0x159b) * 8;
  }
  uVar12 = (ulonglong)(param_2 >> 3) & 7;
  *(byte *)(lVar10 + uVar12) = *(byte *)(lVar10 + uVar12) | (byte)(1 << (uVar4 & 7));
LAB_1800b0a10:
  if (bVar5) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return 0;
}

