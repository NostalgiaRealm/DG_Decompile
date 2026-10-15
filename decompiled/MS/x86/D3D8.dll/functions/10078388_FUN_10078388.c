/*
 * FUN_10078388 at 10078388
 * undefined __stdcall FUN_10078388(undefined4 * param_1, uint param_2)
 * Address ranges: 10078388-100783b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10078388(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 < 0x1d) {
    iVar1 = param_2 * 0x2c;
    *param_1 = *(undefined4 *)(&DAT_100b8a58 + iVar1);
    param_1[1] = *(undefined4 *)(&DAT_100b8a5c + iVar1);
    param_1[2] = *(undefined4 *)(&DAT_100b8a60 + iVar1);
    param_1[3] = *(undefined4 *)(&DAT_100b8a64 + iVar1);
  }
  return;
}

