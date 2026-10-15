/*
 * FUN_10015aea at 10015aea
 * undefined __fastcall FUN_10015aea(int param_1, char * param_2)
 * Address ranges: 10015aea-10015b21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10015aea(int param_1,char *param_2)

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

