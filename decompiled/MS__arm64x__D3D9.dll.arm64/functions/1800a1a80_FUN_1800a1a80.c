/*
 * FUN_1800a1a80 at 1800a1a80
 * undefined FUN_1800a1a80(void)
 * Address ranges: 1800a1a80-1800a1ae7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1800a1a80(float param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  longlong lVar1;
  
  param_2 = param_2 + (ulonglong)param_3 * 0xc18;
  lVar1 = 0;
  do {
    *(short *)(param_4 + lVar1 * 2) =
         (short)(int)(*(float *)(param_2 + 0x100c0 + lVar1 * 0xc) * param_1);
    *(short *)(param_5 + lVar1 * 2) =
         (short)(int)(*(float *)(param_2 + 0x100c4 + lVar1 * 0xc) * param_1);
    *(short *)(param_6 + lVar1 * 2) =
         (short)(int)(*(float *)(param_2 + 0x100c8 + lVar1 * 0xc) * param_1);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x100);
  return;
}

