/*
 * FUN_10014ac1 at 10014ac1
 * undefined4 __fastcall FUN_10014ac1(int param_1)
 * Address ranges: 10014ac1-10014b29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10014ac1(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = FUN_1002b4f8(param_1);
  if ((char)uVar1 != '\0') {
    iVar3 = *(int *)(param_1 + 0x40);
    if ((((iVar3 == 0) || (iVar3 == 1)) && (uVar1 = *(uint *)(param_1 + 0x34), (uVar1 & 0x10) == 0))
       && (*(char *)(param_1 + 0x60) == '\0')) {
      uVar2 = 2;
      if (iVar3 == 1) {
        uVar2 = 0;
      }
      bVar4 = (uVar1 >> 9 & 1) != 0;
      if (bVar4) {
        uVar2 = 1;
      }
      iVar3 = 0x10;
      if (bVar4) {
        iVar3 = 0x1000;
      }
      uVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0x10))
                        (iVar3 + *(int *)(param_1 + 0x10),uVar2);
      *(uint *)(param_1 + 0x44) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

