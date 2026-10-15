/*
 * FUN_1801fbb08 at 1801fbb08
 * undefined FUN_1801fbb08(void)
 * Address ranges: 1801fbb08-1801fbe63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1801fbb08(longlong param_1,undefined8 *param_2,undefined4 param_3,uint param_4,int param_5,
             uint param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  longlong lVar18;
  undefined8 uVar19;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar12 = 2;
  if (param_5 != 1) {
    uVar12 = 3;
  }
  local_6c = param_6;
  uVar9 = FUN_1801faba0(param_1,param_3);
  if ((uVar9 != 0xffffffff) &&
     (local_48 = (ulonglong)uVar9, param_4 < *(uint *)(param_1 + local_48 * 0x10 + 0x128))) {
    lVar18 = (local_48 + 0x12) * 0x10;
    lVar6 = (ulonglong)param_4 * 8;
    if (*(int *)(lVar6 + *(longlong *)(param_1 + lVar18)) == 0) {
      local_60 = (local_48 + 2) * 0x10;
      FUN_1802229d8(*(undefined8 *)(*(longlong *)(param_1 + local_60) + lVar6));
      *(undefined8 *)(*(longlong *)(param_1 + local_60) + lVar6) = 0;
      *(undefined4 *)(lVar6 + *(longlong *)(param_1 + lVar18)) = 0;
      puVar8 = __hybrid_os_arm64x_dispatch_icall;
      local_70 = 0;
      local_68 = 0;
      local_50 = (code *)__hybrid_os_arm64x_dispatch_icall;
      uVar11 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      iVar10 = (*extraout_x11)(uVar11,param_4,&local_68);
      if (-1 < iVar10) {
        uVar11 = (*(code *)puVar8)(0x180224000);
        (*extraout_x11_00)(uVar11,0x1c,uVar12,&local_70,0);
        lVar15 = CONCAT44(0,local_70) * 0x1c;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = CONCAT44(0,local_70);
        if (SUB168(auVar7 * ZEXT816(0x1c),8) != 0) {
          lVar15 = -1;
        }
        lVar15 = FUN_1802229a8(lVar15);
        local_58 = lVar15;
        if (lVar15 != 0) {
          *(longlong *)(*(longlong *)(param_1 + local_60) + lVar6) = lVar15;
          uVar11 = (*(code *)puVar8)(0x180224000);
          iVar10 = (*extraout_x11_01)(uVar11,0x1c,2,&local_70,lVar15);
          if (iVar10 < 0) {
            FUN_1802229d8(lVar15);
            *(undefined8 *)(*(longlong *)(param_1 + local_60) + lVar6) = 0;
          }
          else {
            *(uint *)(lVar6 + *(longlong *)(param_1 + lVar18)) = local_70;
            *(undefined4 *)(*(longlong *)(param_1 + lVar18) + lVar6 + 4) = uVar12;
            lVar16 = *(longlong *)(param_1 + lVar18);
            uVar14 = 1;
            if (1 < *(uint *)(lVar6 + lVar16)) {
              do {
                uVar9 = (uint)uVar14;
                if (uVar9 != 0) {
                  piVar1 = (int *)(lVar15 + uVar14 * 0x1c);
                  uVar17 = uVar14;
LAB_1801fbce4:
                  uVar5 = (int)uVar17 - 1;
                  uVar17 = (ulonglong)uVar5;
                  if ((((*(int *)(lVar15 + uVar17 * 0x1c) != *piVar1) ||
                       (*(int *)(lVar15 + 4 + uVar17 * 0x1c) != *(int *)(lVar15 + uVar14 * 0x1c + 4)
                       )) || (*(int *)(lVar15 + 8 + uVar17 * 0x1c) !=
                              *(int *)(lVar15 + uVar14 * 0x1c + 8))) ||
                     (*(int *)(lVar15 + 0xc + uVar17 * 0x1c) != piVar1[3])) goto LAB_1801fbd2c;
                  *(int *)(lVar6 + lVar16) = *(int *)(lVar6 + lVar16) + -1;
                  lVar16 = *(longlong *)(param_1 + lVar18);
                  if (uVar9 < *(uint *)(lVar6 + lVar16)) {
                    do {
                      uVar5 = (int)uVar14 + 1;
                      puVar2 = (undefined8 *)(lVar15 + (ulonglong)uVar5 * 0x1c);
                      uVar19 = *puVar2;
                      puVar3 = (undefined8 *)(lVar15 + uVar14 * 0x1c);
                      uVar11 = puVar2[2];
                      puVar3[1] = puVar2[1];
                      *puVar3 = uVar19;
                      puVar3[2] = uVar11;
                      *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar2 + 3);
                      lVar16 = *(longlong *)(param_1 + lVar18);
                      uVar14 = (ulonglong)uVar5;
                    } while (uVar5 < *(uint *)(lVar6 + lVar16));
                  }
                  uVar14 = (ulonglong)(uVar9 - 1);
                }
LAB_1801fbda0:
                uVar9 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar9;
              } while (uVar9 < *(uint *)(lVar6 + lVar16));
            }
          }
        }
        (*local_50)();
        (*extraout_x11_02)();
      }
    }
    if (local_6c < *(uint *)(lVar6 + *(longlong *)(param_1 + lVar18))) {
      puVar4 = (undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + (local_48 + 2) * 0x10) + lVar6) +
               ((ulonglong)local_6c * 8 - (ulonglong)local_6c) * 4);
      uVar12 = puVar4[1];
      *(undefined4 *)param_2 = *puVar4;
      *(undefined4 *)((longlong)param_2 + 4) = uVar12;
      *(undefined4 *)((longlong)param_2 + 0x14) = 0x20;
      uVar9 = puVar4[2];
      uVar5 = puVar4[3];
      *(uint *)(param_2 + 1) = uVar9;
      *(uint *)((longlong)param_2 + 0xc) = uVar5;
      if (uVar5 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        if (uVar5 != 0) {
          uVar13 = uVar9 / uVar5;
        }
      }
      *(uint *)(param_2 + 2) = uVar13;
    }
  }
  return param_2;
LAB_1801fbd2c:
  if (uVar5 == 0) goto LAB_1801fbda0;
  goto LAB_1801fbce4;
}

