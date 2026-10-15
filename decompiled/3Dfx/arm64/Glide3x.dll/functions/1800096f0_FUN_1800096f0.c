/*
 * FUN_1800096f0 at 1800096f0
 * undefined __cdecl FUN_1800096f0(longlong param_1)
 * Address ranges: 1800096f0-180009763
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800096f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) {
      do {
        *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x4e8 + 0x330) = iVar3;
        lVar1 = (longlong)iVar2;
        iVar2 = iVar2 + 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar1 * 0x4e8 + 0x334) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x82f);
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x82f) + iVar3;
      } while (iVar2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833));
    }
  }
  return;
}

