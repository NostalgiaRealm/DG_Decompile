/*
 * FUN_14001dcd4 at 14001dcd4
 * ulonglong __fastcall FUN_14001dcd4(uint * param_1)
 * Address ranges: 14001dcd4-14001e44b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_14001dcd4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  ulonglong uVar11;
  byte bVar12;
  ulonglong uVar13;
  bool bVar14;
  CHAR local_b8 [136];
  
  uVar13 = 0;
  uVar4 = uVar13;
  if (param_1[1] < 5) {
    uVar4 = (ulonglong)(*param_1 < 7);
  }
  uVar6 = uVar13;
  if (param_1[2] < 5) {
    uVar6 = uVar4;
  }
  uVar4 = uVar13;
  if (param_1[3] < 0x191) {
    uVar4 = uVar6;
  }
  uVar6 = uVar13;
  if (param_1[4] < 0x191) {
    uVar6 = uVar4;
  }
  uVar1 = param_1[6];
  uVar4 = uVar13;
  if (param_1[5] < 0x191) {
    uVar4 = uVar6;
  }
  if ((uVar1 == 0) || (uVar1 == 1)) {
    bVar9 = (byte)uVar4;
  }
  else {
    if (uVar1 != 2) {
      uVar4 = uVar13;
    }
    bVar9 = (byte)uVar4;
  }
  bVar8 = 0;
  if (7 < param_1[7]) {
    bVar9 = bVar8;
  }
  bVar10 = bVar8;
  if (*(byte *)((longlong)param_1 + 0x21) < 2) {
    bVar10 = (byte)param_1[8] < 2 & bVar9;
  }
  bVar5 = 0;
  bVar9 = bVar5;
  if (*(byte *)((longlong)param_1 + 0x23) < 2) {
    bVar9 = *(byte *)((longlong)param_1 + 0x22) < 2 & bVar10;
  }
  bVar10 = bVar5;
  if (*(byte *)((longlong)param_1 + 0x25) < 2) {
    bVar10 = (byte)param_1[9] < 2 & bVar9;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0x8a);
  uVar2 = *(uint *)((longlong)param_1 + 0x8e);
  if (uVar1 == 0xfffffff9) {
    if (0x400 < uVar2) goto LAB_14001dde9;
LAB_14001df46:
    bVar10 = *(byte *)((longlong)param_1 + 0x26) < 2 & bVar10;
  }
  else {
    if (((0xfffffff6 < uVar1 - 1) && (uVar1 != 0xfffffff9)) ||
       ((uVar1 < 0x80000001 && ((uVar2 < 0x80000001 && (uVar2 != 0)))))) goto LAB_14001df46;
LAB_14001dde9:
    bVar10 = 0;
  }
  if (4 < *(uint *)((longlong)param_1 + 0xca)) {
    bVar10 = bVar5;
  }
  uVar4 = (ulonglong)bVar10;
  if (4 < *(uint *)((longlong)param_1 + 0xce)) {
    uVar4 = uVar13;
  }
  bVar9 = (byte)uVar4;
  if (4 < *(uint *)((longlong)param_1 + 0xd2)) {
    bVar9 = bVar5;
  }
  uVar4 = uVar13;
  if (*(uint *)((longlong)param_1 + 0xaa) < 0x11) {
    uVar4 = (ulonglong)(*(byte *)((longlong)param_1 + 0xe6) < 2 & bVar9);
  }
  uVar6 = uVar13;
  if (*(uint *)((longlong)param_1 + 0x9e) < 0x11) {
    uVar6 = uVar4;
  }
  uVar4 = uVar13;
  if ((*(uint *)((longlong)param_1 + 0xc2) & 0xfffffff8) == 0) {
    uVar4 = uVar6;
  }
  iVar3 = *(int *)((longlong)param_1 + 0xbe);
  uVar6 = uVar13;
  if ((*(uint *)((longlong)param_1 + 0xc6) & 0xfffffffe) == 0) {
    uVar6 = uVar4;
  }
  if (((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != 2)) {
    uVar6 = uVar13;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0xde);
  uVar2 = uVar1;
  if (uVar1 == 0) {
    uVar2 = 1;
  }
  if (5000 < *(uint *)((longlong)param_1 + 0xda) / uVar2) {
    FUN_1400143b0(*(uint *)((longlong)param_1 + 0xda),uVar1,local_b8);
    uVar6 = 0;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x27);
  uVar4 = uVar13;
  if ((*(uint *)((longlong)param_1 + 0xe2) & 0xfffffffc) == 0) {
    uVar4 = uVar6;
  }
  bVar10 = (byte)uVar4;
  bVar9 = 0;
  if (iVar3 == 0) {
LAB_14001e030:
    uVar6 = uVar4;
    if ((*(int *)((longlong)param_1 + 0x2b) != 0x200000) &&
       (uVar6 = uVar13, *(int *)((longlong)param_1 + 0x2b) == 0x400000)) {
      uVar6 = uVar4;
    }
    if (((*(int *)((longlong)param_1 + 0x2f) != 0x100000) &&
        (*(int *)((longlong)param_1 + 0x2f) != 0x200000)) &&
       (*(int *)((longlong)param_1 + 0x2f) != 0x400000)) {
      uVar6 = uVar13;
    }
    bVar12 = (byte)uVar6;
LAB_14001e071:
    if (*(int *)((longlong)param_1 + 0x33) != 1) {
      bVar12 = bVar9;
    }
  }
  else {
    if (iVar3 == 1) {
LAB_14001dff1:
      uVar6 = uVar4;
      if ((*(int *)((longlong)param_1 + 0x2b) != 0x200000) &&
         (uVar6 = uVar13, *(int *)((longlong)param_1 + 0x2b) == 0x400000)) {
        uVar6 = uVar4;
      }
      if (*(int *)((longlong)param_1 + 0x2f) == 0x200000) {
        bVar12 = (byte)uVar6;
      }
      else {
        uVar4 = uVar13;
        if (*(int *)((longlong)param_1 + 0x2f) == 0x400000) {
          uVar4 = uVar6;
        }
        bVar12 = (byte)uVar4;
      }
      goto LAB_14001e071;
    }
    if (iVar3 == 2) {
LAB_14001df9a:
      uVar6 = uVar4;
      if ((*(int *)((longlong)param_1 + 0x2b) != 0x800000) &&
         (uVar6 = uVar13, *(int *)((longlong)param_1 + 0x2b) == 0xc00000)) {
        uVar6 = uVar4;
      }
      if ((*(int *)((longlong)param_1 + 0x2f) == 0x100000) ||
         (*(int *)((longlong)param_1 + 0x2f) == 0x200000)) {
        bVar12 = (byte)uVar6;
      }
      else {
        if (*(int *)((longlong)param_1 + 0x2f) != 0x400000) {
          uVar6 = uVar13;
        }
        bVar12 = (byte)uVar6;
      }
      bVar14 = *(int *)((longlong)param_1 + 0x33) == 2;
LAB_14001dfe6:
      if (!bVar14) {
LAB_14001df15:
        bVar12 = bVar9;
      }
    }
    else {
      if (iVar3 == 3) {
LAB_14001df4d:
        uVar6 = uVar4;
        if ((*(int *)((longlong)param_1 + 0x2b) != 0x800000) &&
           (uVar6 = uVar13, *(int *)((longlong)param_1 + 0x2b) == 0x1000000)) {
          uVar6 = uVar4;
        }
        if ((*(int *)((longlong)param_1 + 0x2f) == 0x100000) ||
           (*(int *)((longlong)param_1 + 0x2f) == 0x200000)) {
          bVar12 = (byte)uVar6;
        }
        else {
          if (*(int *)((longlong)param_1 + 0x2f) != 0x400000) {
            uVar6 = uVar13;
          }
          bVar12 = (byte)uVar6;
        }
        bVar14 = *(int *)((longlong)param_1 + 0x33) == 1;
        goto LAB_14001dfe6;
      }
      if (iVar3 == 4) {
LAB_14001df0b:
        bVar12 = bVar10;
        if (*(int *)((longlong)param_1 + 0x33) < 4) goto LAB_14001e077;
        goto LAB_14001df15;
      }
      uVar4 = 0;
      bVar10 = 0;
      if (iVar3 == 0) goto LAB_14001e030;
      if (iVar3 == 1) goto LAB_14001dff1;
      if (iVar3 == 2) goto LAB_14001df9a;
      if (iVar3 == 3) goto LAB_14001df4d;
      bVar12 = bVar9;
      if (iVar3 == 4) goto LAB_14001df0b;
    }
  }
LAB_14001e077:
  uVar1 = *(uint *)((longlong)param_1 + 0x37);
  uVar2 = *(uint *)((longlong)param_1 + 0x3b);
  bVar10 = bVar9;
  if (uVar1 == 0xfffffff9) {
    if (uVar2 < 0x401) {
LAB_14001e0bf:
      bVar10 = 1;
    }
  }
  else if (((0xfffffff6 < uVar1 - 1) && (uVar1 != 0xfffffff9)) ||
          ((uVar1 < 0x80000001 && ((uVar2 < 0x80000001 && (uVar2 != 0)))))) goto LAB_14001e0bf;
  bVar7 = bVar8;
  if ((*(uint *)((longlong)param_1 + 0x3f) < 0x11) &&
     ((0x10117U >> (*(uint *)((longlong)param_1 + 0x3f) & 0x1f) & 1) != 0)) {
    bVar7 = bVar10 & bVar12;
  }
  if (((*(uint *)((longlong)param_1 + 0x4b) & 0xfffffcff) != 0) ||
     (*(int *)((longlong)param_1 + 0x4b) == 0x300)) {
    bVar7 = bVar8;
  }
  bVar10 = bVar9;
  if (*(byte *)((longlong)param_1 + 0x52) < 2) {
    bVar10 = (byte)param_1[0x14] < 2 & bVar7;
  }
  bVar12 = bVar9;
  if ((byte)param_1[0x15] < 2) {
    bVar12 = *(byte *)((longlong)param_1 + 0x53) < 2 & bVar10;
  }
  bVar10 = bVar9;
  if (*(byte *)((longlong)param_1 + 0x56) < 2) {
    bVar10 = *(byte *)((longlong)param_1 + 0x55) < 2 & bVar12;
  }
  if (*(byte *)((longlong)param_1 + 0x57) < 2) {
    bVar10 = *(byte *)((longlong)param_1 + 0x51) < 2 & bVar10;
  }
  else {
    bVar10 = 0;
  }
  if (2 < *(uint *)((longlong)param_1 + 0xe7)) {
    bVar10 = bVar9;
  }
  uVar4 = (ulonglong)bVar10;
  if (2 < *(uint *)((longlong)param_1 + 0xeb)) {
    uVar4 = uVar13;
  }
  bVar10 = bVar9;
  if (*(uint *)((longlong)param_1 + 0xef) < 0x11) {
    bVar10 = (byte)uVar4;
  }
  uVar1 = param_1[0x19];
  if (1 < (byte)param_1[0x20]) {
    bVar10 = bVar9;
  }
  uVar2 = param_1[0x1a];
  if (6 < param_1[0x16]) {
    bVar10 = bVar9;
  }
  bVar12 = 1;
  if (uVar1 == 0xfffffff9) {
    if (uVar2 < 0x401) goto LAB_14001e19b;
  }
  else if (((0xfffffff6 < uVar1 - 1) && (uVar1 != 0xfffffff9)) ||
          ((uVar1 < 0x80000001 && ((uVar2 < 0x80000001 && (uVar2 != 0)))))) goto LAB_14001e19b;
  bVar12 = bVar9;
LAB_14001e19b:
  bVar7 = bVar8;
  if ((param_1[0x1b] < 0x11) && ((0x10117U >> (param_1[0x1b] & 0x1f) & 1) != 0)) {
    bVar7 = bVar12 & bVar10;
  }
  if ((0x400 < param_1[0x1e]) || ((char)param_1[0x1e] != '\0')) {
    bVar7 = bVar8;
  }
  bVar10 = 0;
  bVar8 = bVar10;
  if (*(byte *)((longlong)param_1 + 0x81) < 2) {
    bVar8 = *(byte *)((longlong)param_1 + 0x87) < 2 & -(param_1[0x1f] < 4) & bVar7;
  }
  bVar12 = bVar10;
  if ((byte)param_1[0x21] < 2) {
    bVar12 = *(byte *)((longlong)param_1 + 0x82) < 2 & bVar8;
  }
  bVar8 = bVar10;
  if (*(byte *)((longlong)param_1 + 0x86) < 2) {
    bVar8 = *(byte *)((longlong)param_1 + 0x85) < 2 & bVar12;
  }
  bVar12 = bVar10;
  if ((byte)param_1[0x22] < 2) {
    bVar12 = *(byte *)((longlong)param_1 + 0x83) < 2 & bVar8;
  }
  uVar4 = (ulonglong)bVar12;
  if (3 < *(uint *)((longlong)param_1 + 0xf7)) {
    uVar4 = uVar13;
  }
  uVar6 = uVar4;
  if ((0xffff < *(uint *)((longlong)param_1 + 0xfb)) &&
     (uVar6 = uVar13, *(uint *)((longlong)param_1 + 0xfb) == 0xffffffff)) {
    uVar6 = uVar4;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x1cb);
  if (((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != 2)) {
    uVar6 = uVar13;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x1d7);
  if (3 < *(uint *)((longlong)param_1 + 0x1cf)) {
    uVar6 = uVar13;
  }
  uVar4 = uVar13;
  if (*(uint *)((longlong)param_1 + 0x1d3) < 0x11) {
    uVar4 = uVar6;
  }
  if ((iVar3 == 0) || (iVar3 == 1)) {
    bVar8 = (byte)uVar4;
  }
  else {
    if (iVar3 != 2) {
      uVar4 = uVar13;
    }
    bVar8 = (byte)uVar4;
  }
  uVar4 = (ulonglong)bVar8;
  if (3 < *(uint *)((longlong)param_1 + 0x1db)) {
    uVar4 = uVar13;
  }
  bVar8 = (byte)uVar4;
  if (((*(int *)((longlong)param_1 + 0x1e7) - 0x100U & 0xfffffcff) != 0) ||
     (*(int *)((longlong)param_1 + 0x1e7) == 0x300)) {
    bVar8 = 0;
  }
  bVar12 = bVar9;
  if (*(uint *)((longlong)param_1 + 0x1eb) < 9) {
    bVar12 = bVar8;
  }
  if ((byte)param_1[0x7d] < 2) {
    bVar9 = *(byte *)((longlong)param_1 + 499) < 2 & bVar12;
  }
  bVar8 = bVar10;
  if (*(byte *)((longlong)param_1 + 0x1f6) < 2) {
    bVar8 = *(byte *)((longlong)param_1 + 0x1f5) < 2 & bVar9;
  }
  if ((byte)param_1[0x7e] < 2) {
    bVar10 = *(byte *)((longlong)param_1 + 0x1f7) < 2 & bVar8;
  }
  if (*(byte *)((longlong)param_1 + 0x1fa) < 2) {
    uVar4 = (ulonglong)(*(byte *)((longlong)param_1 + 0x1f9) < 2 & bVar10);
  }
  else {
    uVar4 = 0;
  }
  if (2 < *(uint *)((longlong)param_1 + 0x1df)) {
    uVar4 = uVar13;
  }
  uVar6 = uVar13;
  uVar11 = uVar13;
  if ((*(uint *)((longlong)param_1 + 0x1e3) & 0xfffffff8) == 0) {
    uVar11 = uVar4;
  }
  do {
    uVar1 = *(uint *)((longlong)param_1 + uVar6 * 0xc + 0x10b);
    if (uVar1 == 0xffffffff) {
      uVar1 = *(uint *)((longlong)param_1 + uVar6 * 0xc + 0x10f);
      if ((uVar1 < 0x100) || (uVar1 - 0x102 < 0xfffffefd)) {
LAB_14001e3f0:
        uVar11 = 0;
      }
    }
    else if ((0x80000000 < uVar1) ||
            (0x80000000 < *(uint *)((longlong)param_1 + uVar6 * 0xc + 0x10f))) goto LAB_14001e3f0;
    uVar6 = uVar6 + 1;
    if (uVar6 == 0x10) {
      if (*(uint *)((longlong)param_1 + 0x1ff) < 3) {
        bVar5 = *(uint *)((longlong)param_1 + 0x1fb) < 3 & (byte)uVar11;
      }
      uVar4 = uVar13;
      if (*(uint *)((longlong)param_1 + 0x207) < 3) {
        uVar4 = (ulonglong)(*(uint *)((longlong)param_1 + 0x203) < 3 & bVar5);
      }
      if (1 < *(byte *)((longlong)param_1 + 0x20b)) {
        uVar4 = uVar13;
      }
      return uVar4;
    }
  } while( true );
}

