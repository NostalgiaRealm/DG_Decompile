/*
 * FUN_18004a180 at 18004a180
 * undefined4 __cdecl FUN_18004a180(longlong * param_1, ulonglong param_2)
 * Address ranges: 18004a180-18004a20b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18004a180(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong extraout_x15;
  undefined4 uVar3;
  uint local_20 [2];
  ulonglong local_18;
  
  local_20[0] = 0;
  local_18 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  uVar3 = 0;
  lVar1 = FUN_18004a458(param_1,&local_18);
  if (lVar1 != 0) {
    puVar2 = FUN_18004a630(lVar1 + 8,local_20);
    if (puVar2 == (ulonglong *)0x0) {
      local_20[0] = 0xffffffff;
      puVar2 = FUN_18004a630(extraout_x15 + 8,local_20);
      if (puVar2 == (ulonglong *)0x0) goto LAB_18004a1ec;
    }
    uVar3 = *(undefined4 *)((longlong)puVar2 + 0x14);
  }
LAB_18004a1ec:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return uVar3;
}

