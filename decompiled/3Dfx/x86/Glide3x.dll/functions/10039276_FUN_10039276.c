/*
 * FUN_10039276 at 10039276
 * uint * __thiscall FUN_10039276(void * this, uint * param_1, uint * param_2, uint * param_3, undefined4 param_4, int param_5)
 * Address ranges: 10039276-10039420
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __thiscall
FUN_10039276(void *this,uint *param_1,uint *param_2,uint *param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  if (param_5 == 0) {
    param_5 = *(int *)this;
  }
  local_10 = *(uint *)(param_5 + 0x3b);
  uVar1 = *(uint *)(param_5 + 0x37);
  local_c = uVar1;
  cVar4 = FUN_1002c40d(uVar1,local_10);
  uVar3 = local_10;
  *param_1 = 0;
  param_1[1] = 0;
  if (cVar4 != '\0') {
    bVar5 = false;
    uVar2 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = uVar2;
    local_18 = *param_2;
    local_14 = param_2[1];
    if (uVar1 == 0xfffffff8) {
      *param_1 = local_18;
      param_1[1] = local_14;
    }
    else if ((uVar1 == 0xfffffffa) || (uVar1 == 0xfffffffb)) {
      bVar5 = uVar1 == 0xfffffffa;
      if ((0x9ff < local_18) && (0x59f < local_14)) {
        local_18 = 0xa00;
        local_14 = 0x5a0;
      }
    }
    else if ((uVar1 == 0xfffffffc) || (uVar1 == 0xfffffffd)) {
      bVar5 = uVar1 == 0xfffffffc;
      if ((0x77f < local_18) && (0x437 < local_14)) {
        local_18 = 0x780;
        local_14 = 0x438;
      }
    }
    else {
      bVar5 = uVar1 == 0xfffffffe;
    }
    switch(*(undefined4 *)(param_5 + 0x1c)) {
    case 2:
      if (bVar5) {
        local_18 = local_18 / *param_1;
        local_14 = local_14 / param_1[1];
        if (local_18 == 0) {
          local_18 = 1;
        }
        if (local_14 == 0) {
          local_14 = 1;
        }
        if (local_18 < local_14) {
          local_14 = local_18;
        }
        *param_1 = *param_1 * local_14;
        param_1[1] = param_1[1] * local_14;
      }
      else {
        *param_1 = local_18;
        param_1[1] = local_14;
      }
      break;
    case 4:
    case 5:
    case 6:
      if ((*param_1 < 0x501) && (param_1[1] < 0x401)) {
        *param_1 = (param_1[1] << 2) / 3;
      }
    case 0:
    case 1:
    case 3:
    case 7:
    case 8:
      uVar6 = FUN_10039209(param_1,&local_18,bVar5);
      *(undefined8 *)param_1 = uVar6;
    }
    switch(local_c) {
    case 0xfffffff8:
    case 0xfffffffa:
    case 0xfffffffb:
    case 0xfffffffc:
    case 0xfffffffd:
    case 0xfffffffe:
    case 0xffffffff:
      if (uVar3 - 2 < 0xfe) {
        *param_1 = *param_1 * uVar3;
        param_1[1] = param_1[1] * uVar3;
      }
      break;
    case 0xfffffff9:
      *param_1 = *param_3 * uVar3;
      param_1[1] = param_3[1] * uVar3;
    }
  }
  return param_1;
}

