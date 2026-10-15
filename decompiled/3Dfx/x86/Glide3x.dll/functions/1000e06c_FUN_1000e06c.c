/*
 * FUN_1000e06c at 1000e06c
 * undefined __fastcall FUN_1000e06c(int * param_1)
 * Address ranges: 1000e06c-1000e07d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000e06c(int *param_1)

{
  if ((*(byte *)(param_1 + 0xaf3) & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x1000e077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))();
    return;
  }
  return;
}

