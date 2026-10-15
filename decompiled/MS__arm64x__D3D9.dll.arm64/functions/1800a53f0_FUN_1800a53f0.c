/*
 * FUN_1800a53f0 at 1800a53f0
 * undefined FUN_1800a53f0(void)
 * Address ranges: 1800a53f0-1800a542f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1800a53f0(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + -0x30)) && (param_3 != (undefined8 *)0x0)) {
    uVar1 = 0;
    *param_3 = *(undefined8 *)
                (&DAT_1802539c0 +
                (ulonglong)*(uint *)(*(longlong *)(param_1 + -0x38) + (ulonglong)param_2 * 4) * 600)
    ;
  }
  return uVar1;
}

