/*
 * FUN_180024780 at 180024780
 * undefined FUN_180024780(void)
 * Address ranges: 180024780-180024797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180024780(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180024794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x60))
            (*(longlong **)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x94),
             *(undefined4 *)(param_1 + 0x98));
  return;
}

