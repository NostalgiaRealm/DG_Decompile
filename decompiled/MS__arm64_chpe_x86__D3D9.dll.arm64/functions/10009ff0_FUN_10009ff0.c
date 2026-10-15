/*
 * FUN_10009ff0 at 10009ff0
 * undefined FUN_10009ff0(void)
 * Address ranges: 10009ff0-1000a3c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10009ff0(int param_1,int param_2,undefined1 *param_3,uint param_4,int param_5,int param_6)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint local_b8;
  uint uStack_b4;
  uint local_b0;
  uint local_ac;
  uint *local_a8;
  int local_a4;
  int iStack_a0;
  int *local_9c;
  int *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  uVar12 = 0x8876086c;
  if ((param_2 != 0) && (param_5 != 0)) {
    if (param_3 == (undefined1 *)0x0) {
      if (param_4 != 0) {
        return 0x8876086c;
      }
    }
    else if (param_4 == 0) {
      return 0x8876086c;
    }
    piVar1 = (int *)(param_2 + 0x28);
    local_9c = piVar1;
    local_98 = (int *)(param_5 + 0x28);
    (*(code *)PTR_FUN_1016c26c)(auStack_70,0,0,*(uint *)(param_2 + 0x40),*(uint *)(param_2 + 0x44));
    (*(code *)PTR_FUN_1016c26c)
              (auStack_60,0,0,*(undefined4 *)(param_5 + 0x40),*(undefined4 *)(param_5 + 0x44));
    (*(code *)PTR_FUN_1016c270)(&local_90);
    if (param_4 == 0) {
      param_4 = 1;
      param_3 = auStack_70;
    }
    if ((((*(int *)(param_2 + 0x18) == param_1) && (*(int *)(param_5 + 0x18) == param_1)) &&
        (*piVar1 == *(int *)(param_5 + 0x28))) &&
       (uVar10 = FUN_100038a0(*piVar1), (uVar10 & 1) == 0)) {
      iVar8 = *piVar1;
      local_a8 = (uint *)(param_2 + 0x44);
      bVar5 = FUN_10003810(iVar8);
      uVar7 = FUN_100035f0(iVar8);
      iVar8 = FUN_100036b0(iVar8);
      if (param_4 != 0) {
        uVar11 = 0;
        bVar3 = true;
        local_a4 = param_2;
        iStack_a0 = param_5;
        do {
          if (!bVar3) {
            return 0x8876086c;
          }
          (*(code *)PTR_FUN_1016c208)(&local_b8,param_3 + uVar11 * 0x10,auStack_70);
          iVar9 = (*(code *)PTR_FUN_1016c1a4)(&local_b8,param_3 + uVar11 * 0x10);
          if (iVar9 == 0) {
            bVar3 = false;
          }
          if ((bVar5 & 1) != 0) {
            if (((((uVar7 - 1 & local_b8) == 0) && ((iVar8 - 1U & uStack_b4) == 0)) &&
                (((uVar7 - 1 & local_b0) == 0 || (*(uint *)(param_2 + 0x40) < uVar7)))) &&
               (((iVar8 - 1U & local_ac) == 0 || (*local_a8 < uVar7)))) {
              bVar4 = 1;
            }
            else {
              bVar4 = 0;
            }
            bVar3 = (bool)(bVar3 & bVar4);
          }
          if (param_6 != 0) {
            puVar2 = (uint *)(param_6 + uVar11 * 8);
            (*(code *)PTR_FUN_1016c234)(&local_b8,*puVar2 - local_b8,puVar2[1] - uStack_b4);
            if ((bVar5 & 1) != 0) {
              if (((uVar7 - 1 & *puVar2) != 0) || (bVar4 = 1, (iVar8 - 1U & puVar2[1]) != 0)) {
                bVar4 = 0;
              }
              bVar3 = (bool)(bVar4 & bVar3);
            }
          }
          (*(code *)PTR_FUN_1016c298)(&local_90,&local_90,&local_b8);
          (*(code *)PTR_FUN_1016c208)(auStack_50,&local_b8,auStack_60);
          iVar9 = (*(code *)PTR_FUN_1016c1a4)(&local_b8,auStack_50);
          uVar11 = uVar11 + 1;
          bVar3 = (bool)(iVar9 != 0 & bVar3);
        } while (uVar11 < param_4);
        param_2 = local_a4;
        param_5 = iStack_a0;
        if (!bVar3) {
          return 0x8876086c;
        }
      }
      if ((local_9c[3] == 0) && (local_98[3] != 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((*(char *)(param_1 + 0x669d) == '\0') || (uVar12 = 0x88760868, !bVar3)) {
        cVar6 = FUN_1000a960(param_1,param_2,param_5,param_4,param_3,param_6);
        uVar12 = 0x80004005;
        if ((cVar6 != '\0') && (uVar12 = 0, *(int *)(param_5 + 0x1c) != 0)) {
          local_80 = local_90;
          uStack_7c = uStack_8c;
          local_78 = local_88;
          uStack_74 = uStack_84;
          iVar8 = *(int *)(*(int *)(param_5 + 0x1c) + 0x3c) + *(int *)(param_5 + 0x4c) * 0x10;
          (*(code *)PTR_FUN_1016c298)(iVar8,iVar8,&local_80);
        }
      }
    }
  }
  return uVar12;
}

