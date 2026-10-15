/*
 * FUN_100982b4 at 100982b4
 * undefined __fastcall FUN_100982b4(int param_1)
 * Address ranges: 100982b4-1009832e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100982b4(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = *(uint *)(param_1 + 0x914);
  *(undefined4 *)(param_1 + 0x914) = 0;
  if (uVar1 != 0) {
    do {
      FUN_1009eb0e(*(void **)(param_1 + 0x8e4),*(uint *)(param_1 + 0x760 + uVar3 * 4),'\x01');
      piVar2 = *(int **)(param_1 + 0x760 + uVar3 * 4);
      (**(code **)(*piVar2 + 8))(piVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x918);
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x918) = 0;
  if (uVar1 != 0) {
    do {
      FUN_1009ea70(*(void **)(param_1 + 0x8e4),*(uint *)(param_1 + 0x7e0 + uVar3 * 8),
                   *(undefined **)(param_1 + 0x7e4 + uVar3 * 8),'\x01');
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}

