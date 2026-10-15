/*
 * FUN_180024348 at 180024348
 * undefined FUN_180024348(void)
 * Address ranges: 180024348-18002435f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180024348(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018002435c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))
            (*(longlong **)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x94),
             *(undefined4 *)(param_1 + 0x98));
  return;
}

