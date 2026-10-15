/*
 * FUN_18019ff50 at 18019ff50
 * undefined FUN_18019ff50(void)
 * Address ranges: 18019ff50-18019ff83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_18019ff50(longlong param_1,int param_2,undefined8 param_3)

{
  FUN_18020b0b8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1518),
                *(undefined8 *)(param_1 + 0x1cf20),*(longlong *)(param_1 + 0x1cf18) + 0x16d0,
                param_2 * 0x1000,param_2 * 0x1000 + 0x1000,param_3,0,0);
  return;
}

