/*
 * FUN_180047990 at 180047990
 * undefined __cdecl FUN_180047990(longlong param_1, longlong * param_2)
 * Address ranges: 180047990-180047a13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047990(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((int)param_2[1] != 0) {
    do {
      FUN_180048768(*(longlong **)(param_1 + 0x10),*(longlong *)(*param_2 + uVar2 * 8));
      thunk_FUN_180063700((LPVOID)**(undefined8 **)(*param_2 + uVar2 * 8));
      thunk_FUN_180063700(*(LPVOID *)(*param_2 + uVar2 * 8));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 1));
  }
  thunk_FUN_180063700((LPVOID)*param_2);
  FUN_180063700(param_2);
  return;
}

