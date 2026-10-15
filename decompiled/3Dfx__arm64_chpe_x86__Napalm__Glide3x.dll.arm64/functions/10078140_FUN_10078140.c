/*
 * FUN_10078140 at 10078140
 * undefined FUN_10078140(void)
 * Address ranges: 10078140-10078417
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10078140(int *param_1,uint *param_2,uint param_3,undefined1 param_4,uint param_5,
                undefined1 param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar7 = param_3 >> 0x10 & 3;
  uVar8 = param_3 & 0xff;
  uVar3 = uVar8;
  if (1 < uVar7) {
    uVar3 = param_3 >> 0xe & 3;
  }
  uVar5 = param_3 >> 8 & 0x3f;
  uVar10 = uVar7;
  if ((uVar5 - 6 < 2) &&
     (uVar10 = 2, (*param_1 == 0x30051 || (*param_1 - 0x51U & 0xfffcffff) != 0) || uVar7 != 1)) {
    uVar10 = uVar7;
  }
  uVar7 = ~(param_3 >> 0x1b) & 4;
  uVar2 = param_3 & 0x10000000;
  if ((param_3 & 0x88000000) == 0) {
    if ((param_3 & 0x40000000) == 0) {
      if (uVar2 == 0) {
        uVar7 = FUN_10078520(param_3,param_4,uVar10,uVar7,0,0);
      }
      else {
        uVar7 = FUN_100785f0();
      }
      param_2[1] = uVar3;
      *param_2 = uVar7;
      param_2[2] = uVar8;
      iVar9 = uVar10 + 1;
    }
    else {
      uVar4 = 3;
      uVar6 = 0;
      if (uVar10 < 2) {
        uVar4 = 0;
        uVar6 = 3;
      }
      if (uVar2 == 0) {
        uVar7 = FUN_10078520(param_3,param_4,uVar10,uVar7,uVar6,uVar4);
      }
      else {
        uVar7 = FUN_100785f0();
      }
      param_2[1] = uVar3;
      *param_2 = uVar7;
      param_2[2] = uVar8;
      uVar8 = FUN_100785f0(param_5,param_6,1,4,0,0);
      param_2[uVar10 + 1] = uVar8;
      (param_2 + uVar10 + 1)[1] = param_5 & 0xff;
      iVar9 = uVar10 + 3;
    }
  }
  else {
    if ((param_3 & 0x40000000) == 0) {
      if (uVar2 == 0) {
        uVar7 = FUN_10078520(param_3,param_4,uVar10,uVar7,0,0);
      }
      else {
        uVar7 = FUN_100785f0();
      }
      *param_2 = uVar7 | 0x80000000;
      param_2[1] = *(uint *)(&DAT_100a2908 + ((param_3 & 0x8000000 | param_3 >> 5) >> 0x1a) * 4);
      param_2[2] = uVar3;
      param_2[3] = uVar8;
    }
    else {
      uVar4 = 3;
      uVar6 = 0;
      if (uVar10 < 2) {
        uVar4 = 0;
        uVar6 = 3;
      }
      if (uVar2 == 0) {
        uVar7 = FUN_10078520(param_3,param_4,uVar10,uVar7,uVar6,uVar4);
      }
      else {
        uVar7 = FUN_100785f0();
      }
      *param_2 = uVar7 | 0x80000000;
      uVar10 = uVar10 + 2;
      param_2[1] = *(uint *)(&DAT_100a2908 + ((param_3 & 0x8000000 | param_3 >> 5) >> 0x1a) * 4);
      param_2[2] = uVar3;
      param_2[3] = uVar8;
      uVar8 = FUN_100785f0(param_5,param_6,1,4,0,0);
      param_2[uVar10] = uVar8;
      (param_2 + uVar10)[1] = param_5 & 0xff;
    }
    iVar9 = uVar10 + 2;
  }
  if (uVar5 == 6) {
    iVar1 = 0x10;
  }
  else {
    if (uVar5 != 7) {
      return iVar9;
    }
    iVar1 = 0xc;
  }
  *(uint *)((int)param_1 + iVar1) =
       1 << (ulonglong)(param_3 & 0x1f) | *(uint *)((int)param_1 + iVar1);
  return iVar9;
}

