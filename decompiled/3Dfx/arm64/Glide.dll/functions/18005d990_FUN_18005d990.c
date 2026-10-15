/*
 * FUN_18005d990 at 18005d990
 * undefined __cdecl FUN_18005d990(longlong param_1, longlong param_2)
 * Address ranges: 18005d990-18005da83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005d990(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  lVar5 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  if (*(int *)(param_2 + 0x28) != 0) {
    do {
      plVar2 = *(longlong **)(param_2 + 0xda0 + uVar4 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_180049be8(param_1,plVar2);
        *(undefined8 *)(param_2 + 0xda0 + uVar4 * 8) = 0;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 0x28));
  }
  uVar1 = *(uint *)(param_2 + 0xdb0);
  if (uVar1 != 0xffffffff) {
    lVar3 = *(longlong *)(lVar5 + 0x2230);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    FUN_18004a7d8(lVar3,uVar1,2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
  }
  uVar1 = *(uint *)(param_2 + 0xdb4);
  if (uVar1 != 0xffffffff) {
    lVar5 = *(longlong *)(lVar5 + 0x2238);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
    FUN_18004a7d8(lVar5,uVar1,2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}

