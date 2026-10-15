/*
 * FUN_180015298 at 180015298
 * undefined __cdecl FUN_180015298(longlong * param_1, int param_2)
 * Address ranges: 180015298-1800152e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180015298(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x2e0))();
  uVar1 = 2;
  if (param_2 != 1) {
    uVar1 = 3;
  }
  if (param_2 == 0) {
    uVar1 = 1;
  }
  *(undefined4 *)((longlong)param_1 + 0x2b7c) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x2c7a) = 1;
  return;
}

