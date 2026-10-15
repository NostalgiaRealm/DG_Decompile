/*
 * FUN_1800f8210 at 1800f8210
 * uint * __fastcall FUN_1800f8210(longlong * param_1, uint * param_2, undefined8 * param_3, uint * param_4)
 * Address ranges: 1800f8210-1800f83ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1800f8210(longlong *param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  undefined8 local_res10;
  
  lVar4 = *param_1;
  uVar1 = *(uint *)(lVar4 + 100);
  uVar2 = *(uint *)(lVar4 + 0x68);
  if ((uVar1 < 0xfffffff8) || (((uVar1 != uVar2 || (uVar1 == 0xfffffff9)) && (0xff < uVar2)))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  if (!bVar6) {
    return param_2;
  }
  *(undefined8 *)param_2 = *(undefined8 *)param_4;
  local_res10 = *param_3;
  bVar6 = false;
  if (uVar1 == 0xfffffff8) {
    *(undefined8 *)param_2 = local_res10;
  }
  else {
    uVar5 = (uint)((ulonglong)local_res10 >> 0x20);
    if (uVar1 + 6 < 2) {
      bVar6 = uVar1 == 0xfffffffa;
      if ((0x9ff < (uint)local_res10) && (0x59f < uVar5)) {
        local_res10 = 0x5a000000a00;
      }
    }
    else if (uVar1 + 4 < 2) {
      bVar6 = uVar1 == 0xfffffffc;
      if ((0x77f < (uint)local_res10) && (0x437 < uVar5)) {
        local_res10 = 0x43800000780;
      }
    }
    else if (uVar1 == 0xfffffffe) {
      bVar6 = true;
    }
  }
  iVar3 = *(int *)(lVar4 + 0x1c);
  if ((iVar3 == 0) || (iVar3 == 1)) {
LAB_1800f8324:
    local_res10 = FUN_1800f8194(param_2,(uint *)&local_res10,bVar6);
LAB_1800f8330:
    *(undefined8 *)param_2 = local_res10;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 != 3) {
        if (((iVar3 == 4) || (iVar3 == 5)) || (iVar3 == 6)) {
          if ((*param_2 < 0x501) && (param_2[1] < 0x401)) {
            *param_2 = (param_2[1] << 2) / 3;
          }
        }
        else if ((iVar3 != 7) && (iVar3 != 8)) goto LAB_1800f8333;
      }
      goto LAB_1800f8324;
    }
    if (bVar6 == false) goto LAB_1800f8330;
    uVar5 = (uint)local_res10 / *param_2;
    local_res10._4_4_ = local_res10._4_4_ / param_2[1];
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    if (local_res10._4_4_ == 0) {
      local_res10._4_4_ = 1;
    }
    if (uVar5 < local_res10._4_4_) {
      local_res10._4_4_ = uVar5;
    }
    *param_2 = *param_2 * local_res10._4_4_;
    param_2[1] = param_2[1] * local_res10._4_4_;
  }
LAB_1800f8333:
  if (uVar1 != 0xfffffff8) {
    if (uVar1 == 0xfffffff9) {
      uVar1 = *param_4;
      uVar5 = param_4[1];
      goto LAB_1800f835c;
    }
    if (5 < uVar1 + 6) {
      return param_2;
    }
  }
  if (0xfd < uVar2 - 2) {
    return param_2;
  }
  uVar1 = *param_2;
  uVar5 = param_2[1];
LAB_1800f835c:
  param_2[1] = uVar2 * uVar5;
  *param_2 = uVar2 * uVar1;
  return param_2;
}

