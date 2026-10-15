/*
 * FUN_1801a83d0 at 1801a83d0
 * undefined FUN_1801a83d0(void)
 * Address ranges: 1801a83d0-1801a83ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

longlong FUN_1801a83d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0x140;
  if (*(longlong *)(param_1 + 0x154) == 0) {
    lVar1 = 0x60;
  }
  return lVar1 + param_1;
}

