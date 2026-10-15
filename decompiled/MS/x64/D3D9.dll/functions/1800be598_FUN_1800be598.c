/*
 * FUN_1800be598 at 1800be598
 * undefined4 __fastcall FUN_1800be598(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 1800be598-1800be654
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800be598(longlong param_1,uint param_2,longlong param_3)

{
  bool bVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if ((param_3 != 0) && (param_2 < *(uint *)(param_1 + -0x5a00))) {
    if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
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
    uVar3 = FUN_18000812c(param_1 + -0x6838,
                          *(longlong *)(*(longlong *)(param_1 + -0x5a08) + (ulonglong)param_2 * 8),
                          (longlong *)(param_3 + -0x80));
    if (bVar1) {
      LeaveCriticalSection(DAT_1801123a8);
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return uVar3;
}

