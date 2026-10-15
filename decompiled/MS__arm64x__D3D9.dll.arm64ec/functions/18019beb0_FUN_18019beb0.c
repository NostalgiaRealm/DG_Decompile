/*
 * FUN_18019beb0 at 18019beb0
 * undefined FUN_18019beb0(void)
 * Address ranges: 18019beb0-18019bec3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

uint FUN_18019beb0(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x170) >> (ulonglong)(param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

