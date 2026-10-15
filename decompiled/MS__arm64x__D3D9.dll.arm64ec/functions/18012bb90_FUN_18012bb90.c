/*
 * FUN_18012bb90 at 18012bb90
 * undefined FUN_18012bb90(void)
 * Address ranges: 18012bb90-18012bbb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_18012bb90(void)

{
  if (*(longlong *)(DAT_18024d928 + 0x3b0) != 0) {
    thunk_FUN_180223d88(*(longlong *)(DAT_18024d928 + 0x3b0),0x408,0,0);
    return;
  }
  return;
}

