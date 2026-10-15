/*
 * FUN_10059020 at 10059020
 * undefined FUN_10059020(void)
 * Address ranges: 10059020-1005909b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10059020(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    iVar3 = *(int *)(param_1 + 0x20 + uVar4 * 0x1c);
    if (iVar3 != 0) {
      iVar1 = param_1 + 8 + uVar4 * 0x1c;
      iVar2 = 0;
      if (param_1 != 0) {
        iVar2 = param_1 + -0x9dc;
      }
      FUN_10050e70(iVar2,iVar1,iVar3);
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  return;
}

