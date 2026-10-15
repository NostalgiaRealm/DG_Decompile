/*
 * FUN_180146eb0 at 180146eb0
 * undefined FUN_180146eb0(void)
 * Address ranges: 180146eb0-180146ecf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined1 * FUN_180146eb0(longlong param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(*(longlong *)(param_1 + 0xf6e8) + 0x1b);
  *(undefined2 *)(param_2 + 1) = 0x101;
  return param_2;
}

