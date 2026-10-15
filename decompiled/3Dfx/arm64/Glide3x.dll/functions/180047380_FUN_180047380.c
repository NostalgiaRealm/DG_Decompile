/*
 * FUN_180047380 at 180047380
 * undefined __cdecl FUN_180047380(undefined4 * param_1, int * param_2)
 * Address ranges: 180047380-1800473f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047380(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  iVar1 = *param_2;
  uVar2 = 5;
  if (iVar1 != 3) {
    uVar2 = 0;
  }
  if (iVar1 - 2U < 2) {
    puVar3 = &DAT_180068f98;
  }
  else if (iVar1 == 1) {
    puVar3 = &DAT_180068f9c;
  }
  else {
    if (iVar1 != 4) {
      puVar3 = &DAT_180068fa8;
      uVar4 = 3;
      goto LAB_1800473e0;
    }
    puVar3 = &DAT_180068fa0;
  }
  uVar4 = 1;
LAB_1800473e0:
  *(undefined **)(param_1 + 2) = puVar3;
  *(bool *)(param_1 + 4) = iVar1 == 0;
  *param_1 = uVar2;
  param_1[1] = uVar4;
  return;
}

