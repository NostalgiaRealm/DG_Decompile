/*
 * FUN_100682e0 at 100682e0
 * undefined FUN_100682e0(void)
 * Address ranges: 100682e0-10068753
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100682e0(int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  int iVar13;
  undefined4 local_340;
  int local_33c;
  uint local_338;
  int local_334;
  int *local_330;
  int *local_32c;
  undefined8 *local_328;
  uint local_324;
  uint local_320;
  undefined1 auStack_318 [80];
  int local_2c8;
  undefined4 local_2c0;
  undefined1 auStack_2b8 [64];
  undefined1 auStack_278 [256];
  undefined4 local_178;
  undefined8 uStack_174;
  undefined1 auStack_168 [284];
  undefined8 uStack_4c;
  
  piVar1 = (int *)(param_1 + 8);
  uVar9 = FUN_100705f0(*piVar1);
  if ((uVar9 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    uVar11 = 1;
    if (*(char *)(param_1 + 0x3a4) == '\0') {
      uVar11 = 0x10;
    }
    uVar5 = *(uint *)(*piVar1 + 0x4f4);
    if (uVar11 < *(uint *)(*piVar1 + 0x4f4)) {
      uVar5 = uVar11;
    }
    FUN_10067e68(param_1);
    puVar2 = (undefined8 *)(param_1 + 0x250);
    FUN_100914d0(*(undefined4 *)puVar2);
    *puVar2 = 0;
    *(undefined4 *)(param_1 + 600) = 0;
    pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar11 = 0;
    if (uVar5 != 0) {
      local_330 = (int *)(param_1 + 0xc);
      local_334 = param_1;
      local_32c = piVar1;
      local_328 = puVar2;
      local_320 = uVar5;
      do {
        if ((*local_330 == 0) || (*local_330 == uVar11 + 1)) {
          if (uVar11 < *(uint *)(*local_32c + 0x4f4)) {
            local_33c = *(int *)(*(int *)(*local_32c + 0x4f0) + uVar11 * 4);
          }
          else {
            local_33c = 0;
          }
          iVar12 = *(int *)(local_334 + 0x254);
          FUN_100013d8(local_328,&local_33c);
          uVar7 = (*pcVar6)();
          (*extraout_w11)(uVar7,auStack_168);
          local_340 = 0;
          iVar13 = 0;
          uVar7 = (*pcVar6)();
          iVar8 = (*extraout_w11_00)(uVar7,0,&local_340);
          local_33c = iVar12;
          while (iVar8 != -0x7785fffe) {
            local_324 = uVar11;
            uVar7 = (*pcVar6)();
            (*extraout_w11_01)(uVar7,auStack_318);
            if (local_2c8 != 0) {
              FUN_10091e40(auStack_2b8,auStack_168);
              FUN_10091e40(auStack_278,auStack_318);
              local_178 = local_2c0;
              uStack_174 = uStack_4c;
              iVar12 = local_334 + local_33c * 0xc;
              piVar1 = (int *)(iVar12 + 400);
              puVar3 = (uint *)(iVar12 + 0x198);
              puVar4 = (uint *)(iVar12 + 0x194);
              uVar11 = *puVar3;
              if (*puVar4 == uVar11) {
                local_338 = uVar11 << 1;
                if (uVar11 == 0) {
                  local_338 = 0x10;
                }
                uVar7 = (undefined4)((ulonglong)local_338 * 0x14c);
                if ((ulonglong)local_338 * 0x14c >> 0x20 != 0) {
                  uVar7 = 0xffffffff;
                }
                iVar8 = FUN_100914b0(uVar7);
                if (iVar8 != 0) {
                  FUN_100917a0(iVar8,*piVar1,*puVar3 * 0x14c);
                  FUN_100914d0(*piVar1);
                  *piVar1 = iVar8;
                  *puVar3 = local_338;
                  goto LAB_1006855c;
                }
              }
              else {
LAB_1006855c:
                FUN_100917a0(*piVar1 + *puVar4 * 0x14c,auStack_2b8,0x14c);
                *puVar4 = *puVar4 + 1;
              }
              piVar1 = (int *)(iVar12 + 0x10);
              puVar3 = (uint *)(iVar12 + 0x18);
              puVar4 = (uint *)(iVar12 + 0x14);
              uVar11 = *puVar3;
              if (*puVar4 == uVar11) {
                local_338 = uVar11 << 1;
                if (uVar11 == 0) {
                  local_338 = 0x10;
                }
                iVar8 = local_338 * 4;
                if (local_338 >> 0x1e != 0) {
                  iVar8 = -1;
                }
                iVar8 = FUN_100914b0(iVar8);
                if (iVar8 != 0) {
                  FUN_100917a0(iVar8,*piVar1,((ulonglong)*puVar3 & 0x3fffffff) << 2);
                  FUN_100914d0(*piVar1);
                  *piVar1 = iVar8;
                  *puVar3 = local_338;
                  goto LAB_100685fc;
                }
              }
              else {
LAB_100685fc:
                *(undefined4 *)(*piVar1 + *puVar4 * 4) = 0;
                *puVar4 = *puVar4 + 1;
              }
              piVar1 = (int *)(iVar12 + 0xd0);
              puVar3 = (uint *)(iVar12 + 0xd8);
              puVar4 = (uint *)(iVar12 + 0xd4);
              uVar11 = *puVar3;
              if (*puVar4 == uVar11) {
                uVar5 = uVar11 << 1;
                if (uVar11 == 0) {
                  uVar5 = 0x10;
                }
                iVar12 = uVar5 * 8;
                if (uVar5 >> 0x1d != 0) {
                  iVar12 = -1;
                }
                iVar12 = FUN_100914b0(iVar12);
                if (iVar12 == 0) goto LAB_100686a4;
                FUN_100917a0(iVar12,*piVar1,((ulonglong)*puVar3 & 0x1fffffff) << 3);
                FUN_100914d0(*piVar1);
                *piVar1 = iVar12;
                *puVar3 = uVar5;
              }
              *(undefined8 *)(*piVar1 + *puVar4 * 8) = 0;
              *puVar4 = *puVar4 + 1;
            }
LAB_100686a4:
            uVar7 = (*pcVar6)();
            (*extraout_w11_02)(uVar7);
            iVar13 = iVar13 + 1;
            uVar7 = (*pcVar6)();
            iVar8 = (*extraout_w11_03)(uVar7,iVar13,&local_340);
            uVar11 = local_324;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < local_320);
    }
    uVar10 = 1;
  }
  return uVar10;
}

