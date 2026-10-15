/*
 * FUN_1801fb720 at 1801fb720
 * undefined FUN_1801fb720(void)
 * Address ranges: 1801fb720-1801fb73b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801fb720(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x478) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + (ulonglong)param_2 * 0x10 + 0x228);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

