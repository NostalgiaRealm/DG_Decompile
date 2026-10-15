/*
 * FUN_1801b9420 at 1801b9420
 * undefined FUN_1801b9420(void)
 * Address ranges: 1801b9420-1801b960f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1801b9420(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x23) = *(undefined1 *)(param_2 + 0x23);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9e) = *(undefined4 *)(param_2 + 0x9e);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xae) = *(undefined4 *)(param_2 + 0xae);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xb2) = *(undefined4 *)(param_2 + 0xb2);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xb6) = *(undefined4 *)(param_2 + 0xb6);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xba) = *(undefined4 *)(param_2 + 0xba);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xca) = *(undefined4 *)(param_2 + 0xca);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xda) = *(undefined4 *)(param_2 + 0xda);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xde) = *(undefined4 *)(param_2 + 0xde);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0xe6) = *(undefined1 *)(param_2 + 0xe6);
  lVar3 = *(longlong *)(param_1 + 8);
  if (((*(int *)(lVar3 + 8) != *(int *)(param_2 + 8)) ||
      (*(int *)(lVar3 + 0xc2) != *(int *)(param_2 + 0xc2))) ||
     (*(int *)(lVar3 + 0xc6) != *(int *)(param_2 + 0xc6))) {
    *(int *)(lVar3 + 8) = *(int *)(param_2 + 8);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc2) = *(undefined4 *)(param_2 + 0xc2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc6) = *(undefined4 *)(param_2 + 0xc6);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x100b8) != 0) {
      do {
        uVar1 = (int)uVar2 + 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x100b0) + uVar2 * 0x30 + 0x20) =
             *(undefined4 *)(param_2 + 8);
        *(uint *)(*(longlong *)(param_1 + 0x100b0) + uVar2 * 0x30 + 0x18) =
             *(uint *)(param_2 + 0xc6) & 1;
        *(uint *)(*(longlong *)(param_1 + 0x100b0) + uVar2 * 0x30 + 0x14) =
             *(uint *)(param_2 + 0xc2) >> 2 & 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x100b8));
    }
  }
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x84) = *(undefined1 *)(param_2 + 0x84);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x86) = *(undefined1 *)(param_2 + 0x86);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x83) = *(undefined1 *)(param_2 + 0x83);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1cf) = *(undefined4 *)(param_2 + 0x1cf);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1cb) = *(undefined4 *)(param_2 + 0x1cb);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1d3) = *(undefined4 *)(param_2 + 0x1d3);
  return;
}

