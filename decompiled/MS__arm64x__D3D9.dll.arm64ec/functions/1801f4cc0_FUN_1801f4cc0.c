/*
 * FUN_1801f4cc0 at 1801f4cc0
 * undefined FUN_1801f4cc0(void)
 * Address ranges: 1801f4cc0-1801f4cef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

longlong FUN_1801f4cc0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18);
  if (uVar1 == 0xffffffff) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x70) + (ulonglong)uVar1;
  }
  return lVar2;
}

