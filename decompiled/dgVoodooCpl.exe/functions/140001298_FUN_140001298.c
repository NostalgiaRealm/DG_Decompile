/*
 * FUN_140001298 at 140001298
 * undefined __fastcall FUN_140001298(undefined8 * param_1)
 * Address ranges: 140001298-1400012d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140001298(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1400263d0;
  param_1[0xd] = &PTR_FUN_1400263b8;
  FUN_14000f590(param_1 + 0xe);
  *param_1 = &PTR_FUN_140028860;
                    /* WARNING: Could not recover jumptable at 0x0001400012d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DestroyWindow((HWND)param_1[3]);
  return;
}

