/*
 * FUN_18004b630 at 18004b630
 * undefined __cdecl FUN_18004b630(longlong param_1)
 * Address ranges: 18004b630-18004b67f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b630(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x674);
  *(undefined1 *)(param_1 + 0x674) = 0;
  iVar2 = 8;
  if (cVar1 == '\0') {
    iVar2 = 1;
  }
  iVar2 = iVar2 + *(int *)(param_1 + 0x678);
  *(int *)(param_1 + 0x678) = iVar2;
  if (((*(int *)(param_1 + 0x680) <= iVar2) && (*(longlong *)(param_1 + 0xb10) != 0)) &&
     (*(int *)(param_1 + 0x684) == 0)) {
    FUN_18004baf0(param_1 + 8,0);
    return;
  }
  return;
}

