/*
 * FUN_180040190 at 180040190
 * uint * __fastcall FUN_180040190(longlong * param_1, uint * param_2, undefined8 * param_3, uint * param_4, undefined8 param_5, longlong param_6)
 * Address ranges: 180040190-180040366
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180040190(longlong *param_1,uint *param_2,undefined8 *param_3,uint *param_4,
                    undefined8 param_5,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = param_6;
  if (param_6 == 0) {
    lVar6 = *param_1;
  }
  uVar1 = *(uint *)(lVar6 + 0x37);
  uVar2 = *(uint *)(lVar6 + 0x3b);
  if ((uVar1 < 0xfffffff8) || (((uVar1 != uVar2 || (uVar1 == 0xfffffff9)) && (0xff < uVar2)))) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  if (!bVar7) {
    return param_2;
  }
  *(undefined8 *)param_2 = *(undefined8 *)param_4;
  param_6 = *param_3;
  bVar7 = false;
  if (uVar1 == 0xfffffff8) {
    *(longlong *)param_2 = param_6;
  }
  else {
    uVar4 = (uint)((ulonglong)param_6 >> 0x20);
    if (uVar1 + 6 < 2) {
      bVar7 = uVar1 == 0xfffffffa;
      if ((0x9ff < (uint)param_6) && (0x59f < uVar4)) {
        param_6 = 0x5a000000a00;
      }
    }
    else if (uVar1 + 4 < 2) {
      bVar7 = uVar1 == 0xfffffffc;
      if ((0x77f < (uint)param_6) && (0x437 < uVar4)) {
        param_6 = 0x43800000780;
      }
    }
    else if (uVar1 == 0xfffffffe) {
      bVar7 = true;
    }
  }
  iVar3 = *(int *)(lVar6 + 0x1c);
  if ((iVar3 == 0) || (iVar3 == 1)) {
LAB_1800402a6:
    param_6 = FUN_180040114(param_2,(uint *)&param_6,bVar7);
LAB_1800402b2:
    *(longlong *)param_2 = param_6;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 != 3) {
        if (((iVar3 == 4) || (iVar3 == 5)) || (iVar3 == 6)) {
          if ((*param_2 < 0x501) && (param_2[1] < 0x401)) {
            *param_2 = (param_2[1] << 2) / 3;
          }
        }
        else if ((iVar3 != 7) && (iVar3 != 8)) goto LAB_1800402b5;
      }
      goto LAB_1800402a6;
    }
    if (bVar7 == false) goto LAB_1800402b2;
    uVar5 = (uint)param_6 / *param_2;
    uVar4 = param_6._4_4_ / param_2[1];
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    if (uVar5 < uVar4) {
      uVar4 = uVar5;
    }
    *param_2 = *param_2 * uVar4;
    param_2[1] = param_2[1] * uVar4;
  }
LAB_1800402b5:
  if (uVar1 != 0xfffffff8) {
    if (uVar1 == 0xfffffff9) {
      uVar1 = *param_4;
      uVar4 = param_4[1];
      goto LAB_1800402de;
    }
    if (5 < uVar1 + 6) {
      return param_2;
    }
  }
  if (0xfd < uVar2 - 2) {
    return param_2;
  }
  uVar1 = *param_2;
  uVar4 = param_2[1];
LAB_1800402de:
  param_2[1] = uVar2 * uVar4;
  *param_2 = uVar2 * uVar1;
  return param_2;
}

