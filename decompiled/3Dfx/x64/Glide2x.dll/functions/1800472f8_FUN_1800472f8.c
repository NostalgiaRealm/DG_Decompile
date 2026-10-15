/*
 * FUN_1800472f8 at 1800472f8
 * undefined __fastcall FUN_1800472f8(longlong param_1)
 * Address ranges: 1800472f8-180047345
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800472f8(longlong param_1)

{
  *(int *)(param_1 + 0x678) =
       *(int *)(param_1 + 0x678) + (-(uint)(*(char *)(param_1 + 0x674) != '\0') & 7) + 1;
  *(undefined1 *)(param_1 + 0x674) = 0;
  if (((*(int *)(param_1 + 0x680) <= *(int *)(param_1 + 0x678)) &&
      (*(longlong *)(param_1 + 0xb10) != 0)) && (*(int *)(param_1 + 0x684) == 0)) {
    FUN_18004782c(param_1 + 8,'\0');
  }
  return;
}

