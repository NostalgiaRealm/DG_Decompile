/*
 * FUN_180196358 at 180196358
 * undefined FUN_180196358(void)
 * Address ranges: 180196358-1801963cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_180196358(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    piVar1 = (int *)&DAT_00000170;
    if (param_3 != 0) {
      piVar1 = (int *)(param_3 + 0x90);
    }
    if (*(int *)(param_2 + 0x90) == *piVar1) {
      piVar1 = (int *)&DAT_00000174;
      if (param_3 != 0) {
        piVar1 = (int *)(param_3 + 0x94);
      }
      if (*(int *)(param_2 + 0x94) == *piVar1) {
        piVar1 = (int *)&DAT_00000178;
        if (param_3 != 0) {
          piVar1 = (int *)(param_3 + 0x98);
        }
        if (*(int *)(param_2 + 0x98) == *piVar1) {
          return 1;
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

