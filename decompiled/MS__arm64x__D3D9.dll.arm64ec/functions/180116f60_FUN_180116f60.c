/*
 * FUN_180116f60 at 180116f60
 * undefined FUN_180116f60(void)
 * Address ranges: 180116f60-18011712b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180116f60(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (param_2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x28);
    if ((((param_2 == *(longlong *)(lVar5 + 0x30)) || (param_2 == *(longlong *)(lVar5 + 0x38))) ||
        (param_2 == *(longlong *)(lVar5 + 0x40))) ||
       ((param_2 == *(longlong *)(lVar5 + 0x48) || (param_2 == *(longlong *)(lVar5 + 0x50))))) {
LAB_180116ff4:
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)();
    }
    else if (*(longlong *)(param_2 + 0x30) != 0) {
      uVar6 = 0;
      do {
        if (*(longlong *)(param_2 + 0x30) == *(longlong *)(lVar5 + 0x1338 + uVar6 * 8))
        goto LAB_180116ff4;
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
      } while (uVar1 < 0x10);
    }
    FUN_180131158(*(undefined8 *)(param_2 + 8));
  }
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x70) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x28);
    if (((param_1 == *(longlong *)(lVar5 + 0x30)) || (param_1 == *(longlong *)(lVar5 + 0x38))) ||
       ((param_1 == *(longlong *)(lVar5 + 0x40) ||
        ((param_1 == *(longlong *)(lVar5 + 0x48) || (param_1 == *(longlong *)(lVar5 + 0x50))))))) {
LAB_180117090:
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_00)();
    }
    else if (*(longlong *)(param_1 + 0x30) != 0) {
      uVar6 = 0;
      do {
        if (*(longlong *)(param_1 + 0x30) == *(longlong *)(lVar5 + 0x1338 + uVar6 * 8))
        goto LAB_180117090;
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
      } while (uVar1 < 0x10);
    }
    lVar5 = *(longlong *)(param_1 + 8);
    uVar6 = (ulonglong)*(uint *)(lVar5 + 0x88);
    if (*(uint *)(lVar5 + 0x88) != 0xffffffff) {
      lVar4 = *(longlong *)(lVar5 + 0x78);
      uVar3 = (*(code *)puVar2)(0x180224000);
      (*extraout_x11_01)(uVar3,*(undefined8 *)(lVar5 + 0x70),
                         *(undefined8 *)(lVar4 + (uVar6 & 0xffffffff) * 8));
      *(undefined4 *)(lVar5 + 0x88) = 0xffffffff;
    }
    FUN_180131158(*(undefined8 *)(param_1 + 8));
    lVar5 = *(longlong *)(param_1 + 8);
    uVar3 = (*(code *)puVar2)(0x180224000);
    (*extraout_x11_02)(uVar3,*(undefined4 *)(lVar5 + 0x94),*(undefined4 *)(lVar5 + 0x98),1);
  }
  return;
}

