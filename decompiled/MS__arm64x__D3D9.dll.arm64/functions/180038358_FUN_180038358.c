/*
 * FUN_180038358 at 180038358
 * undefined FUN_180038358(void)
 * Address ranges: 180038358-180038af3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038358(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  longlong lVar14;
  int iStack0000000000000010;
  
  lVar14 = *(longlong *)(param_2 + 0x76e0);
  iStack0000000000000010 = *(int *)(lVar14 + 0x14c0);
  while (0 < iStack0000000000000010) {
    (*__imp_USER32_dll_PeekMessageA)(&stack0x00000018,0,0,0,0x400000);
    (**(code **)(lVar14 + 0x1318))(lVar14 + 0x14c0,&stack0x00000010,4,5);
    iStack0000000000000010 = *(int *)(lVar14 + 0x14c0);
  }
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  FUN_1800e8548(*(longlong *)(*(longlong *)(param_2 + 0x76e0) + 0x1508) + 8,0);
  FUN_180001550(*(longlong *)(param_2 + 0x76d8) + 0x618,0,param_1);
  uVar2 = *(uint *)(param_1 + 0x1f19);
  if (uVar2 != 0xffffffff) {
    lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x76e0) + 0x1938);
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar14 + 0x28);
    uVar11 = uVar2 & 0xffff;
    uVar1 = uVar11 + 1;
    if (uVar11 < uVar1) {
      lVar7 = *(longlong *)(*(longlong *)(lVar14 + 0x50) + (ulonglong)(uVar2 >> 0x10) * 0x10 + 8);
      do {
        uVar6 = -1L << ((ulonglong)uVar11 & 0x3f);
        uVar2 = (uVar11 & 0xffffffc0) + 0x40;
        if (uVar1 < uVar2) {
          uVar6 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar1 & 0x3f) & uVar6;
        }
        *(ulonglong *)(lVar7 + (ulonglong)(uVar11 >> 6) * 8) =
             *(ulonglong *)(lVar7 + (ulonglong)(uVar11 >> 6) * 8) & (uVar6 ^ 0xffffffffffffffff);
        uVar11 = uVar2;
      } while (uVar2 < uVar1);
    }
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar14 + 0x28);
  }
  FUN_180050638(param_1 + 0x1f01);
  FUN_180042958(param_1);
  *(undefined4 *)((longlong)param_1 + 0xf784) = 0;
  FUN_180053368(param_1 + 0x1ef2);
  FUN_18004fcb0(param_1 + 0x1ee9);
  uVar6 = 0;
  do {
    uVar2 = *(uint *)((longlong)param_1 + uVar6 * 4 + 0xfa18);
    if (uVar2 != 0xffffffff) {
      lVar14 = *(longlong *)(param_2 + 0x76e0);
      uVar1 = *(uint *)(lVar14 + 0x1a40);
      if (uVar1 != 0) {
        uVar11 = 0;
        uVar10 = uVar1;
        do {
          uVar8 = uVar10 + uVar11 >> 1;
          uVar9 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18);
          uVar3 = uVar8;
          if (uVar9 <= uVar2) {
            if (uVar2 <= uVar9) break;
            uVar11 = uVar8 + 1;
            uVar8 = uVar8 + 1;
            uVar3 = uVar10;
          }
          uVar10 = uVar3;
        } while (uVar10 != uVar11);
        if (((uVar8 != uVar1) &&
            (puVar12 = (ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18),
            *puVar12 == (ulonglong)uVar2)) && (puVar12 = puVar12 + 2, puVar12 != (ulonglong *)0x0))
        {
          *(undefined1 *)(*puVar12 + 0x20) = 0;
        }
      }
    }
    iVar4 = (int)uVar6;
    uVar2 = *(uint *)((longlong)param_1 + (ulonglong)(iVar4 + 1) * 4 + 0xfa18);
    if (uVar2 != 0xffffffff) {
      lVar14 = *(longlong *)(param_2 + 0x76e0);
      uVar1 = *(uint *)(lVar14 + 0x1a40);
      if (uVar1 != 0) {
        uVar11 = 0;
        uVar10 = uVar1;
        do {
          uVar8 = uVar10 + uVar11 >> 1;
          uVar6 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18);
          uVar3 = uVar8;
          if (uVar6 <= uVar2) {
            if (uVar2 <= uVar6) break;
            uVar11 = uVar8 + 1;
            uVar8 = uVar8 + 1;
            uVar3 = uVar10;
          }
          uVar10 = uVar3;
        } while (uVar10 != uVar11);
        if (((uVar8 != uVar1) &&
            (puVar12 = (ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18),
            *puVar12 == (ulonglong)uVar2)) && (puVar12 = puVar12 + 2, puVar12 != (ulonglong *)0x0))
        {
          *(undefined1 *)(*puVar12 + 0x20) = 0;
        }
      }
    }
    uVar2 = *(uint *)((longlong)param_1 + (ulonglong)(iVar4 + 2) * 4 + 0xfa18);
    if (uVar2 != 0xffffffff) {
      lVar14 = *(longlong *)(param_2 + 0x76e0);
      uVar1 = *(uint *)(lVar14 + 0x1a40);
      if (uVar1 != 0) {
        uVar11 = 0;
        uVar10 = uVar1;
        do {
          uVar8 = uVar10 + uVar11 >> 1;
          uVar6 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18);
          uVar3 = uVar8;
          if (uVar6 <= uVar2) {
            if (uVar2 <= uVar6) break;
            uVar11 = uVar8 + 1;
            uVar8 = uVar8 + 1;
            uVar3 = uVar10;
          }
          uVar10 = uVar3;
        } while (uVar10 != uVar11);
        if (((uVar8 != uVar1) &&
            (puVar12 = (ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18),
            *puVar12 == (ulonglong)uVar2)) && (puVar12 = puVar12 + 2, puVar12 != (ulonglong *)0x0))
        {
          *(undefined1 *)(*puVar12 + 0x20) = 0;
        }
      }
    }
    uVar2 = *(uint *)((longlong)param_1 + (ulonglong)(iVar4 + 3) * 4 + 0xfa18);
    if (uVar2 != 0xffffffff) {
      lVar14 = *(longlong *)(param_2 + 0x76e0);
      uVar1 = *(uint *)(lVar14 + 0x1a40);
      if (uVar1 != 0) {
        uVar11 = 0;
        uVar10 = uVar1;
        do {
          uVar8 = uVar10 + uVar11 >> 1;
          uVar6 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18);
          uVar3 = uVar8;
          if (uVar6 <= uVar2) {
            if (uVar2 <= uVar6) break;
            uVar11 = uVar8 + 1;
            uVar8 = uVar8 + 1;
            uVar3 = uVar10;
          }
          uVar10 = uVar3;
        } while (uVar10 != uVar11);
        if (((uVar8 != uVar1) &&
            (puVar12 = (ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18),
            *puVar12 == (ulonglong)uVar2)) && (puVar12 = puVar12 + 2, puVar12 != (ulonglong *)0x0))
        {
          *(undefined1 *)(*puVar12 + 0x20) = 0;
        }
      }
    }
    uVar6 = (ulonglong)(iVar4 + 4U);
  } while (iVar4 + 4U < 0x10);
  uVar2 = *(uint *)(param_1 + 0x1f78);
  if (uVar2 != 0xffffffff) {
    lVar14 = *(longlong *)(param_2 + 0x76e0);
    uVar1 = *(uint *)(lVar14 + 0x1a40);
    if (uVar1 != 0) {
      uVar11 = 0;
      uVar10 = uVar1;
      do {
        uVar8 = uVar10 + uVar11 >> 1;
        uVar6 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18);
        uVar3 = uVar8;
        if (uVar6 <= uVar2) {
          if (uVar2 <= uVar6) break;
          uVar11 = uVar8 + 1;
          uVar8 = uVar8 + 1;
          uVar3 = uVar10;
        }
        uVar10 = uVar3;
      } while (uVar10 != uVar11);
      if (((uVar8 != uVar1) &&
          (puVar12 = (ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18),
          *puVar12 == (ulonglong)uVar2)) && (puVar12 = puVar12 + 2, puVar12 != (ulonglong *)0x0)) {
        *(undefined1 *)(*puVar12 + 0x20) = 0;
      }
    }
  }
  uVar2 = *(uint *)((longlong)param_1 + 0xfbc4);
  if (uVar2 != 0xffffffff) {
    lVar14 = *(longlong *)(param_2 + 0x76e0);
    uVar1 = *(uint *)(lVar14 + 0x1a40);
    if (uVar1 != 0) {
      uVar11 = 0;
      uVar10 = uVar1;
      do {
        uVar8 = uVar10 + uVar11 >> 1;
        uVar6 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18);
        uVar3 = uVar8;
        if (uVar6 <= uVar2) {
          if (uVar2 <= uVar6) break;
          uVar11 = uVar8 + 1;
          uVar8 = uVar8 + 1;
          uVar3 = uVar10;
        }
        uVar10 = uVar3;
      } while (uVar10 != uVar11);
      if (((uVar8 != uVar1) &&
          (puVar12 = (ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18),
          *puVar12 == (ulonglong)uVar2)) && (puVar12 = puVar12 + 2, puVar12 != (ulonglong *)0x0)) {
        *(undefined1 *)(*puVar12 + 0x20) = 0;
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x1f79);
  if (uVar2 != 0xffffffff) {
    lVar14 = *(longlong *)(param_2 + 0x76e0);
    uVar1 = *(uint *)(lVar14 + 0x1a40);
    if (uVar1 != 0) {
      uVar11 = 0;
      uVar10 = uVar1;
      do {
        uVar8 = uVar10 + uVar11 >> 1;
        uVar6 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18);
        uVar3 = uVar8;
        if (uVar6 <= uVar2) {
          if (uVar2 <= uVar6) break;
          uVar11 = uVar8 + 1;
          uVar8 = uVar8 + 1;
          uVar3 = uVar10;
        }
        uVar10 = uVar3;
      } while (uVar10 != uVar11);
      if (((uVar8 != uVar1) &&
          (puVar12 = (ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18),
          *puVar12 == (ulonglong)uVar2)) && (puVar12 = puVar12 + 2, puVar12 != (ulonglong *)0x0)) {
        *(undefined1 *)(*puVar12 + 0x20) = 0;
      }
    }
  }
  uVar2 = *(uint *)((longlong)param_1 + 0xfbcc);
  if (uVar2 != 0xffffffff) {
    lVar14 = *(longlong *)(param_2 + 0x76e0);
    uVar1 = *(uint *)(lVar14 + 0x1a40);
    if (uVar1 != 0) {
      uVar11 = 0;
      uVar10 = uVar1;
      do {
        uVar8 = uVar10 + uVar11 >> 1;
        uVar6 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18);
        uVar3 = uVar8;
        if (uVar6 <= uVar2) {
          if (uVar2 <= uVar6) break;
          uVar11 = uVar8 + 1;
          uVar8 = uVar8 + 1;
          uVar3 = uVar10;
        }
        uVar10 = uVar3;
      } while (uVar10 != uVar11);
      if (((uVar8 != uVar1) &&
          (puVar12 = (ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18),
          *puVar12 == (ulonglong)uVar2)) && (puVar12 = puVar12 + 2, puVar12 != (ulonglong *)0x0)) {
        *(undefined1 *)(*puVar12 + 0x20) = 0;
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x1f7a);
  if (uVar2 != 0xffffffff) {
    lVar14 = *(longlong *)(param_2 + 0x76e0);
    uVar1 = *(uint *)(lVar14 + 0x1a40);
    if (uVar1 != 0) {
      uVar11 = 0;
      uVar10 = uVar1;
      do {
        uVar8 = uVar10 + uVar11 >> 1;
        uVar6 = *(ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18);
        uVar3 = uVar8;
        if (uVar6 <= uVar2) {
          if (uVar2 <= uVar6) break;
          uVar11 = uVar8 + 1;
          uVar8 = uVar8 + 1;
          uVar3 = uVar10;
        }
        uVar10 = uVar3;
      } while (uVar10 != uVar11);
      if (((uVar8 != uVar1) &&
          (puVar12 = (ulonglong *)(*(longlong *)(lVar14 + 0x1a38) + (ulonglong)uVar8 * 0x18),
          *puVar12 == (ulonglong)uVar2)) && (puVar12 = puVar12 + 2, puVar12 != (ulonglong *)0x0)) {
        *(undefined1 *)(*puVar12 + 0x20) = 0;
      }
    }
  }
  plVar13 = *(longlong **)(param_2 + 0x7730);
  if (plVar13 != (longlong *)0x0) {
    FUN_1800f1570(*(undefined8 *)(*(longlong *)(param_2 + 0x76d8) + 0x1b500),plVar13,1);
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  *(undefined8 *)(param_2 + 0x7730) = 0;
  if (*(longlong *)(param_2 + 0x7738) != 0) {
    FUN_1800380e0(*(longlong *)(param_2 + 0x7738),1);
  }
  *(undefined8 *)(param_2 + 0x7738) = 0;
  if (*(longlong *)(param_2 + 0x7728) != 0) {
    FUN_1800380e0(*(longlong *)(param_2 + 0x7728),1);
  }
  *(undefined8 *)(param_2 + 0x7728) = 0;
  if (*(longlong *)(param_2 + 0x7710) != 0) {
    FUN_1800f1380(*(undefined8 *)(*(longlong *)(param_2 + 0x76d8) + 0x1b500),
                  *(longlong *)(param_2 + 0x7710),0,1);
  }
  if (*(longlong *)(param_2 + 0x7718) != 0) {
    FUN_1800f1380(*(undefined8 *)(*(longlong *)(param_2 + 0x76d8) + 0x1b500),
                  *(longlong *)(param_2 + 0x7718),0,1);
  }
  if (*(longlong *)(param_2 + 0x7710) != 0) {
    FUN_1800380e0(*(longlong *)(param_2 + 0x7710),1);
  }
  *(undefined8 *)(param_2 + 0x7710) = 0;
  if (*(longlong *)(param_2 + 0x7718) != 0) {
    FUN_1800380e0(*(longlong *)(param_2 + 0x7718),1);
  }
  *(undefined8 *)(param_2 + 0x7718) = 0;
  if (*(longlong *)(param_2 + 0x7708) != 0) {
    FUN_180038230();
  }
  *(undefined8 *)(param_2 + 0x7708) = 0;
  if (*(longlong *)(param_2 + 0x7700) != 0) {
    FUN_180038230();
  }
  lVar14 = param_1[5];
  *(undefined8 *)(param_2 + 0x7700) = 0;
  thunk_FUN_180102fc0(lVar14);
  param_1[5] = 0;
  thunk_FUN_180102fc0(param_1[4]);
  param_1[4] = 0;
  plVar13 = *(longlong **)(param_2 + 0x76d8);
  if ((plVar13 != (longlong *)0x0) && (iVar4 = FUN_180001590(plVar13 + 1), iVar4 == 0)) {
    if (*(short *)((longlong)plVar13 + 0xc) != 0) {
      uVar5 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
      (*__imp_USER32_dll_UnregisterClassW)(*(undefined2 *)((longlong)plVar13 + 0xc),uVar5);
      if (plVar13[2] != 0) {
        (*__imp_KERNEL32_dll_FreeLibrary)();
        plVar13[2] = 0;
      }
    }
    (**(code **)(*plVar13 + 0x88))(plVar13);
  }
  *(undefined8 *)(param_2 + 0x76d8) = 0;
  return;
}

