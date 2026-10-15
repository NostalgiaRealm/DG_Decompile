/*
 * FUN_1001dc1c at 1001dc1c
 * undefined __fastcall FUN_1001dc1c(int * param_1)
 * Address ranges: 1001dc1c-1001dc2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001dc1c(int *param_1)

{
  if ((*(byte *)(param_1 + 0xacb) & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x1001dc27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))();
    return;
  }
  return;
}

