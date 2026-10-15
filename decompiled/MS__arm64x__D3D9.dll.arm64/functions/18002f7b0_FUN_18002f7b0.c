/*
 * FUN_18002f7b0 at 18002f7b0
 * undefined FUN_18002f7b0(void)
 * Address ranges: 18002f7b0-18002fbc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002f7b0(longlong param_1,int param_2,undefined8 param_3,longlong param_4,longlong param_5
                  ,undefined4 param_6,uint param_7,uint param_8,char param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong local_68 [3];
  
  lVar14 = 0;
  do {
    plVar4 = *(longlong **)(param_1 + 0xf9b0 + lVar14 * 8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))
                (plVar4,*(undefined4 *)(param_1 + 0xf9d8 + lVar14 * 4),
                 *(undefined4 *)(param_1 + 0xf9e8 + lVar14 * 4),0);
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 != 4);
  plVar4 = *(longlong **)(param_1 + 0xf9d0);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))
              (plVar4,*(undefined4 *)(param_1 + 0xf9f8),*(undefined4 *)(param_1 + 0xf9fc),0);
  }
  FUN_18002a810(param_1,0,0,0);
  uVar9 = *(undefined4 *)(param_1 + 0x1028);
  uVar1 = *(undefined4 *)(param_1 + 0x106c);
  uVar15 = *(undefined8 *)(param_1 + 0xfd60);
  if (param_2 == 6) {
    if (param_8 < 3) {
      return;
    }
    iVar3 = 0;
    lVar2 = param_4;
    lVar14 = local_68[0];
    for (param_8 = param_8 - 2; local_68[0] = lVar2, param_8 != 0; param_8 = param_8 - uVar13) {
      iVar7 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90);
      if (0x1000U - iVar7 < 0x10) {
        FUN_18002a810(param_1,0,1,0);
        iVar7 = 0;
      }
      uVar13 = (0x1000U - iVar7) / 3;
      if (param_8 < (0x1000U - iVar7) / 3) {
        uVar13 = param_8;
      }
      if (local_68[0] == 0) {
        FUN_18002aa20(param_1,4,param_3);
      }
      else {
        FUN_18002dd38(param_1,4,local_68[0] + -0x30,uVar15,*(undefined8 *)(param_1 + 0xf710),uVar1,
                      uVar9,0,0,uVar13 * 3 != 0,0);
      }
      if (uVar13 != 0) {
        puVar10 = *(uint **)(param_1 + 0x88);
        uVar8 = 0;
        do {
          uVar6 = uVar8 + iVar3 + param_7 + 1;
          if (param_9 == '\0') {
            uVar6 = (uint)*(ushort *)(param_5 + (ulonglong)uVar6 * 2);
          }
          else {
            uVar6 = *(uint *)(param_5 + (ulonglong)uVar6 * 4);
          }
          uVar11 = uVar8 + iVar3 + param_7 + 2;
          if (param_9 == '\0') {
            uVar12 = (uint)*(ushort *)(param_5 + (ulonglong)param_7 * 2);
            uVar11 = (uint)*(ushort *)(param_5 + (ulonglong)uVar11 * 2);
          }
          else {
            uVar12 = *(uint *)(param_5 + (ulonglong)param_7 * 4);
            uVar11 = *(uint *)(param_5 + (ulonglong)uVar11 * 4);
          }
          *puVar10 = uVar6;
          uVar8 = uVar8 + 1;
          *(uint *)(*(longlong *)(param_1 + 0x88) + 4) = uVar11;
          *(uint *)(*(longlong *)(param_1 + 0x88) + 8) = uVar12;
          puVar10 = (uint *)(*(longlong *)(param_1 + 0x88) + 0xc);
          *(uint **)(param_1 + 0x88) = puVar10;
        } while (uVar8 < uVar13);
      }
      iVar3 = uVar13 + iVar3;
      *(uint *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + uVar13 * 3;
      *(undefined4 *)(param_1 + 0x98) = param_6;
      lVar2 = local_68[0];
      lVar14 = local_68[0];
    }
    local_68[0] = lVar14;
    FUN_18002a810(param_1,0,0,0);
    *(undefined4 *)(param_1 + 0x98) = 0;
    return;
  }
  if (*(longlong *)(param_1 + 0xfd78) == 0) {
    return;
  }
  if (param_4 == 0) {
    uVar13 = 1;
    FUN_18002aa20(param_1,param_2,param_3);
  }
  else {
    FUN_18002dd38(param_1,param_2,param_4 + -0x30,uVar15,*(undefined8 *)(param_1 + 0xfd68),uVar1,
                  uVar9,0,0,0,*(undefined1 *)(param_4 + 0x1c));
    uVar13 = *(uint *)(param_4 + 0x2c);
  }
  uVar5 = FUN_180026a80(param_1);
  if ((uVar5 & 1) == 0) goto LAB_18002fb94;
  lVar14 = *(longlong *)(param_1 + 0xfd78);
  if (*(int *)(lVar14 + 0x30) == 1) {
    uVar6 = *(uint *)(lVar14 + 0x28);
    uVar8 = 1;
    if (*(char *)(lVar14 + 0x34) != '\0') {
      uVar8 = 2;
    }
    uVar11 = param_8 << (ulonglong)uVar8;
    if (uVar6 < uVar11) goto LAB_18002fb94;
    uVar12 = *(int *)(lVar14 + 0x2c) + uVar11;
    if (uVar6 < uVar12) {
      *(undefined4 *)(lVar14 + 0x2c) = 0;
    }
    plVar4 = *(longlong **)(*(longlong *)(lVar14 + 0x18) + 8);
    uVar9 = 4;
    if (uVar12 <= uVar6) {
      uVar9 = 5;
    }
    iVar3 = (**(code **)(*plVar4 + 0x70))(plVar4,*(undefined8 *)(lVar14 + 0x20),0,uVar9,0,local_68);
    if (iVar3 < 0) goto LAB_18002fb94;
    thunk_FUN_180001218(local_68[0] + (ulonglong)*(uint *)(lVar14 + 0x2c),
                        param_5 + (ulonglong)(param_7 << (ulonglong)uVar8),uVar11);
    plVar4 = *(longlong **)(*(longlong *)(lVar14 + 0x18) + 8);
    (**(code **)(*plVar4 + 0x78))(plVar4,*(undefined8 *)(lVar14 + 0x20),0);
    param_7 = *(uint *)(lVar14 + 0x2c) >> (ulonglong)uVar8;
    *(uint *)(lVar14 + 0x2c) = uVar11 + *(uint *)(lVar14 + 0x2c);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    lVar14 = *plVar4;
  }
  else {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    lVar14 = *plVar4;
  }
  if (uVar13 < 2) {
    (**(code **)(lVar14 + 0x60))(plVar4,param_8,param_7,param_6);
  }
  else {
    (**(code **)(lVar14 + 0xa0))(plVar4,param_8,uVar13,param_7,param_6,0);
  }
LAB_18002fb94:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(param_1 + 0xf6d0) + 0x620);
  return;
}

