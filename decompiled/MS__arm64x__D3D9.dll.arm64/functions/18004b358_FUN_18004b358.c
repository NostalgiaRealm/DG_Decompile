/*
 * FUN_18004b358 at 18004b358
 * undefined FUN_18004b358(void)
 * Address ranges: 18004b358-18004b3f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_18004b358(longlong param_1,uint param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = param_1 + (ulonglong)param_2 * 8;
  if (*(longlong *)(lVar1 + 0xffe0) != 0) {
    *(undefined8 *)(*(longlong *)(lVar1 + 0xffe0) + 0x20) = 0;
  }
  lVar2 = param_1 + (ulonglong)param_2 * 4;
  *(longlong *)(lVar1 + 0xffe0) = param_3;
  *(undefined4 *)(lVar2 + 0x10068) = param_4;
  *(undefined4 *)(lVar2 + 0x100a8) = param_5;
  uVar4 = 1 << (ulonglong)(param_2 & 0x1f);
  *(uint *)(param_1 + 0x100e8) = *(uint *)(param_1 + 0x100e8) | uVar4;
  uVar3 = *(uint *)(param_1 + 0x10100) & (uVar4 ^ 0xffffffff);
  *(uint *)(param_1 + 0x10100) = uVar3;
  if (param_3 != 0) {
    if (*(char *)(*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar1 + 0xffe0) + 0x40) +
                   (ulonglong)*(uint *)(*(longlong *)(lVar1 + 0xffe0) + 0x54) * 0x10) + 0x3c) ==
        '\0') {
      uVar4 = 0;
    }
    *(uint *)(param_1 + 0x10100) = uVar4 | uVar3;
    lVar2 = 0;
    if (param_1 != 0) {
      lVar2 = param_1 + 0xf6d0;
    }
    *(longlong *)(*(longlong *)(lVar1 + 0xffe0) + 0x20) = lVar2;
  }
  return;
}

