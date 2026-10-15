/*
 * FUN_180105720 at 180105720
 * undefined FUN_180105720(void)
 * Address ranges: 180105720-18010574b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_180105720(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  longlong lVar3;
  
  puVar2 = &DAT_18024e330;
  lVar3 = 0x20;
  do {
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    lVar3 = lVar3 + -1;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    puVar2 = puVar2 + 0x28;
  } while (lVar3 != 0);
  if (DAT_18024d8dc < DAT_18024d8d8) {
    *(code **)(DAT_18024d8d0 + (ulonglong)DAT_18024d8dc * 8) = FUN_180224418;
    DAT_18024d8dc = DAT_18024d8dc + 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

