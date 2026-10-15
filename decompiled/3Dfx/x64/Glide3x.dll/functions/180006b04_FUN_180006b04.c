/*
 * FUN_180006b04 at 180006b04
 * undefined __fastcall FUN_180006b04(longlong param_1)
 * Address ranges: 180006b04-180006b63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180006b04(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) {
      do {
        lVar1 = (longlong)iVar2;
        iVar2 = iVar2 + 1;
        *(int *)(*(longlong *)(param_1 + 0x18) + 0x330 + lVar1 * 0x4e8) = iVar3;
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x334 + lVar1 * 0x4e8) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x82f);
        iVar3 = iVar3 + *(int *)(*(longlong *)(param_1 + 0x30) + 0x82f);
      } while (iVar2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833));
    }
  }
  return;
}

