/*
 * FUN_10011c07 at 10011c07
 * undefined __fastcall FUN_10011c07(int param_1, char * param_2)
 * Address ranges: 10011c07-10011c3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10011c07(int param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = false;
  uVar3 = 0;
  do {
    if (bVar1) {
      return;
    }
    iVar2 = uVar3 * 3;
    if (((*(char *)(param_1 + 3 + iVar2) == *param_2) &&
        (*(char *)(param_1 + 4 + iVar2) == param_2[1])) &&
       ((param_2[2] & *(byte *)(param_1 + 5 + iVar2)) != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  return;
}

