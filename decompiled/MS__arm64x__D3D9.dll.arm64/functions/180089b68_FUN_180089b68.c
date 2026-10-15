/*
 * FUN_180089b68 at 180089b68
 * undefined FUN_180089b68(void)
 * Address ranges: 180089b68-180089b9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180089b68(longlong param_1,int param_2,undefined8 param_3)

{
  FUN_1800eb698(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1518),
                *(undefined8 *)(param_1 + 0x1cf20),*(longlong *)(param_1 + 0x1cf18) + 0x16d0,
                param_2 * 0x1000,param_2 * 0x1000 + 0x1000,param_3,0,0);
  return;
}

