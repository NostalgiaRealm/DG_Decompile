/*
 * FUN_100beba0 at 100beba0
 * undefined FUN_100beba0(void)
 * Address ranges: 100beba0-100bef8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100beba0(int param_1,char param_2,byte param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 uVar14;
  uint *local_8c;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  int *local_74;
  uint *local_70;
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
  if (*piVar1 != 0) {
    return '\x01';
  }
  if ((param_3 & 1) != 0) {
    FUN_10130fb8(*(int *)(param_1 + 0x44) + 0x11c0);
  }
  FUN_100cefa0(param_1,&local_58);
  iVar8 = *(int *)(param_1 + 0x1c);
  if (iVar8 - 0x15U < 0xb) {
LAB_100bedb8:
    if (*(int *)(param_1 + 0x24) != 1) {
      bVar6 = true;
      goto LAB_100bec5c;
    }
  }
  else {
    uVar9 = 7;
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar9 = 5;
    }
    if ((*(uint *)(&DAT_10162c20 + iVar8 * 4) <= uVar9) && (*(int *)(param_1 + 0x28) == 0))
    goto LAB_100bedb8;
  }
  bVar6 = false;
LAB_100bec5c:
  puVar13 = (uint *)(param_1 + 0x24);
  local_8c = (uint *)(param_1 + 0x2c);
  puVar2 = (uint *)(param_1 + 0x14);
  local_68 = *(undefined4 *)(&DAT_101625d0 + iVar8 * 4);
  local_88 = (uint *)(param_1 + 0x18);
  local_60 = param_1 + 0x48;
  uStack_64 = local_58._4_4_;
  cVar7 = FUN_100bace8(local_60,*puVar2,*local_88,*local_8c,*puVar13,1,local_58 & 0xffffffff,
                       local_58._4_4_,local_50);
  if (cVar7 != '\0') {
    piVar11 = (int *)(param_1 + 0xc);
    if (*piVar11 != 0) {
      puVar3 = (uint *)(param_1 + 0x44);
      local_70 = local_8c;
      local_7c = local_88;
      uVar14 = *(undefined4 *)(*puVar3 + 0x1304);
      local_88 = puVar3;
      local_80 = puVar13;
      local_78 = puVar2;
      local_74 = piVar11;
      if (param_3 != 0) {
        local_8c = (uint *)*piVar1;
        iVar8 = *(int *)(*(int *)(param_1 + 0x40) + 0x172c0);
        local_84 = (uint *)(iVar8 + 0x1c);
        (*(code *)PTR_FUN_1016c074)(local_84);
        bVar5 = true;
        iVar8 = FUN_1011f580(iVar8,&local_8c);
        if (iVar8 != 0) {
          uVar9 = *(uint *)(iVar8 + 0xc);
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            if (uVar9 < *(uint *)(iVar8 + 0xc)) {
              piVar11 = (int *)(*(int *)(iVar8 + 8) + uVar9 * 0x28 + 0x1c);
            }
            else {
              piVar11 = (int *)&DAT_00000014;
            }
            if (*piVar11 != 0) {
              bVar5 = false;
            }
          } while (bVar5);
        }
        (*(code *)PTR_FUN_1016c0c0)(local_84);
        if (bVar5) {
          uVar14 = *(undefined4 *)(*local_88 + 0x130c);
        }
        else {
          FUN_10130fb8(*local_88 + 0x11c0);
        }
      }
      piVar11 = local_74;
      puVar3 = local_78;
      puVar13 = local_7c;
      puVar2 = local_88;
      uVar9 = 0;
      if (*local_80 != 0) {
        local_84 = (uint *)(param_1 + 0x20);
        local_8c = local_80;
        local_80 = local_84;
        local_6c = param_1;
        do {
          uVar10 = *local_80;
          if (uVar10 != 0) {
            uVar12 = 0;
            do {
              local_58 = 0;
              uStack_4c = *puVar3 >> (ulonglong)(uVar12 & 0x1f);
              if (uStack_4c == 0) {
                uStack_4c = 1;
              }
              local_50 = 0;
              local_48 = *puVar13 >> (ulonglong)(uVar12 & 0x1f);
              if (local_48 == 0) {
                local_48 = 1;
              }
              uStack_44 = 1;
              puVar4 = (undefined4 *)(*piVar11 + (uVar12 + uVar10 * uVar9) * 8);
              FUN_10118180(uVar14,*piVar1,uVar12 + *local_70 * uVar9,*puVar2 + 0x1430,&local_58,
                           *puVar4,puVar4[1],0);
              uVar12 = uVar12 + 1;
              uVar10 = *local_84;
            } while (uVar12 < uVar10);
          }
          uVar9 = uVar9 + 1;
          param_1 = local_6c;
        } while (uVar9 < *local_8c);
      }
    }
    if ((param_2 != '\0') && (bVar6)) {
      cVar7 = FUN_100bb160(param_1 + 0xf0,*piVar1,uStack_64,0,local_68);
      FUN_100bcd40(param_1);
      if (cVar7 == '\0') {
        FUN_100bb370(local_60,1,1);
      }
    }
  }
  return cVar7;
}

