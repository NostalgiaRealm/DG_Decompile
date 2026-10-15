/*
 * FUN_1801db0b8 at 1801db0b8
 * undefined FUN_1801db0b8(void)
 * Address ranges: 1801db0b8-1801db0e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801db0b8(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    if (*(longlong *)(param_1 + 0x5c60) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x5c60) + 0x28c);
    }
    *param_2 = uVar1;
    uVar1 = 0;
  }
  return uVar1;
}

