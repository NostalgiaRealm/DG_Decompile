/*
 * FUN_180085ef0 at 180085ef0
 * undefined FUN_180085ef0(void)
 * Address ranges: 180085ef0-180085eff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180085ef0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180085efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + -0xe0) + 0xc0))((longlong *)(param_1 + -0xe0),0);
  return;
}

