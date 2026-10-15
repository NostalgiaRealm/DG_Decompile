/*
 * FUN_100514e0 at 100514e0
 * undefined FUN_100514e0(void)
 * Address ranges: 100514e0-100519c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100514e0(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  code *pcVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  uint *local_170 [2];
  undefined4 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 auStack_c0 [128];
  
  pcVar2 = (char *)(param_1 + 0x1754);
  piVar3 = (int *)(param_1 + 0x151c);
  if ((*pcVar2 != '\0') ||
     (cVar6 = *(char *)(*piVar3 + 0xd2), *(char *)(*piVar3 + 0xd2) = '\0', cVar6 != '\0')) {
    iVar11 = *piVar3;
    *(undefined1 *)(iVar11 + 0xd2) = 0;
    uVar13 = *(uint *)(iVar11 + 0xa8);
    iVar5 = *(int *)(*(int *)(param_1 + 0x18) + 4);
    uVar12 = *(uint *)(iVar5 + 100);
    if ((uVar13 < uVar12) && (*(int *)(iVar11 + 0xb0) + uVar13 <= uVar12)) {
      uVar13 = *(uint *)(iVar11 + 0xac);
      uVar12 = *(uint *)(iVar5 + 0x68);
      if ((uVar13 < uVar12) && (*(int *)(iVar11 + 0xb4) + uVar13 <= uVar12)) {
        uStack_e8 = *(undefined8 *)(iVar11 + 0xac);
        local_f0 = *(undefined8 *)(iVar11 + 0xa4);
        uStack_d8 = *(undefined8 *)(iVar11 + 0xbc);
        uStack_e0 = *(undefined8 *)(iVar11 + 0xb4);
        local_d0 = *(undefined8 *)(iVar11 + 0xc4);
        local_c8 = *(undefined4 *)(iVar11 + 0xcc);
        puVar9 = (undefined8 *)FUN_10051c70(param_1,&local_168,&local_f0);
        uVar16 = *puVar9;
        uVar15 = puVar9[3];
        uVar14 = puVar9[2];
        local_170[0] = (uint *)(param_1 + 0x2c);
        *(undefined8 *)(param_1 + 0x96c) = puVar9[1];
        *(undefined8 *)(param_1 + 0x964) = uVar16;
        *(undefined8 *)(param_1 + 0x97c) = uVar15;
        *(undefined8 *)(param_1 + 0x974) = uVar14;
        uVar16 = puVar9[4];
        uVar15 = puVar9[7];
        uVar14 = puVar9[6];
        *(undefined8 *)(param_1 + 0x98c) = puVar9[5];
        *(undefined8 *)(param_1 + 0x984) = uVar16;
        *(undefined8 *)(param_1 + 0x99c) = uVar15;
        *(undefined8 *)(param_1 + 0x994) = uVar14;
        *(undefined1 *)(param_1 + 0x905) = 0;
        *(undefined1 *)(param_1 + 0x907) = 0;
        *(undefined2 *)(param_1 + 0x90a) = 0;
        *local_170[0] = *(uint *)(iVar11 + 0xa8);
        uVar10 = *(undefined4 *)(param_1 + 0x14);
        *(uint *)(param_1 + 0x30) = *(uint *)(iVar11 + 0xac);
        *(int *)(param_1 + 0x34) = *(int *)(iVar11 + 0xb0);
        *(int *)(param_1 + 0x38) = *(int *)(iVar11 + 0xb4);
        *(undefined4 *)(param_1 + 0x3c) = 0;
        *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
        auVar17 = FUN_100123f0(*(int *)(param_1 + 0x9cc) + 0x40,&local_168,
                               (undefined8 *)(param_1 + 0x964));
        pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                  (auVar17._0_8_,auVar17._8_8_,auVar17._0_8_ & 0xffffffff);
        (*extraout_w11)(uVar10,1);
        uVar10 = (*pcVar7)();
        (*extraout_w11_00)(uVar10,local_170[0]);
        *(int *)(param_1 + 0x1518) = *piVar3;
      }
    }
  }
  if ((*(char *)(param_1 + 0x1754) != '\0') ||
     (cVar6 = *(char *)(*piVar3 + 0xd3), *(char *)(*piVar3 + 0xd3) = '\0', cVar6 != '\0')) {
    if (*pcVar2 != '\0') {
      FUN_10002ca0(param_1);
    }
    iVar11 = *piVar3;
    local_170[0] = (uint *)0x0;
    if (*(int *)(iVar11 + 0x9c) != 0) {
      do {
        puVar8 = local_170[0];
        if (*pcVar2 == '\0') {
          pcVar1 = (char *)(*(int *)(iVar11 + 0x98) + (int)local_170[0] * 8 + 4);
          cVar6 = *pcVar1;
          *pcVar1 = '\0';
          if (cVar6 != '\0') {
            iVar11 = *piVar3;
            goto LAB_10051788;
          }
        }
        else {
LAB_10051788:
          uVar13 = 0;
          piVar4 = (int *)(*(int *)(iVar11 + 0x98) + (int)local_170[0] * 8);
          if ((*(char *)((int)piVar4 + 5) != '\0') &&
             (iVar11 = *(int *)(*(int *)(iVar11 + 0x8c) + *piVar4 * 8 + 4), iVar11 != 0)) {
            local_168 = *(undefined4 *)(iVar11 + 0x50);
            uStack_15c = *(undefined8 *)(iVar11 + 0x5c);
            local_164 = *(undefined8 *)(iVar11 + 0x54);
            if ((*(uint *)(iVar11 + 0x98) >> 1 & 1) == 0) {
              uStack_14c = *(undefined8 *)(iVar11 + 0x5c);
              local_154 = *(undefined8 *)(iVar11 + 0x54);
              if (*(char *)(iVar11 + 0xa0) == '\0') {
                local_118 = 0x3f800000;
              }
              else {
                local_118 = *(undefined4 *)(iVar11 + 0x80);
              }
            }
            else {
              uStack_14c = 0;
              local_154 = 0;
              local_118 = 0;
            }
            local_13c = 0;
            local_144 = 0;
            local_134 = *(undefined8 *)(iVar11 + 100);
            local_12c = *(undefined4 *)(iVar11 + 0x6c);
            local_128 = *(undefined8 *)(iVar11 + 0x70);
            local_120 = *(undefined4 *)(iVar11 + 0x78);
            local_11c = *(undefined4 *)(iVar11 + 0x7c);
            local_114 = *(undefined4 *)(iVar11 + 0x84);
            local_110 = *(undefined4 *)(iVar11 + 0x88);
            local_10c = *(undefined4 *)(iVar11 + 0x8c);
            local_108 = *(undefined4 *)(iVar11 + 0x90);
            local_104 = *(undefined4 *)(iVar11 + 0x94);
            local_100 = *(char *)(iVar11 + 0xa0) == '\0';
            FUN_10005c60(param_1 + 0x14c,local_170,&local_168);
            uVar10 = FUN_10007770(param_1,auStack_c0,&local_168);
            FUN_10005ac0(param_1 + 0x15c,local_170,uVar10);
            uVar13 = *(uint *)(iVar11 + 0x98) & 1;
          }
          if (*(uint *)(param_1 + 0x17c) != 0) {
            uVar12 = 0;
            do {
              if (*(uint **)(*(int *)(param_1 + 0x178) + uVar12 * 4) == puVar8) goto LAB_10051920;
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(uint *)(param_1 + 0x17c));
          }
          uVar12 = 0xffffffff;
LAB_10051920:
          if (*pcVar2 == '\0') {
            if (uVar13 == 0) {
              if (uVar12 != 0xffffffff) {
                FUN_10002f20(param_1,puVar8);
              }
            }
            else {
              if (uVar12 == 0xffffffff) goto LAB_10051954;
              FUN_100030e0(param_1,puVar8,&local_168);
            }
          }
          else if (uVar13 != 0) {
LAB_10051954:
            FUN_10002e30(param_1,puVar8);
          }
        }
        iVar11 = *piVar3;
        local_170[0] = (uint *)((int)puVar8 + 1);
      } while (local_170[0] < *(uint **)(iVar11 + 0x9c));
    }
  }
  *pcVar2 = '\0';
  return;
}

