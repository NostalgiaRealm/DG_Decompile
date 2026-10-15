/*
 * FUN_18019f868 at 18019f868
 * undefined FUN_18019f868(void)
 * Address ranges: 18019f868-18019f877
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_18019f868(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  *(undefined4 *)(lVar1 + 0xc40) = param_2;
  *(undefined4 *)(lVar1 + 0xc44) = param_3;
  return;
}

