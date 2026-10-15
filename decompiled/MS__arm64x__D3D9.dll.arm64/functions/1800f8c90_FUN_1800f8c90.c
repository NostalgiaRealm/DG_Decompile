/*
 * FUN_1800f8c90 at 1800f8c90
 * undefined FUN_1800f8c90(void)
 * Address ranges: 1800f8c90-1800f8ca7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1800f8c90(longlong param_1,ulonglong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001800f8ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + (param_2 & 0xffffffff) * 0x20 + 0x6d0) + 0x128))();
  return;
}

