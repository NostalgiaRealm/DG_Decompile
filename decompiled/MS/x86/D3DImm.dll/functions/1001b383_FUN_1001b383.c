/*
 * FUN_1001b383 at 1001b383
 * undefined4 __thiscall FUN_1001b383(void * this, int param_1, int param_2, uint param_3)
 * Address ranges: 1001b383-1001b67d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1001b383(void *this,int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int local_80;
  int local_58 [10];
  int local_30 [11];
  
  iVar4 = *(int *)((int)this + 8) + *(int *)((int)this + 0x10) * 0x16c0;
  iVar7 = *(int *)(*(int *)((int)this + 0x24) + *(int *)((int)this + 0x34) * 8);
  bVar3 = FUN_1001b284(iVar4 + 0x6c0,param_3,(undefined4 *)(param_1 + param_2),local_58);
  iVar6 = CONCAT31(extraout_var,bVar3);
  if (!bVar3) {
    iVar13 = 0;
    local_80 = 0;
    if (param_3 != 0) {
      piVar10 = (int *)(iVar4 + 0x1880);
      uVar12 = param_3;
      do {
        uVar9 = uVar12;
        if (0x1000000 < uVar12) {
          uVar9 = 0x1000000;
        }
        bVar3 = FUN_1001b284(iVar4 + 0x6c0,uVar9,(undefined4 *)(param_1 + param_2 + iVar13),local_58
                            );
        if (bVar3) {
          piVar11 = local_58;
          piVar14 = local_30;
          for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar14 = *piVar11;
            piVar11 = piVar11 + 1;
            piVar14 = piVar14 + 1;
          }
          uVar1 = *(undefined4 *)(iVar7 + 0x40);
          uVar2 = *(undefined4 *)(iVar4 + 0x19c4);
          FUN_1005c1d0(piVar10);
          if (*(char *)(iVar4 + 0x19ac) == '\0') {
LAB_1001b5f9:
            puVar5 = *(undefined4 **)(iVar4 + 0x1990);
            *puVar5 = uVar2;
            puVar5[1] = iVar4 + 0x1af0;
            puVar5[2] = uVar1;
            puVar5[3] = local_80 + param_2;
            piVar11 = local_30;
            piVar14 = puVar5 + 4;
            for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar14 = *piVar11;
              piVar11 = piVar11 + 1;
              piVar14 = piVar14 + 1;
            }
            FUN_1001b67e(puVar5);
LAB_1001b631:
            *piVar10 = 0;
          }
          else {
            puVar5 = (undefined4 *)FUN_1005c0f0(piVar10,0x38);
            if (puVar5 == (undefined4 *)0x0) {
              FUN_1001b0b6(piVar10);
              goto LAB_1001b5f9;
            }
            LOCK();
            *(int *)(iVar4 + 0x19a8) = *(int *)(iVar4 + 0x19a8) + 1;
            UNLOCK();
            puVar5[1] = 0x38;
            puVar5[2] = uVar2;
            puVar5[3] = iVar4 + 0x1af0;
            puVar5[4] = uVar1;
            puVar5[5] = local_80 + param_2;
            piVar11 = local_30;
            piVar14 = puVar5 + 6;
            for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar14 = *piVar11;
              piVar11 = piVar11 + 1;
              piVar14 = piVar14 + 1;
            }
            puVar8 = (undefined4 *)((int)puVar5 + 0x43U & 0xfffffffc);
            *puVar8 = 0;
            *puVar5 = FUN_1001b67e;
            *(undefined4 **)(iVar4 + 0x18e8 + *(int *)(iVar4 + 0x19a4) * 0x14) = puVar8;
            if (*(char *)(iVar4 + 0x19ad) == '\0') goto LAB_1001b631;
            *piVar10 = 0;
            SetEvent(*(HANDLE *)(iVar4 + 0x18e0));
          }
          iVar13 = local_80 + uVar9;
          uVar12 = param_3 - uVar9;
          param_3 = uVar12;
          local_80 = iVar13;
        }
        else {
          FUN_1004e87c(
                      "[dgVoodoo] D3D12 Core: FATAL ERROR: Failed to allocate %s. Probably being run out of 2GB address space, try to make the executable Large Address Aware so that the full 4GB is available.\n"
                      );
          DebugBreak();
        }
        iVar6 = 0x1000000;
      } while (uVar12 != 0);
    }
    goto LAB_1001b673;
  }
  piVar10 = local_58;
  piVar11 = local_30;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar11 = *piVar10;
    piVar10 = piVar10 + 1;
    piVar11 = piVar11 + 1;
  }
  uVar1 = *(undefined4 *)(iVar7 + 0x40);
  uVar2 = *(undefined4 *)(iVar4 + 0x19c4);
  piVar10 = (int *)(iVar4 + 0x1880);
  FUN_1005c1d0(piVar10);
  if (*(char *)(iVar4 + 0x19ac) == '\0') {
LAB_1001b493:
    puVar5 = *(undefined4 **)(iVar4 + 0x1990);
    *puVar5 = uVar2;
    puVar5[1] = iVar4 + 0x1af0;
    puVar5[2] = uVar1;
    puVar5[3] = param_2;
    piVar11 = local_30;
    piVar14 = puVar5 + 4;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar14 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar14 = piVar14 + 1;
    }
    iVar6 = FUN_1001b67e(puVar5);
  }
  else {
    puVar5 = (undefined4 *)FUN_1005c0f0(piVar10,0x38);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_1001b0b6(piVar10);
      goto LAB_1001b493;
    }
    LOCK();
    *(int *)(iVar4 + 0x19a8) = *(int *)(iVar4 + 0x19a8) + 1;
    UNLOCK();
    puVar5[1] = 0x38;
    puVar5[2] = uVar2;
    puVar5[3] = iVar4 + 0x1af0;
    puVar5[4] = uVar1;
    puVar5[5] = param_2;
    piVar11 = local_30;
    piVar14 = puVar5 + 6;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar14 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar14 = piVar14 + 1;
    }
    puVar8 = (undefined4 *)((int)puVar5 + 0x43U & 0xfffffffc);
    *puVar8 = 0;
    *puVar5 = FUN_1001b67e;
    iVar6 = *(int *)(iVar4 + 0x19a4) * 0x14;
    piVar10[*(int *)(iVar4 + 0x19a4) * 5 + 0x1a] = (int)puVar8;
    if (*(char *)(iVar4 + 0x19ad) != '\0') {
      *piVar10 = 0;
      iVar6 = SetEvent(*(HANDLE *)(iVar4 + 0x18e0));
      goto LAB_1001b673;
    }
  }
  *piVar10 = 0;
LAB_1001b673:
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}

