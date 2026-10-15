/*
 * FUN_1800b7d80 at 1800b7d80
 * undefined FUN_1800b7d80(void)
 * Address ranges: 1800b7d80-1800b84eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b7d80(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  longlong *plVar10;
  undefined4 uVar11;
  longlong lVar12;
  code *pcVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  float fVar18;
  undefined4 local_a0 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  *(undefined4 *)(param_1 + 0x6814) = 0;
  *(undefined8 *)(param_1 + 0x680c) = 0;
  func_0x000180222c50(*(undefined8 *)(param_1 + 0xe10),0,0x87b0);
  uVar9 = 0;
  fVar18 = 1.0;
  uStack_88 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0x3f80000000000000;
  uStack_68 = 0x3f800000;
  uStack_80 = 0x3f80000000000000;
  local_90 = 0x3f800000;
  do {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0xe10) + (longlong)(int)uVar9 * 0x40);
    puVar3[1] = uStack_88;
    *puVar3 = local_90;
    puVar3[3] = uStack_78;
    puVar3[2] = uStack_80;
    puVar3[5] = uStack_68;
    puVar3[4] = local_70;
    puVar3[7] = uStack_58;
    puVar3[6] = uStack_60;
    FUN_180011710(param_1,uVar9);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x10a);
  lVar1 = param_1 + 0x478;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  func_0x000180222c50(lVar1,0,0x348);
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar12 = 0;
    do {
      *(undefined4 *)(lVar1 + lVar12 * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar12 * 8 + 4);
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0xd2);
  }
  uVar16 = 1;
LAB_1800b7e84:
  do {
    if (*(char *)(uVar16 + 0x180231c50) != '\0') {
      if ((int)uVar16 == 0x1a) {
        iVar14 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x9cf);
        if (iVar14 == 0) {
          uVar11 = 0;
        }
        else if ((iVar14 == 1) && (*(int *)(*(longlong *)(param_1 + 0x18) + 0x9cb) != 0)) {
          uVar11 = *(undefined4 *)(lVar1 + uVar16 * 4);
        }
        else {
          uVar11 = 1;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))
                  (*(longlong **)(param_1 + 0x28),uVar16,uVar11);
        uVar16 = 0x1b;
        goto LAB_1800b7e84;
      }
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))
                (*(longlong **)(param_1 + 0x28),uVar16,*(undefined4 *)(lVar1 + uVar16 * 4));
    }
    uVar9 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar9;
  } while (uVar9 < 0xd2);
  func_0x000180222c50(param_1 + 0x7c0,0,0x420);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar16 = 0;
    do {
      lVar12 = param_1 + uVar16 * 4;
      uVar15 = 0;
      lVar1 = lVar12 + 0x7c0;
      do {
        iVar14 = (int)uVar15;
        lVar6 = 8;
        if (iVar14 == 0) {
          lVar6 = 4;
        }
        uVar9 = (uint)uVar16;
        uVar11 = *(undefined4 *)(lVar6 + *(longlong *)(param_1 + 0x10) + uVar16 * 0xc);
        *(undefined4 *)(lVar1 + uVar15 * 0x84) = uVar11;
        if (uVar9 == 0xb) {
          *(int *)(lVar1 + uVar15 * 0x84) = iVar14;
        }
        else if (uVar9 < 7) {
          *(undefined4 *)(lVar12 + 0xbe0 + uVar15 * 0x1c) = uVar11;
        }
        uVar15 = (ulonglong)(iVar14 + 1U);
      } while (iVar14 + 1U < 8);
      uVar16 = (ulonglong)(uVar9 + 1);
    } while (uVar9 + 1 < 0x21);
  }
  uVar16 = 0;
  do {
    uVar15 = 1;
    do {
      uVar9 = *(uint *)(param_1 + uVar16 * 0x84 + 0x7c0 + uVar15 * 4);
      uVar17 = (uint)uVar15;
      if (uVar17 == 0x10) {
        uVar9 = func_0x00018011c308(param_1,uVar9);
LAB_1800b8078:
        if ((0x23fe000U >> (ulonglong)(uVar17 & 0x1f) & 1) == 0) goto LAB_1800b8080;
        plVar10 = *(longlong **)(param_1 + 0x28);
        uVar15 = (ulonglong)*(uint *)(&DAT_18022a3f8 + (longlong)(int)uVar17 * 4);
        pcVar13 = *(code **)(*plVar10 + 0xa0);
      }
      else {
        if (uVar17 == 0x11) {
          uVar9 = func_0x00018011c308(param_1,uVar9);
          goto LAB_1800b8078;
        }
        if (uVar17 == 0x12) {
          if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x87c) == 1) {
            uVar9 = 0;
          }
          else {
            iVar14 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x878);
            if ((iVar14 - 0x100U & 0xfffffbff) == 0) {
              uVar9 = 1;
            }
            else if ((iVar14 - 0x300U & 0xfffffeff) == 0) {
              uVar9 = 2;
            }
          }
          goto LAB_1800b8078;
        }
        if (uVar17 == 0x15) {
          uVar7 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x878);
          uVar4 = uVar7 & 0xff;
          uVar5 = uVar9;
          if (uVar7 != 0) {
            uVar5 = uVar4;
          }
          if (uVar4 < 0x11) {
            uVar9 = uVar5;
          }
          goto LAB_1800b8078;
        }
        if (uVar17 < 0x1a) goto LAB_1800b8078;
LAB_1800b8080:
        plVar10 = *(longlong **)(param_1 + 0x28);
        pcVar13 = *(code **)(*plVar10 + 0x98);
      }
      (*pcVar13)(plVar10,uVar16,uVar15,uVar9);
      uVar15 = (ulonglong)(uVar17 + 1);
    } while (uVar17 + 1 < 0x21);
    uVar9 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar9;
  } while (uVar9 < 8);
  *(undefined4 *)(param_1 + 0x374) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x368) = 3;
  *(undefined4 *)(param_1 + 0x36c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x370) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3b4) = 0;
  *(undefined8 *)(param_1 + 0x3bc) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x3c4) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  *(undefined1 *)(param_1 + 0x3d0) = 0;
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x358));
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  iVar14 = 8;
  do {
    local_a0[0] = 0xffffffff;
    FUN_1800032e8(param_1 + 0x358,local_a0);
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x318));
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x330));
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  uVar16 = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  if (*(uint *)(param_1 + 0x360) < 9) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x358) + uVar16 * 4) != -1) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 200))
                  (*(longlong **)(param_1 + 0x28),uVar16,0);
        *(undefined4 *)(*(longlong *)(param_1 + 0x358) + uVar16 * 4) = 0xffffffff;
      }
      uVar9 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar9;
    } while (uVar9 < 8);
  }
  else {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x358) + uVar16 * 4) != -1) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 200))
                  (*(longlong **)(param_1 + 0x28),uVar16,0);
      }
      uVar9 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar9;
    } while (uVar9 < 8);
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x358));
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    iVar14 = 8;
    do {
      local_a0[0] = 0xffffffff;
      FUN_1800032e8(param_1 + 0x358,local_a0);
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  *(undefined4 *)(param_1 + 0x60) = param_2;
  *(undefined4 *)(param_1 + 100) = param_3;
  *(undefined4 *)(param_1 + 0x2d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2d8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd14) = 0xff;
  *(undefined4 *)(param_1 + 0x2dc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  bVar8 = *(longlong *)(param_1 + 0x50) != 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  uVar9 = (uint)bVar8;
  if (*(uint *)(param_1 + 0x494) != uVar9) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))(*(longlong **)(param_1 + 0x28),7,uVar9);
  }
  *(uint *)(param_1 + 0x494) = (uint)bVar8;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x78))
            (*(longlong **)(param_1 + 0x28),param_1 + 0x58);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
            (*(longlong **)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x3f4));
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x60))
            (*(longlong **)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x40e));
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x68))
            (*(longlong **)(param_1 + 0x28),*(undefined1 *)(DAT_18024de60 + 0x885));
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = 0x45000000;
  *(undefined4 *)(param_1 + 0x3e4) = 0x45000000;
  *(undefined8 *)(param_1 + 0x3d4) = 0xfff00000000;
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  func_0x000180222c50(param_1 + 0x6ad0,0,0x380);
  uVar16 = 0;
  do {
    uVar15 = 0;
    do {
      *(undefined4 *)(param_1 + uVar16 * 0x38 + 0x6ad0 + uVar15 * 4) = (&DAT_18024c354)[uVar15 * 2];
      if ((&DAT_18024c350)[uVar15 * 8] != '\0') {
        FUN_1800aa578(param_1,uVar16,uVar15);
      }
      uVar9 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar9;
    } while (uVar9 < 0xe);
    uVar9 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar9;
  } while (uVar9 < 0x10);
  uVar16 = 0;
  do {
    uVar15 = 0;
    do {
      *(undefined4 *)(param_1 + uVar16 * 0x38 + 0x6e50 + uVar15 * 4) = (&DAT_18024c354)[uVar15 * 2];
      if ((&DAT_18024c350)[uVar15 * 8] != '\0' && (int)uVar15 != 10) {
        FUN_1800aa578(param_1,(int)uVar16 + 0x100,uVar15);
      }
      uVar9 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar9;
    } while (uVar9 < 0xe);
    uVar9 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar9;
  } while (uVar9 < 5);
  FUN_1800b3268(param_1,0,0);
  FUN_1800b3e28(param_1,0,0);
  FUN_1800b4c48(param_1 + 0x6838,0);
  if (*(int *)(param_1 + 0xe68) == 1) {
    if ((*(uint *)(param_1 + 0xe78) >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xc4e4) = 1;
    }
LAB_1800b8468:
    if ((*(uint *)(param_1 + 0xe78) >> 5 & 1) == 0) {
      if ((*(uint *)(param_1 + 0xe78) >> 7 & 1) == 0) {
        bVar8 = false;
      }
      else {
        bVar8 = *(int *)(param_1 + 0xc4e4) != 0;
      }
      goto LAB_1800b8430;
    }
  }
  else {
    if (*(int *)(param_1 + 0xe68) != 3) goto LAB_1800b8468;
    *(undefined4 *)(param_1 + 0xc4e4) = 1;
  }
  bVar8 = true;
LAB_1800b8430:
  *(bool *)(param_1 + 0x681b) = bVar8;
  puVar2 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x9eb);
  uVar9 = *puVar2;
  if (uVar9 < 9) {
    if (uVar9 != 0) {
      fVar18 = (float)uVar9;
    }
  }
  else {
    fVar18 = 8.0;
  }
  *(float *)(param_1 + 0xc4e0) = fVar18;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x138))
            (fVar18,*(longlong **)(param_1 + 0x28),*puVar2 != 0);
  return;
}

