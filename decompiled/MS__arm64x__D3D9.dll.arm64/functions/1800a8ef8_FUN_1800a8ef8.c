/*
 * FUN_1800a8ef8 at 1800a8ef8
 * undefined FUN_1800a8ef8(void)
 * Address ranges: 1800a8ef8-1800a8f23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1800a8ef8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800a8f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)**(undefined8 **)(param_1 + -0x80))
                      (*(undefined8 **)(param_1 + -0x80),&DAT_180229498,param_2);
    return uVar1;
  }
  return 0x8876086c;
}

