/*
 * FUN_1801d4548 at 1801d4548
 * undefined FUN_1801d4548(void)
 * Address ranges: 1801d4548-1801d46db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1801d4548(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  bVar3 = *(int *)(param_1 + 0xeb8) != 0;
  uVar4 = 0;
  bVar2 = bVar3;
  if (*(uint *)(param_1 + 0xed8) != 0) {
    do {
      bVar2 = true;
      if (bVar3) break;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xed0) + uVar4 * 8);
      if ((*(int *)(lVar5 + 0x7c) == 0) && (*(int *)(lVar5 + 0xa0) != 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
      bVar2 = bVar3;
    } while (uVar1 < *(uint *)(param_1 + 0xed8));
  }
  uVar4 = 0;
  bVar3 = bVar2;
  if (*(uint *)(param_1 + 0xec8) != 0) {
    do {
      bVar3 = true;
      if (bVar2) break;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xec0) + uVar4 * 8);
      if ((*(int *)(lVar5 + 0x7c) == 0) && (*(int *)(lVar5 + 0xa0) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
      bVar3 = bVar2;
    } while (uVar1 < *(uint *)(param_1 + 0xec8));
  }
  uVar4 = 0;
  bVar2 = bVar3;
  if (*(uint *)(param_1 + 0xee8) != 0) {
    do {
      bVar2 = true;
      if (bVar3) break;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xee0) + uVar4 * 8);
      if ((*(int *)(lVar5 + 0x100) == 0) && (*(int *)(lVar5 + 0x120) != 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
      bVar2 = bVar3;
    } while (uVar1 < *(uint *)(param_1 + 0xee8));
  }
  uVar4 = 0;
  bVar3 = bVar2;
  if (*(uint *)(param_1 + 0xef8) != 0) {
    do {
      bVar3 = true;
      if (bVar2) break;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xef0) + uVar4 * 8);
      if ((*(int *)(lVar5 + 0x54) == 0) && (*(int *)(lVar5 + 0xa8) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
      bVar3 = bVar2;
    } while (uVar1 < *(uint *)(param_1 + 0xef8));
  }
  uVar4 = 0;
  bVar2 = bVar3;
  if (*(uint *)(param_1 + 0xf08) != 0) {
    do {
      bVar2 = true;
      if (bVar3) break;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xf00) + uVar4 * 8);
      if ((*(int *)(lVar5 + 0x5c) == 0) && (*(int *)(lVar5 + 0x98) != 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
      bVar2 = bVar3;
    } while (uVar1 < *(uint *)(param_1 + 0xf08));
  }
  uVar4 = 0;
  if (*(uint *)(param_1 + 0xf18) != 0) {
    do {
      if (bVar2) {
        return;
      }
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xf10) + uVar4 * 8);
      if ((*(int *)(lVar5 + 0x58) == 0) && (*(int *)(lVar5 + 0x80) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xf18));
  }
  return;
}

