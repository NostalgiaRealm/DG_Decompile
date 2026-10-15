/*
 * FUN_10078248 at 10078248
 * undefined FUN_10078248(void)
 * Address ranges: 10078248-10078d0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10078248(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  int iVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  char in_stack_00000008;
  code *local_50;
  ulonglong *local_4c;
  int *local_48 [2];
  
  uVar13 = (ulonglong)param_5;
  uVar20 = *(uint *)(param_1 + 0x6928) &
           ((*(uint *)(&DAT_10161e78 + param_2 * 4) | *(uint *)(&DAT_10161e68 + param_2 * 4)) ^
           0xffffffff);
  iVar8 = (int)param_2 >> 3;
  if (param_4 == 0) {
    if (param_5 == 0) {
      iVar2 = param_1 + param_2 * 4;
      if ((*(int *)(iVar2 + 30000) + 0xfbU & 0xff) < 2) {
        pbVar6 = (byte *)(iVar8 + param_1 + 0xf664);
        *pbVar6 = *pbVar6 | (byte)(1 << (ulonglong)(param_2 & 7));
      }
      *(undefined4 *)(iVar2 + 30000) = 0;
      uVar18 = *(ulonglong *)(param_1 + 0xfc0);
      uVar17 = uVar18 & (7L << ((ulonglong)(param_2 * 3) & 0x3f) ^ 0xffffffffffffffffU);
      uVar14 = *(uint *)(param_1 + 0x7570) & (1 << (ulonglong)(param_2 & 0x1f) ^ 0xffffffffU);
      *(uint *)(param_1 + 0x7570) = uVar14;
      uVar13 = 0x2000000000000000;
      if (uVar14 == 0) {
        uVar13 = 0;
      }
      *(ulonglong *)(param_1 + 0xfc0) =
           (uVar17 ^ uVar18) & 0xdfff000000000000 ^ uVar17 & 0xdfffffffffffffff | uVar13;
      goto LAB_10078c94;
    }
  }
  else if (param_5 == 0) {
    uVar14 = *(uint *)(param_4 + 0x34);
    uVar20 = uVar20 | *(uint *)(&DAT_10161e78 + param_2 * 4);
    if ((uVar14 == 2) || (uVar14 == 5)) {
      uVar20 = uVar20 | *(uint *)(&DAT_10161e68 + param_2 * 4);
    }
    piVar1 = (int *)(param_1 + param_2 * 8 + 0x714);
    if (*piVar1 != param_3) {
      *piVar1 = param_3;
      pbVar6 = (byte *)(iVar8 + param_1 + 0xf664);
      *pbVar6 = *pbVar6 | (byte)(1 << (ulonglong)(param_2 & 7));
    }
    local_50 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar10 = (*extraout_w11_00)(param_4);
    (*local_50)();
    cVar11 = (*extraout_w11_01)(param_4);
    uVar14 = *(uint *)(param_4 + 0x34);
    if (uVar14 == 0) {
      uVar14 = (uint)(*(char *)(param_1 + 0x81) != '\0');
    }
    uVar13 = (ulonglong)*(byte *)(uVar14 + 0x10161e60);
    if ((*(uint *)(param_4 + 0x30) >> 3 & 1) == 0) {
      uVar15 = 7;
      if (*(int *)(param_4 + 0x1c) != 0x21 || in_stack_00000008 == '\0') {
        uVar15 = (uint)*(byte *)(uVar14 + 0x10161e60);
      }
      uVar13 = (ulonglong)uVar15;
    }
    else if (uVar14 == 4) {
      uVar13 = 4;
      cVar10 = '\x01';
    }
    else if (uVar14 == 5) {
      uVar13 = 2;
      cVar10 = '\x01';
    }
    piVar1 = (int *)(param_1 + param_2 * 4 + 30000);
    if ((*piVar1 + 0xfbU & 0xff) < 2 != ((int)uVar13 + 0xfbU & 0xff) < 2) {
      pbVar6 = (byte *)(iVar8 + param_1 + 0xf664);
      *pbVar6 = *pbVar6 | (byte)(1 << (ulonglong)(param_2 & 7));
    }
    local_4c = (ulonglong *)(param_1 + 0xfc0);
    *piVar1 = (int)uVar13;
    *local_4c = ((uVar13 & 7) << ((ulonglong)(param_2 * 3) & 0x3f) |
                *local_4c & (7L << ((ulonglong)(param_2 * 3) & 0x3f) ^ 0xffffffffffffffffU)) &
                0xffffffffffff | *local_4c & 0xffff000000000000;
    if (in_stack_00000008 != '\0') {
      if (param_2 < 4) {
        iVar2 = param_1 + param_2 * 0x80;
        iVar16 = -1;
        iVar3 = iVar16;
        if (cVar10 == '\0') {
          iVar3 = 0;
        }
        iVar4 = 0;
        if (cVar10 == '\0') {
          iVar4 = 0x3f800000;
        }
        if (cVar11 == '\0') {
          iVar16 = 0;
        }
        iVar5 = 0;
        if (cVar11 == '\0') {
          iVar5 = 0x3f800000;
        }
        if ((((iVar3 == *(int *)(iVar2 + 0x7310)) && (iVar16 == *(int *)(iVar2 + 0x7314))) &&
            (iVar4 == *(int *)(iVar2 + 0x7318))) && (iVar5 == *(int *)(iVar2 + 0x731c))) {
          bVar9 = 0;
        }
        else {
          bVar9 = 1;
        }
        *(int *)(iVar2 + 0x731c) = iVar5;
        *(int *)(iVar2 + 0x7318) = iVar4;
        *(int *)(iVar2 + 0x7310) = iVar3;
        *(int *)(iVar2 + 0x7314) = iVar16;
        *(byte *)(param_1 + 0xf671) = bVar9 | *(byte *)(param_1 + 0xf671);
      }
      (*local_50)();
      uVar12 = (*extraout_w11_02)(param_4,&local_50,local_48);
      if (((((*(int *)local_50 == -1) && (*(int *)(local_50 + 4) == -1)) &&
           ((*(int *)(local_50 + 8) == -1 &&
            ((*(int *)(local_50 + 0xc) == -1 && (*local_48[0] == 0)))))) && (local_48[0][1] == 0))
         && ((local_48[0][2] == 0 && (local_48[0][3] == 0)))) {
        uVar14 = *(uint *)(param_1 + 0x7570) & (1 << (ulonglong)(param_2 & 0x1f) ^ 0xffffffffU);
      }
      else {
        uVar14 = 1 << (ulonglong)(param_2 & 0x1f) | *(uint *)(param_1 + 0x7570);
      }
      *(uint *)(param_1 + 0x7570) = uVar14;
      uVar13 = 0x2000000000000000;
      if (uVar14 == 0) {
        uVar13 = 0;
      }
      iVar2 = param_1 + param_2 * 0x20;
      *local_4c = uVar13 | *local_4c & 0xdfffffffffffffff;
      bVar9 = FUN_10075618(uVar12,iVar2 + 0x6700,iVar2 + 0x6710,local_50,local_48[0]);
      *(byte *)(param_1 + 0xf6a3) = bVar9 | *(byte *)(param_1 + 0xf6a3);
    }
    if (*(char *)(param_1 + 0x82) != '\0') {
      if ((((*(int *)(param_1 + 30000) - 5U < 2) || (*(int *)(param_1 + 0x7534) - 5U < 2)) ||
          (*(int *)(param_1 + 0x7538) - 5U < 2)) ||
         (((*(int *)(param_1 + 0x753c) - 5U < 2 || (*(int *)(param_1 + 0x7540) - 5U < 2)) ||
          ((*(int *)(param_1 + 0x7544) - 5U < 2 ||
           ((*(int *)(param_1 + 0x7548) - 5U < 2 || (*(int *)(param_1 + 0x754c) - 5U < 2)))))))) {
        bVar7 = true;
        uVar14 = *(uint *)(param_1 + 0x653c) | 0x10000;
        uVar15 = *(uint *)(param_1 + 0x6518) | 0x10000;
      }
      else {
        bVar7 = false;
        uVar14 = *(uint *)(param_1 + 0x653c) & 0xfffeffff;
        uVar15 = *(uint *)(param_1 + 0x6518) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x6518) = uVar15;
      *(uint *)(param_1 + 0x653c) = uVar14;
      iVar2 = param_2 * 0x40 + param_1;
      uVar15 = 1 << (ulonglong)(param_2 & 0x1f);
      uVar14 = *(uint *)(param_1 + 0x7574) & (uVar15 ^ 0xffffffff);
      if (*(int *)(iVar2 + 0x653c) != 0) {
        uVar14 = *(uint *)(param_1 + 0x7574) | uVar15;
      }
      *(uint *)(param_1 + 0x7574) = uVar14;
      if (bVar7) {
        *(uint *)(param_1 + 0x6558) = *(uint *)(param_1 + 0x6558) | 0x10000;
        uVar19 = *(uint *)(param_1 + 0x657c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x6558) = *(uint *)(param_1 + 0x6558) & 0xfffeffff;
        uVar19 = *(uint *)(param_1 + 0x657c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x657c) = uVar19;
      uVar19 = uVar14 & (uVar15 ^ 0xffffffff);
      if (*(int *)(iVar2 + 0x653c) != 0) {
        uVar19 = uVar14 | uVar15;
      }
      *(uint *)(param_1 + 0x7574) = uVar19;
      if (bVar7) {
        *(uint *)(param_1 + 0x6598) = *(uint *)(param_1 + 0x6598) | 0x10000;
        uVar14 = *(uint *)(param_1 + 0x65bc) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x6598) = *(uint *)(param_1 + 0x6598) & 0xfffeffff;
        uVar14 = *(uint *)(param_1 + 0x65bc) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x65bc) = uVar14;
      uVar14 = uVar19 & (uVar15 ^ 0xffffffff);
      if (*(int *)(iVar2 + 0x653c) != 0) {
        uVar14 = uVar15 | uVar19;
      }
      *(uint *)(param_1 + 0x7574) = uVar14;
      if (bVar7) {
        *(uint *)(param_1 + 0x65d8) = *(uint *)(param_1 + 0x65d8) | 0x10000;
        uVar19 = *(uint *)(param_1 + 0x65fc) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x65d8) = *(uint *)(param_1 + 0x65d8) & 0xfffeffff;
        uVar19 = *(uint *)(param_1 + 0x65fc) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x65fc) = uVar19;
      uVar19 = uVar14 & (uVar15 ^ 0xffffffff);
      if (*(int *)(iVar2 + 0x653c) != 0) {
        uVar19 = uVar14 | uVar15;
      }
      *(uint *)(param_1 + 0x7574) = uVar19;
      if (bVar7) {
        *(uint *)(param_1 + 0x6618) = *(uint *)(param_1 + 0x6618) | 0x10000;
        uVar14 = *(uint *)(param_1 + 0x663c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x6618) = *(uint *)(param_1 + 0x6618) & 0xfffeffff;
        uVar14 = *(uint *)(param_1 + 0x663c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x663c) = uVar14;
      uVar14 = uVar19 & (uVar15 ^ 0xffffffff);
      if (*(int *)(iVar2 + 0x653c) != 0) {
        uVar14 = uVar15 | uVar19;
      }
      *(uint *)(param_1 + 0x7574) = uVar14;
      if (bVar7) {
        *(uint *)(param_1 + 0x6658) = *(uint *)(param_1 + 0x6658) | 0x10000;
        uVar19 = *(uint *)(param_1 + 0x667c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x6658) = *(uint *)(param_1 + 0x6658) & 0xfffeffff;
        uVar19 = *(uint *)(param_1 + 0x667c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x667c) = uVar19;
      uVar19 = uVar14 & (uVar15 ^ 0xffffffff);
      if (*(int *)(iVar2 + 0x653c) != 0) {
        uVar19 = uVar15 | uVar14;
      }
      *(uint *)(param_1 + 0x7574) = uVar19;
      if (bVar7) {
        *(uint *)(param_1 + 0x6698) = *(uint *)(param_1 + 0x6698) | 0x10000;
        uVar14 = *(uint *)(&DAT_000066bc + param_1) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x6698) = *(uint *)(param_1 + 0x6698) & 0xfffeffff;
        uVar14 = *(uint *)(&DAT_000066bc + param_1) & 0xfffeffff;
      }
      *(uint *)(&DAT_000066bc + param_1) = uVar14;
      uVar14 = uVar19 & (uVar15 ^ 0xffffffff);
      if (*(int *)(iVar2 + 0x653c) != 0) {
        uVar14 = uVar15 | uVar19;
      }
      *(uint *)(param_1 + 0x7574) = uVar14;
      if (bVar7) {
        *(uint *)(param_1 + 0x66d8) = *(uint *)(param_1 + 0x66d8) | 0x10000;
        uVar19 = *(uint *)(param_1 + 0x66fc) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x66d8) = *(uint *)(param_1 + 0x66d8) & 0xfffeffff;
        uVar19 = *(uint *)(param_1 + 0x66fc) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x66fc) = uVar19;
      uVar19 = uVar14 & (uVar15 ^ 0xffffffff);
      if (*(int *)(iVar2 + 0x653c) != 0) {
        uVar19 = uVar14 | uVar15;
      }
      *(uint *)(param_1 + 0x7574) = uVar19;
      uVar13 = 0x4000000000000000;
      if (uVar19 == 0) {
        uVar13 = 0;
      }
      *local_4c = uVar13 | *local_4c & 0xbfffffffffffffff;
      *(undefined1 *)(param_1 + 0xf6a3) = 1;
    }
    if ((param_2 < 8) && ((*piVar1 == 5 || (*piVar1 == 6)))) {
      iVar2 = param_2 * 0x40 + param_1;
      *(float *)(iVar2 + 0x6530) = 1.0 / (float)*(uint *)(param_4 + 0x14);
      *(float *)(iVar2 + 0x6534) = 1.0 / (float)*(uint *)(param_4 + 0x18);
      *(undefined4 *)(iVar2 + 0x6538) = 0x3f800000;
      *(undefined1 *)(param_1 + 0xf6a3) = 1;
    }
    goto LAB_10078c94;
  }
  piVar1 = (int *)(param_1 + param_2 * 8 + 0x714);
  if (*piVar1 != param_3) {
    *piVar1 = param_3;
    pbVar6 = (byte *)(iVar8 + param_1 + 0xf664);
    *pbVar6 = *pbVar6 | (byte)(1 << (ulonglong)(param_2 & 7));
  }
  iVar2 = param_1 + param_2 * 4;
  if ((*(int *)(iVar2 + 30000) + 0xfbU & 0xff) < 2) {
    pbVar6 = (byte *)(iVar8 + param_1 + 0xf664);
    *pbVar6 = *pbVar6 | (byte)(1 << (ulonglong)(param_2 & 7));
  }
  *(undefined4 *)(iVar2 + 30000) = 3;
  uVar17 = *(ulonglong *)(param_1 + 0xfc0);
  *(ulonglong *)(param_1 + 0xfc0) =
       (uVar17 & (7L << ((ulonglong)(param_2 * 3) & 0x3f) ^ 0xffffffffffffffffU) |
       3L << ((ulonglong)(param_2 * 3) & 0x3f)) & 0xffffffffffff | uVar17 & 0xffff000000000000;
  if (in_stack_00000008 != '\0') {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar12 = (*extraout_w11)(uVar13 & 0xffffffff,&local_4c,&local_50);
    if (((((int)*local_4c == -1) && (*(int *)((int)local_4c + 4) == -1)) && ((int)local_4c[1] == -1)
        ) && (((*(int *)((int)local_4c + 0xc) == -1 && (*(int *)local_50 == 0)) &&
              ((*(int *)(local_50 + 4) == 0 &&
               ((*(int *)(local_50 + 8) == 0 && (*(int *)(local_50 + 0xc) == 0)))))))) {
      uVar14 = *(uint *)(param_1 + 0x7570) & (1 << (ulonglong)(param_2 & 0x1f) ^ 0xffffffffU);
    }
    else {
      uVar14 = 1 << (ulonglong)(param_2 & 0x1f) | *(uint *)(param_1 + 0x7570);
    }
    *(uint *)(param_1 + 0x7570) = uVar14;
    uVar13 = 0x2000000000000000;
    if (uVar14 == 0) {
      uVar13 = 0;
    }
    *(ulonglong *)(param_1 + 0xfc0) = uVar13 | *(ulonglong *)(param_1 + 0xfc0) & 0xdfffffffffffffff;
    iVar2 = param_1 + param_2 * 0x20;
    bVar9 = FUN_10075618(uVar12,iVar2 + 0x6700,iVar2 + 0x6710,local_4c,local_50);
    *(byte *)(param_1 + 0xf6a3) = bVar9 | *(byte *)(param_1 + 0xf6a3);
  }
LAB_10078c94:
  *(undefined2 *)(param_1 + 0xf668) = 0x101;
  pbVar6 = (byte *)(iVar8 + param_1 + 0xf660);
  *pbVar6 = *pbVar6 | (byte)(1 << (ulonglong)(param_2 & 7));
  if (uVar20 != *(uint *)(param_1 + 0x6928)) {
    *(uint *)(param_1 + 0x6928) = uVar20;
    *(undefined1 *)(param_1 + 0xf671) = 1;
  }
  return;
}

