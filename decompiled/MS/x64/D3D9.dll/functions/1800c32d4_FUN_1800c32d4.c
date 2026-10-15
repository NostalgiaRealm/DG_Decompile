/*
 * FUN_1800c32d4 at 1800c32d4
 * undefined __fastcall FUN_1800c32d4(undefined8 * param_1)
 * Address ranges: 1800c32d4-1800c3391
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c32d4(undefined8 *param_1)

{
  bool bVar1;
  BOOL BVar2;
  
  if (((*(byte *)(param_1[0x10] + 0xe78) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
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
  FUN_180031abc((longlong)param_1,0,0);
  FUN_1800fbcf0((LPVOID)param_1[0x12]);
  param_1[0x12] = 0;
  FUN_1800c32a8(param_1);
  FUN_1800fbcf0(param_1);
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return;
}

