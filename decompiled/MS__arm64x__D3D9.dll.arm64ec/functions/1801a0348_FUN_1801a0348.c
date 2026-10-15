/*
 * FUN_1801a0348 at 1801a0348
 * undefined FUN_1801a0348(void)
 * Address ranges: 1801a0348-1801a0363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

longlong FUN_1801a0348(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + -0x100;
  }
  lVar2 = param_2 + -0x100;
  if (*(int *)(param_2 + 8) == 0) {
    lVar2 = lVar1;
  }
  return lVar2;
}

