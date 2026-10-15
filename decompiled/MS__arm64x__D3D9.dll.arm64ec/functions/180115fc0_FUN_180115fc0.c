/*
 * FUN_180115fc0 at 180115fc0
 * undefined FUN_180115fc0(void)
 * Address ranges: 180115fc0-1801160fb;1801161ac-180116253;180116258-18011634b;180116350-18011636f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00018011626c) */

longlong *
FUN_180115fc0(longlong *param_1,undefined8 *param_2,longlong param_3,int param_4,uint param_5)

{
  uint uVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  bool bVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint7 uStack_4f;
  
  plVar7 = param_1;
  if ((param_5 == 0) || (plVar7 = (longlong *)0x8876086c, param_5 == 1)) {
    uVar10 = 0x8876086c;
    if ((param_3 != 0) && (param_4 != 0)) {
      uVar10 = *(uint *)(param_1 + 1);
      uVar11 = 0;
      if (uVar10 != 0) {
        lVar12 = *param_1;
        do {
          plVar7 = (longlong *)FUN_180222c00(lVar12 + uVar11 * 0x28,param_2,0x10);
          if ((int)plVar7 == 0) break;
          uVar1 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar1;
        } while (uVar1 < uVar10);
      }
      puVar5 = __hybrid_os_arm64x_dispatch_icall;
      if ((uint)uVar11 == uVar10) {
        uVar1 = *(uint *)((longlong)param_1 + 0xc);
        if (uVar10 == uVar1) {
          uVar10 = uVar1 << 1;
          if (uVar1 == 0) {
            uVar10 = 0x10;
          }
          uVar9 = CONCAT44(0,uVar10);
          uVar11 = uVar9 * 0x28;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar9;
          if (SUB168(auVar4 * ZEXT816(0x28),8) != 0) {
            uVar11 = 0xffffffffffffffff;
          }
          lVar12 = uVar11 + 8;
          if (0xfffffffffffffff7 < uVar11) {
            lVar12 = -1;
          }
          puVar8 = (ulonglong *)FUN_1802229a8(lVar12);
          if (puVar8 != (ulonglong *)0x0) {
            puVar2 = puVar8 + 1;
            *puVar8 = uVar9;
            puVar8 = puVar2;
            if (uVar10 != 0) {
              do {
                puVar8[2] = 0;
                puVar8[3] = 0;
                uVar9 = uVar9 - 1;
                *(undefined1 *)(puVar8 + 4) = 0;
                puVar8[1] = 0;
                *puVar8 = 0;
                puVar8 = puVar8 + 5;
              } while (uVar9 != 0);
            }
            if (puVar2 != (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_180104c48(puVar2,*param_1,
                                  (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0x28);
            }
          }
          uVar10 = 0x8007000e;
        }
        else {
          puVar3 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
          puVar3[1] = 0;
          *puVar3 = 0;
          puVar3[3] = 0;
          puVar3[2] = 0;
          puVar3[4] = (ulonglong)uStack_4f << 8;
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          uVar13 = *param_2;
          puVar3 = (undefined8 *)(*param_1 + uVar11 * 0x28);
          puVar3[1] = param_2[1];
          *puVar3 = uVar13;
          *(uint *)((longlong)puVar3 + 0x1c) = param_5;
          if ((param_5 & 1) == 0) {
            lVar12 = FUN_1802229a8(param_4);
            bVar6 = lVar12 != 0;
            puVar3[2] = lVar12;
            if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_180104c48(lVar12,param_3,param_4);
            }
          }
          else {
            puVar3[2] = param_3;
            *(undefined4 *)(puVar3 + 3) = 0;
            (*(code *)puVar5)(0x180224000,plVar7);
            (*extraout_x11)(param_3);
            bVar6 = true;
          }
          uVar10 = 0x8007000e;
          if (bVar6) {
            uVar10 = 0;
          }
        }
        FUN_1802229d8(0);
      }
      else {
        puVar3 = (undefined8 *)(*param_1 + uVar11 * 0x28);
        if ((*(uint *)((longlong)puVar3 + 0x1c) & 1) == 0) {
          FUN_1802229d8();
        }
        else {
          (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          (*extraout_x11_00)();
        }
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
        uVar13 = *param_2;
        puVar3 = (undefined8 *)(*param_1 + uVar11 * 0x28);
        puVar3[1] = param_2[1];
        *puVar3 = uVar13;
        *(uint *)((longlong)puVar3 + 0x1c) = param_5;
        if ((param_5 & 1) == 0) {
          uVar10 = 0x8007000e;
          lVar12 = FUN_1802229a8(param_4);
          puVar3[2] = lVar12;
          if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(lVar12,param_3,param_4);
          }
        }
        else {
          puVar3[2] = param_3;
          *(undefined4 *)(puVar3 + 3) = 0;
          (*(code *)puVar5)(0x180224000);
          (*extraout_x11_01)(param_3);
          uVar10 = 0;
        }
      }
    }
    plVar7 = (longlong *)(ulonglong)uVar10;
  }
  return plVar7;
}

