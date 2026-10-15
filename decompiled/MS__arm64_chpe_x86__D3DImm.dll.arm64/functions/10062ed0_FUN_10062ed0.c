/*
 * FUN_10062ed0 at 10062ed0
 * undefined FUN_10062ed0(void)
 * Address ranges: 10062ed0-10062f37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10062ed0(int param_1,undefined4 param_2)

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
    iVar2 = FUN_10053bb0(*(undefined4 *)(*(int *)(param_1 + 0x9c) + uVar3 * 4),param_2);
    uVar3 = uVar3 + 1;
  } while (iVar2 == 0);
  return iVar2;
}

