/*
 * FUN_1004d320 at 1004d320
 * undefined FUN_1004d320(void)
 * Address ranges: 1004d320-1004d657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d320(int *param_1,undefined4 param_2,uint param_3,byte param_4,byte param_5,
                 ulonglong param_6)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  int *piVar9;
  float fVar10;
  
  piVar9 = param_1 + 0x55;
  switch(param_2) {
  case 1:
    piVar9 = param_1 + 0x5d;
    break;
  case 2:
    piVar9 = param_1 + 0x65;
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
      if (uVar6 == 0) goto LAB_1004d59c;
      *piVar9 = 2;
      iVar4 = FUN_1006f660(uVar6,0,1,4,0,0);
      piVar9[1] = iVar4;
      uVar6 = uVar6 & 0xff;
    }
    else {
      if (uVar6 == 0) {
LAB_1004d59c:
        fVar8 = -0.5;
        if ((param_3 & 0xf00) != 0x300) {
          fVar8 = 0.0;
        }
        fVar10 = 1.0;
        if ((param_3 & 0xf00) != 0x100) {
          fVar10 = fVar8;
        }
        if ((param_3 & 0x2000) != 0) {
          fVar10 = fVar10 * 255.0;
        }
        fVar8 = -fVar10;
        if (param_5 == 0) {
          fVar8 = fVar10;
        }
        bVar3 = uVar5 == 0xff;
        iVar4 = 5;
        if (bVar3) {
          iVar4 = 2;
        }
        *piVar9 = iVar4;
        iVar4 = 0x4000;
        if (bVar3) {
          iVar4 = 0x4001;
        }
        iVar7 = 0x4006;
        if (bVar3) {
          iVar7 = iVar4;
        }
        piVar9[1] = iVar7;
        if ((param_6 & 1) != 0) {
          fVar8 = (float)(int)fVar8;
          piVar9[5] = (int)fVar8;
          piVar9[4] = (int)fVar8;
          piVar9[3] = (int)fVar8;
          piVar9[2] = (int)fVar8;
          return;
        }
        piVar9[5] = (int)fVar8;
        piVar9[4] = (int)fVar8;
        piVar9[3] = (int)fVar8;
        piVar9[2] = (int)fVar8;
        return;
      }
      if (uVar6 != 0x10) goto LAB_1004d548;
      *piVar9 = 2;
      piVar9[1] = uVar5 << 4 | 0x100006;
      uVar6 = (uint)*(byte *)(param_1 + uVar1 + 0x21);
    }
  }
  else {
    if (uVar6 < 0x41) {
      piVar9[1] = uVar5 << 4 | 0x101006;
      piVar9[2] = 2;
      *piVar9 = 2;
      goto LAB_1004d548;
    }
    if (uVar6 == 0x50) {
      param_1[2] = param_1[2] | 1;
      if (*param_1 == 0x51) {
        piVar9[4] = 5;
        uVar5 = uVar5 << 4 | 0x308006;
        iVar7 = 0;
        iVar4 = 4;
      }
      else {
        uVar5 = uVar5 << 4 | 0x208006;
        iVar7 = 5;
        iVar4 = 3;
      }
      *piVar9 = iVar4;
      piVar9[1] = uVar5;
      piVar9[2] = 0;
      piVar9[3] = iVar7;
      goto LAB_1004d548;
    }
    if (uVar6 == 0x80) {
      *piVar9 = 2;
      pbVar2 = (byte *)(param_1 + uVar1 + 0x24);
    }
    else {
      if (uVar6 != 0xf0) goto LAB_1004d548;
      *piVar9 = 2;
      pbVar2 = (byte *)(param_1 + 0x28);
    }
    iVar4 = FUN_1006f660(*(int *)pbVar2,(char)uVar5,1,4,0,0);
    piVar9[1] = iVar4;
    uVar6 = (uint)*pbVar2;
  }
  piVar9[2] = uVar6;
LAB_1004d548:
  if (param_5 != 0) {
    for (iVar4 = *piVar9; iVar4 != 0; iVar4 = iVar4 + -1) {
      piVar9[iVar4 + 1] = piVar9[iVar4];
    }
    piVar9[1] = piVar9[1] | 0x80000000;
    piVar9[2] = 0x41;
    *piVar9 = *piVar9 + 1;
  }
  return;
}

