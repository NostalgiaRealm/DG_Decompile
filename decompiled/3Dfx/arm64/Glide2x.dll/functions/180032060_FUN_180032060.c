/*
 * FUN_180032060 at 180032060
 * undefined __cdecl FUN_180032060(longlong param_1, undefined8 * param_2)
 * Address ranges: 180032060-180032143
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180032060(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_180031c88(param_1);
  FUN_180048d98(*(longlong *)(param_1 + 0xc0),(longlong *)param_2[2]);
  FUN_180048d98(*(longlong *)(param_1 + 0xc0),(longlong *)*param_2);
  FUN_180048d98(*(longlong *)(param_1 + 0xc0),(longlong *)param_2[1]);
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *(uint *)((longlong)param_2 + 0x1c);
  if (uVar1 != 0xffffffff) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x1938);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x28));
    FUN_180049988(lVar2,uVar1,2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x28));
  }
  uVar1 = *(uint *)(param_2 + 3);
  if (uVar1 != 0xffffffff) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x1930);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x28));
    FUN_180049988(lVar2,uVar1,2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x28));
  }
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0xffffffff;
  return;
}

