/*
 * FUN_18005c7e8 at 18005c7e8
 * undefined __fastcall FUN_18005c7e8(longlong param_1, longlong param_2)
 * Address ranges: 18005c7e8-18005c887
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005c7e8(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  lVar3 = 0;
  do {
    lVar2 = *(longlong *)(param_2 + 0xdb8 + lVar3 * 8);
    if (lVar2 != 0) {
      FUN_18005f28c((longlong *)(param_1 + 0x21b8 + (ulonglong)uVar1 * 0x1ac0),lVar2);
      *(undefined8 *)(param_2 + 0xdb8 + lVar3 * 8) = 0;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 2);
  uVar1 = *(uint *)(param_2 + 0xdc8);
  if (uVar1 != 0xffffffff) {
    lVar3 = *(longlong *)((ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0 + 0x2230 + param_1);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    FUN_180048b44(lVar3,uVar1,2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    *(undefined4 *)(param_2 + 0xdc8) = 0xffffffff;
  }
  return;
}

