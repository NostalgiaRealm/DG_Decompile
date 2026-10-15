/*
 * FUN_1800c4d90 at 1800c4d90
 * undefined FUN_1800c4d90(void)
 * Address ranges: 1800c4d90-1800c4dc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1800c4d90(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    return 0x8876086c;
  }
  if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800c4dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x40))();
    return uVar1;
  }
  uVar1 = FUN_1800a3db8(*(longlong *)(param_1 + 0x38) + 0x6838);
  return uVar1;
}

