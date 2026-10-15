/*
 * FUN_18003ab60 at 18003ab60
 * undefined __cdecl FUN_18003ab60(longlong * param_1, int param_2)
 * Address ranges: 18003ab60-18003abaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003ab60(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x2a0))();
  uVar1 = 2;
  if (param_2 != 1) {
    uVar1 = 3;
  }
  if (param_2 == 0) {
    uVar1 = 1;
  }
  *(undefined4 *)((longlong)param_1 + 0x2ae4) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x2be2) = 1;
  return;
}

