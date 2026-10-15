/*
 * FUN_100414d0 at 100414d0
 * undefined FUN_100414d0(void)
 * Address ranges: 100414d0-10041883
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100414d0(int *param_1,undefined4 param_2,uint param_3,byte param_4,byte param_5,
                 ulonglong param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  int *piVar8;
  float fVar9;
  
  piVar8 = param_1 + 0x55;
  switch(param_2) {
  case 1:
    piVar8 = param_1 + 0x5d;
    break;
  case 2:
    piVar8 = param_1 + 0x65;
  }
  if (((param_3 & 0xff0) != 0x100) &&
     ((param_3 & 0xf00) != 0x600 && ((param_3 & 0xf00) - 0x100 & 0xfffffaff) == 0)) {
    param_5 = param_5 ^ 1;
  }
  uVar5 = (uint)param_4;
  if ((param_3 & 0x1000) != 0) {
    uVar5 = 0xff;
  }
  uVar6 = param_3 & 0xf0;
  uVar1 = param_3 & 0xf;
  if (uVar6 < 0x40) {
    if ((uVar6 - 0x20 & 0xffffffef) == 0) {
      iVar4 = 0x78;
      if (uVar6 == 0x20) {
        iVar4 = 0x6c;
      }
      uVar6 = *(uint *)(iVar4 + uVar1 * 4 + (int)param_1);
      if (uVar6 == 0) goto LAB_100417c8;
      *piVar8 = 2;
      iVar4 = FUN_10078520(uVar6,0,1,4,0,0);
      piVar8[1] = iVar4;
      uVar6 = uVar6 & 0xff;
    }
    else {
      if (uVar6 == 0) {
LAB_100417c8:
        fVar7 = -0.5;
        if ((param_3 & 0xf00) != 0x300) {
          fVar7 = 0.0;
        }
        fVar9 = 1.0;
        if ((param_3 & 0xf00) != 0x100) {
          fVar9 = fVar7;
        }
        if ((param_3 & 0x2000) != 0) {
          fVar9 = fVar9 * 255.0;
        }
        fVar7 = -fVar9;
        if (param_5 == 0) {
          fVar7 = fVar9;
        }
        bVar2 = uVar5 == 0xff;
        iVar4 = 5;
        if (bVar2) {
          iVar4 = 2;
        }
        *piVar8 = iVar4;
        iVar4 = 0x4000;
        if (bVar2) {
          iVar4 = 0x4001;
        }
        iVar3 = 0x4006;
        if (bVar2) {
          iVar3 = iVar4;
        }
        piVar8[1] = iVar3;
        if ((param_6 & 1) != 0) {
          fVar7 = (float)(int)fVar7;
          piVar8[5] = (int)fVar7;
          piVar8[4] = (int)fVar7;
          piVar8[3] = (int)fVar7;
          piVar8[2] = (int)fVar7;
          return;
        }
        piVar8[5] = (int)fVar7;
        piVar8[4] = (int)fVar7;
        piVar8[3] = (int)fVar7;
        piVar8[2] = (int)fVar7;
        return;
      }
      if (uVar6 != 0x10) goto LAB_10041774;
      *piVar8 = 2;
      piVar8[1] = uVar5 << 4 | 0x100006;
      uVar6 = (uint)*(byte *)(param_1 + uVar1 + 0x21);
    }
  }
  else {
    if (uVar6 < 0x41) {
      piVar8[1] = uVar5 << 4 | 0x101006;
      piVar8[2] = 2;
      *piVar8 = 2;
      goto LAB_10041774;
    }
    if (uVar6 < 0x80) {
      if (uVar6 == 0x50) {
        param_1[2] = param_1[2] | 1;
        if (*param_1 == 0x51) {
          piVar8[4] = 5;
          uVar5 = uVar5 << 4 | 0x308006;
          iVar3 = 0;
          iVar4 = 4;
        }
        else {
          uVar5 = uVar5 << 4 | 0x208006;
          iVar3 = 5;
          iVar4 = 3;
        }
        *piVar8 = iVar4;
        piVar8[1] = uVar5;
        piVar8[2] = 0;
        piVar8[3] = iVar3;
      }
      else if (uVar6 == 0x60) {
        param_1[2] = param_1[2] | 1;
        uVar6 = uVar1 * 0x250 + 0x180 >> 4;
        if (*param_1 == 0x51) {
          piVar8[4] = uVar6;
          uVar6 = 0;
          iVar4 = 4;
        }
        else {
          iVar4 = 3;
        }
        *piVar8 = iVar4;
        piVar8[1] = uVar5 << 4 | 0x208006;
        piVar8[2] = 0;
        piVar8[3] = uVar6;
      }
      goto LAB_10041774;
    }
    if (uVar6 < 0x81) {
      *piVar8 = 2;
      iVar4 = (uVar1 + 0x24) * 4;
    }
    else {
      if (uVar6 != 0xf0) goto LAB_10041774;
      *piVar8 = 2;
      iVar4 = 0xa0;
    }
    iVar3 = FUN_10078520(*(undefined4 *)((int)param_1 + iVar4),(char)uVar5,1,4,0,0);
    piVar8[1] = iVar3;
    uVar6 = (uint)*(byte *)((int)param_1 + iVar4);
  }
  piVar8[2] = uVar6;
LAB_10041774:
  if (param_5 != 0) {
    for (iVar4 = *piVar8; iVar4 != 0; iVar4 = iVar4 + -1) {
      piVar8[iVar4 + 1] = piVar8[iVar4];
    }
    piVar8[1] = piVar8[1] | 0x80000000;
    piVar8[2] = 0x41;
    *piVar8 = *piVar8 + 1;
  }
  return;
}

