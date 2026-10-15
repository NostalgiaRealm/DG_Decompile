/*
 * FUN_1801fc070 at 1801fc070
 * undefined FUN_1801fc070(void)
 * Address ranges: 1801fc070-1801fc0a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined1 * FUN_1801fc070(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x480) + (param_3 & 0xffffffff) * 0x20;
  *param_2 = *(undefined1 *)(lVar1 + 0x6e8);
  param_2[1] = *(undefined1 *)(lVar1 + 0x6e9);
  param_2[2] = *(undefined1 *)(lVar1 + 0x6ea);
  param_2[3] = *(undefined1 *)(lVar1 + 0x6eb);
  return param_2;
}

