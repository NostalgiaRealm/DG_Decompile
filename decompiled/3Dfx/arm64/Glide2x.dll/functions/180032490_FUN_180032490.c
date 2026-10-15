/*
 * FUN_180032490 at 180032490
 * undefined __cdecl FUN_180032490(longlong param_1)
 * Address ranges: 180032490-18003261b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180032490(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)(param_1 + 200);
  if ((*(char *)(lVar9 + 0x14c4) != '\0') &&
     (DVar4 = GetCurrentThreadId(), *(DWORD *)(lVar9 + 0x14b4) != DVar4)) {
    FUN_180043140(*(longlong *)(param_1 + 200) + 0x12c0);
  }
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
  plVar6 = *(longlong **)(param_1 + 0xe0);
  if (iVar5 == 1) {
    FUN_180048d98(*(longlong *)(param_1 + 0xc0),plVar6);
  }
  else {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  FUN_180048d98(*(longlong *)(param_1 + 0xc0),*(longlong **)(param_1 + 0xd8));
  uVar3 = *(uint *)(param_1 + 0xec);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (uVar3 != 0xffffffff) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x1938);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
    uVar2 = uVar3 & 0xffff;
    uVar1 = uVar2 + 2;
    if (uVar2 < uVar1) {
      lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x50) + (ulonglong)(uVar3 >> 0x10) * 0x10 + 8);
      do {
        uVar7 = -1L << ((ulonglong)uVar2 & 0x3f);
        uVar3 = (uVar2 & 0xffffffc0) + 0x40;
        if (uVar1 < uVar3) {
          uVar7 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar1 & 0x3f) & uVar7;
        }
        *(ulonglong *)(lVar8 + (ulonglong)(uVar2 >> 6) * 8) =
             *(ulonglong *)(lVar8 + (ulonglong)(uVar2 >> 6) * 8) & (uVar7 ^ 0xffffffffffffffff);
        uVar2 = uVar3;
      } while (uVar3 < uVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
  }
  uVar3 = *(uint *)(param_1 + 0xe8);
  if (uVar3 != 0xffffffff) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x1930);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
    FUN_180049988(lVar9,uVar3,2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
  }
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  return;
}

