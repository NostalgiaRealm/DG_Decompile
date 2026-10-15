/*
 * FUN_1800e25b4 at 1800e25b4
 * undefined __fastcall FUN_1800e25b4(longlong param_1)
 * Address ranges: 1800e25b4-1800e2601
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e25b4(longlong param_1)

{
  *(int *)(param_1 + 0x678) =
       *(int *)(param_1 + 0x678) + (-(uint)(*(char *)(param_1 + 0x674) != '\0') & 7) + 1;
  *(undefined1 *)(param_1 + 0x674) = 0;
  if (((*(int *)(param_1 + 0x680) <= *(int *)(param_1 + 0x678)) &&
      (*(longlong *)(param_1 + 0xb10) != 0)) && (*(int *)(param_1 + 0x684) == 0)) {
    FUN_1800e2ae8(param_1 + 8,'\0');
  }
  return;
}

