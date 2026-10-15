/*
 * FUN_1800bb34c at 1800bb34c
 * ulonglong __fastcall FUN_1800bb34c(longlong param_1, int param_2, undefined8 * param_3, undefined8 param_4)
 * Address ranges: 1800bb34c-1800bb8de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800bb34c(longlong param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  byte *pbVar5;
  undefined8 uVar6;
  bool bVar7;
  BOOL BVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  int local_res20 [2];
  undefined8 in_stack_ffffffffffffff78;
  uint in_stack_ffffffffffffff80;
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar7 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar7 = true;
    BVar8 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar8 == 0) {
      FUN_1800044dc(0);
      bVar7 = true;
    }
  }
  local_res20[0] = -1;
  uVar10 = FUN_18001c008(param_1 + -0x6838,param_2,local_res20,param_4,in_stack_ffffffffffffff78,
                         in_stack_ffffffffffffff80);
  uVar22 = uVar10 & 0xffffffff;
  if ((int)uVar10 < 0) goto LAB_1800bb89d;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + -0x6440) + (ulonglong)(local_res20[0] - 1) * 8);
  *(undefined2 *)(lVar2 + 0xa190) = 0xffff;
  *(undefined2 *)(lVar2 + 0xa994) = 0xffff;
  if ((param_2 - 1U & 0xfffffffd) == 0) {
    puVar17 = (undefined4 *)(param_1 + -0x5458);
    puVar20 = (undefined4 *)(lVar2 + 0x6190);
    for (uVar10 = (ulonglong)(uint)(*(int *)(param_1 + -0x59bc) << 2); uVar10 != 0;
        uVar10 = uVar10 - 1) {
      *puVar20 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar20 = puVar20 + 1;
    }
    *(undefined2 *)(lVar2 + 0xa190) = 0;
    *(undefined2 *)(lVar2 + 0xa192) = *(undefined2 *)(param_1 + -0x59bc);
    *(undefined2 *)(lVar2 + 0xa194) = 0xffff;
    *(undefined1 *)(lVar2 + 0xacf9) = 1;
  }
  if (param_2 - 1U < 2) {
    puVar17 = (undefined4 *)(param_1 + -0x1458);
    puVar20 = (undefined4 *)(lVar2 + 0x5390);
    for (lVar15 = 0x380; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar20 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar20 = puVar20 + 1;
    }
    *(undefined4 *)(lVar2 + 0xa994) = 0x80000;
    *(undefined2 *)(lVar2 + 0xa998) = 0xffff;
    *(undefined1 *)(lVar2 + 0xacf8) = 1;
    if (param_2 == 1) {
      uVar10 = 0;
      do {
        plVar3 = *(longlong **)(param_1 + -0x170 + uVar10 * 8);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))();
        }
        *(undefined8 *)(lVar2 + 0xab60 + uVar10 * 8) =
             *(undefined8 *)(param_1 + -0x170 + uVar10 * 8);
        uVar16 = (ulonglong)((uint)uVar10 & 0x3f);
        *(undefined4 *)(lVar2 + 0xac20 + uVar10 * 4) = *(undefined4 *)(param_1 + -0xf0 + uVar10 * 4)
        ;
        *(undefined4 *)(lVar2 + 44000 + uVar10 * 4) = *(undefined4 *)(param_1 + -0xb0 + uVar10 * 4);
        uVar11 = uVar10 >> 6;
        uVar10 = uVar10 + 1;
        pbVar5 = (byte *)(lVar2 + 0xacf0 + uVar11 * 8 + ((longlong)uVar16 >> 3));
        *pbVar5 = *pbVar5 | '\x01' << (uVar16 & 7);
      } while (uVar10 != 0x10);
      *(undefined4 *)(lVar2 + 0xac60) = *(undefined4 *)(param_1 + -0x48);
      *(undefined1 *)(lVar2 + 0xacfb) = 1;
      if (*(longlong **)(param_1 + -0x178) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + -0x178) + 8))();
      }
      *(undefined8 *)(lVar2 + 0xab58) = *(undefined8 *)(param_1 + -0x178);
      *(undefined1 *)(lVar2 + 0xacfa) = 1;
    }
  }
  puVar12 = (undefined8 *)FUN_1800acd98(param_1 + -0x6838,local_res20[0],lVar2);
  if (puVar12 == (undefined8 *)0x0) goto LAB_1800bb89d;
  uVar10 = FUN_1800c0ca8((longlong)puVar12,(longlong *)&DAT_1800fd720,param_3);
  uVar22 = uVar10 & 0xffffffff;
  if ((int)uVar10 < 0) {
LAB_1800bb886:
    *puVar12 = &PTR_FUN_180104928;
    FUN_1800fbcf0(puVar12);
    goto LAB_1800bb89d;
  }
  iVar18 = *(int *)(param_1 + 0x144);
  if (*(int *)(param_1 + 0x140) == iVar18) {
    uVar10 = 0x10;
    if (iVar18 != 0) {
      uVar10 = (ulonglong)(uint)(iVar18 * 2);
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar10;
    uVar13 = SUB168(ZEXT816(8) * auVar4,0);
    if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
      uVar13 = 0xffffffffffffffff;
    }
    puVar14 = (undefined8 *)thunk_FUN_1800fbccc(uVar13);
    if (puVar14 == (undefined8 *)0x0) goto LAB_1800bb886;
    FUN_1800fbec0(puVar14,*(undefined8 **)(param_1 + 0x138),
                  (ulonglong)*(uint *)(param_1 + 0x144) << 3);
    FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x138));
    *(undefined8 **)(param_1 + 0x138) = puVar14;
    *(int *)(param_1 + 0x144) = (int)uVar10;
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x138) + (ulonglong)*(uint *)(param_1 + 0x140) * 8) =
       puVar12;
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
  if (param_2 == 1) {
    uVar10 = 0;
    do {
      if ((&DAT_180111950)[uVar10 * 8] != '\0') {
        uVar11 = 0;
        do {
          iVar18 = (int)uVar11;
          *(undefined4 *)(lVar2 + uVar10 * 4 + 0x4ad0 + uVar11 * 0x38) =
               *(undefined4 *)(param_1 + uVar10 * 4 + 0x298 + uVar11 * 0x38);
          uVar19 = iVar18 + 1;
          uVar11 = (ulonglong)uVar19;
          uVar9 = iVar18 * 0xe + (int)uVar10;
          uVar16 = (ulonglong)(uVar9 & 0x3f);
          pbVar5 = (byte *)(lVar2 + 0xad00 + (ulonglong)(uVar9 >> 6) * 8 + ((longlong)uVar16 >> 3));
          *pbVar5 = *pbVar5 | '\x01' << (uVar16 & 7);
        } while (uVar19 < 0x10);
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 < 0xe);
    uVar13 = *(undefined8 *)(param_1 + 0x730);
    uVar6 = *(undefined8 *)(param_1 + 0x738);
    *(undefined1 *)(lVar2 + 0xacfe) = 1;
    *(undefined8 *)(lVar2 + 0x4fec) = uVar13;
    *(undefined8 *)(lVar2 + 0x4ff4) = uVar6;
LAB_1800bb718:
    puVar17 = (undefined4 *)(param_1 + 0x158);
    puVar20 = (undefined4 *)(lVar2 + 0x4ffc);
    for (lVar15 = 0x40; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar20 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar20 = puVar20 + 1;
    }
    *(undefined4 *)(lVar2 + 0x527c) = 0x100000;
    *(undefined2 *)(lVar2 + 0x5280) = 0xffff;
    puVar17 = (undefined4 *)(param_1 + 0x198);
    puVar20 = (undefined4 *)(lVar2 + 0x503c);
    for (lVar15 = 0x40; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar20 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar20 = puVar20 + 1;
    }
    *(undefined4 *)(lVar2 + 0x52a0) = 0x100000;
    *(undefined2 *)(lVar2 + 0x52a4) = 0xffff;
    *(undefined8 *)(lVar2 + 0x4fb0) = *(undefined8 *)(param_1 + 0x5c58);
    lVar15 = *(longlong *)(param_1 + 0x5c58);
    if (lVar15 != 0) {
      LOCK();
      piVar1 = (int *)(lVar15 + 8);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (iVar18 == 0) {
        LOCK();
        *(int *)(&DAT_00006844 + *(longlong *)(lVar15 + 0x18)) =
             *(int *)(&DAT_00006844 + *(longlong *)(lVar15 + 0x18)) + 1;
        UNLOCK();
      }
    }
    *(undefined8 *)(lVar2 + 0x4fb8) = *(undefined8 *)(param_1 + 0x5c60);
    *(undefined1 *)(lVar2 + 0xacfc) = 1;
    if (*(longlong *)(param_1 + 0x5c60) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x5c60) + 0xc);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uVar10 = 0;
    do {
      *(undefined4 *)(lVar2 + 0x4f68 + uVar10 * 4) = *(undefined4 *)(param_1 + 0x5c68 + uVar10 * 4);
      uVar11 = (ulonglong)((uint)uVar10 & 0x3f);
      uVar16 = uVar10 + 1;
      pbVar5 = (byte *)(lVar2 + 0xad30 + (uVar10 >> 6) * 8 + ((longlong)uVar11 >> 3));
      *pbVar5 = *pbVar5 | '\x01' << (uVar11 & 7);
      uVar10 = uVar16;
    } while (uVar16 != 0x10);
  }
  else {
    puVar17 = &DAT_1801045b0;
    if (param_2 == 3) {
      puVar17 = &DAT_1801045e0;
    }
    uVar9 = 0xc;
    if (param_2 == 3) {
      uVar9 = 1;
    }
    uVar10 = 0;
    do {
      if ((&DAT_180111950)[(ulonglong)(uint)puVar17[uVar10] * 8] != '\0') {
        uVar11 = 0;
        do {
          iVar18 = (int)uVar11;
          *(undefined4 *)(lVar2 + 0x4ad0 + ((ulonglong)(uint)puVar17[uVar10] + uVar11 * 0xe) * 4) =
               *(undefined4 *)
                (param_1 + 0x298 + ((ulonglong)(uint)puVar17[uVar10] + uVar11 * 0xe) * 4);
          uVar21 = iVar18 + 1;
          uVar11 = (ulonglong)uVar21;
          uVar19 = puVar17[uVar10] + iVar18 * 0xe;
          uVar16 = (ulonglong)(uVar19 & 0x3f);
          pbVar5 = (byte *)(lVar2 + 0xad00 + (ulonglong)(uVar19 >> 6) * 8 + ((longlong)uVar16 >> 3))
          ;
          *pbVar5 = *pbVar5 | '\x01' << (uVar16 & 7);
        } while (uVar21 < 0x10);
      }
      uVar19 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar19;
    } while (uVar19 < uVar9);
    if (param_2 == 3) goto LAB_1800bb718;
  }
  if (param_2 - 1U < 2) {
    puVar17 = (undefined4 *)(param_1 + 0x1d8);
    puVar20 = (undefined4 *)(lVar2 + 0x513c);
    for (lVar15 = 0x40; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar20 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar20 = puVar20 + 1;
    }
    *(undefined4 *)(lVar2 + 0x52c4) = 0x100000;
    *(undefined2 *)(lVar2 + 0x52c8) = 0xffff;
    puVar17 = (undefined4 *)(param_1 + 0x218);
    puVar20 = (undefined4 *)(lVar2 + 0x517c);
    for (lVar15 = 0x40; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar20 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar20 = puVar20 + 1;
    }
    *(undefined4 *)(lVar2 + 0x52e8) = 0x100000;
    *(undefined2 *)(lVar2 + 0x52ec) = 0xffff;
    *(undefined8 *)(lVar2 + 0x4fa8) = *(undefined8 *)(param_1 + 0x5c50);
    lVar2 = *(longlong *)(param_1 + 0x5c50);
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 8);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (iVar18 == 0) {
        LOCK();
        *(int *)(&DAT_00006844 + *(longlong *)(lVar2 + 0x18)) =
             *(int *)(&DAT_00006844 + *(longlong *)(lVar2 + 0x18)) + 1;
        UNLOCK();
      }
    }
  }
LAB_1800bb89d:
  if (bVar7) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar22;
}

