/*
 * FUN_10061d50 at 10061d50
 * undefined FUN_10061d50(void)
 * Address ranges: 10061d50-100627d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10061d50(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  int iVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  char in_stack_00000008;
  code *local_4c;
  ulonglong *local_48;
  int *local_44;
  
  uVar14 = (ulonglong)param_5;
  uVar20 = *(uint *)(param_1 + 0x4cb8) &
           ((*(uint *)(&DAT_1012c498 + param_2 * 4) | *(uint *)(&DAT_1012c488 + param_2 * 4)) ^
           0xffffffff);
  iVar9 = (int)param_2 >> 3;
  if (param_4 == 0) {
    if (param_5 == 0) {
      iVar2 = param_1 + param_2 * 4;
      if ((*(int *)(iVar2 + 0x5860) + 0xfbU & 0xff) < 2) {
        pbVar7 = (byte *)(iVar9 + param_1 + 0xd974);
        *pbVar7 = *pbVar7 | (byte)(1 << (ulonglong)(param_2 & 7));
      }
      *(undefined4 *)(iVar2 + 0x5860) = 0;
      uVar18 = *(ulonglong *)(param_1 + 0x6a0);
      uVar15 = *(uint *)(param_1 + 0x5880) & (1 << (ulonglong)(param_2 & 0x1f) ^ 0xffffffffU);
      *(uint *)(param_1 + 0x5880) = uVar15;
      uVar14 = 0x1000000000;
      if (uVar15 == 0) {
        uVar14 = 0;
      }
      *(ulonglong *)(param_1 + 0x6a0) =
           uVar18 & 0xffffffefff000000 |
           uVar18 & (7L << ((ulonglong)(param_2 * 3) & 0x3f) ^ 0xffffffffffffffffU) & 0xffffff |
           uVar14;
      goto LAB_10062760;
    }
  }
  else if (param_5 == 0) {
    uVar15 = *(uint *)(param_4 + 0x34);
    uVar20 = uVar20 | *(uint *)(&DAT_1012c498 + param_2 * 4);
    if ((uVar15 == 2) || (uVar15 == 5)) {
      uVar20 = uVar20 | *(uint *)(&DAT_1012c488 + param_2 * 4);
    }
    piVar1 = (int *)(param_1 + param_2 * 8 + 0x3d4);
    if (*piVar1 != param_3) {
      *piVar1 = param_3;
      pbVar7 = (byte *)(iVar9 + param_1 + 0xd974);
      *pbVar7 = *pbVar7 | (byte)(1 << (ulonglong)(param_2 & 7));
    }
    local_4c = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar11 = (*extraout_w11_00)(param_4);
    (*local_4c)();
    cVar12 = (*extraout_w11_01)(param_4);
    uVar15 = *(uint *)(param_4 + 0x34);
    if (uVar15 == 0) {
      uVar15 = (uint)(*(char *)(param_1 + 0x81) != '\0');
    }
    puVar3 = (uint *)(param_1 + param_2 * 4 + 0x5860);
    bVar10 = *(byte *)(uVar15 + 0x1012c480);
    if ((*puVar3 + 0xfb & 0xff) < 2 != (bVar10 + 0xfb & 0xff) < 2) {
      pbVar7 = (byte *)(iVar9 + param_1 + 0xd974);
      *pbVar7 = *pbVar7 | (byte)(1 << (ulonglong)(param_2 & 7));
    }
    *puVar3 = (uint)bVar10;
    local_48 = (ulonglong *)(param_1 + 0x6a0);
    *local_48 = (((ulonglong)bVar10 & 7) << ((ulonglong)(param_2 * 3) & 0x3f) |
                *local_48 & (7L << ((ulonglong)(param_2 * 3) & 0x3f) ^ 0xffffffffffffffffU)) &
                0xffffff | *local_48 & 0xffffffffff000000;
    if (in_stack_00000008 != '\0') {
      if (param_2 < 4) {
        iVar6 = param_1 + param_2 * 0x70;
        iVar16 = -1;
        iVar2 = iVar16;
        if (cVar11 == '\0') {
          iVar2 = 0;
        }
        iVar4 = 0;
        if (cVar11 == '\0') {
          iVar4 = 0x3f800000;
        }
        iVar5 = 0;
        if (cVar12 == '\0') {
          iVar5 = 0x3f800000;
        }
        if (cVar12 == '\0') {
          iVar16 = 0;
        }
        if ((((iVar2 == *(int *)(iVar6 + 0x5680)) && (iVar16 == *(int *)(iVar6 + 0x5684))) &&
            (iVar4 == *(int *)(iVar6 + 0x5688))) && (iVar5 == *(int *)(iVar6 + 0x568c))) {
          bVar10 = 0;
        }
        else {
          bVar10 = 1;
        }
        *(int *)(iVar6 + 0x568c) = iVar5;
        *(int *)(iVar6 + 0x5688) = iVar4;
        *(int *)(iVar6 + 0x5680) = iVar2;
        *(int *)(iVar6 + 0x5684) = iVar16;
        *(byte *)(param_1 + 0xd981) = bVar10 | *(byte *)(param_1 + 0xd981);
      }
      (*local_4c)();
      uVar13 = (*extraout_w11_02)(param_4,&local_4c,&local_44);
      if (((((*(int *)local_4c == -1) && (*(int *)(local_4c + 4) == -1)) &&
           ((*(int *)(local_4c + 8) == -1 && ((*(int *)(local_4c + 0xc) == -1 && (*local_44 == 0))))
           )) && (local_44[1] == 0)) && ((local_44[2] == 0 && (local_44[3] == 0)))) {
        uVar15 = *(uint *)(param_1 + 0x5880) & (1 << (ulonglong)(param_2 & 0x1f) ^ 0xffffffffU);
      }
      else {
        uVar15 = 1 << (ulonglong)(param_2 & 0x1f) | *(uint *)(param_1 + 0x5880);
      }
      *(uint *)(param_1 + 0x5880) = uVar15;
      uVar14 = 0x1000000000;
      if (uVar15 == 0) {
        uVar14 = 0;
      }
      iVar2 = param_1 + param_2 * 0x20;
      *local_48 = uVar14 | *local_48 & 0xffffffefffffffff;
      bVar10 = FUN_1005fb38(uVar13,iVar2 + 0x4aa0,iVar2 + 0x4ab0,local_4c,local_44);
      *(byte *)(param_1 + 0xd9a8) = bVar10 | *(byte *)(param_1 + 0xd9a8);
    }
    if (*(char *)(param_1 + 0x82) != '\0') {
      if ((((*(int *)(param_1 + 0x5860) - 5U < 2) || (*(int *)(param_1 + 0x5864) - 5U < 2)) ||
          (*(int *)(param_1 + 0x5868) - 5U < 2)) ||
         (((*(int *)(param_1 + 0x586c) - 5U < 2 || (*(int *)(param_1 + 0x5870) - 5U < 2)) ||
          ((*(int *)(param_1 + 0x5874) - 5U < 2 ||
           ((*(int *)(param_1 + 0x5878) - 5U < 2 || (*(int *)(param_1 + 0x587c) - 5U < 2)))))))) {
        bVar8 = true;
        uVar15 = *(uint *)(param_1 + 0x494c) | 0x10000;
        uVar17 = *(uint *)(param_1 + 0x4938) | 0x10000;
      }
      else {
        bVar8 = false;
        uVar15 = *(uint *)(param_1 + 0x494c) & 0xfffeffff;
        uVar17 = *(uint *)(param_1 + 0x4938) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x4938) = uVar17;
      *(uint *)(param_1 + 0x494c) = uVar15;
      iVar2 = param_2 * 0x30 + param_1;
      uVar17 = 1 << (ulonglong)(param_2 & 0x1f);
      uVar15 = *(uint *)(param_1 + 0x5884) & (uVar17 ^ 0xffffffff);
      if (*(int *)(iVar2 + 0x494c) != 0) {
        uVar15 = *(uint *)(param_1 + 0x5884) | uVar17;
      }
      *(uint *)(param_1 + 0x5884) = uVar15;
      if (bVar8) {
        *(uint *)(param_1 + 0x4968) = *(uint *)(param_1 + 0x4968) | 0x10000;
        uVar19 = *(uint *)(param_1 + 0x497c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x4968) = *(uint *)(param_1 + 0x4968) & 0xfffeffff;
        uVar19 = *(uint *)(param_1 + 0x497c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x497c) = uVar19;
      uVar19 = uVar15 & (uVar17 ^ 0xffffffff);
      if (*(int *)(iVar2 + 0x494c) != 0) {
        uVar19 = uVar15 | uVar17;
      }
      *(uint *)(param_1 + 0x5884) = uVar19;
      if (bVar8) {
        *(uint *)(param_1 + 0x4998) = *(uint *)(param_1 + 0x4998) | 0x10000;
        uVar15 = *(uint *)(param_1 + 0x49ac) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x4998) = *(uint *)(param_1 + 0x4998) & 0xfffeffff;
        uVar15 = *(uint *)(param_1 + 0x49ac) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x49ac) = uVar15;
      uVar15 = uVar19 & (uVar17 ^ 0xffffffff);
      if (*(int *)(iVar2 + 0x494c) != 0) {
        uVar15 = uVar19 | uVar17;
      }
      *(uint *)(param_1 + 0x5884) = uVar15;
      if (bVar8) {
        *(uint *)(param_1 + 0x49c8) = *(uint *)(param_1 + 0x49c8) | 0x10000;
        uVar19 = *(uint *)(param_1 + 0x49dc) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x49c8) = *(uint *)(param_1 + 0x49c8) & 0xfffeffff;
        uVar19 = *(uint *)(param_1 + 0x49dc) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x49dc) = uVar19;
      uVar19 = uVar15 & (uVar17 ^ 0xffffffff);
      if (*(int *)(iVar2 + 0x494c) != 0) {
        uVar19 = uVar17 | uVar15;
      }
      *(uint *)(param_1 + 0x5884) = uVar19;
      if (bVar8) {
        *(uint *)(param_1 + 0x49f8) = *(uint *)(param_1 + 0x49f8) | 0x10000;
        uVar15 = *(uint *)(param_1 + 0x4a0c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x49f8) = *(uint *)(param_1 + 0x49f8) & 0xfffeffff;
        uVar15 = *(uint *)(param_1 + 0x4a0c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x4a0c) = uVar15;
      uVar15 = uVar19 & (uVar17 ^ 0xffffffff);
      if (*(int *)(iVar2 + 0x494c) != 0) {
        uVar15 = uVar17 | uVar19;
      }
      *(uint *)(param_1 + 0x5884) = uVar15;
      if (bVar8) {
        *(uint *)(param_1 + 0x4a28) = *(uint *)(param_1 + 0x4a28) | 0x10000;
        uVar19 = *(uint *)(param_1 + 0x4a3c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x4a28) = *(uint *)(param_1 + 0x4a28) & 0xfffeffff;
        uVar19 = *(uint *)(param_1 + 0x4a3c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x4a3c) = uVar19;
      uVar19 = uVar15 & (uVar17 ^ 0xffffffff);
      if (*(int *)(iVar2 + 0x494c) != 0) {
        uVar19 = uVar15 | uVar17;
      }
      *(uint *)(param_1 + 0x5884) = uVar19;
      if (bVar8) {
        *(uint *)(param_1 + 0x4a58) = *(uint *)(param_1 + 0x4a58) | 0x10000;
        uVar15 = *(uint *)(param_1 + 0x4a6c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x4a58) = *(uint *)(param_1 + 0x4a58) & 0xfffeffff;
        uVar15 = *(uint *)(param_1 + 0x4a6c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x4a6c) = uVar15;
      uVar15 = uVar19 & (uVar17 ^ 0xffffffff);
      if (*(int *)(iVar2 + 0x494c) != 0) {
        uVar15 = uVar17 | uVar19;
      }
      *(uint *)(param_1 + 0x5884) = uVar15;
      if (bVar8) {
        *(uint *)(param_1 + 0x4a88) = *(uint *)(param_1 + 0x4a88) | 0x10000;
        uVar19 = *(uint *)(param_1 + 0x4a9c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x4a88) = *(uint *)(param_1 + 0x4a88) & 0xfffeffff;
        uVar19 = *(uint *)(param_1 + 0x4a9c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x4a9c) = uVar19;
      uVar19 = uVar15 & (uVar17 ^ 0xffffffff);
      if (*(int *)(iVar2 + 0x494c) != 0) {
        uVar19 = uVar15 | uVar17;
      }
      *(uint *)(param_1 + 0x5884) = uVar19;
      *(undefined1 *)(param_1 + 0xd9a8) = 1;
      uVar14 = 0x2000000000;
      if (uVar19 == 0) {
        uVar14 = 0;
      }
      *local_48 = uVar14 | *local_48 & 0xffffffdfffffffff;
    }
    if (*puVar3 - 5 < 2) {
      iVar2 = param_2 * 0x30 + param_1;
      *(float *)(iVar2 + 0x4940) = 1.0 / (float)*(uint *)(param_4 + 0x14);
      *(float *)(iVar2 + 0x4944) = 1.0 / (float)*(uint *)(param_4 + 0x18);
      fVar21 = 65535.0;
      if (*(int *)(param_4 + 0x1c) != 0x17) {
        fVar21 = 16777215.0;
      }
      *(float *)(iVar2 + 0x4948) = 1.0 / fVar21;
      *(undefined1 *)(param_1 + 0xd9a8) = 1;
    }
    goto LAB_10062760;
  }
  piVar1 = (int *)(param_1 + param_2 * 8 + 0x3d4);
  if (*piVar1 != param_3) {
    *piVar1 = param_3;
    pbVar7 = (byte *)(iVar9 + param_1 + 0xd974);
    *pbVar7 = *pbVar7 | (byte)(1 << (ulonglong)(param_2 & 7));
  }
  iVar2 = param_1 + param_2 * 4;
  if ((*(int *)(iVar2 + 0x5860) + 0xfbU & 0xff) < 2) {
    pbVar7 = (byte *)(iVar9 + param_1 + 0xd974);
    *pbVar7 = *pbVar7 | (byte)(1 << (ulonglong)(param_2 & 7));
  }
  *(undefined4 *)(iVar2 + 0x5860) = 3;
  uVar18 = *(ulonglong *)(param_1 + 0x6a0);
  *(ulonglong *)(param_1 + 0x6a0) =
       (uVar18 & (7L << ((ulonglong)(param_2 * 3) & 0x3f) ^ 0xffffffffffffffffU) |
       3L << ((ulonglong)(param_2 * 3) & 0x3f)) & 0xffffff | uVar18 & 0xffffffffff000000;
  if (in_stack_00000008 != '\0') {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar13 = (*extraout_w11)(uVar14 & 0xffffffff,&local_48,&local_4c);
    if (((((int)*local_48 == -1) && (*(int *)((int)local_48 + 4) == -1)) && ((int)local_48[1] == -1)
        ) && (((*(int *)((int)local_48 + 0xc) == -1 && (*(int *)local_4c == 0)) &&
              ((*(int *)(local_4c + 4) == 0 &&
               ((*(int *)(local_4c + 8) == 0 && (*(int *)(local_4c + 0xc) == 0)))))))) {
      uVar15 = *(uint *)(param_1 + 0x5880) & (1 << (ulonglong)(param_2 & 0x1f) ^ 0xffffffffU);
    }
    else {
      uVar15 = 1 << (ulonglong)(param_2 & 0x1f) | *(uint *)(param_1 + 0x5880);
    }
    *(uint *)(param_1 + 0x5880) = uVar15;
    uVar14 = 0x1000000000;
    if (uVar15 == 0) {
      uVar14 = 0;
    }
    *(ulonglong *)(param_1 + 0x6a0) = uVar14 | *(ulonglong *)(param_1 + 0x6a0) & 0xffffffefffffffff;
    iVar2 = param_1 + param_2 * 0x20;
    bVar10 = FUN_1005fb38(uVar13,iVar2 + 0x4aa0,iVar2 + 0x4ab0,local_48,local_4c);
    *(byte *)(param_1 + 0xd9a8) = bVar10 | *(byte *)(param_1 + 0xd9a8);
  }
LAB_10062760:
  *(undefined2 *)(param_1 + 0xd978) = 0x101;
  pbVar7 = (byte *)(iVar9 + param_1 + 0xd970);
  *pbVar7 = *pbVar7 | (byte)(1 << (ulonglong)(param_2 & 7));
  if (uVar20 != *(uint *)(param_1 + 0x4cb8)) {
    *(uint *)(param_1 + 0x4cb8) = uVar20;
    *(undefined1 *)(param_1 + 0xd981) = 1;
  }
  return;
}

