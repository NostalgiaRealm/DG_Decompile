/*
 * FUN_1801dacf0 at 1801dacf0
 * undefined FUN_1801dacf0(void)
 * Address ranges: 1801dacf0-1801dadbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1801dacf0(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar2 = *(uint *)(param_1 + -0x5908);
  if (uVar2 != 0) {
    uVar10 = 0;
    uVar6 = uVar2;
    do {
      uVar4 = uVar6 + uVar10 >> 1;
      uVar8 = (ulonglong)uVar4;
      uVar9 = *(ulonglong *)(*(longlong *)(param_1 + -0x5910) + uVar8 * 0x18);
      if (uVar9 <= param_2) {
        if (param_2 <= uVar9) break;
        uVar10 = uVar4 + 1;
        uVar8 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar6;
      }
      uVar6 = uVar4;
    } while (uVar6 != uVar10);
    if ((((uint)uVar8 != uVar2) &&
        (puVar1 = (ulonglong *)(*(longlong *)(param_1 + -0x5910) + uVar8 * 0x18),
        *puVar1 == (ulonglong)param_2)) && (puVar1 = puVar1 + 2, puVar1 != (ulonglong *)0x0)) {
      uVar8 = *puVar1;
      goto LAB_1801dad78;
    }
  }
  uVar8 = param_1 - 0x5900;
LAB_1801dad78:
  lVar7 = 0;
  do {
    lVar5 = lVar7 * 4;
    uVar3 = *(undefined4 *)(uVar8 + lVar5);
    lVar7 = lVar7 + 1;
    *(char *)(param_3 + 2 + lVar5) = (char)uVar3;
    *(char *)(param_3 + lVar5) = (char)((uint)uVar3 >> 0x10);
    *(char *)(param_3 + 1 + lVar5) = (char)((uint)uVar3 >> 8);
    *(char *)(param_3 + 3 + lVar5) = (char)((uint)uVar3 >> 0x18);
  } while (lVar7 != 0x100);
  return 0;
}

