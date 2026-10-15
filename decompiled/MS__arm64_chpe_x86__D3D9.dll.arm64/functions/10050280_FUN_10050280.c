/*
 * FUN_10050280 at 10050280
 * undefined FUN_10050280(void)
 * Address ranges: 10050280-100503e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10050280(undefined8 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  puVar1 = (uint *)(param_1 + 1);
  if (*puVar1 != 0) {
    uVar8 = 0;
    puVar2 = (undefined4 *)((int)param_1 + 0x14);
    puVar3 = param_1 + 2;
    if (*puVar1 == 0) {
      iVar7 = 0;
      goto LAB_100502f4;
    }
    do {
      iVar7 = *(int *)((int)param_1 + 4) + uVar8 * 0x2a0 + 8;
LAB_100502f4:
      uVar6 = 0;
      do {
        iVar4 = *(int *)(iVar7 + 0x10 + uVar6 * 0x48);
        if (iVar4 != 0) {
          FUN_10109ac8(*(undefined4 *)puVar3,*puVar2,iVar4);
          FUN_10109ac8(*(undefined4 *)puVar3,*puVar2,*(undefined4 *)(iVar7 + uVar6 * 0x48 + 0x14));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 8);
      FUN_101322d0(*(undefined4 *)(iVar7 + 8));
      FUN_10051018(*(undefined4 *)(iVar7 + 4),*(undefined4 *)puVar3,*puVar2);
      puVar5 = *(undefined8 **)(iVar7 + 4);
      if (puVar5 != (undefined8 *)0x0) {
        FUN_101322d0(*(undefined4 *)puVar5);
        *puVar5 = 0;
        puVar5[1] = 0;
        FUN_10132260(puVar5,0x264);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *puVar1);
  }
  (*(code *)PTR_FUN_1016c06c)(param_1 + 3);
  FUN_101322d0(*(undefined4 *)param_1);
  *param_1 = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *puVar1 = 0;
  return;
}

