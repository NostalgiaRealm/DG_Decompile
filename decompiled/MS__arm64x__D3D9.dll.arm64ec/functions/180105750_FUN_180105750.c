/*
 * FUN_180105750 at 180105750
 * undefined FUN_180105750(void)
 * Address ranges: 180105750-180105793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_180105750(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 0x20;
  puVar2 = &DAT_18024e840;
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
  if (DAT_18024d8dc < DAT_18024d8d8) {
    *(code **)(DAT_18024d8d0 + (ulonglong)DAT_18024d8dc * 8) = FUN_180224468;
    DAT_18024d8dc = DAT_18024d8dc + 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

