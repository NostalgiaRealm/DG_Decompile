/*
 * FUN_1003e55b at 1003e55b
 * undefined __stdcall FUN_1003e55b(int param_1, uint param_2, int param_3)
 * Address ranges: 1003e55b-1003e5fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e55b(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined1 local_40 [60];
  
  if (*(int *)(param_1 + 0x8e0) != 0) {
    FUN_1003cdb1(param_1);
    uVar3 = 0;
    if (param_2 != 0) {
      do {
        iVar1 = uVar3 * 0x18;
        if (*(int *)(param_3 + iVar1) == 0) {
          piVar2 = *(int **)(param_3 + 8 + iVar1);
          piVar2 = (int *)(**(code **)(*piVar2 + 0x28))(piVar2,local_40);
          FUN_10039b30(*(void **)(param_1 + 0x8e4),*(uint *)(param_3 + 8 + iVar1),
                       *(uint *)(param_3 + 0xc + iVar1),(uint)(*piVar2 == 0),
                       *(int *)(param_1 + 0x8e0),param_1,*(int *)(param_3 + 0x14 + iVar1),
                       *(int *)(param_1 + 0x938),*(int *)(param_1 + 0x93c));
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_2);
    }
  }
  FUN_1003ceaa(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x68))(*(int **)(param_1 + 0x638),param_2,param_3);
  return;
}

