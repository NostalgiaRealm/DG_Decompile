/*
 * FUN_1800bd440 at 1800bd440
 * ulonglong __fastcall FUN_1800bd440(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800bd440-1800bd4ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800bd440(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  BOOL BVar2;
  ulonglong uVar3;
  
  uVar3 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
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
    if (*(longlong *)(param_1 + -0x67e8) == 0) {
      *param_2 = 0;
      uVar3 = 0x88760866;
    }
    else {
      uVar3 = FUN_1800c1048(*(longlong *)(param_1 + -0x67e8) + 0x80,(longlong *)&DAT_1800fd6c0,
                            param_2);
      uVar3 = uVar3 & 0xffffffff;
    }
    if (bVar1) {
      LeaveCriticalSection(DAT_1801123a8);
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return uVar3;
}

