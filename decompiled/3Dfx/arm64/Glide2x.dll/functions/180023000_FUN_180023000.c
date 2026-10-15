/*
 * FUN_180023000 at 180023000
 * uint __cdecl FUN_180023000(longlong * param_1)
 * Address ranges: 180023000-180023107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180023000(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  LARGE_INTEGER local_30;
  LARGE_INTEGER local_28;
  
  (**(code **)(*param_1 + 0x2a0))();
  lVar9 = param_1[0x630];
  QueryPerformanceCounter(&local_30);
  iVar10 = 0;
  uVar7 = 0;
  do {
    if (local_30.QuadPart <=
        *(longlong *)(lVar9 + 0x48 + (ulonglong)((*(int *)(lVar9 + 0x40) + uVar7) % 7) * 0x10)) {
      iVar10 = iVar10 + 1;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 7);
  QueryPerformanceCounter(&local_28);
  uVar7 = *(uint *)((longlong)param_1 + 0xac);
  uVar2 = *(ulonglong *)(param_1[0x630] + 0x18);
  lVar9 = local_28.QuadPart - *(longlong *)(param_1[0x630] + 0x20);
  if (uVar2 != 0) {
    lVar3 = 0;
    if (uVar2 != 0) {
      lVar3 = lVar9 / (longlong)uVar2;
    }
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = ((lVar9 - lVar3 * uVar2) * (ulonglong)(uVar7 + 1)) / uVar2;
    }
    cVar6 = (**(code **)(*param_1 + 0x2a8))(param_1);
    uVar1 = 0xffff2bf;
    if (cVar6 == '\0') {
      uVar1 = 0xffff03f;
    }
    uVar8 = 0;
    if (uVar4 != uVar7) {
      uVar8 = 0x40;
    }
    return uVar8 | (*(uint *)(param_1[0x630] + 0x128) | iVar10 << 0x12) << 10 | uVar1;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800230a4);
  (*pcVar5)();
}

