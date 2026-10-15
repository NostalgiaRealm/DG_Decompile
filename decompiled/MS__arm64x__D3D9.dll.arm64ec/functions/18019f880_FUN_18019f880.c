/*
 * FUN_18019f880 at 18019f880
 * undefined FUN_18019f880(void)
 * Address ranges: 18019f880-18019f88b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_18019f880(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0xd6a) = param_2;
  return;
}

