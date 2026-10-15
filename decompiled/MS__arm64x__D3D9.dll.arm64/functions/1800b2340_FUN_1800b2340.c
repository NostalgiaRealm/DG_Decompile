/*
 * FUN_1800b2340 at 1800b2340
 * undefined FUN_1800b2340(void)
 * Address ranges: 1800b2340-1800b26e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800b2340(longlong param_1,ulonglong param_2,longlong param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  bool bVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  code *pcVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  longlong lVar15;
  uint uVar16;
  
  uVar8 = param_2 & 0xffffffff;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar7 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar7 = true;
    iVar9 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar9 == 0) {
      FUN_180003398();
    }
  }
  plVar11 = (longlong *)0x0;
  if (param_3 != 0) {
    plVar11 = (longlong *)(param_3 + -0x90);
  }
  uVar16 = (uint)param_2;
  uVar14 = 0x8876086c;
  if (0xf < uVar16) goto LAB_1800b26a4;
  if (plVar11 != (longlong *)0x0) {
    piVar3 = (int *)&DAT_0000005c;
    if (param_3 != 0) {
      piVar3 = (int *)(param_3 + -0x34);
    }
    if (*piVar3 == 3) goto LAB_1800b26a4;
  }
  if (*(char *)(param_1 + -0x642c) == '\0') {
    if (plVar11 == (longlong *)0x0) {
      iVar9 = 0;
    }
    else {
      piVar3 = (int *)&DAT_00000058;
      if (param_3 != 0) {
        piVar3 = (int *)(param_3 + -0x38);
      }
      iVar9 = *piVar3;
    }
    lVar15 = param_1 + (param_2 & 0xffffffff) * 8;
    if (((*(longlong **)(lVar15 + -0x170) != plVar11) ||
        (lVar1 = param_1 + (param_2 & 0xffffffff) * 4, *(int *)(lVar1 + -0xf0) != param_5)) ||
       (*(int *)(lVar1 + -0xb0) != param_4)) {
      uVar6 = 1 << (ulonglong)(uVar16 & 0x1f);
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        *(uint *)(param_1 + -0x30) = uVar6 | *(uint *)(param_1 + -0x30);
      }
      if (*(longlong *)(lVar15 + -0x170) != 0) {
        *(undefined4 *)(*(longlong *)(lVar15 + -0x170) + 0x84) = 0xffffffff;
        (**(code **)(**(longlong **)(lVar15 + -0x170) + 0x18))();
      }
      lVar1 = param_1 + uVar8 * 4;
      *(longlong **)(lVar15 + -0x170) = plVar11;
      *(int *)(lVar1 + -0xf0) = param_5;
      *(int *)(lVar1 + -0xb0) = param_4;
      if (plVar11 == (longlong *)0x0) {
        *(uint *)(param_1 + -0x70) = *(uint *)(param_1 + -0x70) & (uVar6 ^ 0xffffffff);
        uVar16 = *(uint *)(param_1 + -0x5c) & (uVar6 ^ 0xffffffff);
      }
      else {
        puVar4 = (uint *)&DAT_00000084;
        if (param_3 != 0) {
          puVar4 = (uint *)(param_3 + -0xc);
        }
        *puVar4 = uVar16;
        *(uint *)(param_1 + -0x70) = uVar6 | *(uint *)(param_1 + -0x70);
        plVar10 = (longlong *)&DAT_00000018;
        if (param_3 != 0) {
          plVar10 = (longlong *)(param_3 + -0x78);
        }
        uVar16 = *(uint *)(param_1 + -0x5c) & (uVar6 ^ 0xffffffff);
        if (*plVar10 != 0) {
          uVar16 = *(uint *)(param_1 + -0x5c) | uVar6;
        }
      }
      *(uint *)(param_1 + -0x5c) = uVar16;
      uVar16 = *(uint *)(param_1 + -0x68) & (uVar6 ^ 0xffffffff);
      if (iVar9 != 0) {
        uVar16 = *(uint *)(param_1 + -0x68) | uVar6;
      }
      *(uint *)(param_1 + -0x68) = uVar16;
      if (plVar11 == (longlong *)0x0) {
LAB_1800b25e4:
        *(uint *)(param_1 + -100) = *(uint *)(param_1 + -100) & (uVar6 ^ 0xffffffff);
        if (plVar11 != (longlong *)0x0) goto LAB_1800b25f4;
LAB_1800b261c:
        *(uint *)(param_1 + -0x60) = *(uint *)(param_1 + -0x60) & (uVar6 ^ 0xffffffff);
        if (plVar11 != (longlong *)0x0) goto LAB_1800b262c;
        plVar11 = *(longlong **)(param_1 + -0x6810);
        param_4 = 0;
        lVar15 = 0;
        pcVar12 = *(code **)(*plVar11 + 0x160);
      }
      else {
        puVar4 = (uint *)&DAT_00000050;
        if (param_3 != 0) {
          puVar4 = (uint *)(param_3 + -0x40);
        }
        if ((*puVar4 >> 4 & 1) == 0) goto LAB_1800b25e4;
        *(uint *)(param_1 + -100) = *(uint *)(param_1 + -100) | uVar6;
LAB_1800b25f4:
        plVar10 = (longlong *)&DAT_00000060;
        if (param_3 != 0) {
          plVar10 = (longlong *)(param_3 + -0x30);
        }
        if (*plVar10 == 0) goto LAB_1800b261c;
        *(uint *)(param_1 + -0x60) = uVar6 | *(uint *)(param_1 + -0x60);
LAB_1800b262c:
        puVar5 = &DAT_00000089;
        if (param_3 != 0) {
          puVar5 = (undefined1 *)(param_3 + -7);
        }
        plVar11 = (longlong *)&DAT_00000060;
        if (param_3 != 0) {
          plVar11 = (longlong *)(param_3 + -0x30);
        }
        lVar15 = *plVar11;
        *puVar5 = 1;
        if (lVar15 == 0) {
          plVar11 = (longlong *)&DAT_00000068;
          if (param_3 != 0) {
            plVar11 = (longlong *)(param_3 + -0x28);
          }
        }
        lVar15 = *plVar11;
        plVar11 = *(longlong **)(param_1 + -0x6810);
        pcVar12 = *(code **)(*plVar11 + 0x160);
      }
      (*pcVar12)(plVar11,param_2 & 0xffffffff,lVar15,param_4,param_5);
    }
  }
  else {
    lVar15 = *(longlong *)
              (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    lVar1 = lVar15 + uVar8 * 8;
    plVar10 = *(longlong **)(lVar1 + 0xab60);
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x18))();
    }
    lVar2 = lVar15 + uVar8 * 4;
    *(longlong **)(lVar1 + 0xab60) = plVar11;
    uVar13 = uVar8 >> 3 & 7;
    *(int *)(lVar2 + 44000) = param_4;
    *(int *)(lVar2 + 0xac20) = param_5;
    lVar15 = lVar15 + ((uVar8 >> 6) + 0x159e) * 8;
    *(byte *)(lVar15 + uVar13) = *(byte *)(lVar15 + uVar13) | (byte)(1 << (param_2 & 7));
  }
  uVar14 = 0;
LAB_1800b26a4:
  if (bVar7) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar14;
}

