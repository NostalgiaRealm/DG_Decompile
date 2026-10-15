/*
 * FUN_180098298 at 180098298
 * undefined FUN_180098298(void)
 * Address ranges: 180098298-1800982bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180098298(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x1c8) + (param_2 & 0xffffffff) * 0x20;
                    /* WARNING: Could not recover jumptable at 0x0001800982b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__imp_USER32_dll_UnionRect)(lVar1 + 0x10,lVar1 + 0x10);
    return;
  }
  return;
}

