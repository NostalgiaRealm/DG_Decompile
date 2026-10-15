/*
 * FUN_1009832f at 1009832f
 * undefined __fastcall FUN_1009832f(int param_1)
 * Address ranges: 1009832f-10098376
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009832f(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(char *)(param_1 + 0x620) != '\0') {
    iVar1 = 8;
  }
  iVar1 = *(int *)(param_1 + 0x624) + iVar1;
  *(int *)(param_1 + 0x624) = iVar1;
  *(undefined1 *)(param_1 + 0x620) = 0;
  if (((*(int *)(param_1 + 0x630) <= iVar1) && (*(int *)(param_1 + 0x8e0) != 0)) &&
     (*(int *)(param_1 + 0x634) == 0)) {
    FUN_10098768((void *)(param_1 + 4),'\0');
  }
  return;
}

