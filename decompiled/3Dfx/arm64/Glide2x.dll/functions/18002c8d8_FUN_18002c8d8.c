/*
 * FUN_18002c8d8 at 18002c8d8
 * undefined __cdecl FUN_18002c8d8(longlong * param_1)
 * Address ranges: 18002c8d8-18002c903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002c8d8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018002c900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)param_1 + 0xc) + 0x2f8))
            (*(longlong **)((longlong)param_1 + 0xc),*(undefined4 *)((longlong)param_1 + 0x14),
             *param_1 + (ulonglong)*(uint *)(param_1 + 1) + 0xf & 0xfffffffffffffff0);
  return;
}

