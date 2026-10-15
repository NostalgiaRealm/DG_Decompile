/*
 * FUN_1801a2928 at 1801a2928
 * undefined FUN_1801a2928(void)
 * Address ranges: 1801a2928-1801a2c83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a2928(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined8 *puVar8;
  ulonglong uVar9;
  
  puVar4 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_1 + 0x1cf10) != 0) {
    uVar9 = 0;
    uVar3 = *(uint *)(param_1 + 0x1d148);
    lVar6 = *(longlong *)(param_1 + 0x1d140);
    if (*(int *)(param_1 + 0x1d138) != 0) {
      if (*(int *)(param_1 + 0x1d138) == 0) {
        puVar8 = (undefined8 *)&DAT_00000008;
        goto LAB_1801a29c0;
      }
      do {
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x1d130) + uVar9 * 0x18 + 0x10);
LAB_1801a29c0:
        FUN_180205808(lVar6 + (ulonglong)uVar3 * 0x1ac0 + 0x22d8,*puVar8);
        (*(code *)puVar4)(0x180224000);
        (*extraout_x11)();
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x1d138));
    }
    FUN_1802229d8(*(undefined8 *)(param_1 + 0x1d128));
    *(undefined4 *)(param_1 + 0x1d138) = 0;
    *(undefined8 *)(param_1 + 0x1d128) = 0;
    *(undefined8 *)(param_1 + 0x1d130) = 0;
    *(undefined4 *)(param_1 + 0x1d13c) = 0;
    FUN_180221ec0(*(longlong *)(param_1 + 0x1cf18) + 0x12c0);
    FUN_180207560(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 8,0);
    FUN_180206a20(*(undefined8 *)(param_1 + 0x1cf10),*(undefined8 *)(param_1 + 0x1d150));
    *(undefined8 *)(param_1 + 0x1d150) = 0;
    uVar3 = *(uint *)(param_1 + 0x1d158);
    if (uVar3 != 0xffffffff) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930);
      thunk_FUN_1802236f8(lVar6 + 0x28);
      uVar2 = uVar3 & 0xffff;
      uVar1 = uVar2 + 1;
      if (uVar2 < uVar1) {
        lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + (ulonglong)(uVar3 >> 0x10) * 0x10 + 8);
        do {
          uVar9 = -1L << ((ulonglong)uVar2 & 0x3f);
          uVar3 = (uVar2 & 0xffffffc0) + 0x40;
          if (uVar1 < uVar3) {
            uVar9 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar1 & 0x3f) & uVar9;
          }
          *(ulonglong *)(lVar7 + (ulonglong)(uVar2 >> 6) * 8) =
               *(ulonglong *)(lVar7 + (ulonglong)(uVar2 >> 6) * 8) & (uVar9 ^ 0xffffffffffffffff);
          uVar2 = uVar3;
        } while (uVar3 < uVar1);
      }
      thunk_FUN_18022370c(lVar6 + 0x28);
    }
    FUN_180206a20(*(undefined8 *)(param_1 + 0x1cf10),*(undefined8 *)(param_1 + 0x1cf20));
    *(undefined8 *)(param_1 + 0x1cf20) = 0;
    lVar6 = *(longlong *)(param_1 + 0x1cf10) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x1ac0;
    *(longlong *)(param_1 + 0x1cf18) = lVar6 + 0x900;
    FUN_180205b78(lVar6 + 0x22d8,*(undefined8 *)(param_1 + 0x1d120));
    FUN_1802229d8(*(undefined8 *)(param_1 + 0x1d120),0x10);
    *(undefined8 *)(param_1 + 0x1d120) = 0;
    if (*(longlong *)(param_1 + 0x1cfc8) != 0) {
      FUN_180146480(*(longlong *)(param_1 + 0x1cfc8),1);
    }
    *(undefined8 *)(param_1 + 0x1cfc8) = 0;
    if (*(longlong *)(param_1 + 0x1cfd0) != 0) {
      FUN_180146480(*(longlong *)(param_1 + 0x1cfd0),1);
    }
    *(undefined8 *)(param_1 + 0x1cfd0) = 0;
    if (*(longlong *)(param_1 + 0x1d118) != 0) {
      FUN_180205808(*(longlong *)(param_1 + 0x1cf18) + 0x19d8);
    }
    lVar6 = 0;
    do {
      if (*(longlong *)(param_1 + 0x1cfd8 + lVar6 * 8) != 0) {
        FUN_180205808(*(longlong *)(param_1 + 0x1cf18) + 0x19d8);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x28);
    FUN_180205738(*(longlong *)(param_1 + 0x1cf18) + 0x19d8,*(undefined8 *)(param_1 + 0x1cf28));
    if (*(longlong *)(param_1 + 0x1cf28) != 0) {
      FUN_18020d9f8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf10) + 0x1b500),
                    *(longlong *)(param_1 + 0x1cf28),0,1);
    }
    (*(code *)puVar4)(0x180224000);
    uVar5 = (*extraout_x11_00)();
    *(undefined8 *)(param_1 + 0x1cf28) = 0;
    uVar5 = FUN_180206b80(uVar5,1,param_1 + 0x1d118);
    FUN_180206b80(uVar5,0x28,param_1 + 0x1cfd8);
    FUN_180104270(*(longlong *)(param_1 + 0x1cf10) + 0x618,0,param_1);
    FUN_180216420(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28));
    FUN_1801fe510(*(undefined8 *)(param_1 + 0x1cf10));
    *(undefined8 *)(param_1 + 0x1cf10) = 0;
    thunk_FUN_180223824(*(undefined8 *)(param_1 + 0x1d170));
    *(undefined8 *)(param_1 + 0x1d170) = 0;
  }
  return;
}

