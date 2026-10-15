/*
 * FUN_1000d710 at 1000d710
 * undefined FUN_1000d710(void)
 * Address ranges: 1000d710-1000d90f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1000d710(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  if (((*(uint *)(param_1 + 0xb0c) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar4 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar4 = true;
    iVar8 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar8 == 0) {
      FUN_10006560(0);
    }
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0xb20) != 0) {
    piVar1 = (int *)(param_1 + 0xad0);
    uVar5 = FUN_1001aa70(*(undefined4 *)*piVar1);
    puVar2 = (uint *)(param_1 + 0xad4);
    uVar10 = 0;
    if (*puVar2 != 0) {
      uVar9 = 1;
      do {
        uVar6 = FUN_1001a8f0(*(undefined4 *)(*piVar1 + uVar10 * 4));
        uVar10 = uVar10 + 1;
        uVar9 = uVar6 & 0xff & uVar9;
      } while (uVar10 < *puVar2);
      if (uVar9 == 0) {
        uVar3 = *(undefined4 *)*piVar1;
        uVar7 = FUN_10034310(uVar3);
        FUN_10034380(uVar3,uVar7);
        uVar10 = 0;
        if (*puVar2 != 0) {
          do {
            FUN_1001aa10(*(undefined4 *)(*piVar1 + uVar10 * 4),param_2 != 0);
            uVar10 = uVar10 + 1;
          } while (uVar10 < *puVar2);
        }
        goto LAB_1000d8cc;
      }
    }
    if (param_2 == 0) {
      iVar8 = FUN_10034310(*(undefined4 *)*piVar1);
    }
    else {
      iVar8 = *(int *)(param_1 + 0xb20);
    }
    FUN_10034380(*(undefined4 *)*piVar1,iVar8);
    uVar10 = 0;
    if (*puVar2 != 0) {
      do {
        FUN_1001aa10(*(undefined4 *)(*piVar1 + uVar10 * 4),0);
        uVar10 = uVar10 + 1;
      } while (uVar10 < *puVar2);
    }
  }
LAB_1000d8cc:
  if (bVar4) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar5;
}

