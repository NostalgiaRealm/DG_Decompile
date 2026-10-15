/*
 * FUN_1801d9a58 at 1801d9a58
 * undefined FUN_1801d9a58(void)
 * Address ranges: 1801d9a58-1801d9bdb;1801d9bf0-1801d9d33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801d9a58(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar3 = true;
    iVar5 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar5 == 0) {
      FUN_1801085c8();
    }
  }
  iVar5 = -0x7789f794;
  if ((param_2 < 0x13) && ((0x7ff70U >> (ulonglong)(param_2 & 0x1f) & 1) != 0)) {
    if (param_2 - 8 < 5) {
      iVar5 = 0;
      if (param_3 != 0) {
        uVar10 = *(undefined8 *)(param_1 + -0x5998);
        iVar5 = -0x7ff8fff2;
        puVar6 = (undefined8 *)FUN_1802229a8(0x48);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &PTR_FUN_18022ed38;
          puVar6[1] = 0;
          *(uint *)(puVar6 + 4) = param_2;
          puVar6[2] = puVar6;
          puVar6[3] = param_1 + -0x6838;
          puVar6[5] = uVar10;
          puVar6[6] = 0;
          *(undefined2 *)(puVar6 + 8) = 1;
          puVar4 = __hybrid_os_arm64x_dispatch_icall;
          puVar6[7] = 0;
          uVar10 = (*(code *)puVar4)(0x180224000);
          lVar7 = (*extraout_x11)(uVar10,*(undefined4 *)(puVar6 + 4));
          puVar6[6] = lVar7;
          if (lVar7 != 0) {
            iVar8 = *(int *)(param_1 + 0x154);
            if (*(int *)(param_1 + 0x150) == iVar8) {
              uVar1 = iVar8 << 1;
              if (iVar8 == 0) {
                uVar1 = 0x10;
              }
              lVar7 = CONCAT44(0,uVar1) << 3;
              auVar2._8_8_ = 0;
              auVar2._0_8_ = CONCAT44(0,uVar1);
              if (SUB168(auVar2 * ZEXT816(8),8) != 0) {
                lVar7 = -1;
              }
              lVar7 = FUN_1802229a8(lVar7);
              if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_180104c48(lVar7,*(undefined8 *)(param_1 + 0x148),
                                    (ulonglong)*(uint *)(param_1 + 0x154) << 3);
              }
            }
            else {
              *(undefined8 **)
               (*(longlong *)(param_1 + 0x148) + (ulonglong)*(uint *)(param_1 + 0x150) * 8) = puVar6
              ;
              *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
              iVar5 = FUN_1801ddad0(puVar6,&DAT_1802292e8,param_3);
              if (-1 < iVar5) goto LAB_1801d9cfc;
              uVar10 = (*(code *)puVar4)();
              (*extraout_x11_00)(uVar10,puVar6[6]);
              uVar1 = *(uint *)(param_1 + 0x150);
              if (uVar1 != 0) {
                uVar11 = 0;
                do {
                  iVar8 = (int)uVar11;
                  if (*(undefined8 **)(*(longlong *)(param_1 + 0x148) + uVar11 * 8) == puVar6) {
                    if (iVar8 != -1) {
                      uVar9 = iVar8 + 1;
                      if (uVar9 < uVar1) {
                        do {
                          uVar1 = uVar9 - 1;
                          uVar11 = (ulonglong)uVar9;
                          uVar9 = uVar9 + 1;
                          *(undefined8 *)(*(longlong *)(param_1 + 0x148) + (ulonglong)uVar1 * 8) =
                               *(undefined8 *)(*(longlong *)(param_1 + 0x148) + uVar11 * 8);
                        } while (uVar9 < *(uint *)(param_1 + 0x150));
                      }
                      *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + -1;
                    }
                    break;
                  }
                  uVar11 = (ulonglong)(iVar8 + 1U);
                } while (iVar8 + 1U < uVar1);
              }
            }
            (*(code *)puVar4)();
            (*extraout_x11_01)();
            puVar6[6] = 0;
          }
          *puVar6 = &PTR_FUN_18022ed38;
          FUN_1802229d8(puVar6,0x48);
        }
      }
    }
    else {
      iVar5 = -0x7789f796;
    }
  }
LAB_1801d9cfc:
  if (bVar3) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return iVar5;
}

