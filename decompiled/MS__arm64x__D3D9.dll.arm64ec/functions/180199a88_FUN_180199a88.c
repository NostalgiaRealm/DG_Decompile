/*
 * FUN_180199a88 at 180199a88
 * undefined FUN_180199a88(void)
 * Address ranges: 180199a88-180199aa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180199a88(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xd0) + (param_2 & 0xffffffff) * 0x28;
  thunk_FUN_180223c70(lVar1 + 0x18,lVar1 + 0x18);
  return;
}

