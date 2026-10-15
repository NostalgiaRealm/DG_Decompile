/*
 * FUN_1801fe430 at 1801fe430
 * undefined FUN_1801fe430(void)
 * Address ranges: 1801fe430-1801fe43f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1801fe430(longlong param_1,uint param_2)

{
  return *(undefined8 *)(param_1 + (ulonglong)param_2 * 0x18c0 + 0x6c0);
}

