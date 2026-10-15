/*
 * FUN_1006e8f0 at 1006e8f0
 * undefined FUN_1006e8f0(void)
 * Address ranges: 1006e8f0-1006edb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1006e8f0(int *param_1,uint *param_2,uint param_3,ulonglong param_4,uint param_5,uint param_6
                ,undefined1 param_7)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = 0;
  uVar4 = 0xe4;
  switch(param_3 >> 0x14 & 7) {
  case 1:
    puVar5 = (undefined8 *)&DAT_10098004;
    break;
  case 2:
    puVar5 = (undefined8 *)0x10098000;
    break;
  case 3:
    puVar5 = &DAT_10097ffc;
    break;
  default:
    goto switchD_1006e944_caseD_4;
  }
  uVar4 = (uint)*(byte *)(((uint)param_4 >> 2 & 3) + (int)puVar5);
switchD_1006e944_caseD_4:
  uVar1 = param_3 >> 0x10 & 3;
  uVar7 = uVar1 + 1;
  if ((1 < uVar7) && (*param_1 != 0x30051 && (*param_1 - 0x51U & 0xfffcffff) == 0)) {
    uVar7 = uVar1 + 2;
  }
  if ((param_3 & 0x40000000) != 0) {
    switch(uVar7) {
    case 1:
      uVar1 = param_5 & 3;
      if ((param_3 >> 0x1c & 1) == 0) {
        uVar1 = (((uVar4 >> (ulonglong)((param_5 >> 6 & 3) << 1) & 3) << 2 |
                 uVar4 >> (ulonglong)((param_5 >> 4 & 3) << 1) & 3) << 2 |
                uVar4 >> (ulonglong)((param_5 >> 2 & 3) << 1) & 3) << 2 |
                uVar4 >> (ulonglong)(uVar1 << 1) & 3;
        uVar4 = 0xc00006;
      }
      else {
        uVar4 = 0xc0000a;
      }
      uVar4 = uVar4 | (param_3 & 0x3f00 | uVar7 << 0x10 | uVar1) << 4;
      *param_2 = uVar4;
      bVar3 = (param_3 & 0x88000000) != 0;
      if (bVar3) {
        *param_2 = uVar4 | 0x80000000;
        param_2[1] = *(uint *)(&DAT_10097fe8 + ((param_3 & 0x8000000 | param_3 >> 5) >> 0x1a) * 4);
      }
      iVar8 = bVar3 + 1;
      break;
    case 2:
      uVar1 = param_5 & 3;
      if ((param_3 >> 0x1c & 1) == 0) {
        uVar1 = (((uVar4 >> (ulonglong)((param_5 >> 6 & 3) << 1) & 3) << 2 |
                 uVar4 >> (ulonglong)((param_5 >> 4 & 3) << 1) & 3) << 2 |
                uVar4 >> (ulonglong)((param_5 >> 2 & 3) << 1) & 3) << 2 |
                uVar4 >> (ulonglong)(uVar1 << 1) & 3;
        uVar4 = 0x6000006;
      }
      else {
        uVar4 = 0x600000a;
      }
      uVar4 = uVar4 | (param_3 & 0x3f00 | (uVar7 & 3) << 0x10 | uVar1) << 4;
      *param_2 = uVar4;
      bVar3 = (param_3 & 0x88000000) != 0;
      if (bVar3) {
        *param_2 = uVar4 | 0x80000000;
        param_2[1] = *(uint *)(&DAT_10097fe8 + ((param_3 & 0x8000000 | param_3 >> 5) >> 0x1a) * 4);
      }
      uVar4 = (uint)bVar3;
      iVar8 = uVar4 + 2;
      param_2[uVar4 + 1] = param_3 & 0xff;
      break;
    case 3:
      uVar1 = param_5 & 3;
      if ((param_3 >> 0x1c & 1) == 0) {
        uVar1 = (((uVar4 >> (ulonglong)((param_5 >> 6 & 3) << 1) & 3) << 2 |
                 uVar4 >> (ulonglong)((param_5 >> 4 & 3) << 1) & 3) << 2 |
                uVar4 >> (ulonglong)((param_5 >> 2 & 3) << 1) & 3) << 2 |
                uVar4 >> (ulonglong)(uVar1 << 1) & 3;
        uVar4 = 0x30000006;
      }
      else {
        uVar4 = 0x3000000a;
      }
      uVar4 = uVar4 | (param_3 & 0x3f00 | (uVar7 & 3) << 0x10 | uVar1) << 4;
      *param_2 = uVar4;
      bVar3 = (param_3 & 0x88000000) != 0;
      if (bVar3) {
        *param_2 = uVar4 | 0x80000000;
        param_2[1] = *(uint *)(&DAT_10097fe8 + ((param_3 & 0x8000000 | param_3 >> 5) >> 0x1a) * 4);
      }
      uVar4 = (uint)bVar3;
      iVar8 = uVar4 + 3;
      param_2[uVar4 + 1] = param_3 & 0xff;
      param_2[uVar4 + 2] = param_3 & 0xff;
    }
    param_2 = param_2 + iVar8;
    *param_2 = (uint)(param_4 >> 4) & 0xfffffff;
    uVar4 = FUN_1006f2b0(param_6,param_7,1,4,0,0);
    param_2[1] = uVar4;
    param_2[2] = param_6 & 0xff;
    iVar8 = iVar8 + 3;
    goto LAB_1006ed6c;
  }
  uVar1 = param_3 & 0x3f00 | (uVar7 & 3) << 0x10;
  if ((param_3 >> 0x1c & 1) == 0) {
    uVar4 = ((((uVar4 >> (ulonglong)((param_5 >> 6 & 3) << 1) & 3) << 2 |
              uVar4 >> (ulonglong)((param_5 >> 4 & 3) << 1) & 3) << 2 |
             uVar4 >> (ulonglong)((param_5 >> 2 & 3) << 1) & 3) << 2 |
             uVar4 >> (ulonglong)((param_5 & 3) << 1) & 3 | uVar1) << 4 | 6;
  }
  else {
    uVar4 = (uVar1 | param_5 & 3) << 4 | 10;
  }
  *param_2 = uVar4;
  bVar3 = (param_3 & 0x88000000) != 0;
  if (bVar3) {
    *param_2 = uVar4 | 0x80000000;
    param_2[1] = *(uint *)(&DAT_10097fe8 + ((param_3 & 0x8000000 | param_3 >> 5) >> 0x1a) * 4);
  }
  iVar6 = bVar3 + 1;
  switch(uVar7) {
  default:
    goto switchD_1006ed2c_caseD_1;
  case 2:
    puVar2 = param_2 + iVar6;
    iVar8 = 1;
    break;
  case 3:
    iVar8 = 2;
    param_2[iVar6] = param_3 & 0xff;
    puVar2 = param_2 + iVar6 + 1;
  }
  iVar6 = iVar6 + iVar8;
  *puVar2 = param_3 & 0xff;
switchD_1006ed2c_caseD_1:
  iVar8 = iVar6 + 1;
  param_2[iVar6] = (uint)param_4 >> 4;
LAB_1006ed6c:
  if ((param_3 & 0x3f00) == 0x800) {
    uVar4 = 1 << (ulonglong)(param_3 & 0x1f);
    param_1[2] = uVar4 | param_1[2];
    if ((param_3 & 0x40000000) != 0) {
      param_1[1] = uVar4 | param_1[1];
    }
  }
  return iVar8;
}

