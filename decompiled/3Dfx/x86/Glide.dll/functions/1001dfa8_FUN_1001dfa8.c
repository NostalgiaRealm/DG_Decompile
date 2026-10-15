/*
 * FUN_1001dfa8 at 1001dfa8
 * undefined __fastcall FUN_1001dfa8(int * param_1)
 * Address ranges: 1001dfa8-1001dfb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001dfa8(int *param_1)

{
  if ((*(byte *)(param_1 + 0xacb) & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x1001dfb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))();
    return;
  }
  return;
}

