/*
 * FUN_180033a80 at 180033a80
 * undefined __cdecl FUN_180033a80(longlong param_1)
 * Address ranges: 180033a80-180033ba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180033a80(longlong param_1)

{
  uint uVar1;
  DWORD DVar2;
  longlong lVar3;
  
  FUN_18002aa58(param_1,*(LPCVOID *)(param_1 + 0x60));
  lVar3 = *(longlong *)(param_1 + 200);
  if ((*(char *)(lVar3 + 0x14c4) != '\0') &&
     (DVar2 = GetCurrentThreadId(), *(DWORD *)(lVar3 + 0x14b4) != DVar2)) {
    FUN_180043f90(*(longlong *)(param_1 + 200) + 0x12c0);
  }
  FUN_180049be8(*(longlong *)(param_1 + 0xc0),*(longlong **)(param_1 + 0xf8));
  uVar1 = *(uint *)(param_1 + 0x104);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (uVar1 != 0xffffffff) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x1940);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    FUN_18004a7d8(lVar3,uVar1,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
  }
  uVar1 = *(uint *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  if (uVar1 != 0xffffffff) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x1930);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    FUN_18004a7d8(lVar3,uVar1,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  }
  FUN_180032eb0(param_1,(undefined8 *)(param_1 + 0x140));
  FUN_180032eb0(param_1,(undefined8 *)(param_1 + 0x110));
  FUN_1800332e0(param_1);
  return;
}

