/*
 * FUN_1800a8958 at 1800a8958
 * undefined FUN_1800a8958(void)
 * Address ranges: 1800a8958-1800a89d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1800a8958(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined1 *)(param_1 + 0x89) = 0;
  if (*(int *)(*(longlong *)(param_1 + 0xb0) + 0x54) == 1) {
    *(undefined1 *)(param_1 + 0x89) = 1;
    uVar3 = (uint)*(ushort *)(param_1 + 0x3c);
    if ((*(uint *)(param_1 + 0x70) & 0x400) != 0) {
      uVar3 = 1;
    }
    uVar1 = 0;
    if (*(uint *)(param_1 + 0x80) != 0) {
      do {
        uVar2 = 0;
        if (uVar3 != 0) {
          do {
            if (*(int *)(*(longlong *)(((longlong *)(param_1 + 0xb0))[uVar2 + uVar1 * 0x10] + 8) +
                        0xf0) != 1) {
              *(undefined1 *)(param_1 + 0x89) = 0;
              break;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar3);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x80));
    }
  }
  return;
}

