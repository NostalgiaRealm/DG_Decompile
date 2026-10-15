/*
 * FUN_1801bad20 at 1801bad20
 * undefined FUN_1801bad20(void)
 * Address ranges: 1801bad20-1801bad43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 * FUN_1801bad20(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  
  param_1 = param_1 + (ulonglong)param_3 * 0xc18;
  uVar1 = *(undefined8 *)(param_1 + 0x10cc8);
  *param_2 = *(undefined8 *)(param_1 + 0x10cc0);
  param_2[1] = uVar1;
  return param_2;
}

