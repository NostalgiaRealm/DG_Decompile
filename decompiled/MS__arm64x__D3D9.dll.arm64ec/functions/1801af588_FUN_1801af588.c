/*
 * FUN_1801af588 at 1801af588
 * undefined FUN_1801af588(void)
 * Address ranges: 1801af588-1801af5a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1801af588(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x1c8) + (param_2 & 0xffffffff) * 0x20;
    thunk_FUN_180223c70(lVar1 + 0x10,lVar1 + 0x10);
    return;
  }
  return;
}

