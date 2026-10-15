/*
 * FUN_18010a538 at 18010a538
 * undefined FUN_18010a538(void)
 * Address ranges: 18010a538-18010a77f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18010a538(longlong param_1,ulonglong param_2,longlong param_3,int param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *pcVar8;
  int local_4c;
  
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  if (param_3 == 0) {
    local_4c = 0;
  }
  else {
    local_4c = *(int *)(param_3 + 0x58);
  }
  lVar6 = param_1 + (param_2 & 0xffffffff) * 8;
  if (((*(longlong *)(lVar6 + 0x66c8) == param_3) &&
      (lVar1 = param_1 + (param_2 & 0xffffffff) * 4, *(int *)(lVar1 + 0x6748) == param_5)) &&
     (*(int *)(lVar1 + 0x6788) == param_4)) {
    return 1;
  }
  uVar2 = 1 << (ulonglong)((uint)param_2 & 0x1f);
  uVar5 = param_2;
  if (param_3 != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(param_3);
    *(uint *)(&DAT_00006808 + param_1) = *(uint *)(&DAT_00006808 + param_1) | uVar2;
    uVar5 = extraout_x1;
  }
  if (*(longlong *)(lVar6 + 0x66c8) != 0) {
    *(undefined4 *)(*(longlong *)(lVar6 + 0x66c8) + 0x84) = 0xffffffff;
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_00)();
    uVar5 = extraout_x1_00;
  }
  lVar1 = param_1 + (param_2 & 0xffffffff) * 4;
  *(longlong *)(lVar6 + 0x66c8) = param_3;
  *(int *)(lVar1 + 0x6748) = param_5;
  *(int *)(lVar1 + 0x6788) = param_4;
  if (param_3 == 0) {
    *(uint *)(param_1 + 0x67c8) = *(uint *)(param_1 + 0x67c8) & (uVar2 ^ 0xffffffff);
    uVar7 = *(uint *)(&DAT_000067dc + param_1) & (uVar2 ^ 0xffffffff);
  }
  else {
    *(uint *)(param_3 + 0x84) = (uint)param_2;
    *(uint *)(param_1 + 0x67c8) = *(uint *)(param_1 + 0x67c8) | uVar2;
    uVar7 = *(uint *)(&DAT_000067dc + param_1) & (uVar2 ^ 0xffffffff);
    if (*(longlong *)(param_3 + 0x18) != 0) {
      uVar7 = *(uint *)(&DAT_000067dc + param_1) | uVar2;
    }
  }
  *(uint *)(&DAT_000067dc + param_1) = uVar7;
  uVar7 = *(uint *)(param_1 + 0x67d0) & (uVar2 ^ 0xffffffff);
  if (local_4c != 0) {
    uVar7 = *(uint *)(param_1 + 0x67d0) | uVar2;
  }
  *(uint *)(param_1 + 0x67d0) = uVar7;
  if ((param_3 == 0) || ((*(uint *)(param_3 + 0x50) >> 4 & 1) == 0)) {
    *(uint *)(param_1 + 0x67d4) = *(uint *)(param_1 + 0x67d4) & (uVar2 ^ 0xffffffff);
    if (param_3 != 0) goto LAB_18010a6d4;
LAB_18010a6f0:
    *(uint *)(param_1 + 0x67d8) = *(uint *)(param_1 + 0x67d8) & (uVar2 ^ 0xffffffff);
    if (param_3 == 0) {
      uVar4 = (*(code *)puVar3)(0x180225000);
      pcVar8 = extraout_x11_02;
      goto LAB_18010a758;
    }
  }
  else {
    *(uint *)(param_1 + 0x67d4) = *(uint *)(param_1 + 0x67d4) | uVar2;
LAB_18010a6d4:
    if (*(longlong *)(param_3 + 0x60) == 0) goto LAB_18010a6f0;
    *(uint *)(param_1 + 0x67d8) = *(uint *)(param_1 + 0x67d8) | uVar2;
  }
  lVar6 = *(longlong *)(param_3 + 0x60);
  *(undefined1 *)(param_3 + 0x89) = 1;
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(param_3 + 0x68);
  }
  uVar4 = (*(code *)puVar3)(0x180225000,*(undefined8 *)(param_1 + 0x28),uVar5,lVar6);
  pcVar8 = extraout_x11_01;
LAB_18010a758:
  (*pcVar8)(uVar4,param_2 & 0xffffffff);
  return 1;
}

