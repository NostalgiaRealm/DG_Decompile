/*
 * FUN_1005da5d at 1005da5d
 * uint * __thiscall FUN_1005da5d(void * this, uint * param_1, uint * param_2, uint * param_3)
 * Address ranges: 1005da5d-1005dbf8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __thiscall FUN_1005da5d(void *this,uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  
  local_14 = *(int *)this;
  local_c = *(uint *)(local_14 + 0x68);
  uVar1 = *(uint *)(local_14 + 100);
  local_10 = uVar1;
  cVar3 = FUN_10036cfb(uVar1,local_c);
  *param_1 = 0;
  param_1[1] = 0;
  if (cVar3 != '\0') {
    bVar4 = false;
    uVar2 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = uVar2;
    local_1c = *param_2;
    local_18 = param_2[1];
    if (uVar1 == 0xfffffff8) {
      *param_1 = local_1c;
      param_1[1] = local_18;
    }
    else if ((uVar1 == 0xfffffffa) || (uVar1 == 0xfffffffb)) {
      bVar4 = uVar1 == 0xfffffffa;
      if ((0x9ff < local_1c) && (0x59f < local_18)) {
        local_1c = 0xa00;
        local_18 = 0x5a0;
      }
    }
    else if ((uVar1 == 0xfffffffc) || (uVar1 == 0xfffffffd)) {
      bVar4 = uVar1 == 0xfffffffc;
      if ((0x77f < local_1c) && (0x437 < local_18)) {
        local_1c = 0x780;
        local_18 = 0x438;
      }
    }
    else {
      bVar4 = uVar1 == 0xfffffffe;
    }
    switch(*(undefined4 *)(local_14 + 0x1c)) {
    case 2:
      if (bVar4) {
        local_1c = local_1c / *param_1;
        local_18 = local_18 / param_1[1];
        if (local_1c == 0) {
          local_1c = 1;
        }
        if (local_18 == 0) {
          local_18 = 1;
        }
        if (local_1c < local_18) {
          local_18 = local_1c;
        }
        *param_1 = *param_1 * local_18;
        param_1[1] = param_1[1] * local_18;
      }
      else {
        *param_1 = local_1c;
        param_1[1] = local_18;
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
      uVar5 = FUN_1005d9f0(param_1,&local_1c,bVar4);
      *(undefined8 *)param_1 = uVar5;
    }
    switch(local_10) {
    case 0xfffffff8:
    case 0xfffffffa:
    case 0xfffffffb:
    case 0xfffffffc:
    case 0xfffffffd:
    case 0xfffffffe:
    case 0xffffffff:
      if (local_c - 2 < 0xfe) {
        *param_1 = *param_1 * local_c;
        param_1[1] = param_1[1] * local_c;
      }
      break;
    case 0xfffffff9:
      *param_1 = *param_3 * local_c;
      param_1[1] = param_3[1] * local_c;
    }
  }
  return param_1;
}

