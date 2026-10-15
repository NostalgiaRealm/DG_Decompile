/*
 * FUN_10015968 at 10015968
 * undefined FUN_10015968(void)
 * Address ranges: 10015968-10015baf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10015968(int param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint local_70;
  int local_6c;
  int *piStack_68;
  undefined4 local_60 [2];
  undefined4 local_58;
  int local_54;
  
  piVar1 = (int *)(param_1 + 0x20);
  puVar2 = (uint *)(param_1 + 0x28);
  piVar1[0] = 0;
  piVar1[1] = 0;
  puVar2[0] = 0;
  puVar2[1] = 0;
  iVar6 = param_1 + 0x24;
  piVar8 = (int *)(param_1 + 0x2c);
  local_70 = param_2;
  iVar3 = (*(code *)PTR_FUN_100a01a0)(param_2);
  if ((iVar3 == 0) && (local_70 = (*(code *)PTR_FUN_100a0164)(), local_70 == 0)) {
    uVar4 = (*(code *)PTR_FUN_100a0058)();
    (*(code *)PTR_FUN_100a015c)(uVar4,FUN_10015bc0,&local_70);
    if ((local_70 == 0) && (iVar3 = (*(code *)PTR_FUN_100a002c)(4,0), iVar3 != -1)) {
      local_60[0] = 0x1c;
      iVar5 = (*(code *)PTR_FUN_100a00e4)(iVar3,local_60);
      if (iVar5 != 0) {
        do {
          piStack_68 = piVar8;
          local_6c = iVar6;
          iVar6 = (*(code *)PTR_FUN_100a0050)();
          if (local_54 == iVar6) {
            (*(code *)PTR_FUN_100a015c)(local_58,FUN_10015bc0,&local_70);
          }
          iVar5 = (*(code *)PTR_FUN_100a00e8)(iVar3,local_60);
          piVar8 = piStack_68;
          iVar6 = local_6c;
        } while ((iVar5 != 0) && (local_70 == 0));
        (*(code *)PTR_FUN_100a000c)(iVar3);
      }
    }
  }
  if ((*(int *)(*(int *)(param_1 + 0x1c) + 0x822) == 1) &&
     (uVar7 = (*(code *)PTR_FUN_100a0180)(local_70), uVar7 != 0)) {
    local_70 = uVar7;
  }
  if (local_70 == 0) {
    *puVar2 = 0;
    iVar3 = (*(code *)PTR_FUN_100a0048)();
    *piVar8 = iVar3;
    uVar7 = local_70;
    if (iVar3 != 0) {
      iVar6 = (*(code *)PTR_FUN_100a0028)(0,0,FUN_10014e20,param_1,0,iVar6);
      *piVar1 = iVar6;
      uVar7 = local_70;
      if (iVar6 != 0) {
        uVar7 = *puVar2;
        while (uVar7 == 0) {
          (*(code *)PTR_FUN_100a00dc)(1);
          uVar7 = *puVar2;
        }
      }
    }
    local_70 = uVar7;
    if (local_70 == 0) {
      local_70 = FUN_10015850();
    }
  }
  return local_70;
}

