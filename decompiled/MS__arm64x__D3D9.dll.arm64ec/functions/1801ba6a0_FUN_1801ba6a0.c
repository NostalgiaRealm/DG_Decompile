/*
 * FUN_1801ba6a0 at 1801ba6a0
 * undefined FUN_1801ba6a0(void)
 * Address ranges: 1801ba6a0-1801ba83b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801ba6a0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)();
  if (*(uint *)(param_1 + 0x100b8) == 0) {
    return;
  }
  uVar8 = 0;
  while( true ) {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x100b0) + uVar8 * 0x30);
    plVar6 = (longlong *)*puVar1;
    uVar7 = (uint)uVar8;
    if (*plVar6 == param_2) break;
    uVar8 = (ulonglong)(uVar7 + 1);
    if (*(uint *)(param_1 + 0x100b8) <= uVar7 + 1) {
      return;
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x20);
  lVar10 = puVar1[1];
  thunk_FUN_1802236f8(lVar9 + 0x620);
  if (((lVar10 != 0) && (plVar6[0x1ae] == param_1 || plVar6[0x1ae] == 0)) &&
     (*(uint *)(lVar9 + 0x660) != 0)) {
    uVar8 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar9 + 0x658) + uVar8 * 8) == lVar10) {
        if ((int)uVar8 != -1) {
          (*(code *)puVar3)(0x180224000);
          (*extraout_x11_00)(lVar10,plVar6);
        }
        break;
      }
      uVar5 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(lVar9 + 0x660));
  }
  thunk_FUN_18022370c(lVar9 + 0x620);
  iVar4 = FUN_180203408(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
  if ((iVar4 == 0) && (uVar5 = *(uint *)(param_1 + 0x100b8), uVar7 < uVar5)) {
    uVar7 = uVar7 + 1;
    if (uVar7 < uVar5) {
      do {
        uVar8 = (ulonglong)uVar7;
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x100b0) + (ulonglong)(uVar7 - 1) * 0x30);
        uVar7 = uVar7 + 1;
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x100b0) + uVar8 * 0x30);
        uVar11 = *puVar2;
        uVar13 = puVar2[3];
        uVar12 = puVar2[2];
        puVar1[1] = puVar2[1];
        *puVar1 = uVar11;
        puVar1[3] = uVar13;
        puVar1[2] = uVar12;
        uVar11 = puVar2[4];
        puVar1[5] = puVar2[5];
        puVar1[4] = uVar11;
        uVar5 = *(uint *)(param_1 + 0x100b8);
      } while (uVar7 < uVar5);
    }
    *(uint *)(param_1 + 0x100b8) = uVar5 - 1;
  }
  return;
}

