/*
 * FUN_18002d2e0 at 18002d2e0
 * undefined __cdecl FUN_18002d2e0(longlong param_1, uint param_2, undefined1[16] * param_3, undefined8 * param_4)
 * Address ranges: 18002d2e0-18002d727
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002d2e0(longlong param_1,uint param_2,undefined1 (*param_3) [16],undefined8 *param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  HANDLE hEvent;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined8 *local_78;
  undefined8 *local_70;
  longlong local_68;
  undefined4 local_60;
  
  FUN_1800292e8(param_1 + 0x34e8);
  lVar14 = *(longlong *)(param_1 + 0x31c0);
  FUN_1800437d0((uint *)(lVar14 + 0x12c0));
  if (*(char *)(lVar14 + 0x14c4) == '\0') {
    local_78 = (undefined8 *)0x0;
    iVar15 = 0;
    uVar17 = 0;
    bVar4 = false;
    uVar7 = 0;
  }
  else {
    uVar7 = param_2 >> 2;
    auVar19 = ZEXT516(0) << 8;
    auVar18._8_4_ = 0xffffffff;
    auVar18._0_8_ = 0xffffffffffffffff;
    auVar18._12_4_ = 0xffffffff;
    pauVar8 = param_3;
    while (uVar7 != 0) {
      uVar7 = uVar7 - 1;
      auVar19 = NEON_umax(auVar19,*pauVar8,4);
      auVar18 = NEON_umin(auVar18,*pauVar8,4);
      pauVar8 = pauVar8 + 1;
    }
    auVar20._8_8_ = auVar19._8_8_;
    auVar20._0_8_ = auVar19._8_8_;
    uVar7 = param_2 & 3;
    auVar23 = NEON_umax(auVar20,auVar19,4);
    auVar21._8_8_ = auVar18._8_8_;
    auVar21._0_8_ = auVar18._8_8_;
    auVar21 = NEON_umin(auVar21,auVar18,4);
    uVar22 = auVar23._4_4_;
    auVar19._4_4_ = uVar22;
    auVar19._0_4_ = uVar22;
    auVar19._8_4_ = uVar22;
    auVar19._12_4_ = uVar22;
    auVar18 = NEON_umax(auVar19,auVar23,4);
    uVar22 = auVar21._4_4_;
    auVar23._4_4_ = uVar22;
    auVar23._0_4_ = uVar22;
    auVar23._8_4_ = uVar22;
    auVar23._12_4_ = uVar22;
    auVar19 = NEON_umin(auVar23,auVar21,4);
    while (uVar7 != 0) {
      uVar7 = uVar7 - 1;
      puVar3 = *pauVar8;
      pauVar8 = (undefined1 (*) [16])(*pauVar8 + 4);
      auVar18 = NEON_umax(auVar18,ZEXT416(*(uint *)puVar3),4);
      auVar19 = NEON_umin(auVar19,ZEXT416(*(uint *)puVar3),4);
    }
    uVar17 = auVar19._0_4_;
    iVar15 = auVar18._0_4_ + (1 - uVar17);
    uVar2 = iVar15 * 0x3c;
    uVar7 = uVar2 + (param_2 + 8) * 4;
    bVar4 = true;
    local_78 = (undefined8 *)
               ((longlong)param_4 + ((ulonglong)uVar17 * 0x10 - (ulonglong)uVar17) * 4);
    if (uVar7 < 0x3f00) {
      lVar14 = *(longlong *)(param_1 + 0x31c0);
      if (*(char *)(lVar14 + 0x14c4) != '\0') {
        if (uVar7 == 0) {
          uVar9 = 0x10;
        }
        else {
          uVar9 = (uVar7 + 7 & 0xfffffff8) + 0x18;
        }
        puVar5 = (undefined8 *)FUN_1800436a0(lVar14 + 0x12c0,uVar9);
        if (puVar5 != (undefined8 *)0x0) {
          FUN_180061700((uint *)(lVar14 + 0x14c0));
          puVar5[1] = (ulonglong)uVar9;
          lVar13 = 2;
          if (uVar7 != 0) {
            lVar13 = 3;
          }
          puVar1 = (uint *)(puVar5 + lVar13);
          *puVar1 = uVar2;
          *(longlong *)(puVar1 + 1) = param_1;
          puVar1[3] = param_2;
          puVar12 = (undefined8 *)((longlong)puVar1 + 0x17U & 0xfffffffffffffff8);
          if (uVar7 != 0) {
            puVar5[2] = puVar12;
            uVar6 = thunk_FUN_180001218(puVar12,local_78,(ulonglong)uVar2);
            FUN_18001aff0(uVar6,(undefined8 *)param_3,
                          (undefined8 *)
                          ((longlong)puVar12 + (ulonglong)uVar2 + 0xf & 0xfffffffffffffff0),param_2,
                          -uVar17);
            puVar12 = (undefined8 *)(((ulonglong)(uVar7 + 7) & 0xfffffff8) + (longlong)puVar12);
          }
          *puVar12 = 0;
          *puVar5 = FUN_18002d728;
          *(undefined8 **)(lVar14 + (ulonglong)*(uint *)(lVar14 + 0x14bc) * 0x28 + 0x1350) = puVar12
          ;
          if (*(char *)(lVar14 + 0x14c5) == '\0') goto LAB_18002d588;
          *(undefined4 *)(lVar14 + 0x12c0) = 0;
          hEvent = *(HANDLE *)(lVar14 + 0x1340);
          goto LAB_18002d6b8;
        }
        *(undefined4 *)(lVar14 + 0x12c0) = 0;
        Sleep(100);
        FUN_1800437d0((uint *)(lVar14 + 0x12c0));
      }
      plVar16 = *(longlong **)(lVar14 + 0x14a0);
      uVar10 = (ulonglong)(uVar7 != 0) * 8;
      *(uint *)(plVar16 + (uVar7 != 0)) = uVar2;
      *(longlong *)((longlong)plVar16 + uVar10 + 4) = param_1;
      *(uint *)((longlong)plVar16 + uVar10 + 0xc) = param_2;
      if (uVar7 != 0) {
        puVar5 = (undefined8 *)((uVar10 | 0x10) + (longlong)plVar16);
        *plVar16 = (longlong)puVar5;
        uVar6 = thunk_FUN_180001218(puVar5,local_78,(ulonglong)(uint)(iVar15 * 0x3c));
        FUN_18001aff0(uVar6,(undefined8 *)param_3,
                      (undefined8 *)
                      ((longlong)puVar5 + (ulonglong)(uint)(iVar15 * 0x3c) + 0xf &
                      0xfffffffffffffff0),param_2,-uVar17);
      }
      FUN_18002d728(plVar16);
LAB_18002d588:
      *(undefined4 *)(lVar14 + 0x12c0) = 0;
      return;
    }
  }
  puVar5 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  local_60 = 0;
  pauVar8 = param_3;
  if ((bVar4) &&
     (bVar4 = FUN_180055820((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31c0) + 0x17f0),uVar7,
                            (longlong *)&local_70), puVar5 = local_70, bVar4)) {
    uVar6 = thunk_FUN_180001218(local_70,local_78,(ulonglong)(uint)(iVar15 * 0x3c));
    pauVar8 = (undefined1 (*) [16])
              ((longlong)puVar5 + (ulonglong)(uint)(iVar15 * 0x3c) + 0xf & 0xfffffffffffffff0);
    FUN_18001aff0(uVar6,(undefined8 *)param_3,(undefined8 *)pauVar8,param_2,-uVar17);
    param_4 = puVar5;
  }
  uVar22 = local_60;
  lVar14 = local_68;
  lVar13 = *(longlong *)(param_1 + 0x31c0);
  if (*(char *)(lVar13 + 0x14c4) != '\0') {
    puVar12 = (undefined8 *)FUN_1800436a0(lVar13 + 0x12c0,0x30);
    if (puVar12 != (undefined8 *)0x0) {
      FUN_180061700((uint *)(lVar13 + 0x14c0));
      puVar12[1] = 0x30;
      puVar12[2] = param_1;
      *(uint *)(puVar12 + 3) = param_2;
      *(undefined1 (**) [16])((longlong)puVar12 + 0x1c) = pauVar8;
      *(undefined8 **)((longlong)puVar12 + 0x24) = param_4;
      puVar11 = (undefined8 *)((longlong)puVar12 + 0x47U & 0xfffffffffffffff8);
      *(undefined8 **)((longlong)puVar12 + 0x2c) = puVar5;
      *(undefined4 *)((longlong)puVar12 + 0x34) = uVar22;
      puVar12[7] = lVar14;
      *puVar11 = 0;
      *puVar12 = FUN_18002d758;
      *(undefined8 **)(lVar13 + (ulonglong)*(uint *)(lVar13 + 0x14bc) * 0x28 + 0x1350) = puVar11;
      if (*(char *)(lVar13 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar13 + 0x12c0) = 0;
        hEvent = *(HANDLE *)(lVar13 + 0x1340);
LAB_18002d6b8:
        SetEvent(hEvent);
        return;
      }
      goto LAB_18002d708;
    }
    *(undefined4 *)(lVar13 + 0x12c0) = 0;
    Sleep(100);
    FUN_1800437d0((uint *)(lVar13 + 0x12c0));
  }
  plVar16 = *(longlong **)(lVar13 + 0x14a0);
  *plVar16 = param_1;
  *(uint *)(plVar16 + 1) = param_2;
  *(undefined1 (**) [16])((longlong)plVar16 + 0xc) = pauVar8;
  *(undefined8 **)((longlong)plVar16 + 0x14) = param_4;
  *(undefined8 **)((longlong)plVar16 + 0x1c) = puVar5;
  *(undefined4 *)((longlong)plVar16 + 0x24) = uVar22;
  plVar16[5] = lVar14;
  FUN_18002d758(plVar16);
LAB_18002d708:
  *(undefined4 *)(lVar13 + 0x12c0) = 0;
  return;
}

