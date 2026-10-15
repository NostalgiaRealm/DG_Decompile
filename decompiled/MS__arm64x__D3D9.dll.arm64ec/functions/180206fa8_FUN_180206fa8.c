/*
 * FUN_180206fa8 at 180206fa8
 * undefined FUN_180206fa8(void)
 * Address ranges: 180206fa8-180206ff7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180206fa8(longlong param_1)

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
    FUN_180207560(param_1 + 8,0);
    return;
  }
  return;
}

