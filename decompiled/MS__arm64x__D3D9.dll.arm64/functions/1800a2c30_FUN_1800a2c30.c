/*
 * FUN_1800a2c30 at 1800a2c30
 * undefined FUN_1800a2c30(void)
 * Address ranges: 1800a2c30-1800a2c4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1800a2c30(longlong param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a2c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x180))
            (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x2c),param_2);
  return;
}

