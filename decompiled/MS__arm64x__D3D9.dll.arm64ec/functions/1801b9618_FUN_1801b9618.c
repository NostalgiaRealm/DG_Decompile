/*
 * FUN_1801b9618 at 1801b9618
 * undefined FUN_1801b9618(void)
 * Address ranges: 1801b9618-1801b9643
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 * FUN_1801b9618(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 < 0x2b) {
    uVar1 = *(undefined8 *)(&DAT_180248440 + (longlong)(int)param_3 * 0x2c);
    param_2[1] = *(undefined8 *)(&DAT_180248448 + (longlong)(int)param_3 * 0x2c);
    *param_2 = uVar1;
  }
  return param_2;
}

