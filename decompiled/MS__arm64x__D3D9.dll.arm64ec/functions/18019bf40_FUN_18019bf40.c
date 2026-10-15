/*
 * FUN_18019bf40 at 18019bf40
 * undefined FUN_18019bf40(void)
 * Address ranges: 18019bf40-18019bf5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_18019bf40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0x28;
  if (*(char *)(param_1 + 0x249) != '\0') {
    lVar1 = 0x174;
  }
  return *(undefined4 *)(param_1 + lVar1);
}

