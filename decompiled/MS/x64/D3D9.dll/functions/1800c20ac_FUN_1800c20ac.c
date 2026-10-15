/*
 * FUN_1800c20ac at 1800c20ac
 * undefined4 __fastcall FUN_1800c20ac(longlong param_1, longlong param_2)
 * Address ranges: 1800c20ac-1800c215e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c20ac(longlong param_1,longlong param_2)

{
  bool bVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if (param_2 != 0) {
    if (((*(byte *)(*(longlong *)(param_1 + 0x178) + 0xe78) & 4) == 0) &&
       (DAT_1801123a8[1].LockCount == 0)) {
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
    uVar3 = FUN_18000812c(*(longlong *)(param_1 + 0x178),-(ulonglong)(param_1 != 0) & param_1 + 8U,
                          (longlong *)(param_2 + -0x80));
    if (bVar1) {
      LeaveCriticalSection(DAT_1801123a8);
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return uVar3;
}

