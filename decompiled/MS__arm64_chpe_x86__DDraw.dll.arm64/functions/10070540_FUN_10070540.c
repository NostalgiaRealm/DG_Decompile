/*
 * FUN_10070540 at 10070540
 * undefined FUN_10070540(void)
 * Address ranges: 10070540-100705eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_10070540(int param_1,undefined8 *param_2,int param_3)

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
  uVar2 = (*(code *)PTR_FUN_100ba0a0)(param_1 + 0x4a0);
  if (*(uint *)(param_1 + 0x4bc) != 0) {
    uVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x4b8) + uVar3 * 4);
      if (*piVar1 == param_3) {
        FUN_1006dd28(uVar2,piVar1,param_2,0);
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x4bc));
  }
  (*(code *)PTR_FUN_100ba0f0)(param_1 + 0x4a0);
  return param_2;
}

