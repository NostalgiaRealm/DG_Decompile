/*
 * FUN_10006eb0 at 10006eb0
 * undefined FUN_10006eb0(void)
 * Address ranges: 10006eb0-10006f57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10006eb0(int param_1,int param_2,undefined4 param_3,char param_4,int param_5,
                undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_10003bf0(*(undefined4 *)(param_1 + 0xacc),param_2,*(undefined4 *)(param_1 + 0xb04),
                       *(undefined4 *)(param_1 + 0xb08),param_3,param_5,param_6,0);
  if (-1 < iVar2) {
    if (((*(char *)(param_5 + 0x6d) == '\0') && (param_4 == '\0')) &&
       ((&DAT_10138254)[param_2 * 8] != '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar2 = -0x7789f796;
    if (bVar1) {
      iVar2 = 0;
    }
  }
  return iVar2;
}

