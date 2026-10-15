/*
 * FUN_180041fa8 at 180041fa8
 * undefined __cdecl FUN_180041fa8(longlong param_1, int * param_2, longlong * param_3)
 * Address ranges: 180041fa8-18004280b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180041fa8(longlong param_1,int *param_2,longlong *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar7;
  uint uVar8;
  uint extraout_w1;
  uint extraout_w1_00;
  longlong lVar9;
  ushort uVar10;
  int *piVar11;
  byte bVar12;
  int *piVar13;
  ulonglong uVar14;
  int *piVar15;
  longlong extraout_x14;
  longlong extraout_x14_00;
  longlong extraout_x14_01;
  longlong lVar16;
  ulonglong extraout_x15;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint local_60;
  uint local_5c;
  uint uVar6;
  
  uVar18 = 4;
  local_60 = (uint)*(byte *)((longlong)param_2 + 0x129);
  local_5c = (uint)*(byte *)(param_2 + 0x4a);
  do {
    iVar17 = (int)uVar18;
    uVar6 = 1 << (ulonglong)(iVar17 - 1U & 0x1f);
    uVar8 = uVar6 & 0xff;
    uVar7 = uVar8 & local_5c;
    uVar8 = uVar8 & local_60;
    uVar6 = uVar6 & 0xff;
    if ((local_5c == uVar6) || (bVar1 = false, (char)param_2[0x4a] == '\0' && iVar17 == 1)) {
      bVar1 = true;
    }
    if ((local_60 == uVar6) ||
       (bVar2 = false, *(char *)((longlong)param_2 + 0x129) == '\0' && iVar17 == 1)) {
      bVar2 = true;
    }
    local_5c = local_5c & (uVar6 ^ 0xffffffff);
    local_60 = local_60 & (uVar6 ^ 0xffffffff);
    if (((bVar1) && ((char)param_2[0x6f] == '\0')) && (*(char *)((longlong)param_2 + 0x1bf) == '\0')
       ) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (uVar7 != 0) {
      bVar3 = true;
    }
    if ((bVar2) && (*(char *)((longlong)param_2 + 0x1be) == '\0')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (uVar8 != 0) {
      bVar4 = true;
    }
    if (bVar3 || iVar17 == 1) {
      FUN_180041e60(param_1,param_2,param_3,(ulonglong)(iVar17 - 1),'\0');
    }
    if (((bVar4 || iVar17 == 1) &&
        (FUN_180041e60(param_1,param_2,param_3,(ulonglong)(iVar17 - 1),'\x01'), iVar17 == 1)) &&
       (*(int *)(param_1 + 0x4c) != 0)) {
      FUN_180040968((ushort *)(param_2 + 0x2e),(uint)*(ushort *)(param_2 + 0x31));
    }
    if ((bVar2) && (*(char *)((longlong)param_2 + 0x1be) == '\0')) {
      uVar5 = 0x70;
    }
    else {
      uVar5 = 0xf0;
    }
    if (((bVar1) && ((char)param_2[0x6f] == '\0')) && (*(char *)((longlong)param_2 + 0x1bf) == '\0')
       ) {
      uVar10 = 0x70;
    }
    else {
      uVar10 = 0xf0;
    }
    uVar7 = iVar17 - 1;
    uVar18 = (ulonglong)uVar7;
    if ((((*(ushort *)((longlong)param_2 + uVar18 * 0xe + 0xc2) & 0xefff) ==
          (*(ushort *)((longlong)param_2 + uVar18 * 0xe + 0xfa) & 0xefff)) &&
        ((*(ushort *)((longlong)param_2 + uVar18 * 0xe + 0xb8) & 0xefff) ==
         (*(ushort *)((longlong)param_2 + uVar18 * 0xe + 0xf0) & 0xefff))) &&
       (((*(ushort *)((longlong)param_2 + uVar18 * 0xe + 0xba) & 0xefff) ==
         (*(ushort *)((longlong)param_2 + uVar18 * 0xe + 0xf2) & 0xefff) &&
        (((*(ushort *)((longlong)param_2 + uVar18 * 0xe + 0xbc) & 0xefff) ==
          (*(ushort *)((longlong)param_2 + uVar18 * 0xe + 0xf4) & 0xefff) &&
         ((*(ushort *)((longlong)param_2 + uVar18 * 0xe + 0xbe) & 0xefff) ==
          (*(ushort *)((longlong)param_2 + uVar18 * 0xe + 0xf6) & 0xefff))))))) {
      if (!bVar3) goto LAB_180042214;
      if (!bVar4 || uVar5 != uVar10) goto LAB_1800421f4;
      piVar15 = param_2 + 0x2e;
      uVar14 = 1;
      bVar12 = 1;
      uVar5 = uVar10;
LAB_18004222c:
      FUN_180040548((ushort *)((longlong)piVar15 + uVar18 * 0xe),param_2,param_3,uVar5,bVar12,uVar14
                   );
    }
    else {
      if (bVar3) {
LAB_1800421f4:
        FUN_180040548((ushort *)((longlong)param_2 + uVar18 * 0xe + 0xb8),param_2,param_3,uVar10,1,0
                     );
      }
LAB_180042214:
      if (bVar4) {
        piVar15 = param_2 + 0x3c;
        uVar14 = 0;
        bVar12 = 0;
        goto LAB_18004222c;
      }
    }
    if (bVar2) {
      if (*(char *)((longlong)param_2 + 0x1be) != '\0') {
        FUN_18003ec58(param_2,*(ushort *)((longlong)param_2 + uVar18 * 0xe + 0xfa),0x70,0,8,param_3,
                      1);
      }
      FUN_180040c28(param_1,param_2,param_3,
                    (uint)*(ushort *)((longlong)param_2 + uVar18 * 0xe + 0xfa));
    }
    if (bVar1) {
      uVar6 = FUN_180040e98(param_1,param_2,param_3,
                            (ulonglong)*(ushort *)((longlong)param_2 + uVar18 * 0xe + 0xc2),
                            *(byte *)((longlong)param_2 + 0x1bf));
      uVar5 = (ushort)uVar6;
      uVar8 = uVar6 & 0xf0;
      if (uVar8 != 0x80 && uVar8 != 0xf0) {
        uVar5 = *(ushort *)((longlong)param_2 + uVar18 * 0xe + 0xc2);
      }
      FUN_180041b58(param_1,param_2,param_3,uVar5);
      if (uVar8 == 0x80) {
        FUN_180056c30((longlong)param_2,param_2[(ulonglong)(uVar6 & 0xf) + 0x26]);
        *(undefined4 *)(extraout_x14 + (extraout_x15 & 0xffffffff) * 4) = 0;
      }
    }
    lVar9 = 0;
    piVar15 = param_2 + 0x20;
    piVar13 = param_2 + 0x1d;
    piVar11 = param_2 + 0x23;
    do {
      lVar16 = (longlong)param_2 + lVar9;
      if (*(byte *)(lVar16 + 0xb0) == uVar7) {
        param_2 = (int *)FUN_180056c30((longlong)param_2,piVar15[lVar9]);
        piVar15[lVar9] = 0;
        lVar16 = extraout_x14_00;
      }
      if (*(byte *)(lVar16 + 0xb3) == uVar7) {
        param_2 = (int *)FUN_180056c30((longlong)param_2,piVar13[lVar9]);
        piVar13[lVar9] = 0;
        lVar16 = extraout_x14_01;
      }
      if (*(byte *)(lVar16 + 0xad) == uVar7) {
        param_2 = (int *)FUN_180056c30((longlong)param_2,piVar11[lVar9]);
        piVar11[lVar9] = 0;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 3);
  } while (uVar7 != 0);
  if (*(char *)((longlong)param_2 + 0x1c1) == '\0') {
    FUN_180056c30((longlong)param_2,param_2[0x2a]);
    uVar7 = 0;
  }
  else {
    FUN_180056c30((longlong)param_2,param_2[0x2a] & 0xffU | 0x310000);
    uVar7 = param_2[0x2a] & 0xffU | 0x1d0000;
  }
  param_2[0x2a] = uVar7;
  if (*(char *)((longlong)param_2 + 0x1c1) == '\0') {
    uVar7 = *(uint *)(param_1 + 0x28) & *(uint *)(param_1 + 0x24);
    if ((uVar7 - 1 & 0xfffffffd) == 0) {
      uVar7 = FUN_180056b90((longlong)param_2,1,1);
      uVar18 = (ulonglong)uVar7;
      FUN_180057ab0(param_2,param_3,0x2036,uVar18,1,0x190100,0,0);
      FUN_180057ab0(param_2,param_3,0x38,uVar18,1,uVar18,0,(ulonglong)(uint)param_2[0x16]);
      FUN_180057ab0(param_2,param_3,0x1c,0x110201,1,uVar18,0,0);
    }
    else {
      if ((uVar7 - 2 & 0xfffffffd) != 0) goto LAB_180042738;
      uVar7 = FUN_180056b90((longlong)param_2,1,1);
      uVar18 = (ulonglong)uVar7;
      uVar8 = FUN_180056b90((longlong)param_2,extraout_w1,1);
      uVar19 = (ulonglong)uVar8;
      uVar6 = FUN_180056b90((longlong)param_2,extraout_w1_00,1);
      uVar14 = (ulonglong)uVar6;
      FUN_1800404d8(param_2,param_3,0x110101,piVar11,uVar18);
      FUN_180057ab0(param_2,param_3,0x34,uVar18,1,uVar18,0,(ulonglong)(uint)param_2[0x16]);
      FUN_180057ab0(param_2,param_3,0x33,uVar18,1,uVar18,0,(ulonglong)(uint)param_2[0x16]);
      FUN_180057ab0(param_2,param_3,0x2f,uVar19,1,uVar18,0,0);
      FUN_180057ab0(param_2,param_3,0x43,uVar19,1,uVar19,0,0);
      FUN_180057ab0(param_2,param_3,0x1c,uVar14,1,uVar19,0,0);
      FUN_180057ab0(param_2,param_3,0x19,uVar19,1,uVar19,0,0);
      FUN_180057ab0(param_2,param_3,0xe,uVar18,1,uVar18,0,uVar19);
      FUN_180057ab0(param_2,param_3,0x32,uVar18,1,uVar18,0,(ulonglong)(uint)param_2[0x16]);
      FUN_180057ab0(param_2,param_3,0x29,uVar14,1,uVar14,0,(ulonglong)(uint)param_2[0x16]);
      FUN_180057ab0(param_2,param_3,0x1c,uVar18,1,uVar18,0,0);
      FUN_180057ab0(param_2,param_3,0x3c,uVar18,1,uVar14,0,uVar18);
      FUN_180057ab0(param_2,param_3,0x1e,uVar18,1,uVar18,0,(ulonglong)(uint)param_2[0x12]);
      FUN_180057ab0(param_2,param_3,0x24,uVar18,1,uVar18,0,(ulonglong)(uint)param_2[0x16]);
      FUN_180057ab0(param_2,param_3,0x25,0x110201,1,uVar18,0,(ulonglong)(uint)param_2[0x16]);
      lVar9 = FUN_180056c30((longlong)param_2,uVar6);
      lVar9 = FUN_180056c30(lVar9,uVar8);
      FUN_180056c30(lVar9,uVar7);
    }
    bVar1 = true;
  }
  else {
LAB_180042738:
    bVar1 = false;
  }
  if ((*(int *)(param_1 + 0x1c) - 0x400U & 0xfffffffb) == 0) {
    uVar5 = *(ushort *)((longlong)param_2 + 0xfa);
    if ((uVar5 & 0xf0) == 0) {
      uVar7 = 0xff;
      if ((uVar5 & 0xff0) != 0x100) {
        uVar7 = 0;
      }
      FUN_180057ab0(param_2,param_3,0x36,0x110201,1,(ulonglong)(uint)param_2[0x16],0xe4,
                    (ulonglong)uVar7);
    }
    else {
      FUN_180040218(param_2,param_3,(uint)uVar5,0xff,(uint)uVar5,0x71,1,1);
    }
  }
  else if (!bVar1) {
    FUN_180057ab0(param_2,param_3,0x36,0x110201,1,(ulonglong)(uint)param_2[0x16],0xe4,0);
  }
  FUN_180056c30((longlong)param_2,param_2[0x2a]);
  param_2[0x2a] = 0;
  return;
}

