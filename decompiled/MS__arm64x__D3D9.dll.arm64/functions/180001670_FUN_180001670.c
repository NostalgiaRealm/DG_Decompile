/*
 * FUN_180001670 at 180001670
 * undefined FUN_180001670(void)
 * Address ranges: 180001670-18000169b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_180001670(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  longlong lVar3;
  
  puVar2 = &DAT_180253340;
  lVar3 = 0x20;
  do {
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    lVar3 = lVar3 + -1;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    puVar2 = puVar2 + 0x28;
  } while (lVar3 != 0);
  if (DAT_18024d8ec < DAT_18024d8e8) {
    *(code **)(DAT_18024d8e0 + (ulonglong)DAT_18024d8ec * 8) = FUN_180103a88;
    DAT_18024d8ec = DAT_18024d8ec + 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

