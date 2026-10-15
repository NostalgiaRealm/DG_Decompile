/*
 * FUN_180063908 at 180063908
 * undefined __fastcall FUN_180063908(longlong * param_1, float param_2, undefined1 param_3)
 * Address ranges: 180063908-18006397c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180063908(longlong *param_1,float param_2,undefined1 param_3)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  iVar1 = (int)param_2;
  *(undefined1 *)((longlong)param_1 + 0xeac) = param_3;
  *(float *)(param_1 + 0x1d5) = param_2;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  else if (8 < iVar1) {
    iVar1 = 8;
  }
  *(int *)(param_1 + 0xd2d) = iVar1;
  *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
  *(int *)(param_1 + 0xa37) = iVar1;
  *(undefined1 *)((longlong)param_1 + 0xf6b4) = 1;
  return;
}

