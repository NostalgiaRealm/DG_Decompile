/*
 * FUN_18001cd8c at 18001cd8c
 * undefined __fastcall FUN_18001cd8c(longlong * param_1)
 * Address ranges: 18001cd8c-18001cdac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001cd8c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  *(undefined4 *)(lVar1 + 0x2bcc) = *(undefined4 *)((longlong)param_1 + 0xc);
  *(int *)(lVar1 + 0x2bc8) = (int)lVar2;
  *(undefined1 *)(lVar1 + 0x2c7c) = 1;
  return;
}

