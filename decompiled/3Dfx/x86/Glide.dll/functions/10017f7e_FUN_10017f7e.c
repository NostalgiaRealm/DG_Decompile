/*
 * FUN_10017f7e at 10017f7e
 * undefined4 __fastcall FUN_10017f7e(int param_1)
 * Address ranges: 10017f7e-100180c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10017f7e(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar5 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x31b4);
  *puVar1 = 0;
  piVar2 = FUN_10050561((int *)(param_1 + 0x31b8),0,0x100);
  if (*(char *)(param_1 + 0x2bcb) == '\0') {
LAB_1001805e:
    uVar3 = CONCAT31((int3)((uint)piVar2 >> 8),1);
  }
  else {
    local_c = 0;
    local_8 = 0;
    uVar3 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x3188) + 0x60))
                      ((int *)**(undefined4 **)(param_1 + 0x3188),&local_c,puVar1);
    if (-1 < (int)uVar3) {
      local_14 = 4;
      local_10 = 0;
      do {
        iVar4 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x3188) + 0x60))
                          ((int *)**(undefined4 **)(param_1 + 0x3188),&local_14,
                           param_1 + 0x31b8 + uVar5 * 8);
        if (iVar4 < 0) goto joined_r0x1001807f;
        local_1c = 1;
        local_18 = 0;
        iVar4 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x3188) + 0x60))
                          ((int *)**(undefined4 **)(param_1 + 0x3188),&local_1c,
                           param_1 + 0x31bc + uVar5 * 8);
        if (iVar4 < 0) {
          piVar2 = *(int **)(param_1 + 0x31b8 + uVar5 * 8);
          (**(code **)(*piVar2 + 8))(piVar2);
          *(undefined4 *)(param_1 + 0x31b8 + uVar5 * 8) = 0;
          goto joined_r0x1001807f;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x20);
      if (uVar5 == 0x20) {
        FUN_10050561((int *)(param_1 + 0x2b58),0,0x30);
        piVar2 = FUN_10050561((int *)(param_1 + 0x2b88),0,0x30);
        goto LAB_1001805e;
      }
      do {
        piVar2 = *(int **)(param_1 + 0x31b0 + uVar5 * 8);
        (**(code **)(*piVar2 + 8))(piVar2);
        piVar2 = *(int **)(param_1 + 0x31b4 + uVar5 * 8);
        *(undefined4 *)(param_1 + 0x31b0 + uVar5 * 8) = 0;
        (**(code **)(*piVar2 + 8))(piVar2);
        *(undefined4 *)(param_1 + 0x31b4 + uVar5 * 8) = 0;
        uVar5 = uVar5 - 1;
joined_r0x1001807f:
      } while (uVar5 != 0);
      uVar3 = (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
      *puVar1 = 0;
    }
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}

