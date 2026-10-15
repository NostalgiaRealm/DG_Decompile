/*
 * FUN_18015cf78 at 18015cf78
 * undefined FUN_18015cf78(void)
 * Address ranges: 18015cf78-18015d327
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_18015cf78(longlong param_1,code *param_2,int param_3,undefined8 *param_4,int param_5,
             uint param_6)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar13;
  undefined8 uVar14;
  longlong local_70;
  undefined8 *local_68;
  code *local_60;
  longlong local_58;
  undefined8 *local_50;
  longlong lStack_48;
  
  local_58 = param_1 + 0x8000;
  if (((param_6 & 1) != 0) && (iVar5 = FUN_180104210(param_2 + 0x50,3,2), iVar5 == 2)) {
    lVar13 = *(longlong *)(param_1 + 0xf6e0);
    FUN_180221850(lVar13 + 0x12c0);
    if (*(char *)(lVar13 + 0x14c4) == '\0') {
LAB_18015d088:
      plVar11 = *(longlong **)(lVar13 + 0x14a0);
      *plVar11 = param_1;
      plVar11[1] = (longlong)param_2;
      FUN_18015d330();
    }
    else {
      local_68 = (undefined8 *)FUN_1802218b0(lVar13 + 0x12c0,0x10);
      if (local_68 == (undefined8 *)0x0) {
        FUN_180221bb0(lVar13 + 0x12c0);
        thunk_FUN_1802237c0(100);
        FUN_180221850(lVar13 + 0x12c0);
        goto LAB_18015d088;
      }
      FUN_1801042e0(lVar13 + 0x14c0);
      local_68[1] = 0x10;
      local_68[2] = param_1;
      puVar10 = (undefined8 *)((longlong)local_68 + 0x27U & 0xfffffffffffffff8);
      local_68[3] = param_2;
      DataMemoryBarrier(2,3);
      *puVar10 = 0;
      *local_68 = FUN_18015d330;
      *(undefined8 **)(lVar13 + (ulonglong)*(uint *)(lVar13 + 0x14bc) * 0x28 + 0x1350) = puVar10;
      if (*(char *)(lVar13 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar13 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar13 + 0x1340));
        goto LAB_18015d09c;
      }
    }
    FUN_180221bb0(lVar13 + 0x12c0);
  }
LAB_18015d09c:
  if (*(int *)(param_2 + 0x50) == 3) {
    plVar11 = *(longlong **)(param_2 + 0x38);
    if (plVar11 == (longlong *)0x0) {
      bVar4 = false;
    }
    else {
      iVar5 = 0;
      if ((*(uint *)(*plVar11 + (ulonglong)*(uint *)(plVar11 + 1) * 0x20 + 0x14) & 1) != 0) {
        uVar14 = *(undefined8 *)(param_2 + 0x40);
        local_68 = (undefined8 *)
                   (((ulonglong)(uint)(*(int *)(param_2 + 0x48) + (int)plVar11[5] * 2) & 0x3fffffff)
                   * 4);
        lStack_48 = (longlong)local_68 + 4;
        local_70 = 0;
        local_60 = (code *)__hybrid_os_arm64x_dispatch_icall;
        local_50 = local_68;
        (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        iVar6 = (*extraout_x11)(uVar14,0,&local_50,&local_70);
        if (-1 < iVar6) {
          iVar5 = *(int *)((longlong)local_68 + local_70);
          local_50 = (undefined8 *)0x0;
          lStack_48 = 0;
          (*local_60)(0x180224000);
          (*extraout_x11_00)(uVar14,0,&local_50);
        }
      }
      bVar4 = iVar5 == 1;
    }
    if (bVar4) {
      local_60 = param_2;
      uVar14 = thunk_FUN_1802236f8(param_1 + 0xf888);
      lVar13 = local_58;
      if ((*(int *)(param_2 + 0x50) != 0) && (uVar2 = *(uint *)(param_1 + 0xf880), uVar2 != 0)) {
        uVar9 = 0;
        uVar8 = uVar2;
        do {
          uVar3 = uVar8 + uVar9 >> 1;
          uVar12 = (ulonglong)uVar3;
          pcVar7 = *(code **)(*(longlong *)(param_1 + 0xf878) + uVar12 * 0x18);
          if (pcVar7 <= param_2) {
            if (param_2 <= pcVar7) break;
            uVar9 = uVar3 + 1;
            uVar12 = (ulonglong)(uVar3 + 1);
            uVar3 = uVar8;
          }
          uVar8 = uVar3;
        } while (uVar8 != uVar9);
        if ((((uint)uVar12 != uVar2) &&
            (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xf878) + uVar12 * 0x18),
            (code *)*puVar1 == param_2)) && (puVar1 = puVar1 + 2, puVar1 != (ulonglong *)0x0)) {
          FUN_180160740(uVar14,*(longlong *)(local_58 + 0x7848) + (ulonglong)(uint)*puVar1 * 0x40);
          *(undefined1 *)(*(longlong *)(lVar13 + 0x7848) + (ulonglong)(uint)*puVar1 * 0x40 + 0x3d) =
               1;
          FUN_1801613b0(param_1 + 0xf870,&local_60);
        }
      }
      thunk_FUN_18022370c(param_1 + 0xf888);
    }
  }
  if ((param_3 == 8) || (param_3 == 9)) {
    if (param_5 - 1U < 3) {
      return 0x80004005;
    }
    if (*(int *)(param_2 + 0x50) != 0) {
LAB_18015d304:
      param_2[0x58] = (code)0x1;
      return 1;
    }
LAB_18015d2bc:
    if (param_5 != 0) {
      *(undefined4 *)param_4 = *(undefined4 *)(param_2 + 0x28);
    }
  }
  else {
    if (param_3 == 10) {
      if (param_5 - 1U < 7) {
        return 0x80004005;
      }
      if (*(int *)(param_2 + 0x50) != 0) goto LAB_18015d304;
    }
    else {
      if (param_3 == 0xb) {
        if (param_5 - 1U < 3) {
          return 0x80004005;
        }
        if (*(int *)(param_2 + 0x50) != 0) {
          return 1;
        }
        goto LAB_18015d2bc;
      }
      if (param_3 != 0xc) {
        return 0x80004005;
      }
      if (param_5 - 1U < 7) {
        return 0x80004005;
      }
      if (*(int *)(param_2 + 0x50) != 0) {
        return 1;
      }
    }
    if (param_5 != 0) {
      *param_4 = *(undefined8 *)(param_2 + 0x28);
    }
  }
  return 0;
}

