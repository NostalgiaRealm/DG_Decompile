/*
 * FUN_1800246f0 at 1800246f0
 * undefined FUN_1800246f0(void)
 * Address ranges: 1800246f0-180024713
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1800246f0(longlong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000180024710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
            (*(longlong **)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x94),
             *(undefined4 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x18),param_2);
  return;
}

