/*
 * <EXTERNAL>::thunk_EXT_FUN_00242ff2 at 1800232e8
 * undefined thunk_EXT_FUN_00242ff2(void)
 * Address ranges: 1800232e8-1800232f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to <EXTERNAL>::EXT_FUN_00242ff2
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void thunk_EXT_FUN_00242ff2(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001800232f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__imp_KERNEL32_dll_DebugBreak)();
  return;
}

