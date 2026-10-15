/*
 * FUN_1000567d at 1000567d
 * undefined4 __fastcall FUN_1000567d(int param_1)
 * Address ranges: 1000567d-1000577e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000567d(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_EAX;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  int *piVar6;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar1 = *(int *)(iVar5 + 0x764);
    if ((((iVar1 == 0) || (iVar1 == 3)) || (iVar1 == 5)) || (iVar1 == 6)) {
      *(undefined1 *)(iVar5 + 0x78a) = 1;
    }
    piVar6 = (int *)(*(int *)(param_1 + 0x1c) + 0x764);
    iVar1 = *piVar6;
    if (iVar1 == 0) {
      uVar3 = FUN_1002def0();
      iVar5 = extraout_ECX;
      if ((char)uVar3 == '\0') goto LAB_100056ec;
      piVar6 = (int *)(*(int *)(param_1 + 0x1c) + 0x764);
LAB_100056d1:
      piVar6 = FUN_1003cbb8(iVar5,(int)piVar6);
    }
    else {
      if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_100056d1;
LAB_100056ec:
      piVar6 = FUN_1003cee8(iVar5,(void *)(*(int *)(param_1 + 0x1c) + 0x764));
    }
    *(int **)(param_1 + 0x18) = piVar6;
    uVar4 = 0;
    if (piVar6 != (int *)0x0) {
      piVar2 = *(int **)(param_1 + 0x1c);
      iVar5 = *piVar6;
      uVar3 = (**(code **)(*piVar2 + 0x30))(&DAT_10057250);
      uVar4 = (**(code **)(iVar5 + 4))(piVar2 + 0x1d9,uVar3);
      if ((char)uVar4 != '\0') {
        uVar4 = (**(code **)(**(int **)(param_1 + 0x18) + 8))();
        if ((char)uVar4 != '\0') {
          iVar5 = (**(code **)(**(int **)(param_1 + 0x18) + 0x34))();
          uVar4 = 0;
          if (iVar5 != 0) {
            in_EAX = (**(code **)(**(int **)(param_1 + 0x18) + 0x38))(0);
            *(undefined4 *)(param_1 + 0x10) = in_EAX;
            iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x76c);
            *(uint *)(param_1 + 0x14) = -(uint)(iVar5 != 0) & iVar5 - 1U;
            goto LAB_10005760;
          }
        }
        if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
          uVar4 = (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
    }
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
LAB_10005760:
    uVar4 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  return uVar4;
}

