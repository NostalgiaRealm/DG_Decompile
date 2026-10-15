/*
 * FUN_10053169 at 10053169
 * undefined __stdcall FUN_10053169(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 10053169-100531e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10053169(int param_1,uint param_2,undefined4 *param_3)

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
          if (*(int *)(param_1 + 0x28 + uVar2 * 4) == param_3[uVar3]) goto LAB_100531a5;
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
      }
      if (uVar2 == uVar1) {
        FUN_100525c0(param_1);
        (**(code **)(**(int **)(param_1 + 0x638) + 0x70))
                  (*(int **)(param_1 + 0x638),param_2,param_3);
        *(undefined1 *)(param_1 + 0x620) = 1;
        *(uint *)(param_1 + 0x24) = param_2;
        FUN_10060d80((undefined4 *)(param_1 + 0x28),param_3,param_2 << 2);
        return;
      }
LAB_100531a5:
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return;
}

