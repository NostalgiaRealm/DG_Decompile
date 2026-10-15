/*
 * FUN_1801fc3c0 at 1801fc3c0
 * undefined FUN_1801fc3c0(void)
 * Address ranges: 1801fc3c0-1801fc41f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1801fc3c0(longlong param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x480) + (ulonglong)param_2 * 0x18c0 + 0x6cc);
  if (iVar1 == 0xa000) {
    uVar2 = 1;
  }
  else if (iVar1 == 0xa100) {
    uVar2 = 2;
  }
  else if (iVar1 == 0xb000) {
    uVar2 = 3;
  }
  else if (iVar1 == 0xb100) {
    uVar2 = 4;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

