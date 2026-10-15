/*
 * FUN_10044f90 at 10044f90
 * undefined FUN_10044f90(void)
 * Address ranges: 10044f90-10045247
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10044f90(int param_1,undefined8 *param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int *piVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  uint uStack_44;
  
  iVar9 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar9 == 0) {
    FUN_10001c10(0);
  }
  uVar14 = 0x80070057;
  iVar9 = FUN_10091750(param_2,&DAT_100c2980,0x10);
  if (((iVar9 == 0) || (param_3 == 0)) || (param_4 == 0)) goto LAB_10045214;
  piVar1 = (int *)(param_1 + 0x20);
  puVar2 = (uint *)(param_1 + 0x24);
  uVar6 = *puVar2;
  uVar13 = 0x8007000e;
  uVar15 = 0;
  if (uVar6 != 0) {
    iVar9 = *piVar1;
    do {
      iVar10 = FUN_10091750(iVar9 + uVar15 * 0x20,param_2,0x10);
      if (iVar10 == 0) break;
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar6);
  }
  if (uVar15 != uVar6) {
    FUN_100459d0(*piVar1 + uVar15 * 0x20);
    cVar8 = FUN_10045a60(*piVar1 + uVar15 * 0x20,*param_2,param_2[1],param_3,param_4,param_5 & 3);
    uVar14 = 0;
    if (cVar8 == '\0') {
      uVar14 = uVar13;
    }
    goto LAB_10045214;
  }
  puVar3 = (uint *)(param_1 + 0x28);
  uVar12 = *puVar3;
  local_50 = 0;
  uStack_48 = 0;
  uStack_44 = uStack_44 & 0xffffff00;
  uStack_58 = 0;
  local_60 = 0;
  if (uVar6 == uVar12) {
    uVar6 = uVar12 << 1;
    if (uVar12 == 0) {
      uVar6 = 0x10;
    }
    uVar12 = uVar6 * 0x20;
    if (uVar6 >> 0x1b != 0) {
      uVar12 = 0xffffffff;
    }
    iVar9 = uVar12 + 4;
    if (0xfffffffb < uVar12) {
      iVar9 = -1;
    }
    puVar11 = (uint *)FUN_100914b0(iVar9);
    if (puVar11 != (uint *)0x0) {
      *puVar11 = uVar6;
      puVar11 = puVar11 + 1;
      puVar4 = puVar11;
      for (uVar12 = uVar6; uVar12 != 0; uVar12 = uVar12 - 1) {
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        *(undefined1 *)(puVar4 + 7) = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 8;
      }
      if (puVar11 != (uint *)0x0) {
        FUN_100917a0(puVar11,*piVar1,((ulonglong)*puVar3 & 0x7ffffff) << 5);
        iVar9 = *piVar1;
        if (iVar9 != 0) {
          piVar7 = (int *)(iVar9 + -4);
          iVar10 = *piVar7;
          iVar9 = iVar9 + iVar10 * 0x20;
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            iVar9 = iVar9 + -0x20;
            FUN_100459d0(iVar9);
          }
          FUN_100914e0(piVar7,*piVar7 * 0x20 + 4);
        }
        *piVar1 = (int)puVar11;
        *puVar3 = uVar6;
        goto LAB_1004518c;
      }
    }
  }
  else {
LAB_1004518c:
    uVar13 = 0x8007000e;
    puVar5 = (undefined8 *)(*piVar1 + *puVar2 * 0x20);
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = CONCAT44(uStack_44,uStack_48);
    puVar5[2] = local_50;
    *puVar2 = *puVar2 + 1;
    cVar8 = FUN_10045a60(*piVar1 + uVar15 * 0x20,*param_2,param_2[1],param_3,param_4,param_5 & 3);
    if (cVar8 != '\0') {
      uVar13 = 0;
    }
  }
  FUN_100459d0(&local_60);
  uVar14 = uVar13;
LAB_10045214:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar14;
}

