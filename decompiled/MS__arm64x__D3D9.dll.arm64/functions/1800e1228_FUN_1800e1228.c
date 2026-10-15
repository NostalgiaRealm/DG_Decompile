/*
 * FUN_1800e1228 at 1800e1228
 * undefined FUN_1800e1228(void)
 * Address ranges: 1800e1228-1800e123f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1800e1228(longlong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001800e123c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + (ulonglong)param_2 * 0x18c0 + 0x6b0) + 0x138))();
  return;
}

