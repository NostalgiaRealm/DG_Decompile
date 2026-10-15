/*
 * FUN_1006e5c0 at 1006e5c0
 * undefined FUN_1006e5c0(void)
 * Address ranges: 1006e5c0-1006ea1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1006e5c0(int param_1,code *param_2,undefined4 param_3,undefined8 *param_4,int param_5,
            uint param_6)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  bool bVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  code *extraout_w11;
  code *extraout_w11_00;
  ulonglong uVar19;
  int iVar20;
  int local_5c;
  int iStack_58;
  code *local_54;
  undefined8 local_50;
  
  if ((param_6 & 1) != 0) {
    pcVar1 = param_2 + 0x34;
    do {
      iVar13 = *(int *)pcVar1;
      iVar20 = iVar13;
      if (iVar13 == 2) {
        iVar20 = 3;
      }
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ZEXT48(pcVar1),0x10);
      if (bVar11) {
        *(int *)pcVar1 = iVar20;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar13 == 2) {
      iVar20 = *(int *)(param_1 + 0xf6b8);
      puVar3 = (undefined4 *)(iVar20 + 0x11c0);
      FUN_101308d0(puVar3);
      cVar7 = *(char *)(iVar20 + 0x12ec);
      bVar11 = true;
      if (cVar7 == '\0') {
LAB_1006e6f0:
        if (cVar7 == '\0') goto LAB_1006e6f8;
      }
      else {
        puVar12 = (undefined4 *)FUN_10130778(puVar3,8);
        if (puVar12 != (undefined4 *)0x0) {
          piVar2 = (int *)(iVar20 + 0x12e8);
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
            if (bVar9) {
              *piVar2 = *piVar2 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          DataMemoryBarrier(2,3);
          puVar12[1] = 8;
          puVar12[2] = param_1;
          puVar12[3] = param_2;
          puVar5 = (undefined4 *)((int)puVar12 + 0x13U & 0xfffffffc);
          *puVar5 = 0;
          *puVar12 = FUN_1006ea30;
          puVar3[*(int *)(iVar20 + 0x12e4) * 5 + 0x1a] = puVar5;
          if (*(char *)(iVar20 + 0x12ed) != '\0') {
            *puVar3 = 0;
            (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar20 + 0x1220));
            bVar11 = false;
          }
          goto LAB_1006e6f0;
        }
        *puVar3 = 0;
        (*(code *)PTR_FUN_1016c114)(100);
        FUN_101308d0(puVar3);
LAB_1006e6f8:
        piVar2 = *(int **)(iVar20 + 0x12d0);
        *piVar2 = param_1;
        piVar2[1] = (int)param_2;
        FUN_1006ea30(piVar2);
      }
      if (bVar11) {
        *puVar3 = 0;
      }
    }
  }
  if (*(int *)(param_2 + 0x34) == 3) {
    piVar2 = *(int **)(param_2 + 0x28);
    if (piVar2 == (int *)0x0) {
      bVar11 = false;
    }
    else {
      iVar20 = 0;
      if ((*(uint *)(*piVar2 + piVar2[1] * 0x18 + 0xc) & 1) != 0) {
        uVar14 = *(undefined4 *)(param_2 + 0x2c);
        iStack_58 = (*(int *)(param_2 + 0x30) + piVar2[7] * 2) * 4;
        local_5c = 0;
        local_50 = CONCAT44(iStack_58 + 4,iStack_58);
        local_54 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        iVar13 = (*extraout_w11)(uVar14,0,&local_50,&local_5c);
        if (-1 < iVar13) {
          iVar20 = *(int *)(iStack_58 + local_5c);
          local_50 = 0;
          (*local_54)();
          (*extraout_w11_00)(uVar14,0,&local_50);
        }
      }
      bVar11 = iVar20 == 1;
    }
    if (bVar11) {
      local_54 = param_2;
      uVar15 = (*(code *)PTR_FUN_1016c074)(param_1 + 0xf7c8);
      if (*(int *)(param_2 + 0x34) != 0) {
        uVar6 = *(uint *)(param_1 + 0xf7c0);
        if (uVar6 != 0) {
          uVar17 = 0;
          uVar16 = uVar6;
          do {
            uVar18 = uVar16 + uVar17 >> 1;
            uVar19 = *(ulonglong *)(*(int *)(param_1 + 0xf7bc) + uVar18 * 0x10);
            uVar10 = uVar18;
            if (uVar19 <= (ulonglong)(longlong)(int)param_2) {
              if ((ulonglong)(longlong)(int)param_2 <= uVar19) break;
              uVar17 = uVar18 + 1;
              uVar18 = uVar17;
              uVar10 = uVar16;
            }
            uVar16 = uVar10;
          } while (uVar16 != uVar17);
          if (((uVar18 != uVar6) &&
              (plVar4 = (longlong *)(*(int *)(param_1 + 0xf7bc) + uVar18 * 0x10),
              *plVar4 == (longlong)(int)param_2)) &&
             (piVar2 = (int *)((int)plVar4 + 0xc), piVar2 != (int *)0x0)) {
            FUN_100707d8(uVar15,*(int *)(param_1 + 0xf790) + *piVar2 * 0x30);
            *(undefined1 *)(*(int *)(param_1 + 0xf790) + *piVar2 * 0x30 + 0x2d) = 1;
            FUN_10071470(param_1 + 0xf7b8,&local_54);
          }
        }
      }
      (*(code *)PTR_FUN_1016c0c0)(param_1 + 0xf7c8);
    }
  }
  uVar14 = 0x80004005;
  switch(param_3) {
  case 8:
  case 9:
    if (param_5 - 1U < 3) {
      return 0x80004005;
    }
    if (*(int *)(param_2 + 0x34) != 0) {
LAB_1006e94c:
      param_2[0x3c] = (code)0x1;
      return 1;
    }
    break;
  case 10:
    if (param_5 - 1U < 7) {
      return 0x80004005;
    }
    if (*(int *)(param_2 + 0x34) != 0) goto LAB_1006e94c;
    goto LAB_1006e9e8;
  case 0xb:
    if (param_5 - 1U < 3) {
      return 0x80004005;
    }
    if (*(int *)(param_2 + 0x34) != 0) {
      return 1;
    }
    break;
  case 0xc:
    if (param_5 - 1U < 7) {
      return 0x80004005;
    }
    if (*(int *)(param_2 + 0x34) != 0) {
      return 1;
    }
LAB_1006e9e8:
    uVar14 = 0;
    if (param_5 != 0) {
      *param_4 = *(undefined8 *)(param_2 + 0x18);
    }
  default:
    goto switchD_1006e948_default;
  }
  uVar14 = 0;
  if (param_5 != 0) {
    *(undefined4 *)param_4 = *(undefined4 *)(param_2 + 0x18);
  }
switchD_1006e948_default:
  return uVar14;
}

