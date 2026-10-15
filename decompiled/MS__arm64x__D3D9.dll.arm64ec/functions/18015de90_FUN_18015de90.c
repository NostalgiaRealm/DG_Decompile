/*
 * FUN_18015de90 at 18015de90
 * undefined FUN_18015de90(void)
 * Address ranges: 18015de90-18015ded3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_18015de90(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 == 8) || (iVar1 == 9)) {
LAB_18015decc:
    uVar2 = 4;
  }
  else {
    if (iVar1 != 10) {
      if (iVar1 == 0xb) goto LAB_18015decc;
      if (iVar1 != 0xc) {
        return 0;
      }
    }
    uVar2 = 8;
  }
  return uVar2;
}

