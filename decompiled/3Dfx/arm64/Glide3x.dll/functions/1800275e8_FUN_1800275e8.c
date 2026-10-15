/*
 * FUN_1800275e8 at 1800275e8
 * undefined __cdecl FUN_1800275e8(longlong param_1)
 * Address ranges: 1800275e8-18002770f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800275e8(longlong param_1)

{
  uint uVar1;
  DWORD DVar2;
  longlong lVar3;
  
  FUN_18001d700(param_1,*(LPCVOID *)(param_1 + 0x60));
  lVar3 = *(longlong *)(param_1 + 200);
  if ((*(char *)(lVar3 + 0x14c4) != '\0') &&
     (DVar2 = GetCurrentThreadId(), *(DWORD *)(lVar3 + 0x14b4) != DVar2)) {
    FUN_180038c00(*(longlong *)(param_1 + 200) + 0x12c0);
  }
  FUN_18004c928(*(longlong *)(param_1 + 0xc0),*(longlong **)(param_1 + 0xf8));
  uVar1 = *(uint *)(param_1 + 0x104);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (uVar1 != 0xffffffff) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x1940);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    FUN_18004d518(lVar3,uVar1,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
  }
  uVar1 = *(uint *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  if (uVar1 != 0xffffffff) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x1930);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    FUN_18004d518(lVar3,uVar1,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  }
  FUN_180026a18(param_1,(undefined8 *)(param_1 + 0x140));
  FUN_180026a18(param_1,(undefined8 *)(param_1 + 0x110));
  FUN_180026e48(param_1);
  return;
}

