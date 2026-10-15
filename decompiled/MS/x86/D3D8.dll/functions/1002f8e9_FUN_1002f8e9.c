/*
 * FUN_1002f8e9 at 1002f8e9
 * uint __fastcall FUN_1002f8e9(int param_1)
 * Address ranges: 1002f8e9-1002f90c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1002f8e9(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  piVar1 = *(int **)(param_1 + 0x10);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar1 + 0x20))(piVar1);
    uVar3 = (uint)((ulonglong)uVar4 >> 0x20);
    uVar2 = (uint)uVar4;
    if ((uVar3 <= *(uint *)(param_1 + 0x1c)) &&
       ((uVar3 < *(uint *)(param_1 + 0x1c) || (uVar2 < *(uint *)(param_1 + 0x18))))) {
      return uVar2 & 0xffffff00;
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

