/*
 * FUN_180020a50 at 180020a50
 * undefined __cdecl FUN_180020a50(longlong * param_1)
 * Address ranges: 180020a50-180020a73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020a50(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
  *(int *)(lVar1 + 0x2bc8) = (int)param_1[1];
  *(undefined4 *)(lVar1 + 0x2bcc) = uVar2;
  *(undefined1 *)(lVar1 + 0x2c7c) = 1;
  return;
}

