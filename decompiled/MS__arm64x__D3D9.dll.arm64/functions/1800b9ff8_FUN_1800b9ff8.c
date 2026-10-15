/*
 * FUN_1800b9ff8 at 1800b9ff8
 * undefined FUN_1800b9ff8(void)
 * Address ranges: 1800b9ff8-1800ba12b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1800b9ff8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0xed8) != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xed0) + uVar3 * 8);
      if ((*(int *)(lVar2 + 0x7c) == 1) && (uVar5 = 0, *(int *)(lVar2 + 0x80) != 0)) {
        do {
          uVar4 = 0;
          if (*(short *)(lVar2 + 0x3c) != 0) {
            do {
              uVar1 = uVar4 + uVar5 * 0x10;
              uVar4 = uVar4 + 1;
              *(undefined4 *)
               (*(longlong *)(*(longlong *)(lVar2 + 0xb0 + (ulonglong)uVar1 * 8) + 8) + 0xf0) = 0;
            } while (uVar4 < *(ushort *)(lVar2 + 0x3c));
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(lVar2 + 0x80));
      }
      uVar5 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0xed8));
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0xec8) != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xec0) + uVar3 * 8);
      if ((*(int *)(lVar2 + 0x7c) == 1) && (uVar5 = 0, *(int *)(lVar2 + 0x80) != 0)) {
        do {
          uVar4 = 0;
          if (*(short *)(lVar2 + 0x3c) != 0) {
            do {
              uVar1 = uVar4 + uVar5 * 0x10;
              uVar4 = uVar4 + 1;
              *(undefined4 *)
               (*(longlong *)(*(longlong *)(lVar2 + 0xb0 + (ulonglong)uVar1 * 8) + 8) + 0xf0) = 0;
            } while (uVar4 < *(ushort *)(lVar2 + 0x3c));
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(lVar2 + 0x80));
      }
      uVar5 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0xec8));
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0xef8) != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xef0) + uVar3 * 8);
      if (*(int *)(lVar2 + 0x54) == 1) {
        *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0xf0) = 0;
      }
      uVar5 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0xef8));
  }
  return;
}

