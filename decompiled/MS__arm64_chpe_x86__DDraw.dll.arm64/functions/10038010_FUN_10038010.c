/*
 * FUN_10038010 at 10038010
 * undefined FUN_10038010(void)
 * Address ranges: 10038010-100382d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10038010(int param_1,char param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  code *pcVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined1 auVar12 [16];
  int local_50;
  int local_4c;
  int *local_48;
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_50 = 0;
  if (((*(int *)(param_1 + 0xf4) != 0) && (*(int *)(*(int *)(param_1 + 0xf4) + 0x104) != 0)) &&
     ((*(uint *)(param_1 + 0x104) >> 4 & 1) == 0)) {
    uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar8,&local_50);
    if (local_50 != 0) goto LAB_100380f4;
  }
  local_50 = *(int *)(param_1 + 0xfc);
  if (local_50 == 0) {
    local_50 = (*(code *)PTR_FUN_100ba200)();
    local_4c = 0;
    (*(code *)PTR_FUN_100ba23c)(local_50,&local_4c);
    iVar9 = (*(code *)PTR_FUN_100ba0b0)();
    if (iVar9 != local_4c) {
      local_50 = 0;
    }
  }
LAB_100380f4:
  if (((param_2 != '\0') && (local_50 != 0)) && (local_50 != *(int *)(param_1 + 0xfc))) {
    piVar1 = (int *)(param_1 + 0x10c);
    puVar2 = (uint *)(param_1 + 0x110);
    if (*puVar2 != 0) {
      uVar11 = 0;
      do {
        if (*(int *)(*piVar1 + uVar11 * 4) == local_50) {
          if (uVar11 != 0xffffffff) {
            return local_50;
          }
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *puVar2);
    }
    uVar10 = FUN_1008eaa0(local_50,local_50);
    FUN_1008ec70(uVar10,local_50);
    local_48 = (int *)(param_1 + 0x118);
    piVar4 = (int *)*local_48;
    local_4c = *piVar4 + 0x60;
    auVar12 = FUN_1008e100(piVar4 + 1);
    (*pcVar6)(auVar12._0_8_,auVar12._8_8_,auVar12._0_8_ & 0xffffffff);
    cVar7 = (*extraout_w11_00)(piVar4,local_50);
    if (cVar7 == '\0') {
      local_50 = 0;
    }
    else {
      uVar8 = (*pcVar6)();
      (*extraout_w11_01)(uVar8,local_50,1,1);
      puVar3 = (uint *)(param_1 + 0x114);
      uVar11 = *puVar3;
      if (*puVar2 == uVar11) {
        uVar5 = uVar11 << 1;
        if (uVar11 == 0) {
          uVar5 = 0x10;
        }
        iVar9 = uVar5 * 4;
        if (uVar5 >> 0x1e != 0) {
          iVar9 = -1;
        }
        iVar9 = FUN_100914b0(iVar9);
        if (iVar9 == 0) {
          return local_50;
        }
        FUN_100917a0(iVar9,*piVar1,((ulonglong)*puVar3 & 0x3fffffff) << 2);
        FUN_100914d0(*piVar1);
        *piVar1 = iVar9;
        *puVar3 = uVar5;
      }
      *(int *)(*piVar1 + *puVar2 * 4) = local_50;
      *puVar2 = *puVar2 + 1;
    }
  }
  return local_50;
}

