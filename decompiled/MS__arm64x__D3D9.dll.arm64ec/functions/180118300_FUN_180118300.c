/*
 * FUN_180118300 at 180118300
 * undefined FUN_180118300(void)
 * Address ranges: 180118300-180118327
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_180118300(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x121) == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x50) + 0x6819) != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

