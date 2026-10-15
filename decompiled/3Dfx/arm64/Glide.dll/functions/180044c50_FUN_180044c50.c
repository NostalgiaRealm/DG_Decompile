/*
 * FUN_180044c50 at 180044c50
 * undefined __cdecl FUN_180044c50(longlong param_1, longlong * param_2)
 * Address ranges: 180044c50-180044cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180044c50(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((int)param_2[1] != 0) {
    do {
      FUN_180045a28(*(longlong **)(param_1 + 0x10),*(longlong *)(*param_2 + uVar2 * 8));
      thunk_FUN_180060a18((LPVOID)**(undefined8 **)(*param_2 + uVar2 * 8));
      thunk_FUN_180060a18(*(LPVOID *)(*param_2 + uVar2 * 8));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 1));
  }
  thunk_FUN_180060a18((LPVOID)*param_2);
  FUN_180060a18(param_2);
  return;
}

