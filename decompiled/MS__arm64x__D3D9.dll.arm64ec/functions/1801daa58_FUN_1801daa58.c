/*
 * FUN_1801daa58 at 1801daa58
 * undefined FUN_1801daa58(void)
 * Address ranges: 1801daa58-1801daa77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1801daa58(longlong param_1,undefined4 *param_2)

{
  param_2[1] = *(undefined4 *)(param_1 + -0x6460);
  *param_2 = *(undefined4 *)(param_1 + -0x6464);
  return 0;
}

