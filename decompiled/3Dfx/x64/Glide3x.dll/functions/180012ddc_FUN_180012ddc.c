/*
 * FUN_180012ddc at 180012ddc
 * undefined __fastcall FUN_180012ddc(longlong * param_1, int param_2)
 * Address ranges: 180012ddc-180012e1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012ddc(longlong *param_1,int param_2)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined1 *)((longlong)param_1 + 0x2c7a) = 1;
  iVar1 = (param_2 != 1) + 2;
  if (param_2 == 0) {
    iVar1 = 1;
  }
  *(int *)((longlong)param_1 + 0x2b7c) = iVar1;
  return;
}

