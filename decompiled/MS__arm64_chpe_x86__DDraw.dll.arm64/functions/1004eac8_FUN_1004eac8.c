/*
 * FUN_1004eac8 at 1004eac8
 * undefined FUN_1004eac8(void)
 * Address ranges: 1004eac8-1004eb43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004eac8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(iVar3 + 0xb8);
  if (iVar4 != 0) {
    do {
      iVar1 = *(int *)(iVar3 + 0xb4) + iVar4 * 0x18;
      if (*(int *)(iVar1 + -0x18) == param_1) {
        iVar2 = 0;
        if (*(int *)(iVar1 + -0x14) != -1) {
          iVar2 = iVar1 + -0x10;
        }
        FUN_1004edb0(param_1,iVar2);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

