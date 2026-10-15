/*
 * FUN_1802079f8 at 1802079f8
 * undefined FUN_1802079f8(void)
 * Address ranges: 1802079f8-180207a0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1802079f8(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xb08) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xb08) + 0x18);
  }
  return uVar1;
}

