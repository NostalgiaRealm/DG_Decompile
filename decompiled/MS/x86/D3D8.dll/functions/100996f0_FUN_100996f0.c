/*
 * FUN_100996f0 at 100996f0
 * undefined __stdcall FUN_100996f0(int param_1, uint param_2, int * param_3, int param_4, int * param_5)
 * Address ranges: 100996f0-100997da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100996f0(int param_1,uint param_2,int *param_3,int param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  bVar1 = true;
  if (param_4 == 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x4a8 + uVar3 * 4);
      if (uVar3 < param_2) {
        if (iVar2 != param_3[uVar3]) {
          *(int *)(param_1 + 0x4a8 + uVar3 * 4) = param_3[uVar3];
LAB_10099782:
          bVar1 = false;
        }
      }
      else if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x4a8 + uVar3 * 4) = 0;
        goto LAB_10099782;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 8);
  }
  else {
    uVar3 = 0;
    do {
      if (uVar3 < param_2) {
        iVar2 = *param_3 + *(int *)(param_1 + 0x950) * uVar3;
        if (*(int *)(param_1 + 0x4a8 + uVar3 * 4) != iVar2) {
          *(int *)(param_1 + 0x4a8 + uVar3 * 4) = iVar2;
          bVar1 = false;
        }
      }
      else if (*(int *)(param_1 + 0x4a8 + uVar3 * 4) != 0) {
        *(undefined4 *)(param_1 + 0x4a8 + uVar3 * 4) = 0;
        bVar1 = false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 8);
  }
  piVar4 = (int *)&DAT_100bf0cc;
  if (param_5 != (int *)0x0) {
    piVar4 = param_5;
  }
  if ((!bVar1) || (*piVar4 != *(int *)(param_1 + 0x4c8))) {
    FUN_10098377(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0xb8))
              (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
    *(int *)(param_1 + 0x4c8) = *piVar4;
    *(undefined1 *)(param_1 + 0x620) = 1;
  }
  return;
}

