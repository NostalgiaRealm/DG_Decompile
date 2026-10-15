/*
 * FUN_1800af8d0 at 1800af8d0
 * undefined __fastcall FUN_1800af8d0(longlong param_1)
 * Address ranges: 1800af8d0-1800af8fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800af8d0(longlong param_1)

{
  FUN_180017818(param_1 + -0x98,param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001800af8f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + -0x40) + 0xa0))();
  return;
}

