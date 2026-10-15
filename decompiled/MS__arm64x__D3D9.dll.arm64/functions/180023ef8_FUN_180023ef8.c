/*
 * FUN_180023ef8 at 180023ef8
 * undefined FUN_180023ef8(void)
 * Address ranges: 180023ef8-180023f13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180023ef8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000180023f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x30))
            (*(longlong **)(lVar1 + 0x70),*(undefined4 *)(lVar1 + 0x94),
             *(undefined4 *)(lVar1 + 0x98),1);
  return;
}

