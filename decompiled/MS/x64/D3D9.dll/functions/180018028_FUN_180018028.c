/*
 * FUN_180018028 at 180018028
 * undefined __fastcall FUN_180018028(longlong * param_1)
 * Address ranges: 180018028-1800180e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018028(longlong *param_1)

{
  bool bVar1;
  BOOL BVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_1[8] + -0x59c0);
  if (param_1[8] == 0) {
    pbVar3 = &DAT_00000e78;
  }
  if (((*pbVar3 & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
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
  FUN_180007df4(-(ulonglong)(param_1[8] != 0) & param_1[8] - 0x6838U,(longlong)param_1);
  FUN_180018190((longlong)param_1);
  (**(code **)(*param_1 + 8))(param_1,1);
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return;
}

