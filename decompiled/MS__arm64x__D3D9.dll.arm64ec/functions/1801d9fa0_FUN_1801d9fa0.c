/*
 * FUN_1801d9fa0 at 1801d9fa0
 * undefined FUN_1801d9fa0(void)
 * Address ranges: 1801d9fa0-1801d9fe3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801d9fa0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + -0x59d4);
    param_2[1] = *(undefined4 *)(param_1 + -0x59d0);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + -0x59c8);
    param_2[4] = *(undefined4 *)(param_1 + -0x59c0);
  }
  return uVar1;
}

