/*
 * FUN_1801dc6c0 at 1801dc6c0
 * undefined FUN_1801dc6c0(void)
 * Address ranges: 1801dc6c0-1801dc6d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1801dc6c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_180116620(param_1 + -0x48);
    return uVar1;
  }
  return 0x8876086c;
}

