/*
 * FUN_1800c070c at 1800c070c
 * undefined __fastcall FUN_1800c070c(undefined8 * param_1)
 * Address ranges: 1800c070c-1800c07c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c070c(undefined8 *param_1)

{
  bool bVar1;
  BOOL BVar2;
  
  if (((*(byte *)(param_1[3] + 0xe78) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar1 = false;
  }
  else {
    bVar1 = true;
    BVar2 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar2 == 0) {
      FUN_1800044dc(0);
    }
  }
  FUN_1800b05e0(param_1[3],(longlong)param_1);
  (**(code **)(*(longlong *)param_1[6] + 8))();
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1801048b8;
  FUN_1800fbcf0(param_1);
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return;
}

