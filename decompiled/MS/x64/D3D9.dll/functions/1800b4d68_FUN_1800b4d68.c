/*
 * FUN_1800b4d68 at 1800b4d68
 * undefined8 __fastcall FUN_1800b4d68(longlong param_1, int param_2)
 * Address ranges: 1800b4d68-1800b4e17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b4d68(longlong param_1,int param_2)

{
  bool bVar1;
  BOOL BVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar3;
  
  lpCriticalSection = DAT_1801123a8;
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar1 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar1 = true;
    BVar2 = TryEnterCriticalSection(DAT_1801123a8);
    lpCriticalSection = DAT_1801123a8;
    if (BVar2 == 0) {
      FUN_1800044dc(0);
      lpCriticalSection = DAT_1801123a8;
    }
  }
  bVar3 = true;
  *(int *)(param_1 + 0x5cac) = param_2;
  if ((*(int *)(param_1 + -0x59d0) != 3) && ((*(byte *)(param_1 + -0x59c0) & 0x20) == 0)) {
    if ((*(byte *)(param_1 + -0x59c0) & 0x80) == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = param_2 != 0;
    }
  }
  *(bool *)(param_1 + -0x1d) = bVar3;
  if (bVar1) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    *(undefined4 *)((longlong)&lpCriticalSection[1].DebugInfo + 4) = 0;
  }
  return 0;
}

