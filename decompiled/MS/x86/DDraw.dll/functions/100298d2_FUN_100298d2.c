/*
 * FUN_100298d2 at 100298d2
 * undefined __fastcall FUN_100298d2(void * param_1)
 * Address ranges: 100298d2-10029aae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x10029a4d) */

void __fastcall FUN_100298d2(void *param_1)

{
  uint *puVar1;
  int iVar2;
  POINT Point;
  bool bVar3;
  char cVar4;
  BOOL BVar5;
  int iVar6;
  HWND pHVar7;
  uint uVar8;
  longlong lVar9;
  tagPOINT local_20;
  LARGE_INTEGER local_18;
  LARGE_INTEGER local_10;
  
  BVar5 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar5 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  iVar6 = *(int *)((int)param_1 + 0x11c) * 0x228;
  if ((*(int *)(&DAT_1006c48c + iVar6) != 0) && (*(int *)(&DAT_1006c490 + iVar6) != 0)) {
    BVar5 = TryEnterCriticalSection(DAT_1006c254);
    if (BVar5 == 0) {
      FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
    }
    FUN_100036fd(*(int *)(&DAT_1006c488 + *(int *)((int)param_1 + 0x11c) * 0x228));
    LeaveCriticalSection(DAT_1006c254);
    goto LAB_10029a9c;
  }
  iVar2 = *(int *)((int)param_1 + 0xf4);
  if (((iVar2 == 0) || ((*(uint *)(iVar2 + 0x1b8) & 0x8000) == 0)) ||
     ((&DAT_1006c49a)[iVar6] == '\0')) goto LAB_10029a9c;
  iVar6 = *(int *)(iVar2 + 4);
  bVar3 = false;
  if ((*(byte *)(iVar6 + 200) & 0x60) == 0) {
    if (((*(int *)((int)param_1 + 0xfc) != 0) && (BVar5 = GetCursorPos(&local_20), BVar5 != 0)) &&
       ((cVar4 = FUN_10025316(param_1), cVar4 == '\0' &&
        (pHVar7 = GetWindow(*(HWND *)((int)param_1 + 0xfc),5), pHVar7 != (HWND)0x0)))) {
      Point.y = local_20.y;
      Point.x = local_20.x;
      pHVar7 = WindowFromPoint(Point);
      do {
        if ((pHVar7 == (HWND)0x0) ||
           (uVar8 = GetWindowLongW(pHVar7,-0x10), (uVar8 & 0x40000000) == 0)) goto LAB_10029a58;
        pHVar7 = GetParent(pHVar7);
      } while (pHVar7 != *(HWND *)((int)param_1 + 0xfc));
LAB_10029a53:
      bVar3 = true;
    }
  }
  else {
    QueryPerformanceCounter(&local_18);
    uVar8 = *(uint *)(iVar2 + 0x18);
    local_20.x = local_18.s.LowPart - *(uint *)(iVar2 + 0x18);
    iVar2 = *(int *)(iVar2 + 0x1c);
    QueryPerformanceFrequency(&local_10);
    lVar9 = __alldiv(local_10.s.LowPart,local_10.s.HighPart,0x3c,0);
    if (lVar9 < CONCAT44((local_18.s.HighPart - iVar2) - (uint)(local_18.s.LowPart < uVar8),
                         local_20.x)) goto LAB_10029a53;
  }
LAB_10029a58:
  cVar4 = FUN_10006367(*(void **)(*(int *)((int)param_1 + 0xf4) + 4));
  if (((cVar4 != '\0') || (bVar3)) &&
     (cVar4 = (**(code **)(**(int **)((int)param_1 + 0x118) + 0x5c))
                        (*(undefined4 *)((int)param_1 + 0xfc)), cVar4 != '\0')) {
    FUN_10033299(*(void **)((int)param_1 + 0xf4),0,0,0);
    puVar1 = (uint *)(iVar6 + 200);
    *puVar1 = *puVar1 & 0xffffffdf;
  }
LAB_10029a9c:
  LeaveCriticalSection(DAT_1006c254);
  return;
}

