/*
 * FUN_1801ddb70 at 1801ddb70
 * undefined FUN_1801ddb70(void)
 * Address ranges: 1801ddb70-1801ddd07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801ddb70(undefined8 *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar9;
  longlong lVar10;
  
  lVar10 = param_1[3];
  iVar4 = FUN_1801042d0(param_1 + 1);
  if (*(int *)((longlong)param_1 + 0xc) + iVar4 == 0) {
    if (((*(uint *)(param_1[3] + 0xe78) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
      bVar2 = false;
      *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    }
    else {
      bVar2 = true;
      iVar5 = thunk_FUN_1802236e4(DAT_180258900);
      if (iVar5 == 0) {
        FUN_1801085c8();
      }
    }
    puVar3 = __hybrid_os_arm64x_dispatch_icall;
    lVar9 = param_1[3];
    uVar6 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar6,param_1[6]);
    uVar8 = *(uint *)(lVar9 + 0x6988);
    if (uVar8 != 0) {
      uVar7 = 0;
      do {
        if (*(undefined8 **)(*(longlong *)(lVar9 + 0x6980) + uVar7 * 8) == param_1) {
          if ((int)uVar7 != -1) {
            while (uVar1 = (int)uVar7 + 1, uVar1 < uVar8) {
              *(undefined8 *)(*(longlong *)(lVar9 + 0x6980) + uVar7 * 8) =
                   *(undefined8 *)(*(longlong *)(lVar9 + 0x6980) + (ulonglong)uVar1 * 8);
              uVar7 = (ulonglong)uVar1;
              uVar8 = *(uint *)(lVar9 + 0x6988);
            }
            *(int *)(lVar9 + 0x6988) = *(int *)(lVar9 + 0x6988) + -1;
          }
          break;
        }
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
      } while (uVar1 < uVar8);
    }
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_00)();
    *param_1 = &PTR_FUN_18022ed38;
    param_1[6] = 0;
    FUN_1802229d8(param_1,0x48);
    if (bVar2) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  if (iVar4 == 0) {
    FUN_1801c3098(lVar10 + 0x6838);
  }
  return iVar4;
}

