/*
 * FUN_18013a2a0 at 18013a2a0
 * undefined FUN_18013a2a0(void)
 * Address ranges: 18013a2a0-18013a2b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_18013a2a0(longlong param_1,undefined1 param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xf7e0) != 0xa000) {
    uVar1 = param_2;
  }
  *(undefined1 *)(param_1 + 0xa8) = uVar1;
  return;
}

