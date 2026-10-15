/*
 * FUN_1800fbea0 at 1800fbea0
 * undefined FUN_1800fbea0(void)
 * Address ranges: 1800fbea0-1800fbeb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1800fbea0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800fbeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x6b0) + 8))
            (*(longlong *)(param_1 + 8) + 0x6b0);
  return;
}

