/*
 * FUN_1800de618 at 1800de618
 * undefined FUN_1800de618(void)
 * Address ranges: 1800de618-1800de62f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1800de618(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800de628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}

