/*
 * FUN_140019e4c at 140019e4c
 * longlong __fastcall FUN_140019e4c(undefined8 * param_1, char * param_2)
 * Address ranges: 140019e4c-140019e93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_140019e4c(undefined8 *param_1,char *param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_140024d20(param_2);
  FUN_140024620(param_1,(undefined8 *)param_2,uVar1 & 0xffffffff);
  *(undefined1 *)((uVar1 & 0xffffffff) + (longlong)param_1) = 0;
  return (longlong)param_1 + (uVar1 & 0xffffffff) + 1;
}

