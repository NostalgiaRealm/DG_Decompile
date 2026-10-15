/*
 * FUN_180083fc0 at 180083fc0
 * undefined FUN_180083fc0(void)
 * Address ranges: 180083fc0-1800842f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180083fc0(longlong param_1,ulonglong param_2)

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
  char cVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  longlong lVar18;
  undefined4 uVar19;
  ulonglong extraout_x12;
  longlong *plVar20;
  undefined8 local_6c0;
  undefined4 local_6b8;
  undefined8 local_6b4;
  int local_6a8 [12];
  undefined1 auStack_678 [8];
  uint local_670;
  uint uStack_66c;
  undefined8 uStack_648;
  undefined4 auStack_640 [384];
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    return '\x01';
  }
  func_0x0001801bad48(&local_6c0,*(undefined4 *)(param_1 + 0x2c));
  iVar12 = local_6c0._4_4_;
  if ((int)extraout_x12 - 0x15U < 0xb) {
LAB_180084048:
    bVar10 = true;
  }
  else {
    uVar15 = 7;
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar15 = 5;
    }
    if ((*(uint *)(&DAT_180231470 + (extraout_x12 & 0xffffffff) * 4) <= uVar15) &&
       (*(int *)(param_1 + 0x38) == 0)) goto LAB_180084048;
    bVar10 = false;
  }
  uVar15 = *(uint *)(&DAT_180231470 + extraout_x12 * 4);
  if ((bVar10) && (*(int *)(param_1 + 0x34) != 1)) {
    bVar10 = true;
    uVar19 = 4;
  }
  else {
    bVar10 = false;
    uVar19 = 0;
  }
  iVar1 = local_6c0._4_4_;
  if (bVar10) {
    iVar1 = 0;
  }
  iVar2 = local_6c0._4_4_;
  if (*(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x18c0 + 0x6cc
              ) == 0xa000) {
    iVar2 = iVar1;
  }
  lVar18 = *(longlong *)(param_1 + 0x18);
  if (lVar18 != 0) {
    uVar6 = *(uint *)(param_1 + 0x34);
    uVar16 = 0;
    if (uVar6 != 0) {
      uVar7 = *(uint *)(param_1 + 0x3c);
      do {
        if (uVar7 != 0) {
          uVar8 = *(uint *)(param_1 + 0x30);
          uVar13 = 0;
          do {
            uVar3 = uVar13;
            if (uVar8 <= uVar13) {
              uVar3 = 0;
            }
            lVar9 = (ulonglong)(uVar3 + uVar8 * uVar16) * 0x10;
            uVar14 = (ulonglong)(uVar13 + uVar7 * uVar16);
            uVar13 = uVar13 + 1;
            (&uStack_648)[uVar14 * 2] = *(undefined8 *)(lVar18 + lVar9);
            uVar17 = *(undefined4 *)(lVar18 + 8 + lVar9);
            auStack_640[uVar14 * 4 + 1] = 0;
            auStack_640[uVar14 * 4] = uVar17;
          } while (uVar13 < uVar7);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar6);
    }
  }
  puVar4 = &uStack_648;
  if (lVar18 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  uVar17 = 0x28;
  if (uVar15 < 8) {
    uVar17 = 8;
  }
  cVar11 = FUN_180082d80(param_1 + 0x60,*(undefined4 *)(param_1 + 0x24),
                         *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x3c),
                         *(undefined4 *)(param_1 + 0x34),1,local_6c0 & 0xffffffff,iVar2,
                         (undefined4)local_6b4,0,0,uVar17,0,uVar19,puVar4,0,0);
  if (cVar11 == '\0') {
    return '\0';
  }
  if ((param_2 & 1) == 0) {
    return cVar11;
  }
  if (!bVar10) {
    return cVar11;
  }
  plVar20 = *(longlong **)(param_1 + 0x78);
  cVar11 = '\0';
  if (plVar20 == (longlong *)0x0) goto LAB_1800842bc;
  (**(code **)(*plVar20 + 0x50))(plVar20,auStack_678);
  local_6a8[0] = iVar12;
  local_6a8[1] = 9;
  *(longlong **)(param_1 + 0x130) = plVar20;
  local_6a8[4] = 0;
  local_6a8[5] = 0;
  local_6a8[2] = 0;
  local_6a8[3] = -1;
  local_6c0 = 0x500000000;
  local_6a8[6] = 0;
  local_6a8[7] = 4;
  local_6a8[8] = 0;
  local_6a8[9] = 0;
  piVar5 = local_6a8;
  if (iVar12 == 0) {
    piVar5 = (int *)0x0;
  }
  local_6b8 = 0;
  local_6b4 = 0;
  local_6a8[10] = 0;
  local_6a8[0xb] = 0;
  plVar20 = (longlong *)**(undefined8 **)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x140) = 0;
  cVar11 = FUN_180082ad8(param_1 + 0x118,local_670,uStack_66c);
  if (cVar11 == '\0') {
LAB_180084238:
    uVar15 = 0;
    if (uStack_66c != 0) {
      do {
        if (local_670 != 0) {
          uVar16 = 0;
          do {
            uVar14 = (ulonglong)(uVar16 + uVar15 * local_670);
            plVar20 = *(longlong **)(*(longlong *)(param_1 + 0x148) + uVar14 * 0x28);
            if (plVar20 != (longlong *)0x0) {
              (**(code **)(*plVar20 + 0x10))();
              *(undefined8 *)(*(longlong *)(param_1 + 0x148) + uVar14 * 0x28) = 0;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < local_670);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uStack_66c);
    }
    if (*(longlong **)(param_1 + 0x140) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x140) + 0x10))();
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
  }
  else {
    if ((piVar5 != (int *)0x0) &&
       (iVar12 = (**(code **)(*plVar20 + 0x38))
                           (plVar20,*(undefined8 *)(param_1 + 0x130),piVar5,param_1 + 0x140),
       iVar12 < 0)) {
      cVar11 = '\0';
    }
    if (cVar11 == '\0') goto LAB_180084238;
  }
  if (cVar11 == '\0') {
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x130) + 8))();
  }
LAB_1800842bc:
  FUN_180083f10(param_1);
  if (cVar11 == '\0') {
    FUN_180083208(param_1 + 0x60,1,1);
  }
  return cVar11;
}

