/*
 * FUN_10023b1e at 10023b1e
 * uint * __fastcall FUN_10023b1e(uint * param_1, int param_2, uint * param_3)
 * Address ranges: 10023b1e-10023c61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __fastcall FUN_10023b1e(uint *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint extraout_ECX;
  uint uVar5;
  uint extraout_EDX;
  uint uVar6;
  uint uVar7;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  uVar6 = *param_1;
  uVar5 = param_1[1];
  param_3[2] = param_1[2];
  param_3[3] = param_1[3];
  *param_3 = uVar6;
  param_3[4] = 1;
  param_3[5] = 1;
  param_3[1] = uVar5;
  local_20 = *(uint *)(&DAT_100ba884 + param_2 * 0x228);
  local_1c = *(uint *)(&DAT_100ba888 + param_2 * 0x228);
  local_18 = local_1c;
  local_14 = local_20;
  local_c = uVar5;
  cVar3 = FUN_10082b85(*(uint *)(DAT_100ba2b4 + 0x7c8),*(uint *)(DAT_100ba2b4 + 0x7cc));
  if (cVar3 == '\0') {
    if ((extraout_ECX != 0) && (local_c = uVar5, extraout_EDX != 0)) {
      *param_3 = extraout_ECX;
      param_3[1] = extraout_EDX;
      uVar6 = extraout_ECX;
      local_c = extraout_EDX;
    }
  }
  else {
    local_10 = uVar6;
    local_c = uVar5;
    FUN_100a9c4d((void *)((&DAT_100ba720)[param_2 * 0x8a] + 4),&local_28,&local_20,&local_10);
    *param_3 = local_28;
    local_c = local_24;
    param_3[1] = local_24;
    uVar6 = local_28;
  }
  iVar2 = DAT_100ba2b4;
  uVar5 = *(uint *)(*(int *)((&DAT_100ba720)[param_2 * 0x8a] + 4) + 0xa2);
  uVar1 = *(uint *)(*(int *)((&DAT_100ba720)[param_2 * 0x8a] + 4) + 0xa6);
  if ((uVar5 == 0) || (uVar4 = uVar1, uVar1 == 0)) {
    uVar7 = local_14 / uVar6;
    if (local_14 / uVar6 == 0) {
      uVar7 = 1;
    }
    uVar4 = local_18 / local_c;
    if (local_18 / local_c == 0) {
      uVar4 = 1;
    }
    if (uVar5 == uVar1) {
      uVar5 = uVar4;
      if (uVar7 < uVar4) {
        uVar5 = uVar7;
        uVar4 = uVar7;
      }
    }
    else if (uVar5 == 0) {
      uVar5 = uVar7;
      uVar4 = uVar1;
    }
  }
  param_3[4] = uVar5;
  param_3[5] = uVar4;
  if (((*(char *)(iVar2 + 0x786) != '\0') && (*(uint *)(iVar2 + 0x7d4) != 0)) &&
     (uVar6 = *(uint *)(iVar2 + 0x7d8), uVar6 != 0)) {
    param_3[2] = *(uint *)(iVar2 + 0x7d4);
    param_3[3] = uVar6;
  }
  return param_3;
}

