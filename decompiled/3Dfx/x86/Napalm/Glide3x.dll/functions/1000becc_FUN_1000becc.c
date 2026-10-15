/*
 * FUN_1000becc at 1000becc
 * undefined4 __fastcall FUN_1000becc(int param_1)
 * Address ranges: 1000becc-1000c015
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000becc(int param_1)

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
  puVar1 = (undefined4 *)(param_1 + 0x36b4);
  *puVar1 = 0;
  piVar2 = FUN_100561f1((int *)(param_1 + 0x36b8),0,0x100);
  if (*(char *)(param_1 + 0x2db3) == '\0') {
LAB_1000bfac:
    uVar3 = CONCAT31((int3)((uint)piVar2 >> 8),1);
  }
  else {
    local_c = 0;
    local_8 = 0;
    uVar3 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x3688) + 0x60))
                      ((int *)**(undefined4 **)(param_1 + 0x3688),&local_c,puVar1);
    if (-1 < (int)uVar3) {
      local_14 = 4;
      local_10 = 0;
      do {
        iVar4 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x3688) + 0x60))
                          ((int *)**(undefined4 **)(param_1 + 0x3688),&local_14,
                           param_1 + 0x36b8 + uVar5 * 8);
        if (iVar4 < 0) goto joined_r0x1000bfcd;
        local_1c = 1;
        local_18 = 0;
        iVar4 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x3688) + 0x60))
                          ((int *)**(undefined4 **)(param_1 + 0x3688),&local_1c,
                           param_1 + 0x36bc + uVar5 * 8);
        if (iVar4 < 0) {
          piVar2 = *(int **)(param_1 + 0x36b8 + uVar5 * 8);
          (**(code **)(*piVar2 + 8))(piVar2);
          *(undefined4 *)(param_1 + 0x36b8 + uVar5 * 8) = 0;
          goto joined_r0x1000bfcd;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x20);
      if (uVar5 == 0x20) {
        FUN_100561f1((int *)(param_1 + 0x2d40),0,0x30);
        piVar2 = FUN_100561f1((int *)(param_1 + 0x2d70),0,0x30);
        goto LAB_1000bfac;
      }
      do {
        piVar2 = *(int **)(param_1 + 14000 + uVar5 * 8);
        (**(code **)(*piVar2 + 8))(piVar2);
        piVar2 = *(int **)(param_1 + 0x36b4 + uVar5 * 8);
        *(undefined4 *)(param_1 + 14000 + uVar5 * 8) = 0;
        (**(code **)(*piVar2 + 8))(piVar2);
        *(undefined4 *)(param_1 + 0x36b4 + uVar5 * 8) = 0;
        uVar5 = uVar5 - 1;
joined_r0x1000bfcd:
      } while (uVar5 != 0);
      uVar3 = (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
      *puVar1 = 0;
    }
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}

