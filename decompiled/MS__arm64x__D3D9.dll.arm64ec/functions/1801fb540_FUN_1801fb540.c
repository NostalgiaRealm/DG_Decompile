/*
 * FUN_1801fb540 at 1801fb540
 * undefined FUN_1801fb540(void)
 * Address ranges: 1801fb540-1801fb563
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1801fb540(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x2c0) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x2c8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

