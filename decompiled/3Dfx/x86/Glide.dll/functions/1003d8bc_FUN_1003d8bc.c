/*
 * FUN_1003d8bc at 1003d8bc
 * undefined __stdcall FUN_1003d8bc(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1003d8bc-1003d937
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d8bc(int param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x24);
    do {
      uVar2 = 0;
      if (uVar1 != 0) {
        do {
          if (*(int *)(param_1 + 0x28 + uVar2 * 4) == param_3[uVar3]) goto LAB_1003d8f8;
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
      }
      if (uVar2 == uVar1) {
        FUN_1003ceaa(param_1);
        (**(code **)(**(int **)(param_1 + 0x638) + 0x70))
                  (*(int **)(param_1 + 0x638),param_2,param_3);
        *(undefined1 *)(param_1 + 0x620) = 1;
        *(uint *)(param_1 + 0x24) = param_2;
        FUN_100500b0((undefined4 *)(param_1 + 0x28),param_3,param_2 << 2);
        return;
      }
LAB_1003d8f8:
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return;
}

