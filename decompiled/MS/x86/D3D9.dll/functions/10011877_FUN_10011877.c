/*
 * FUN_10011877 at 10011877
 * undefined4 __fastcall FUN_10011877(int param_1)
 * Address ranges: 10011877-100118f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10011877(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_1002b4f8(param_1);
  if ((char)uVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 != 3) {
      uVar1 = *(uint *)(param_1 + 0x34) >> 9;
      if ((iVar2 == 0) || (iVar2 == 1)) {
        uVar3 = 0;
        if ((*(uint *)(param_1 + 0x34) >> 4 & 1) != 0) {
          uVar3 = 3;
        }
      }
      else {
        uVar3 = 2;
        if (iVar2 == 2) {
          uVar3 = 3;
        }
      }
      if ((uVar1 & 1) != 0) {
        uVar3 = 1;
      }
      iVar2 = (**(code **)(**(int **)(param_1 + 0x44) + 0x14))
                        ((uint)((byte)uVar1 & 1) * 0x1000 + *(int *)(param_1 + 0x10),uVar3,
                         *(int *)(param_1 + 0x38) == 0x66);
      *(int *)(param_1 + 0x40) = iVar2;
    }
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

