/*
 * FUN_1800304b0 at 1800304b0
 * undefined FUN_1800304b0(void)
 * Address ranges: 1800304b0-1800304d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1800304b0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
                    /* WARNING: Could not recover jumptable at 0x0001800304d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x20),0);
    return;
  }
  return;
}

