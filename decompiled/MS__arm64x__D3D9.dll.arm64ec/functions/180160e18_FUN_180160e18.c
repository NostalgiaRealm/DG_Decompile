/*
 * FUN_180160e18 at 180160e18
 * undefined FUN_180160e18(void)
 * Address ranges: 180160e18-180160f67;180160f78-18016100f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180160e18(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint local_40 [4];
  
  thunk_FUN_1802236f8(param_1 + 0x80);
  FUN_180160cc0(param_1,*param_2);
  local_40[0] = *(uint *)(param_1 + 0x54);
  uVar6 = (ulonglong)local_40[0];
  if (local_40[0] == 0xffffffff) {
LAB_180160f18:
    plVar8 = (longlong *)(param_1 + 0x40);
    local_40[0] = *(uint *)(param_1 + 0x48);
    uVar2 = *(uint *)(param_1 + 0x4c);
    if (local_40[0] == uVar2) {
      uVar3 = uVar2 << 1;
      if (uVar2 == 0) {
        uVar3 = 0x10;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = CONCAT44(0,uVar3);
      lVar7 = CONCAT44(0,uVar3) << 6;
      if (SUB168(auVar5 * ZEXT816(0x40),8) != 0) {
        lVar7 = -1;
      }
      lVar7 = FUN_1802229a8(lVar7);
      if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar7,*plVar8,(ulonglong)*(uint *)(param_1 + 0x4c) << 6);
      }
      goto LAB_180160ff4;
    }
    uVar9 = *param_2;
    uVar11 = param_2[3];
    uVar10 = param_2[2];
    puVar1 = (undefined8 *)(*plVar8 + (ulonglong)*(uint *)(param_1 + 0x48) * 0x40);
    puVar1[1] = param_2[1];
    *puVar1 = uVar9;
    puVar1[3] = uVar11;
    puVar1[2] = uVar10;
    uVar9 = param_2[4];
    uVar11 = param_2[7];
    uVar10 = param_2[6];
    puVar1[5] = param_2[5];
    puVar1[4] = uVar9;
    puVar1[7] = uVar11;
    puVar1[6] = uVar10;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    if (*(char *)((longlong)param_2 + 0x3c) != '\0') {
      FUN_180161470(param_1 + 0x68,param_2,local_40);
    }
    if (*(uint *)(param_1 + 0x54) != 0xffffffff) {
      *(uint *)(*plVar8 + (ulonglong)*(uint *)(param_1 + 0x54) * 0x40 + 0x38) = local_40[0];
    }
    *(uint *)(param_1 + 0x54) = local_40[0];
    if (*(int *)(param_1 + 0x50) == -1) {
      *(uint *)(param_1 + 0x50) = local_40[0];
    }
  }
  else {
    if (*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar6 * 0x40) != 0) {
      local_40[0] = *(uint *)(*(longlong *)(param_1 + 0x40) + uVar6 * 0x40 + 0x38);
      uVar6 = (ulonglong)local_40[0];
    }
    plVar8 = (longlong *)(param_1 + 0x40);
    if ((int)uVar6 == -1) goto LAB_180160f18;
    if (*(char *)((longlong)param_2 + 0x3c) != '\0') {
      FUN_180161470(param_1 + 0x68,param_2,local_40);
      uVar6 = (ulonglong)local_40[0];
    }
    lVar4 = uVar6 * 0x40;
    *(undefined8 *)(*plVar8 + lVar4) = *param_2;
    *(undefined8 *)(lVar4 + *plVar8 + 8) = param_2[1];
    *(undefined8 *)(lVar4 + *plVar8 + 0x10) = param_2[2];
    uVar9 = param_2[3];
    uVar11 = param_2[6];
    uVar10 = param_2[5];
    lVar7 = lVar4 + *plVar8;
    *(undefined8 *)(lVar7 + 0x20) = param_2[4];
    *(undefined8 *)(lVar7 + 0x18) = uVar9;
    *(undefined8 *)(lVar7 + 0x30) = uVar11;
    *(undefined8 *)(lVar7 + 0x28) = uVar10;
    *(undefined1 *)(lVar4 + *plVar8 + 0x3c) = *(undefined1 *)((longlong)param_2 + 0x3c);
    *(undefined1 *)(lVar4 + *plVar8 + 0x3d) = *(undefined1 *)((longlong)param_2 + 0x3d);
    *(int *)(param_1 + 0x54) = (int)uVar6;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
LAB_180160ff4:
  thunk_FUN_18022370c(param_1 + 0x80);
  return;
}

