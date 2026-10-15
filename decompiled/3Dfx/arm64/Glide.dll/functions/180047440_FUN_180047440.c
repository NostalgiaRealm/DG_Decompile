/*
 * FUN_180047440 at 180047440
 * undefined4 __cdecl FUN_180047440(longlong * param_1, ulonglong param_2)
 * Address ranges: 180047440-1800474cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180047440(longlong *param_1,ulonglong param_2)

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
  lVar1 = FUN_180047718(param_1,&local_18);
  if (lVar1 != 0) {
    puVar2 = FUN_1800478f0(lVar1 + 8,local_20);
    if (puVar2 == (ulonglong *)0x0) {
      local_20[0] = 0xffffffff;
      puVar2 = FUN_1800478f0(extraout_x15 + 8,local_20);
      if (puVar2 == (ulonglong *)0x0) goto LAB_1800474ac;
    }
    uVar3 = *(undefined4 *)((longlong)puVar2 + 0x14);
  }
LAB_1800474ac:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return uVar3;
}

