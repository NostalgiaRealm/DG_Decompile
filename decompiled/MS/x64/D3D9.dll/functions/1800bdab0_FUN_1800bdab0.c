/*
 * FUN_1800bdab0 at 1800bdab0
 * undefined8 __fastcall FUN_1800bdab0(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 1800bdab0-1800bdb84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800bdab0(longlong param_1,uint param_2,longlong param_3)

{
  bool bVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint local_res10 [2];
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar1 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar1 = true;
    BVar2 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar2 == 0) {
      FUN_1800044dc(0);
    }
  }
  uVar4 = 0x8876086c;
  if ((param_2 < 6) && (param_3 != 0)) {
    FUN_1800fa780(local_res10);
    lVar3 = 0;
    do {
      *(undefined4 *)(param_3 + lVar3 * 4) =
           *(undefined4 *)((ulonglong)param_2 * 0x10 + param_1 + -0x6420 + lVar3 * 4);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
    uVar4 = 0;
    FUN_1800fa7bc();
  }
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar4;
}

