/*
 * FUN_180024718 at 180024718
 * undefined FUN_180024718(void)
 * Address ranges: 180024718-18002473b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180024718(longlong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000180024738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
            (*(longlong **)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x94),
             *(undefined4 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x18),param_2);
  return;
}

