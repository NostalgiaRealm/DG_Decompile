/*
 * FUN_180089094 at 180089094
 * undefined __fastcall FUN_180089094(longlong * param_1)
 * Address ranges: 180089094-1800890d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180089094(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    do {
      (**(code **)(**(longlong **)(*param_1 + 0x10 + uVar2 * 0x18) + 0x10))();
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)((longlong)param_1 + 0xc));
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  FUN_1800fbcf0((LPVOID)*param_1);
  return;
}

