/*
 * FUN_1801d8078 at 1801d8078
 * undefined FUN_1801d8078(void)
 * Address ranges: 1801d8078-1801d838b;1801d83a8-1801d857b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801d8078(longlong param_1,uint param_2,uint param_3,int param_4,int param_5,
                 undefined8 *param_6,longlong param_7)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  code *extraout_x11;
  code *extraout_x11_00;
  ulonglong uVar14;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
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
  uVar14 = 0;
  iVar5 = FUN_1801074b0(*(undefined8 *)(param_1 + -0x5a10),*(undefined4 *)(param_1 + -0x5990),
                        *(undefined4 *)(param_1 + -0x59d0),*(undefined4 *)(param_1 + -0x59b0),
                        param_5,param_3,7,param_4,0);
  if (((-1 < iVar5) && (iVar5 = -0x7789f794, param_2 != 0)) && (param_6 != (undefined8 *)0x0)) {
    uVar9 = 4;
    if (param_4 != 0x66) {
      uVar9 = 2;
    }
    if ((uVar9 <= param_2) &&
       (((param_3 >> 4 & 1) == 0 || ((*(uint *)(param_1 + -0x59c0) >> 6 & 1) == 0)))) {
      uVar14 = 0;
      iVar5 = 0;
      *param_6 = 0;
      if ((param_5 == 0) && (*(int *)(param_1 + -0x59d0) == 1)) {
        uVar14 = (ulonglong)param_2;
        iVar5 = -0x7789fe84;
        if (uVar14 <= (ulonglong)(&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b]) {
          iVar5 = 0;
        }
      }
    }
  }
  if (param_7 == 0) {
    if (-1 < iVar5) {
      uVar12 = *(undefined8 *)(param_1 + -0x5998);
      iVar5 = -0x7ff8fff2;
      puVar6 = (undefined8 *)FUN_1802229a8(0x90);
      if (puVar6 != (undefined8 *)0x0) {
        lVar7 = 0;
        if (param_1 != 0x6838) {
          lVar7 = param_1;
        }
        puVar6[0x10] = 0;
        puVar6[0x11] = puVar6 + 0xf;
        puVar6[8] = lVar7;
        *(undefined4 *)(puVar6 + 9) = 7;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *(uint *)(puVar6 + 4) = param_2;
        *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = uVar12;
        *puVar6 = &PTR_FUN_18022ecb8;
        puVar6[1] = 0;
        *(uint *)(puVar6 + 5) = param_2;
        *(undefined4 *)((longlong)puVar6 + 0x2c) = 0;
        puVar6[0xf] = &PTR_FUN_18022ec48;
        *(uint *)(puVar6 + 10) = param_3;
        *(int *)((longlong)puVar6 + 0x54) = param_4;
        *(int *)(puVar6 + 0xb) = param_5;
        *(undefined4 *)(puVar6 + 0xe) = 0;
        lVar7 = FUN_1802229a8((ulonglong)(param_2 + 0x40) + 8);
        uVar8 = lVar7 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar8 - 8) = lVar7;
        puVar6[1] = uVar8;
        FUN_180222c50(uVar8,0,*(undefined4 *)(puVar6 + 4));
        puVar3 = __hybrid_os_arm64x_dispatch_icall;
        uVar9 = *(uint *)(puVar6 + 0xb);
        if (uVar9 != 3) {
          if (uVar9 < 2) {
            uVar10 = 3;
            if ((*(uint *)(puVar6 + 10) & 0x10) == 0) {
              uVar10 = 0;
            }
          }
          else {
            uVar10 = 2;
            if (uVar9 == 2) {
              uVar10 = 3;
            }
          }
          bVar4 = (*(uint *)(puVar6 + 10) & 0x200) != 0;
          if (bVar4) {
            uVar10 = 1;
          }
          iVar11 = 0x1000;
          if (!bVar4) {
            iVar11 = 0;
          }
          (*(code *)__hybrid_os_arm64x_dispatch_icall)
                    (puVar6[0xd],iVar11 + *(int *)(puVar6 + 4),uVar10,
                     *(int *)((longlong)puVar6 + 0x54) == 0x66);
          uVar12 = (*extraout_x11)();
          puVar6[0xc] = uVar12;
        }
        iVar11 = *(int *)(param_1 + -0x591c);
        if (*(int *)(param_1 + -0x5920) == iVar11) {
          uVar9 = iVar11 << 1;
          if (iVar11 == 0) {
            uVar9 = 0x10;
          }
          lVar7 = CONCAT44(0,uVar9) << 3;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = CONCAT44(0,uVar9);
          if (SUB168(auVar1 * ZEXT816(8),8) != 0) {
            lVar7 = -1;
          }
          lVar7 = FUN_1802229a8(lVar7);
          if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(lVar7,*(undefined8 *)(param_1 + -0x5928),
                                (ulonglong)*(uint *)(param_1 + -0x591c) << 3);
          }
        }
        else {
          *(undefined8 **)
           (*(longlong *)(param_1 + -0x5928) + (ulonglong)*(uint *)(param_1 + -0x5920) * 8) = puVar6
          ;
          *(int *)(param_1 + -0x5920) = *(int *)(param_1 + -0x5920) + 1;
          iVar5 = FUN_1801dc3d8(puVar6 + 0xf,&DAT_180229268,param_6);
          if (-1 < iVar5) {
            (&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] =
                 (&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] - uVar14;
            goto LAB_1801d853c;
          }
          if (*(uint *)(param_1 + -0x5920) != 0) {
            uVar14 = 0;
            do {
              uVar9 = (uint)uVar14;
              if (*(undefined8 **)(*(longlong *)(param_1 + -0x5928) + uVar14 * 8) == puVar6) {
                if (uVar9 != 0xffffffff) {
                  if ((*(int *)(puVar6 + 0xb) == 0) && (*(int *)(param_1 + -0x59d0) == 1)) {
                    (&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] =
                         (&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] +
                         (ulonglong)*(uint *)(puVar6 + 4);
                  }
                  uVar13 = *(uint *)(param_1 + -0x5920);
                  if (uVar9 < uVar13) {
                    uVar9 = uVar9 + 1;
                    if (uVar9 < uVar13) {
                      do {
                        uVar13 = uVar9 - 1;
                        uVar14 = (ulonglong)uVar9;
                        uVar9 = uVar9 + 1;
                        *(undefined8 *)(*(longlong *)(param_1 + -0x5928) + (ulonglong)uVar13 * 8) =
                             *(undefined8 *)(*(longlong *)(param_1 + -0x5928) + uVar14 * 8);
                        uVar13 = *(uint *)(param_1 + -0x5920);
                      } while (uVar9 < uVar13);
                    }
                    *(uint *)(param_1 + -0x5920) = uVar13 - 1;
                  }
                }
                break;
              }
              uVar14 = (ulonglong)(uVar9 + 1);
            } while (uVar9 + 1 < *(uint *)(param_1 + -0x5920));
          }
        }
        if (puVar6[0xc] != 0) {
          uVar12 = (*(code *)puVar3)();
          (*extraout_x11_00)(uVar12,1);
        }
        puVar6[0xc] = 0;
        if (puVar6[1] != 0) {
          FUN_180222b28(*(undefined8 *)(puVar6[1] + -8));
        }
        puVar6[0xf] = &PTR_FUN_18022ec48;
        *puVar6 = &PTR_thunk_FUN_180223720_18022a8c8;
        puVar6[1] = 0;
        FUN_180116678(puVar6 + 6);
        FUN_1802229d8(puVar6,0x90);
      }
    }
  }
  else {
    iVar5 = -0x7789f794;
  }
LAB_1801d853c:
  if (bVar2) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return iVar5;
}

