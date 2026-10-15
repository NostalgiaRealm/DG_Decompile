/*
 * FUN_18021b078 at 18021b078
 * undefined FUN_18021b078(void)
 * Address ranges: 18021b078-18021b08b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_18021b078(longlong param_1,uint param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)param_2 * 0x1ac0 + 0x2230);
}

