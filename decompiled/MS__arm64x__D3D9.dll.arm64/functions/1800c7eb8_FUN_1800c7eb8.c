/*
 * FUN_1800c7eb8 at 1800c7eb8
 * undefined FUN_1800c7eb8(void)
 * Address ranges: 1800c7eb8-1800c7ee3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1800c7eb8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800c7edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)**(undefined8 **)(param_1 + -0x50))
                      (*(undefined8 **)(param_1 + -0x50),&DAT_180229498,param_2);
    return uVar1;
  }
  return 0x8876086c;
}

