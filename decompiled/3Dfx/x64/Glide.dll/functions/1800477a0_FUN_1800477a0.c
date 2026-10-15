/*
 * FUN_1800477a0 at 1800477a0
 * undefined __fastcall FUN_1800477a0(longlong param_1)
 * Address ranges: 1800477a0-1800477ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800477a0(longlong param_1)

{
  *(int *)(param_1 + 0x678) =
       *(int *)(param_1 + 0x678) + (-(uint)(*(char *)(param_1 + 0x674) != '\0') & 7) + 1;
  *(undefined1 *)(param_1 + 0x674) = 0;
  if (((*(int *)(param_1 + 0x680) <= *(int *)(param_1 + 0x678)) &&
      (*(longlong *)(param_1 + 0xb10) != 0)) && (*(int *)(param_1 + 0x684) == 0)) {
    FUN_180047cd4(param_1 + 8,'\0');
  }
  return;
}

