/*
 * FUN_180051140 at 180051140
 * undefined FUN_180051140(void)
 * Address ranges: 180051140-180051347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051140(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint local_40 [4];
  
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x80);
  FUN_180050fe8(param_1,*param_2);
  local_40[0] = *(uint *)(param_1 + 0x54);
  uVar6 = (ulonglong)local_40[0];
  if (local_40[0] == 0xffffffff) {
LAB_180051248:
    plVar9 = (longlong *)(param_1 + 0x40);
    uVar8 = *(uint *)(param_1 + 0x48);
    uVar2 = *(uint *)(param_1 + 0x4c);
    local_40[0] = uVar8;
    if (uVar8 == uVar2) {
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
      lVar7 = thunk_FUN_180102f80(lVar7);
      if (lVar7 == 0) goto LAB_180051324;
      thunk_FUN_180001218(lVar7,*plVar9,(ulonglong)*(uint *)(param_1 + 0x4c) << 6);
      thunk_FUN_180102fc0(*plVar9);
      *plVar9 = lVar7;
      *(uint *)(param_1 + 0x4c) = uVar3;
    }
    uVar12 = *param_2;
    uVar11 = param_2[3];
    uVar10 = param_2[2];
    puVar1 = (undefined8 *)(*plVar9 + (ulonglong)*(uint *)(param_1 + 0x48) * 0x40);
    puVar1[1] = param_2[1];
    *puVar1 = uVar12;
    puVar1[3] = uVar11;
    puVar1[2] = uVar10;
    uVar12 = param_2[4];
    uVar11 = param_2[7];
    uVar10 = param_2[6];
    puVar1[5] = param_2[5];
    puVar1[4] = uVar12;
    puVar1[7] = uVar11;
    puVar1[6] = uVar10;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    if (*(char *)((longlong)param_2 + 0x3c) != '\0') {
      FUN_180051778(param_1 + 0x68,param_2,local_40);
      uVar8 = local_40[0];
    }
    if (*(uint *)(param_1 + 0x54) != 0xffffffff) {
      *(uint *)(*plVar9 + (ulonglong)*(uint *)(param_1 + 0x54) * 0x40 + 0x38) = uVar8;
    }
    *(uint *)(param_1 + 0x54) = uVar8;
    if (*(int *)(param_1 + 0x50) == -1) {
      *(uint *)(param_1 + 0x50) = uVar8;
    }
  }
  else {
    if (*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar6 * 0x40) != 0) {
      local_40[0] = *(uint *)(*(longlong *)(param_1 + 0x40) + uVar6 * 0x40 + 0x38);
      uVar6 = (ulonglong)local_40[0];
    }
    plVar9 = (longlong *)(param_1 + 0x40);
    if ((int)uVar6 == -1) goto LAB_180051248;
    if (*(char *)((longlong)param_2 + 0x3c) != '\0') {
      FUN_180051778(param_1 + 0x68,param_2,local_40);
      uVar6 = (ulonglong)local_40[0];
    }
    lVar4 = uVar6 * 0x40;
    *(undefined8 *)(*plVar9 + lVar4) = *param_2;
    *(undefined8 *)(lVar4 + *plVar9 + 8) = param_2[1];
    *(undefined8 *)(lVar4 + *plVar9 + 0x10) = param_2[2];
    uVar12 = param_2[3];
    uVar11 = param_2[6];
    uVar10 = param_2[5];
    lVar7 = lVar4 + *plVar9;
    *(undefined8 *)(lVar7 + 0x20) = param_2[4];
    *(undefined8 *)(lVar7 + 0x18) = uVar12;
    *(undefined8 *)(lVar7 + 0x30) = uVar11;
    *(undefined8 *)(lVar7 + 0x28) = uVar10;
    *(undefined1 *)(lVar4 + *plVar9 + 0x3c) = *(undefined1 *)((longlong)param_2 + 0x3c);
    *(undefined1 *)(lVar4 + *plVar9 + 0x3d) = *(undefined1 *)((longlong)param_2 + 0x3d);
    *(int *)(param_1 + 0x54) = (int)uVar6;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
LAB_180051324:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x80);
  return;
}

