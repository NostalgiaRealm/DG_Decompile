/*
 * FUN_180199c00 at 180199c00
 * undefined FUN_180199c00(void)
 * Address ranges: 180199c00-180199f87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180199c00(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined *puVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  longlong lVar19;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  undefined4 uVar20;
  ulonglong extraout_x12;
  undefined8 uVar21;
  undefined8 local_6b8;
  undefined4 local_6b0;
  undefined8 local_6ac;
  int local_6a0 [12];
  undefined1 auStack_670 [8];
  uint local_668;
  uint uStack_664;
  undefined8 uStack_640;
  undefined4 auStack_638 [382];
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    return '\x01';
  }
  FUN_1801bad48(&local_6b8,*(undefined4 *)(param_1 + 0x2c));
  iVar13 = local_6b8._4_4_;
  if ((int)extraout_x12 - 0x15U < 0xb) {
LAB_180199c88:
    bVar10 = true;
  }
  else {
    uVar16 = 7;
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar16 = 5;
    }
    if ((*(uint *)(&DAT_18022e050 + (extraout_x12 & 0xffffffff) * 4) <= uVar16) &&
       (*(int *)(param_1 + 0x38) == 0)) goto LAB_180199c88;
    bVar10 = false;
  }
  uVar16 = *(uint *)(&DAT_18022e050 + extraout_x12 * 4);
  if ((bVar10) && (*(int *)(param_1 + 0x34) != 1)) {
    bVar10 = true;
    uVar20 = 4;
  }
  else {
    bVar10 = false;
    uVar20 = 0;
  }
  iVar1 = local_6b8._4_4_;
  if (bVar10) {
    iVar1 = 0;
  }
  iVar2 = local_6b8._4_4_;
  if (*(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x18c0 + 0x6cc
              ) == 0xa000) {
    iVar2 = iVar1;
  }
  lVar19 = *(longlong *)(param_1 + 0x18);
  if (lVar19 != 0) {
    uVar6 = *(uint *)(param_1 + 0x34);
    uVar17 = 0;
    if (uVar6 != 0) {
      uVar7 = *(uint *)(param_1 + 0x3c);
      do {
        if (uVar7 != 0) {
          uVar8 = *(uint *)(param_1 + 0x30);
          uVar14 = 0;
          do {
            uVar3 = uVar14;
            if (uVar8 <= uVar14) {
              uVar3 = 0;
            }
            lVar9 = (ulonglong)(uVar3 + uVar8 * uVar17) * 0x10;
            uVar15 = (ulonglong)(uVar14 + uVar7 * uVar17);
            uVar14 = uVar14 + 1;
            (&uStack_640)[uVar15 * 2] = *(undefined8 *)(lVar19 + lVar9);
            uVar18 = *(undefined4 *)(lVar19 + 8 + lVar9);
            auStack_638[uVar15 * 4 + 1] = 0;
            auStack_638[uVar15 * 4] = uVar18;
          } while (uVar14 < uVar7);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar6);
    }
  }
  puVar4 = &uStack_640;
  if (lVar19 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  uVar18 = 0x28;
  if (uVar16 < 8) {
    uVar18 = 8;
  }
  cVar12 = FUN_180198608(param_1 + 0x60,*(undefined4 *)(param_1 + 0x24),
                         *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x3c),
                         *(undefined4 *)(param_1 + 0x34),1,local_6b8 & 0xffffffff,iVar2,
                         (undefined4)local_6ac,0,0,uVar18,0,uVar20,puVar4,0,0);
  puVar11 = __hybrid_os_arm64x_dispatch_icall;
  if (cVar12 == '\0') {
    return '\0';
  }
  if ((param_2 & 1) == 0) {
    return cVar12;
  }
  if (!bVar10) {
    return cVar12;
  }
  lVar19 = *(longlong *)(param_1 + 0x78);
  cVar12 = '\0';
  if (lVar19 == 0) goto LAB_180199f4c;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(lVar19,auStack_670);
  local_6a0[0] = iVar13;
  local_6a0[1] = 9;
  *(longlong *)(param_1 + 0x130) = lVar19;
  local_6a0[4] = 0;
  local_6a0[5] = 0;
  local_6a0[2] = 0;
  local_6a0[3] = -1;
  local_6b8 = 0x500000000;
  local_6a0[6] = 0;
  local_6a0[7] = 4;
  local_6a0[8] = 0;
  local_6a0[9] = 0;
  piVar5 = local_6a0;
  if (iVar13 == 0) {
    piVar5 = (int *)0x0;
  }
  local_6b0 = 0;
  local_6ac = 0;
  local_6a0[10] = 0;
  local_6a0[0xb] = 0;
  uVar21 = **(undefined8 **)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x140) = 0;
  cVar12 = FUN_180198260(param_1 + 0x118,local_668,uStack_664);
  if (cVar12 == '\0') {
LAB_180199e98:
    uVar16 = 0;
    if (uStack_664 != 0) {
      do {
        if (local_668 != 0) {
          uVar17 = 0;
          do {
            uVar15 = (ulonglong)(uVar17 + uVar16 * local_668);
            if (*(longlong *)(*(longlong *)(param_1 + 0x148) + uVar15 * 0x28) != 0) {
              (*(code *)puVar11)();
              (*extraout_x11_01)();
              *(undefined8 *)(*(longlong *)(param_1 + 0x148) + uVar15 * 0x28) = 0;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < local_668);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uStack_664);
    }
    if (*(longlong *)(param_1 + 0x140) != 0) {
      (*(code *)puVar11)(0x180224000);
      (*extraout_x11_02)();
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
  }
  else {
    if (piVar5 != (int *)0x0) {
      (*(code *)puVar11)(0x180224000);
      iVar13 = (*extraout_x11_00)(uVar21,*(undefined8 *)(param_1 + 0x130),piVar5,param_1 + 0x140);
      if (iVar13 < 0) {
        cVar12 = '\0';
      }
    }
    if (cVar12 == '\0') goto LAB_180199e98;
  }
  if (cVar12 == '\0') {
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  else {
    (*(code *)puVar11)(0x180224000);
    (*extraout_x11_03)();
  }
LAB_180199f4c:
  FUN_180199b58(param_1);
  if (cVar12 == '\0') {
    FUN_180198b40(param_1 + 0x60,1,1);
  }
  return cVar12;
}

