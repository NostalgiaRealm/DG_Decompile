/*
 * FUN_18002ae88 at 18002ae88
 * undefined __fastcall FUN_18002ae88(longlong * param_1)
 * Address ranges: 18002ae88-18002aead
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ae88(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018002aea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)param_1 + 0xc) + 0x2f8))
            (*(longlong **)((longlong)param_1 + 0xc),*(undefined4 *)((longlong)param_1 + 0x14),
             (ulonglong)*(uint *)(param_1 + 1) + 0xf + *param_1 & 0xfffffffffffffff0);
  return;
}

