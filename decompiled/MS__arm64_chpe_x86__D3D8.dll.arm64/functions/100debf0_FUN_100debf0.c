/*
 * FUN_100debf0 at 100debf0
 * undefined FUN_100debf0(void)
 * Address ranges: 100debf0-100dec9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_100debf0(int param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  uVar2 = (*(code *)PTR_FUN_10134070)(param_1 + 0x4a0);
  if (*(uint *)(param_1 + 0x4bc) != 0) {
    uVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x4b8) + uVar3 * 4);
      if (*piVar1 == param_3) {
        FUN_100dc3d8(uVar2,piVar1,param_2,0);
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x4bc));
  }
  (*(code *)PTR_FUN_101340bc)(param_1 + 0x4a0);
  return param_2;
}

