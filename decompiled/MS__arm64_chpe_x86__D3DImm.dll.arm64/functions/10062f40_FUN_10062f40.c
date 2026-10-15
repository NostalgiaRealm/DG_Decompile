/*
 * FUN_10062f40 at 10062f40
 * undefined FUN_10062f40(void)
 * Address ranges: 10062f40-10062fa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10062f40(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xa0);
  uVar3 = 0;
  do {
    if (uVar1 <= uVar3) {
      return 0;
    }
    iVar2 = FUN_10053c00(*(undefined4 *)(*(int *)(param_1 + 0x9c) + uVar3 * 4),param_2);
    uVar3 = uVar3 + 1;
  } while (iVar2 == 0);
  return iVar2;
}

