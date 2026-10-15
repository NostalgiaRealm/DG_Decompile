/*
 * FUN_1801fb7e0 at 1801fb7e0
 * undefined FUN_1801fb7e0(void)
 * Address ranges: 1801fb7e0-1801fbaff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801fb7e0(longlong param_1,undefined4 param_2,uint param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  ulonglong uVar16;
  code *extraout_x11_02;
  longlong lVar17;
  undefined8 uVar18;
  uint local_70 [2];
  undefined8 local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  
  iVar12 = 2;
  if (param_4 != 1) {
    iVar12 = 3;
  }
  uVar8 = FUN_1801faba0(param_1,param_2);
  if ((uVar8 == 0xffffffff) || (*(uint *)(param_1 + (ulonglong)uVar8 * 0x10 + 0x128) <= param_3)) {
    uVar10 = 0;
  }
  else {
    lVar17 = ((ulonglong)uVar8 + 0x12) * 0x10;
    lVar13 = *(longlong *)(param_1 + lVar17);
    lVar5 = (ulonglong)param_3 * 8;
    if (((*(int *)(lVar13 + lVar5) == 0) || (*(int *)(lVar13 + lVar5 + 4) != iVar12)) &&
       (uVar8 = FUN_1801faba0(param_1,param_2), uVar8 != 0xffffffff)) {
      local_60 = (ulonglong)uVar8;
      lVar13 = (local_60 + 2) * 0x10;
      local_58 = lVar13;
      FUN_1802229d8(*(undefined8 *)(*(longlong *)(param_1 + lVar13) + lVar5));
      *(undefined8 *)(*(longlong *)(param_1 + lVar13) + lVar5) = 0;
      local_60 = (local_60 + 0x12) * 0x10;
      *(undefined4 *)(lVar5 + *(longlong *)(param_1 + local_60)) = 0;
      puVar7 = __hybrid_os_arm64x_dispatch_icall;
      local_68 = 0;
      local_70[0] = 0;
      local_50 = local_60;
      uVar11 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      iVar9 = (*extraout_x11)(uVar11,param_3,&local_68);
      if (-1 < iVar9) {
        uVar11 = (*(code *)puVar7)(0x180224000);
        (*extraout_x11_00)(uVar11,0x1c,iVar12,local_70,0);
        lVar15 = CONCAT44(0,local_70[0]) * 0x1c;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = CONCAT44(0,local_70[0]);
        if (SUB168(auVar6 * ZEXT816(0x1c),8) != 0) {
          lVar15 = -1;
        }
        lVar15 = FUN_1802229a8(lVar15);
        if (lVar15 != 0) {
          *(longlong *)(*(longlong *)(param_1 + lVar13) + lVar5) = lVar15;
          uVar11 = (*(code *)puVar7)(0x180224000);
          iVar9 = (*extraout_x11_01)(uVar11,0x1c,2,local_70,lVar15);
          if (iVar9 < 0) {
            FUN_1802229d8(lVar15);
            *(undefined8 *)(*(longlong *)(param_1 + lVar13) + lVar5) = 0;
          }
          else {
            *(uint *)(lVar5 + *(longlong *)(param_1 + local_60)) = local_70[0];
            *(int *)(*(longlong *)(param_1 + local_60) + lVar5 + 4) = iVar12;
            lVar13 = *(longlong *)(param_1 + local_60);
            uVar14 = 1;
            if (1 < *(uint *)(lVar5 + lVar13)) {
              do {
                uVar8 = (uint)uVar14;
                if (uVar8 != 0) {
                  piVar1 = (int *)(lVar15 + uVar14 * 0x1c);
                  uVar16 = uVar14;
LAB_1801fb9dc:
                  uVar4 = (int)uVar16 - 1;
                  uVar16 = (ulonglong)uVar4;
                  if (((*(int *)(lVar15 + uVar16 * 0x1c) != *piVar1) ||
                      (*(int *)(lVar15 + 4 + uVar16 * 0x1c) != *(int *)(lVar15 + uVar14 * 0x1c + 4))
                      ) || ((*(int *)(lVar15 + 8 + uVar16 * 0x1c) !=
                             *(int *)(lVar15 + uVar14 * 0x1c + 8) ||
                            (*(int *)(lVar15 + 0xc + uVar16 * 0x1c) != piVar1[3]))))
                  goto LAB_1801fba24;
                  *(int *)(lVar5 + lVar13) = *(int *)(lVar5 + lVar13) + -1;
                  lVar13 = *(longlong *)(param_1 + local_50);
                  if (uVar8 < *(uint *)(lVar5 + lVar13)) {
                    do {
                      uVar4 = (int)uVar14 + 1;
                      puVar2 = (undefined8 *)(lVar15 + (ulonglong)uVar4 * 0x1c);
                      uVar18 = *puVar2;
                      puVar3 = (undefined8 *)(lVar15 + uVar14 * 0x1c);
                      uVar11 = puVar2[2];
                      puVar3[1] = puVar2[1];
                      *puVar3 = uVar18;
                      puVar3[2] = uVar11;
                      *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar2 + 3);
                      lVar13 = *(longlong *)(param_1 + local_50);
                      uVar14 = (ulonglong)uVar4;
                    } while (uVar4 < *(uint *)(lVar5 + lVar13));
                  }
                  uVar14 = (ulonglong)(uVar8 - 1);
                }
LAB_1801fba98:
                uVar8 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar8;
              } while (uVar8 < *(uint *)(lVar5 + lVar13));
            }
          }
        }
        (*(code *)puVar7)(0x180224000);
        (*extraout_x11_02)();
      }
    }
    uVar10 = *(undefined4 *)(lVar5 + *(longlong *)(param_1 + lVar17));
  }
  return uVar10;
LAB_1801fba24:
  if (uVar4 == 0) goto LAB_1801fba98;
  goto LAB_1801fb9dc;
}

