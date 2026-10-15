/*
 * FUN_100bc1be at 100bc1be
 * undefined __stdcall FUN_100bc1be(int param_1, uint param_2, int param_3)
 * Address ranges: 100bc1be-100bc25e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bc1be(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined1 local_40 [60];
  
  if (*(int *)(param_1 + 0x8e0) != 0) {
    FUN_100ba856(param_1);
    uVar3 = 0;
    if (param_2 != 0) {
      do {
        iVar1 = uVar3 * 0x18;
        if (*(int *)(param_3 + iVar1) == 0) {
          piVar2 = *(int **)(param_3 + 8 + iVar1);
          piVar2 = (int *)(**(code **)(*piVar2 + 0x28))(piVar2,local_40);
          FUN_100c133b(*(void **)(param_1 + 0x8e4),*(uint *)(param_3 + 8 + iVar1),
                       *(uint *)(param_3 + 0xc + iVar1),(uint)(*piVar2 == 0),
                       *(int *)(param_1 + 0x8e0),param_1,*(int *)(param_3 + 0x14 + iVar1),
                       *(int *)(param_1 + 0x938),*(int *)(param_1 + 0x93c));
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_2);
    }
  }
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x68))(*(int **)(param_1 + 0x638),param_2,param_3);
  return;
}

