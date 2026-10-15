/*
 * FUN_18021d418 at 18021d418
 * undefined FUN_18021d418(void)
 * Address ranges: 18021d418-18021d4cb;18021d4dc-18021d5cf;18021d5e0-18021d677;18021d688-18021d8af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18021d418(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 *puVar8;
  bool bVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  ulonglong uVar17;
  uint uVar18;
  longlong *plVar19;
  undefined8 uVar20;
  ulonglong local_70;
  longlong local_68;
  longlong *local_60 [2];
  undefined8 local_50;
  uint uStack_48;
  undefined4 uStack_44;
  
  thunk_FUN_1802236f8(param_1 + 0x18);
  puVar10 = __hybrid_os_arm64x_dispatch_icall;
  uVar18 = *(uint *)(param_1 + 0x74);
  bVar9 = false;
  if (uVar18 == 0xffffffff) {
LAB_18021d484:
    uVar18 = *(uint *)(param_1 + 0x68);
    uVar13 = *(uint *)(param_1 + 0x6c);
    if (uVar18 == uVar13) {
      uVar18 = uVar13 << 1;
      if (uVar13 == 0) {
        uVar18 = 0x10;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = CONCAT44(0,uVar18);
      lVar15 = CONCAT44(0,uVar18) << 4;
      if (SUB168(auVar5 * ZEXT816(0x10),8) != 0) {
        lVar15 = -1;
      }
      lVar15 = FUN_1802229a8(lVar15);
      if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar15,*(undefined8 *)(param_1 + 0x60),
                            (ulonglong)*(uint *)(param_1 + 0x6c) << 4);
      }
      goto LAB_18021d860;
    }
    puVar11 = (undefined8 *)
              (*(longlong *)(param_1 + 0x60) + (ulonglong)*(uint *)(param_1 + 0x68) * 0x10);
    *puVar11 = param_2;
    puVar11[1] = 0xffffffffffffffff;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    if (*(uint *)(param_1 + 0x74) != 0xffffffff) {
      *(uint *)(*(longlong *)(param_1 + 0x60) + (ulonglong)*(uint *)(param_1 + 0x74) * 0x10 + 0xc) =
           uVar18;
      *(undefined4 *)(*(longlong *)(param_1 + 0x60) + (ulonglong)uVar18 * 0x10 + 8) =
           *(undefined4 *)(param_1 + 0x74);
    }
    *(uint *)(param_1 + 0x74) = uVar18;
    if (*(int *)(param_1 + 0x70) == -1) {
      *(uint *)(param_1 + 0x70) = uVar18;
    }
    if (uVar18 == 0xffffffff) goto LAB_18021d860;
  }
  else {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)uVar18 * 0x10);
    if ((*plVar19 != 0) && (uVar18 = *(uint *)((longlong)plVar19 + 0xc), uVar18 == 0xffffffff))
    goto LAB_18021d484;
    *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (ulonglong)uVar18 * 0x10) = param_2;
    *(uint *)(param_1 + 0x74) = uVar18;
  }
  local_70 = 0;
  local_68 = 0;
  (*(code *)puVar10)(0x180224000);
  (*extraout_x11)(param_1,param_2,&local_68,&local_70);
  local_50 = param_2;
  uStack_48 = uVar18;
  puVar11 = (undefined8 *)FUN_1802106a8(param_1 + 0x48,&local_70);
  if (puVar11 == (undefined8 *)0x0) {
    plVar19 = (longlong *)FUN_1802229a8(0x10);
    if (plVar19 == (longlong *)0x0) goto LAB_18021d860;
    *plVar19 = 0;
    plVar19[1] = 0;
    iVar2 = *(int *)((longlong)plVar19 + 0xc);
    local_60[0] = plVar19;
    if ((int)plVar19[1] == iVar2) {
      uVar18 = iVar2 << 1;
      if (iVar2 == 0) {
        uVar18 = 0x10;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = CONCAT44(0,uVar18);
      lVar15 = CONCAT44(0,uVar18) << 4;
      if (SUB168(auVar7 * ZEXT816(0x10),8) != 0) {
        lVar15 = -1;
      }
      lVar15 = FUN_1802229a8(lVar15);
      if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar15,*plVar19,(ulonglong)*(uint *)((longlong)plVar19 + 0xc) << 4);
      }
      FUN_1802229d8();
      FUN_1802229d8(plVar19,0x10);
      goto LAB_18021d860;
    }
    uVar14 = 0;
    puVar11 = (undefined8 *)(*plVar19 + (ulonglong)*(uint *)(plVar19 + 1) * 0x10);
    puVar11[1] = CONCAT44(uStack_44,uStack_48);
    *puVar11 = local_50;
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + local_68;
    uVar18 = *(uint *)(param_1 + 0x58);
    if (uVar18 != 0) {
      uVar13 = 0;
      uVar12 = uVar18;
      do {
        uVar3 = uVar12 + uVar13 >> 1;
        uVar14 = (ulonglong)uVar3;
        uVar17 = *(ulonglong *)(*(longlong *)(param_1 + 0x50) + uVar14 * 0x18);
        if (uVar17 <= local_70) {
          if (local_70 <= uVar17) break;
          uVar13 = uVar3 + 1;
          uVar14 = (ulonglong)(uVar3 + 1);
          uVar3 = uVar12;
        }
        uVar12 = uVar3;
      } while (uVar12 != uVar13);
      if (((uint)uVar14 != uVar18) &&
         (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x50) + uVar14 * 0x18), *puVar1 == local_70
         )) {
        puVar1[2] = (ulonglong)plVar19;
        goto LAB_18021d74c;
      }
    }
    FUN_18021d8b0(param_1 + 0x48,uVar14,local_70,&local_70,local_60);
  }
  else {
    plVar19 = (longlong *)*puVar11;
    iVar2 = *(int *)((longlong)plVar19 + 0xc);
    if ((int)plVar19[1] == iVar2) {
      uVar18 = iVar2 << 1;
      if (iVar2 == 0) {
        uVar18 = 0x10;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = CONCAT44(0,uVar18);
      lVar15 = CONCAT44(0,uVar18) << 4;
      if (SUB168(auVar6 * ZEXT816(0x10),8) != 0) {
        lVar15 = -1;
      }
      lVar15 = FUN_1802229a8(lVar15);
      if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar15,*plVar19,(ulonglong)*(uint *)((longlong)plVar19 + 0xc) << 4);
      }
      goto LAB_18021d860;
    }
    puVar11 = (undefined8 *)(*plVar19 + (ulonglong)*(uint *)(plVar19 + 1) * 0x10);
    puVar11[1] = CONCAT44(uStack_44,uStack_48);
    *puVar11 = local_50;
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + local_68;
  }
LAB_18021d74c:
  bVar9 = true;
LAB_18021d860:
  if ((*(ulonglong *)(param_1 + 0x10) <= *(ulonglong *)(param_1 + 8)) ||
     (lVar15 = FUN_18021d238(param_1 + 0x60), lVar15 == 0)) {
    thunk_FUN_18022370c(param_1 + 0x18);
    if (!bVar9) {
      (*(code *)puVar10)(0x180224000);
      (*extraout_x11_02)(param_1,param_2);
    }
    return;
  }
  local_70 = 0;
  local_68 = 0;
  (*(code *)puVar10)(0x180224000);
  (*extraout_x11_00)(param_1,lVar15,&local_70,&local_68);
  plVar19 = (longlong *)FUN_1802106a8(param_1 + 0x48,&local_68);
  if (plVar19 != (longlong *)0x0) {
    plVar16 = (longlong *)*plVar19;
    uVar18 = *(uint *)(plVar16 + 1);
    if (uVar18 != 0) {
      uVar14 = 0;
      do {
        lVar4 = uVar14 * 0x10;
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        if (*(longlong *)(*plVar16 + lVar4) == lVar15) goto LAB_18021d7ec;
      } while (uVar13 < uVar18);
    }
  }
  goto LAB_18021d840;
LAB_18021d7ec:
  while (uVar13 = (uint)uVar14, uVar13 < uVar18) {
    puVar11 = (undefined8 *)(*plVar16 + uVar14 * 0x10);
    uVar20 = *puVar11;
    puVar8 = (undefined8 *)(*plVar16 + (ulonglong)(uVar13 - 1) * 0x10);
    puVar8[1] = puVar11[1];
    *puVar8 = uVar20;
    uVar18 = *(uint *)(plVar16 + 1);
    uVar14 = (ulonglong)(uVar13 + 1);
  }
  *(int *)(plVar16 + 1) = (int)plVar16[1] + -1;
  puVar11 = (undefined8 *)*plVar19;
  if (*(int *)(puVar11 + 1) == 0) {
    if (puVar11 != (undefined8 *)0x0) {
      FUN_1802229d8(*puVar11);
      FUN_1802229d8(puVar11,0x10);
    }
    FUN_1801613b0(param_1 + 0x48,&local_68);
  }
  *(ulonglong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) - local_70;
LAB_18021d840:
  (*(code *)puVar10)(0x180224000);
  (*extraout_x11_01)(param_1,lVar15);
  goto LAB_18021d860;
}

