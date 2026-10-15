/*
 * FUN_10003167 at 10003167
 * undefined __thiscall FUN_10003167(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 10003167-100031b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10003167(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x228;
  if ((&DAT_100ba90a)[iVar1] == '\0') {
    FUN_10002795(this,param_1);
  }
  *param_2 = *(undefined4 *)(&DAT_100ba89c + iVar1);
  param_2[1] = *(undefined4 *)(&DAT_100ba8a0 + iVar1);
  param_2[2] = *(undefined4 *)(&DAT_100ba8ac + iVar1);
  param_2[3] = *(undefined4 *)(&DAT_100ba1a0 + param_1 * 8);
  return;
}

