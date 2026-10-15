/*
 * FUN_18002f91c at 18002f91c
 * uint * __fastcall FUN_18002f91c(uint * param_1, uint * param_2, ulonglong param_3)
 * Address ranges: 18002f91c-18002fa8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_18002f91c(uint *param_1,uint *param_2,ulonglong param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint local_res8;
  uint local_resc;
  uint local_res10;
  uint local_res14;
  uint local_res20;
  uint local_res24;
  
  lVar4 = DAT_180111f20;
  local_res8 = *param_2;
  local_resc = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar6 = param_3 & 0xffffffff;
  uVar7 = *(uint *)(lVar4 + 0x864);
  *param_1 = local_res8;
  param_1[1] = local_resc;
  param_1[4] = 1;
  uVar8 = *(uint *)(&DAT_180112a58 + uVar6 * 0x4b);
  uVar2 = *(uint *)((longlong)&DAT_180112a58 + uVar6 * 600 + 4);
  param_1[5] = 1;
  uVar3 = *(uint *)(lVar4 + 0x868);
  if ((uVar7 < 0xfffffff8) || (((uVar7 != uVar3 || (uVar7 == 0xfffffff9)) && (0xff < uVar3)))) {
    if ((uVar7 != 0) && (uVar3 != 0)) {
      *param_1 = uVar7;
      param_1[1] = uVar3;
    }
  }
  else {
    local_res10 = uVar8;
    local_res14 = uVar2;
    FUN_1800f8210((longlong *)((&DAT_1801128e0)[uVar6 * 0x4b] + 8),&local_res20,
                  (undefined8 *)&local_res10,&local_res8);
    *param_1 = local_res20;
    param_1[1] = local_res24;
  }
  uVar7 = *(uint *)(*(longlong *)((&DAT_1801128e0)[uVar6 * 0x4b] + 8) + 0xa2);
  uVar3 = *(uint *)(*(longlong *)((&DAT_1801128e0)[uVar6 * 0x4b] + 8) + 0xa6);
  if ((uVar7 == 0) || (uVar5 = uVar3, uVar3 == 0)) {
    uVar8 = uVar8 / *param_1;
    uVar5 = uVar2 / param_1[1];
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    if (uVar7 == uVar3) {
      uVar7 = uVar5;
      if (uVar8 < uVar5) {
        uVar7 = uVar8;
        uVar5 = uVar8;
      }
    }
    else if (uVar7 == 0) {
      uVar7 = uVar8;
      uVar5 = uVar3;
    }
  }
  cVar1 = *(char *)(lVar4 + 0x822);
  param_1[4] = uVar7;
  param_1[5] = uVar5;
  if (((cVar1 != '\0') && (*(uint *)(lVar4 + 0x870) != 0)) &&
     (uVar7 = *(uint *)(lVar4 + 0x874), uVar7 != 0)) {
    param_1[2] = *(uint *)(lVar4 + 0x870);
    param_1[3] = uVar7;
  }
  return param_1;
}

