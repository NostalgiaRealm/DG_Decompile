/*
 * FUN_1800b0f50 at 1800b0f50
 * undefined FUN_1800b0f50(void)
 * Address ranges: 1800b0f50-1800b0f8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1800b0f50(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x88760868;
  if (*(char *)(param_1 + -0x1f) == '\0') {
    if (*(longlong *)(param_1 + 0x5c50) == 0) {
      *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001800b0f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x100))();
      return uVar1;
    }
    *param_2 = 1;
    uVar1 = 0;
  }
  return uVar1;
}

