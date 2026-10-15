/*
 * FUN_1008e560 at 1008e560
 * undefined __stdcall FUN_1008e560(undefined4 * param_1, uint param_2)
 * Address ranges: 1008e560-1008e591
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008e560(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 < 0x2b) {
    iVar1 = param_2 * 0x2c;
    *param_1 = *(undefined4 *)(&DAT_100dcd80 + iVar1);
    param_1[1] = *(undefined4 *)(&DAT_100dcd84 + iVar1);
    param_1[2] = *(undefined4 *)(&DAT_100dcd88 + iVar1);
    param_1[3] = *(undefined4 *)(&DAT_100dcd8c + iVar1);
  }
  return;
}

