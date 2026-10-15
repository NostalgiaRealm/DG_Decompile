/*
 * FUN_10024298 at 10024298
 * undefined FUN_10024298(void)
 * Address ranges: 10024298-10024667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10024298(int param_1,char param_2,byte param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uVar16;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  int *local_74;
  int *local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  
  piVar1 = (int *)(param_1 + 0x54);
  cVar9 = '\x01';
  if (*piVar1 == 0) {
    if ((param_3 & 1) != 0) {
      FUN_10090418(*(int *)(param_1 + 0x44) + 0x11c0);
    }
    FUN_10034140(param_1,&local_58);
    uVar11 = 7;
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar11 = 5;
    }
    if (((uVar11 < *(uint *)(&DAT_100b35b0 + *(int *)(param_1 + 0x1c) * 4)) ||
        (*(int *)(param_1 + 0x28) != 0)) || (*(int *)(param_1 + 0x24) == 1)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    puVar15 = (uint *)(param_1 + 0x24);
    piVar13 = (int *)(param_1 + 0x2c);
    puVar2 = (uint *)(param_1 + 0x18);
    local_68 = *(undefined4 *)(&DAT_100b3480 + *(int *)(param_1 + 0x1c) * 4);
    puVar3 = (uint *)(param_1 + 0x14);
    local_60 = param_1 + 0x48;
    uStack_64 = local_58._4_4_;
    cVar9 = FUN_10020818(local_60,*puVar3,*puVar2,*piVar13,*puVar15,1,local_58 & 0xffffffff,
                         local_58._4_4_,local_50);
    if (cVar9 != '\0') {
      piVar4 = (int *)(param_1 + 0xc);
      if (*piVar4 != 0) {
        piVar5 = (int *)(param_1 + 0x44);
        uVar16 = *(undefined4 *)(*piVar5 + 0x1304);
        local_80 = puVar15;
        local_7c = puVar2;
        local_78 = puVar3;
        local_74 = piVar4;
        local_70 = piVar13;
        if (param_3 != 0) {
          local_88 = (uint *)*piVar1;
          iVar10 = *(int *)(*(int *)(param_1 + 0x40) + 0x172c0);
          local_84 = (uint *)(iVar10 + 0x1c);
          (*(code *)PTR_FUN_100ba0a0)(local_84);
          bVar7 = true;
          iVar10 = FUN_10078e68(iVar10,&local_88);
          if (iVar10 != 0) {
            uVar11 = *(uint *)(iVar10 + 0xc);
            do {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              if (uVar11 < *(uint *)(iVar10 + 0xc)) {
                piVar13 = (int *)(*(int *)(iVar10 + 8) + uVar11 * 0x28 + 0x1c);
              }
              else {
                piVar13 = (int *)&DAT_00000014;
              }
              if (*piVar13 != 0) {
                bVar7 = false;
              }
            } while (bVar7);
          }
          (*(code *)PTR_FUN_100ba0f0)(local_84);
          if (bVar7) {
            uVar16 = *(undefined4 *)(*piVar5 + 0x130c);
          }
          else {
            FUN_10090418(*piVar5 + 0x11c0);
          }
        }
        piVar13 = local_74;
        puVar3 = local_78;
        puVar2 = local_7c;
        uVar11 = 0;
        if (*local_80 != 0) {
          local_84 = (uint *)(param_1 + 0x20);
          local_88 = local_80;
          local_80 = local_84;
          local_6c = param_1;
          do {
            uVar12 = *local_80;
            if (uVar12 != 0) {
              uVar14 = 0;
              do {
                local_58 = 0;
                uStack_4c = *puVar3 >> (ulonglong)(uVar14 & 0x1f);
                if (uStack_4c == 0) {
                  uStack_4c = 1;
                }
                local_50 = 0;
                local_48 = *puVar2 >> (ulonglong)(uVar14 & 0x1f);
                if (local_48 == 0) {
                  local_48 = 1;
                }
                uStack_44 = 1;
                puVar6 = (undefined4 *)(*piVar13 + (uVar14 + uVar12 * uVar11) * 8);
                FUN_10081a40(uVar16,*piVar1,uVar14 + *local_70 * uVar11,*piVar5 + 0x1430,&local_58,
                             *puVar6,puVar6[1],0);
                uVar14 = uVar14 + 1;
                uVar12 = *local_84;
              } while (uVar14 < uVar12);
            }
            uVar11 = uVar11 + 1;
            param_1 = local_6c;
          } while (uVar11 < *local_88);
        }
      }
      if ((param_2 != '\0') && (bVar8)) {
        cVar9 = FUN_10020c90(param_1 + 0xf0,*piVar1,uStack_64);
        FUN_100223d0(param_1);
        if (cVar9 == '\0') {
          FUN_10020e88(local_60,1,1);
        }
      }
    }
  }
  return cVar9;
}

