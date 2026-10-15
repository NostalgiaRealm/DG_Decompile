/*
 * FUN_180098278 at 180098278
 * undefined FUN_180098278(void)
 * Address ranges: 180098278-180098293
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180098278(longlong param_1)

{
  if ((*(char *)(param_1 + 0x24d) != '\0') && (*(char *)(param_1 + 0x24e) != '\0')) {
    FUN_180096cd8();
    return;
  }
  FUN_180092238();
  return;
}

