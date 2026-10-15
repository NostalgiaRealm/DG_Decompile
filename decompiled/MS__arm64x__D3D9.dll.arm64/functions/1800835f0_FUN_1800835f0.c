/*
 * FUN_1800835f0 at 1800835f0
 * undefined FUN_1800835f0(void)
 * Address ranges: 1800835f0-18008360b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1800835f0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)&DAT_000000e0) {
                    /* WARNING: Could not recover jumptable at 0x000180083604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}

