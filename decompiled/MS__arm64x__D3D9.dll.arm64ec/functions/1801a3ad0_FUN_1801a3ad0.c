/*
 * FUN_1801a3ad0 at 1801a3ad0
 * undefined FUN_1801a3ad0(void)
 * Address ranges: 1801a3ad0-1801a3aff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

bool FUN_1801a3ad0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    bVar2 = true;
  }
  else {
    piVar1 = (int *)&DAT_000001a0;
    if (param_3 != 0) {
      piVar1 = (int *)(param_3 + 0xa0);
    }
    bVar2 = *(int *)(param_2 + 0xa0) == *piVar1;
  }
  return bVar2;
}

