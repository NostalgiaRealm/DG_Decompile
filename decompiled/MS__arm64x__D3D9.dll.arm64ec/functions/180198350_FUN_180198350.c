/*
 * FUN_180198350 at 180198350
 * undefined FUN_180198350(void)
 * Address ranges: 180198350-180198603
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180198350(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       uint param_5,uint param_6,uint param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 extraout_x1;
  uint uVar6;
  longlong extraout_x8;
  longlong extraout_x8_00;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *pcVar10;
  code *extraout_x11_02;
  code *extraout_x11_03;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  uint local_5c;
  
  uVar13 = **(undefined8 **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar4 = FUN_180198260(param_1,param_5,param_6);
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  uVar12 = uVar4 & 0xff;
  local_5c = (uint)uVar4 & 0xff;
  if ((uVar4 & 0xff) != 0) {
    uVar8 = (uint)(byte)uVar4;
    if (param_2 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      if ((lVar5 == 0) || ((param_7 & 1) == 0)) {
        lVar5 = *(longlong *)(param_1 + 0x18);
      }
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000,uVar4,lVar5);
      iVar3 = (*extraout_x11)(uVar13,extraout_x1,param_2,param_1 + 0x28);
      local_5c = (uint)uVar4 & 0xff;
      if (iVar3 < 0) {
        local_5c = 0;
      }
      uVar12 = (ulonglong)local_5c;
      uVar8 = local_5c;
      if (local_5c == 0) goto LAB_180198558;
    }
    if ((param_3 != 0) || (param_4 != 0)) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      uVar11 = 0;
      if (param_6 != 0) {
        do {
          local_5c = uVar8;
          if (param_5 != 0) {
            uVar8 = 0;
            do {
              if (param_3 == 0) {
                uVar9 = 1;
                uVar6 = uVar11;
                if (lVar5 == 0) {
                  *(undefined4 *)(param_4 + 0x14) = 1;
                  uVar6 = uVar8;
                  uVar9 = uVar11;
                }
                *(uint *)(param_4 + 0xc) = uVar6;
                *(uint *)(param_4 + 0x10) = uVar9;
                uVar1 = 0x18;
                if (lVar5 != 0) {
                  uVar1 = 0x20;
                }
                (*(code *)puVar2)(uVar1);
                lVar7 = extraout_x8_00;
                pcVar10 = extraout_x11_01;
              }
              else {
                if (lVar5 == 0) {
                  *(undefined4 *)(param_3 + 0x10) = 1;
                  uVar6 = uVar8;
                  uVar9 = uVar11;
                }
                else {
                  uVar6 = uVar11;
                  uVar9 = 1;
                }
                *(uint *)(param_3 + 8) = uVar6;
                *(uint *)(param_3 + 0xc) = uVar9;
                uVar1 = 0x18;
                if (lVar5 != 0) {
                  uVar1 = 0x20;
                }
                (*(code *)puVar2)(uVar1);
                lVar7 = extraout_x8;
                pcVar10 = extraout_x11_00;
              }
              iVar3 = (*pcVar10)(uVar13,*(undefined8 *)(param_1 + lVar7));
              if (iVar3 < 0) {
                local_5c = 0;
                break;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < param_5);
          }
          uVar11 = uVar11 + 1;
          uVar8 = local_5c;
        } while (uVar11 < param_6);
      }
    }
    uVar12 = (ulonglong)local_5c;
    if (local_5c != 0) {
      return uVar12;
    }
  }
LAB_180198558:
  uVar8 = 0;
  if (param_6 != 0) {
    do {
      if (param_5 != 0) {
        uVar11 = 0;
        do {
          uVar4 = (ulonglong)(uVar11 + uVar8 * param_5);
          if (*(longlong *)(*(longlong *)(param_1 + 0x30) + uVar4 * 0x28) != 0) {
            (*(code *)puVar2)();
            (*extraout_x11_02)();
            *(undefined8 *)(*(longlong *)(param_1 + 0x30) + uVar4 * 0x28) = 0;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < param_5);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_6);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_03)();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return uVar12;
}

