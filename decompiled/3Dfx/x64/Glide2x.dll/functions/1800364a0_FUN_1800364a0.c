/*
 * FUN_1800364a0 at 1800364a0
 * undefined __fastcall FUN_1800364a0(longlong * param_1, int param_2)
 * Address ranges: 1800364a0-1800364e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800364a0(longlong *param_1,int param_2)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined1 *)((longlong)param_1 + 0x2be2) = 1;
  iVar1 = (param_2 != 1) + 2;
  if (param_2 == 0) {
    iVar1 = 1;
  }
  *(int *)((longlong)param_1 + 0x2ae4) = iVar1;
  return;
}

