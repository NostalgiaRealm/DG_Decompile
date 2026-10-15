/*
 * FUN_1800016a0 at 1800016a0
 * undefined FUN_1800016a0(void)
 * Address ranges: 1800016a0-1800016e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1800016a0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 0x20;
  puVar2 = &DAT_180253850;
  do {
    puVar2[0x2f] = 0;
    puVar2[0x30] = 0;
    puVar2[0x31] = 0;
    puVar2[0x32] = 0;
    lVar3 = lVar3 + -1;
    puVar2[0x33] = 0;
    puVar2[0x34] = 0;
    *(undefined4 *)(puVar2 + 0x35) = 0;
    puVar2[0x45] = 0;
    puVar2[0x46] = 0;
    puVar2[0x47] = 0;
    puVar2[0x48] = 0;
    puVar2[0x49] = 0;
    puVar2[0x4a] = 0;
    puVar2 = puVar2 + 0x4b;
  } while (lVar3 != 0);
  if (DAT_18024d8ec < DAT_18024d8e8) {
    *(code **)(DAT_18024d8e0 + (ulonglong)DAT_18024d8ec * 8) = FUN_180103ad8;
    DAT_18024d8ec = DAT_18024d8ec + 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

