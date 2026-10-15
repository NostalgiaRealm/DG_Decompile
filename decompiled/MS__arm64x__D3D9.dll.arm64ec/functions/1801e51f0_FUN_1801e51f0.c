/*
 * FUN_1801e51f0 at 1801e51f0
 * undefined FUN_1801e51f0(void)
 * Address ranges: 1801e51f0-1801e521f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801e51f0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + -0x28);
    uVar1 = 0;
    param_2[1] = *(undefined8 *)(param_1 + -0x20);
    *param_2 = uVar2;
    param_2[2] = *(undefined8 *)(param_1 + -0x18);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + -0x10);
  }
  return uVar1;
}

