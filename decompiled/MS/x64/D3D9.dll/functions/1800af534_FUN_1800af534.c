/*
 * FUN_1800af534 at 1800af534
 * undefined __fastcall FUN_1800af534(longlong * param_1)
 * Address ranges: 1800af534-1800af605
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800af534(longlong *param_1)

{
  bool bVar1;
  BOOL BVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_1[3] + -0x59c0);
  if (param_1[3] == 0) {
    pbVar3 = &DAT_00000e78;
  }
  if (((*pbVar3 & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
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
  FUN_180007b78(-(ulonglong)(param_1[3] != 0) & param_1[3] - 0x6838U,(longlong)param_1);
  FUN_180017c64((longlong)param_1);
  FUN_180017480(param_1);
  FUN_1800af3a8(param_1);
  FUN_1800fbcf0(param_1);
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return;
}

