/*
 * FUN_1800cb070 at 1800cb070
 * undefined FUN_1800cb070(void)
 * Address ranges: 1800cb070-1800cb0af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1800cb070(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = 0x8876086c;
  if ((param_2 < *(ushort *)(param_1 + -0xdc)) && (param_3 != (undefined8 *)0x0)) {
    uVar1 = 0;
    lVar2 = *(longlong *)(param_1 + (ulonglong)param_2 * 8 + -0xd8);
    uVar3 = *(undefined8 *)(lVar2 + 0x98);
    param_3[1] = *(undefined8 *)(lVar2 + 0xa0);
    *param_3 = uVar3;
    param_3[2] = *(undefined8 *)(lVar2 + 0xa8);
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(lVar2 + 0xb0);
  }
  return uVar1;
}

