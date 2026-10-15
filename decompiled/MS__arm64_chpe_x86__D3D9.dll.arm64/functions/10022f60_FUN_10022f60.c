/*
 * FUN_10022f60 at 10022f60
 * undefined FUN_10022f60(void)
 * Address ranges: 10022f60-10022fdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10022f60(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  do {
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar1 = uVar3 * 3 + param_1;
    if (((*(char *)(iVar1 + 3) != *param_2) || (*(char *)(iVar1 + 4) != param_2[1])) ||
       (iVar2 = 1, (*(byte *)(iVar1 + 5) & param_2[2]) == 0)) {
      iVar2 = 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  return iVar2;
}

