/*
 * FUN_1004b848 at 1004b848
 * undefined4 __fastcall FUN_1004b848(int param_1)
 * Address ranges: 1004b848-1004bb58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1004b848(int param_1)

{
  int *piVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  SIZE_T SVar8;
  int iVar9;
  short *psVar10;
  uint *puVar11;
  short *psVar12;
  int *local_2fc;
  int local_2f8;
  int *piStack_2f4;
  int local_2f0 [2];
  uint local_2e8;
  uint local_2e4;
  undefined1 auStack_2e0 [72];
  int iStack_298;
  undefined4 uStack_290;
  short asStack_288 [32];
  short asStack_248 [128];
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  short asStack_138 [4];
  undefined1 local_130 [276];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar5 = FUN_100474e3(*(int *)(param_1 + 8));
  if ((char)uVar5 == '\0') {
    uVar5 = uVar5 & 0xffffff00;
  }
  else {
    uVar5 = 0x10;
    if (*(char *)(param_1 + 0x3a4) != '\0') {
      uVar5 = 1;
    }
    local_2e4 = *(uint *)(*(int *)(param_1 + 8) + 0x4f4);
    if (uVar5 < local_2e4) {
      local_2e4 = uVar5;
    }
    FUN_1004b7a0(param_1);
    iVar6 = thunk_FUN_10052276(*(LPVOID *)(param_1 + 0x250));
    *(undefined4 *)(param_1 + 0x250) = 0;
    *(undefined4 *)(param_1 + 0x254) = 0;
    *(undefined4 *)(param_1 + 600) = 0;
    local_2e8 = 0;
    if (local_2e4 != 0) {
      do {
        uVar5 = local_2e8;
        if ((*(int *)(param_1 + 0xc) == 0) ||
           (iVar6 = local_2e8 + 1, *(int *)(param_1 + 0xc) == iVar6)) {
          local_2fc = *(int **)(param_1 + 8);
          if (local_2e8 < (uint)local_2fc[0x13d]) {
            iVar6 = *(int *)(local_2fc[0x13c] + local_2e8 * 4);
          }
          else {
            iVar6 = 0;
          }
          local_2f8 = *(int *)(param_1 + 0x254);
          local_2f0[0] = iVar6;
          FUN_1002c0fe((void *)(param_1 + 0x250),local_2f0);
          piVar3 = local_2fc;
          local_2f0[0] = iVar6 * 0x28;
          (**(code **)(*(int *)local_2fc[iVar6 * 10 + 6] + 0x28))
                    ((int *)local_2fc[iVar6 * 10 + 6],local_130);
          local_2fc = (int *)0x0;
          piVar3 = *(int **)((int)piVar3 + local_2f8 + 0x18);
          piStack_2f4 = (int *)0x0;
          iVar6 = (**(code **)(*piVar3 + 0x1c))(piVar3,0,&local_2fc);
          piVar3 = local_2fc;
          if (iVar6 != -0x7785fffe) {
            iVar6 = local_2f8 * 0xc;
            do {
              (**(code **)(*piStack_2f4 + 0x1c))(piStack_2f4,auStack_2e0);
              if (iStack_298 != 0) {
                psVar10 = asStack_138;
                psVar12 = asStack_288;
                do {
                  sVar2 = *psVar10;
                  psVar10 = psVar10 + 1;
                  *psVar12 = sVar2;
                  psVar12 = psVar12 + 1;
                } while (sVar2 != 0);
                puVar11 = &local_2e8;
                psVar10 = asStack_248;
                do {
                  uVar5 = *puVar11;
                  puVar11 = (uint *)((int)puVar11 + 2);
                  *psVar10 = (short)uVar5;
                  psVar10 = psVar10 + 1;
                } while ((short)uVar5 != 0);
                uStack_148 = uStack_290;
                uStack_140 = uStack_18;
                uStack_144 = uStack_1c;
                FUN_1004c1d2((void *)(iVar6 + 400 + param_1),(undefined4 *)asStack_288);
                iVar9 = *(int *)(param_1 + 0x18 + iVar6);
                if (*(int *)(param_1 + 0x14 + iVar6) == iVar9) {
                  if (iVar9 == 0) {
                    uVar5 = 0x10;
                  }
                  else {
                    uVar5 = iVar9 * 2;
                  }
                  SVar8 = (SIZE_T)((ulonglong)uVar5 * 4);
                  if ((int)((ulonglong)uVar5 * 4 >> 0x20) != 0) {
                    SVar8 = 0xffffffff;
                  }
                  puVar7 = (undefined4 *)FUN_10052293(SVar8);
                  if (puVar7 != (undefined4 *)0x0) {
                    FUN_10052930(puVar7,*(undefined4 **)(param_1 + 0x10 + iVar6),
                                 *(int *)(param_1 + 0x18 + iVar6) << 2);
                    thunk_FUN_10052276(*(LPVOID *)(param_1 + 0x10 + iVar6));
                    *(undefined4 **)(param_1 + 0x10 + iVar6) = puVar7;
                    *(uint *)(param_1 + 0x18 + iVar6) = uVar5;
                    goto LAB_1004ba57;
                  }
                }
                else {
LAB_1004ba57:
                  *(undefined4 *)
                   (*(int *)(param_1 + 0x10 + iVar6) + *(int *)(param_1 + 0x14 + iVar6) * 4) = 0;
                  piVar1 = (int *)(param_1 + 0x14 + iVar6);
                  *piVar1 = *piVar1 + 1;
                }
                iVar9 = *(int *)(param_1 + 0xd8 + iVar6);
                if (*(int *)(param_1 + 0xd4 + iVar6) == iVar9) {
                  if (iVar9 == 0) {
                    uVar5 = 0x10;
                  }
                  else {
                    uVar5 = iVar9 * 2;
                  }
                  SVar8 = (SIZE_T)((ulonglong)uVar5 * 8);
                  if ((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) {
                    SVar8 = 0xffffffff;
                  }
                  puVar7 = (undefined4 *)FUN_10052293(SVar8);
                  if (puVar7 == (undefined4 *)0x0) goto LAB_1004bb07;
                  FUN_10052930(puVar7,*(undefined4 **)(param_1 + 0xd0 + iVar6),
                               *(int *)(param_1 + 0xd8 + iVar6) << 3);
                  thunk_FUN_10052276(*(LPVOID *)(param_1 + 0xd0 + iVar6));
                  *(undefined4 **)(param_1 + 0xd0 + iVar6) = puVar7;
                  *(uint *)(param_1 + 0xd8 + iVar6) = uVar5;
                }
                iVar9 = *(int *)(param_1 + 0xd4 + iVar6);
                iVar4 = *(int *)(param_1 + 0xd0 + iVar6);
                *(undefined4 *)(iVar4 + iVar9 * 8) = 0;
                *(undefined4 *)(iVar4 + 4 + iVar9 * 8) = 0;
                piVar1 = (int *)(param_1 + 0xd4 + iVar6);
                *piVar1 = *piVar1 + 1;
              }
LAB_1004bb07:
              (**(code **)(*local_2fc + 8))(local_2fc);
              local_2f8 = local_2f8 + 1;
              iVar9 = (**(code **)(**(int **)((int)(piVar3 + 6) + (int)local_2fc) + 0x1c))
                                (*(int **)((int)(piVar3 + 6) + (int)local_2fc),local_2f8,
                                 &stack0xfffffd00);
            } while (iVar9 != -0x7785fffe);
            iVar6 = -0x7785fffe;
            uVar5 = local_2e8;
          }
        }
        local_2e8 = uVar5 + 1;
      } while (local_2e8 < local_2e4);
    }
    uVar5 = CONCAT31((int3)((uint)iVar6 >> 8),1);
  }
  return uVar5;
}

