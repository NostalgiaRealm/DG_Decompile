/*
 * FUN_1801a0368 at 1801a0368
 * undefined FUN_1801a0368(void)
 * Address ranges: 1801a0368-1801a0377
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

longlong FUN_1801a0368(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + -0x100;
  }
  return lVar1;
}

