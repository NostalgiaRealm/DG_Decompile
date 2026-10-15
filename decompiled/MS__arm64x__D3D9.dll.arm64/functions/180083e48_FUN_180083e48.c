/*
 * FUN_180083e48 at 180083e48
 * undefined FUN_180083e48(void)
 * Address ranges: 180083e48-180083e6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180083e48(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xd0) + (param_2 & 0xffffffff) * 0x28;
                    /* WARNING: Could not recover jumptable at 0x000180083e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__imp_USER32_dll_UnionRect)(lVar1 + 0x18,lVar1 + 0x18);
  return;
}

