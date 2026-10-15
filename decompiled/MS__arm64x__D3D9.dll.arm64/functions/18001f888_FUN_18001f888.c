/*
 * FUN_18001f888 at 18001f888
 * undefined FUN_18001f888(void)
 * Address ranges: 18001f888-18001f8b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_18001f888(void)

{
  if (*(longlong *)(DAT_18024de60 + 0x3b0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018001f8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__imp_USER32_dll_PostMessageW)(*(longlong *)(DAT_18024de60 + 0x3b0),0x408,0,0);
    return;
  }
  return;
}

