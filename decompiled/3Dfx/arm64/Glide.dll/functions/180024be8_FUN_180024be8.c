/*
 * FUN_180024be8 at 180024be8
 * undefined __cdecl FUN_180024be8(longlong param_1, longlong param_2)
 * Address ranges: 180024be8-180024cdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180024be8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  LARGE_INTEGER local_20 [2];
  
  lVar12 = *(longlong *)(param_1 + 0x3180);
  QueryPerformanceCounter(local_20);
  uVar7 = 0;
  do {
    lVar5 = (ulonglong)((*(int *)(lVar12 + 0x40) + uVar7 + 1) % 7) * 0x10;
    lVar11 = *(longlong *)(lVar12 + 0x48 + lVar5);
    if ((lVar11 != 0 && lVar11 <= local_20[0].QuadPart) &&
       (plVar1 = (longlong *)(lVar12 + 0xb8), *plVar1 < lVar11)) {
      uVar9 = 6;
      do {
        uVar4 = uVar9 - 1;
        lVar11 = plVar1[(ulonglong)uVar4 * 2];
        (plVar1 + (ulonglong)uVar9 * 2)[1] = (plVar1 + (ulonglong)uVar4 * 2)[1];
        plVar1[(ulonglong)uVar9 * 2] = lVar11;
        uVar9 = uVar4;
      } while (uVar4 != 0);
      *plVar1 = *(longlong *)(lVar12 + 0x48 + lVar5);
      *(undefined4 *)(lVar12 + 0xc0) = *(undefined4 *)(lVar12 + 0x50 + lVar5);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 7);
  lVar5 = *(longlong *)(lVar12 + 0x18);
  puVar2 = (undefined4 *)(lVar12 + 0xc0);
  if (lVar5 != 0) {
    uVar3 = 0;
    if (lVar5 != 0) {
      uVar3 = (undefined4)((local_20[0].QuadPart - *(longlong *)(lVar12 + 0x20)) / lVar5);
    }
    *puVar2 = uVar3;
    uVar8 = 1;
    do {
      uVar10 = (ulonglong)((int)uVar8 - 1);
      lVar12 = uVar8 * 4;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      *(undefined4 *)(param_2 + uVar10 * 4) = puVar2[uVar10 * 4] - puVar2[lVar12];
    } while (uVar7 < 7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180024ca0);
  (*pcVar6)();
}

