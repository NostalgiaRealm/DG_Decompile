/*
 * FUN_10003582 at 10003582
 * undefined __thiscall FUN_10003582(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 10003582-100035d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10003582(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x228;
  if ((&DAT_100df4d2)[iVar1] == '\0') {
    FUN_10002901(this,param_1);
  }
  *param_2 = *(undefined4 *)(&DAT_100df464 + iVar1);
  param_2[1] = *(undefined4 *)(&DAT_100df468 + iVar1);
  param_2[2] = *(undefined4 *)(&DAT_100df474 + iVar1);
  param_2[3] = *(undefined4 *)(&DAT_100deed8 + param_1 * 0x20);
  return;
}

