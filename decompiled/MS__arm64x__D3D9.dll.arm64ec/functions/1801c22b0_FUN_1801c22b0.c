/*
 * FUN_1801c22b0 at 1801c22b0
 * undefined FUN_1801c22b0(void)
 * Address ranges: 1801c22b0-1801c22c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined2 FUN_1801c22b0(longlong param_1)

{
  undefined2 uVar1;
  
  if ((*(uint *)(param_1 + -0x28) >> 10 & 1) == 0) {
    uVar1 = *(undefined2 *)(param_1 + -0x5c);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

