/*
 * FUN_180132110 at 180132110
 * undefined FUN_180132110(void)
 * Address ranges: 180132110-180132147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

longlong FUN_180132110(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x250) + (ulonglong)*(uint *)(param_1 + 600) * 0x18c0 +
                  0x6cc);
  *(bool *)param_2 = 0xafff < iVar1;
  *(bool *)(param_2 + 1) = 0xa0ff < iVar1;
  return param_2;
}

