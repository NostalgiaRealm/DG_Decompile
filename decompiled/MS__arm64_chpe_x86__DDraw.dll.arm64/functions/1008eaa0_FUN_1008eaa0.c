/*
 * FUN_1008eaa0 at 1008eaa0
 * undefined FUN_1008eaa0(void)
 * Address ranges: 1008eaa0-1008ec0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008eaa0(undefined8 param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uStack_34;
  
  iVar11 = DAT_100be0c0;
  uVar10 = 0;
  uVar5 = *(uint *)(DAT_100be0c0 + 0xe0);
  if (uVar5 != 0) {
    do {
      if (*(int *)(*(int *)(DAT_100be0c0 + 0xdc) + uVar10 * 0x10) == param_2) {
        return;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar5);
  }
  if (uVar10 == uVar5) {
    iVar7 = (*(code *)PTR_FUN_100ba250)(param_2);
    uStack_34 = CONCAT31(uStack_34._1_3_,iVar7 != 0);
    iVar7 = *(int *)(iVar11 + 0xf0);
    *(int *)(iVar11 + 0xf0) = iVar7 + 1;
    iVar8 = (*(code *)PTR_FUN_100ba250)(param_2);
    pcVar6 = (code *)PTR_FUN_100ba228;
    if (iVar8 != 0) {
      pcVar6 = (code *)PTR_FUN_100ba22c;
    }
    uVar9 = (*pcVar6)(param_2,0xfffffffc);
    piVar1 = (int *)(iVar11 + 0xdc);
    puVar2 = (uint *)(iVar11 + 0xe4);
    puVar3 = (uint *)(iVar11 + 0xe0);
    uVar10 = *puVar2;
    if (*puVar3 == uVar10) {
      uVar5 = uVar10 << 1;
      if (uVar10 == 0) {
        uVar5 = 0x10;
      }
      iVar11 = uVar5 * 0x10;
      if (uVar5 >> 0x1c != 0) {
        iVar11 = -1;
      }
      iVar11 = FUN_100914b0(iVar11);
      if (iVar11 == 0) {
        return;
      }
      FUN_100917a0(iVar11,*piVar1,((ulonglong)*puVar2 & 0xfffffff) << 4);
      FUN_100914d0(*piVar1);
      *piVar1 = iVar11;
      *puVar2 = uVar5;
    }
    puVar4 = (undefined8 *)(*piVar1 + *puVar3 * 0x10);
    puVar4[1] = CONCAT44(uStack_34,iVar7);
    *puVar4 = CONCAT44(uVar9,param_2);
    *puVar3 = *puVar3 + 1;
  }
  return;
}

