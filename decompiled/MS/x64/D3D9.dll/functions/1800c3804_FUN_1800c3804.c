/*
 * FUN_1800c3804 at 1800c3804
 * ulonglong __fastcall FUN_1800c3804(longlong param_1)
 * Address ranges: 1800c3804-1800c38aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800c3804(longlong param_1)

{
  bool bVar1;
  BOOL BVar2;
  ulonglong uVar3;
  
  uVar3 = 0x8876086c;
  if (*(char *)(param_1 + -2) != '\0') {
    if (((*(byte *)(*(longlong *)(param_1 + -0x40) + 0xe78) & 4) == 0) &&
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
    uVar3 = FUN_18001895c(param_1 + -0xc0);
    uVar3 = uVar3 & 0xffffffff;
    if (bVar1) {
      LeaveCriticalSection(DAT_1801123a8);
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return uVar3;
}

