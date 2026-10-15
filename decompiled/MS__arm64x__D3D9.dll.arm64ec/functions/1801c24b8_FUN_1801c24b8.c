/*
 * FUN_1801c24b8 at 1801c24b8
 * undefined FUN_1801c24b8(void)
 * Address ranges: 1801c24b8-1801c24eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801c24b8(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = 0x8876086c;
  if ((param_2 < *(ushort *)(param_1 + -0x5c)) && (param_3 != (undefined8 *)0x0)) {
    uVar1 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + -0x58) + (ulonglong)param_2 * 8);
    uVar3 = *(undefined8 *)(lVar2 + 0x48);
    uVar5 = *(undefined8 *)(lVar2 + 0x60);
    uVar4 = *(undefined8 *)(lVar2 + 0x58);
    param_3[1] = *(undefined8 *)(lVar2 + 0x50);
    *param_3 = uVar3;
    param_3[3] = uVar5;
    param_3[2] = uVar4;
  }
  return uVar1;
}

