/*
 * FUN_100a1c89 at 100a1c89
 * uint __fastcall FUN_100a1c89(undefined4 param_1, uint * param_2, int param_3, uint * param_4, uint * param_5)
 * Address ranges: 100a1c89-100a221c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100a1c89(int param_1,uint *param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *local_1d4;
  int local_1d0;
  int local_1c8;
  int local_1c4;
  uint local_1c0;
  int local_1bc;
  int local_1b8 [31];
  uint auStack_13c [33];
  uint auStack_b8 [32];
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char local_11;
  int local_10;
  uint local_c;
  char local_5;
  
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c4 = 0;
  local_1c0 = 0;
  local_1bc = 0;
  local_34 = param_1;
  FUN_100cfed0(local_1b8,0,0x180);
  iVar5 = 0;
  uVar4 = 0;
  local_30 = 0;
  local_24 = 0;
  local_2c = 0;
  *param_5 = 0;
  local_1c = 0;
  local_28 = 0;
  local_20 = 0;
  local_c = CONCAT31(local_c._1_3_,1);
  local_5 = '\0';
  local_18 = 0;
  uVar3 = 0;
  local_1d4 = param_2;
  do {
    iVar1 = local_18;
    local_11 = local_5;
    if (local_5 != '\0') break;
    local_38 = *param_2;
    uVar3 = local_38 & 0xffff;
    local_10 = 0;
    if (0xfffe < uVar3) {
      if (uVar3 != 0xffff) goto switchD_100a1d62_default;
LAB_100a1eed:
      local_5 = '\x01';
      goto LAB_100a1d78;
    }
    if (uVar3 == 0xfffe) {
      param_2 = param_2 + ((local_38 & 0xe0ff0000) >> 0x10);
switchD_100a1d62_caseD_0:
      param_2 = param_2 + 1;
      local_1d4 = param_2;
      goto LAB_100a1d78;
    }
    if (uVar3 < 0x1e) {
      if (uVar3 == 0x1d) {
        local_1d0 = local_1d0 + -1;
LAB_100a1f3a:
        param_2 = param_2 + 1;
        uVar4 = uVar4 - 1;
        local_28 = uVar4;
        local_1d4 = param_2;
      }
      else {
        switch(uVar3) {
        case 0:
          goto switchD_100a1d62_caseD_0;
        case 1:
        case 6:
        case 7:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x13:
          goto switchD_100a1d62_caseD_1;
        case 2:
        case 3:
        case 5:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0x11:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
          goto switchD_100a1d62_caseD_2;
        case 4:
        case 0x12:
          goto switchD_100a1d62_caseD_4;
        case 0x19:
          local_1b8[local_1c] = (int)(param_2 + 2);
          local_1bc = local_1bc + 1;
          local_1c8 = local_1c8 + 1;
          local_20 = local_20 + 1;
          param_2 = (uint *)(local_34 + *(int *)(param_3 + (local_1d4[1] & 0x7ff) * 4) * 4);
          auStack_b8[local_24] = 0;
          local_24 = local_24 + 1;
          uVar3 = FUN_100a1c5d(&local_30,param_4);
          local_c = CONCAT31(local_c._1_3_,(char)uVar3);
          local_1c = local_1bc;
          local_18 = local_1c4;
          local_1d4 = param_2;
          break;
        case 0x1a:
          if (((byte)(param_2[2] >> 0x1c) & 7 | (byte)(param_2[2] >> 8) & 0x18) == 0x13) {
            iVar5 = iVar5 + 1;
            local_2c = iVar5;
          }
          else {
            local_20 = local_20 + 1;
          }
          local_1b8[local_1c] = (int)(param_2 + 3);
          local_1bc = local_1bc + 1;
          auStack_b8[local_24] = (local_1d4[2] >> 0x14 & 0x700 | local_1d4[2] & 0x1800) >> 8;
          local_24 = local_24 + 1;
          uVar3 = FUN_100a1c5d(&local_30,param_4);
          local_c = CONCAT31(local_c._1_3_,(char)uVar3);
          local_1c8 = local_1c8 + 1;
          param_2 = (uint *)(local_34 + *(int *)(param_3 + (local_1d4[1] & 0x7ff) * 4) * 4);
          local_1c = local_1bc;
          local_18 = local_1c4;
          local_1d4 = param_2;
          break;
        case 0x1b:
          local_1d0 = local_1d0 + 1;
          param_2 = param_2 + 3;
LAB_100a1f03:
          uVar4 = uVar4 + 1;
          local_20 = local_20 + 1;
          local_28 = uVar4;
          local_c = FUN_100a1c5d(&local_30,param_4);
          local_1d4 = param_2;
          if (*param_5 < uVar4) {
            *param_5 = uVar4;
          }
          break;
        case 0x1c:
          if (local_1c == 0) goto LAB_100a1eed;
          local_1bc = local_1c + -1;
          local_1c = local_1bc;
          param_2 = (uint *)local_1b8[local_1bc];
          local_1c8 = local_1c8 + -1;
          if (auStack_b8[local_1c8] == 0x13) {
            iVar5 = iVar5 + -1;
            local_2c = iVar5;
          }
          local_24 = local_24 + -1;
          local_1d4 = param_2;
          break;
        default:
          goto switchD_100a1d62_default;
        }
      }
      goto LAB_100a1d78;
    }
    if (0x2d < uVar3) {
      if (uVar3 < 0x5b) {
        if (uVar3 == 0x5a) goto switchD_100a1d62_caseD_4;
        if (uVar3 == 0x2e) {
switchD_100a1d62_caseD_1:
          local_10 = 1;
        }
        else if (uVar3 == 0x41) {
          local_10 = 0;
        }
        else {
          if (uVar3 == 0x42) goto switchD_100a1d62_caseD_2;
          if ((uVar3 == 0x4e) || (uVar3 == 0x4f)) goto switchD_100a1d62_caseD_1;
          if (uVar3 == 0x58) goto switchD_100a1d62_caseD_4;
        }
      }
      else if ((uVar3 == 0x5b) || (uVar3 == 0x5c)) {
        local_10 = 1;
      }
      else if (uVar3 == 0x5d) {
        local_10 = 4;
      }
      else {
        if (uVar3 == 0x5e) {
          local_1c0 = local_1c0 | param_2[1] >> 0x10 & 0xf;
        }
        else if (uVar3 != 0x5f) {
          if (uVar3 == 0x60) goto switchD_100a1f5e_caseD_1e;
          goto switchD_100a1d62_default;
        }
switchD_100a1d62_caseD_2:
        local_10 = 2;
      }
      goto switchD_100a1d62_default;
    }
    if (uVar3 == 0x2d) {
LAB_100a20b1:
      param_2 = param_2 + 3;
      local_1d4 = param_2;
      goto LAB_100a1d78;
    }
    switch(uVar3) {
    case 0x1e:
      goto switchD_100a1f5e_caseD_1e;
    case 0x20:
    case 0x21:
      goto switchD_100a1d62_caseD_2;
    case 0x22:
switchD_100a1d62_caseD_4:
      local_10 = 3;
      break;
    case 0x23:
    case 0x24:
      goto switchD_100a1d62_caseD_1;
    case 0x25:
      local_10 = 3;
      if (*(char *)(local_34 + 1) == '\x03') {
        local_10 = 1;
      }
      break;
    case 0x26:
      param_2 = param_2 + 2;
      goto LAB_100a1f03;
    case 0x27:
      goto LAB_100a1f3a;
    case 0x28:
      uVar3 = (param_2[1] >> 0x14 & 0x700 | param_2[1] & 0x1800) >> 8;
      if (uVar3 == 0x13) {
        iVar5 = iVar5 + 1;
        local_2c = iVar5;
      }
      else {
        local_30 = local_30 + 1;
        local_20 = local_20 + 1;
      }
      auStack_13c[local_18 + 1] = uVar3;
      local_1c4 = local_1c4 + 1;
      local_18 = local_1c4;
      uVar3 = FUN_100a1c5d(&local_30,param_4);
      local_c = CONCAT31(local_c._1_3_,(char)uVar3);
      local_1c = local_1bc;
      param_2 = local_1d4;
      goto switchD_100a1f5e_caseD_1e;
    case 0x29:
      iVar5 = iVar5 + 1;
      local_2c = iVar5;
      auStack_13c[local_18 + 1] = (param_2[1] >> 0x14 & 0x700 | param_2[1] & 0x1800) >> 8;
      local_1c4 = local_1c4 + 1;
      local_18 = local_1c4;
      uVar3 = FUN_100a1c5d(&local_30,param_4);
      local_c = CONCAT31(local_c._1_3_,(char)uVar3);
      local_1c = local_1bc;
      param_2 = local_1d4;
      goto LAB_100a20b1;
    case 0x2a:
      if (auStack_13c[local_18] != 0xe) goto switchD_100a1f5e_caseD_2c;
      local_20 = local_20 + 1;
      goto LAB_100a202a;
    case 0x2b:
      local_1c4 = local_18 + -1;
      local_18 = local_1c4;
      if (auStack_13c[iVar1] == 0xe) {
        local_30 = local_30 - 1;
      }
      else {
        iVar5 = iVar5 + -1;
        local_2c = iVar5;
      }
LAB_100a202a:
      local_c = FUN_100a1c5d(&local_30,param_4);
LAB_100a2038:
      param_2 = param_2 + 1;
      local_1d4 = param_2;
      goto LAB_100a1d78;
    case 0x2c:
switchD_100a1f5e_caseD_2c:
      goto LAB_100a2038;
    }
switchD_100a1d62_default:
    if ((param_2[1] & 0x2000) != 0) {
      param_2 = param_2 + 1;
    }
    if ((local_38 & 0x10000000) != 0) {
      uVar3 = param_2[1];
      bVar2 = FUN_100a1bd2(param_2[2],0xf);
      uVar4 = 0xf0000;
      if ((uVar3 & 0xf0000) != 0) {
        uVar4 = uVar3 & 0xf0000;
      }
      uVar3 = (uint)bVar2 & uVar4 >> 0x10;
      local_c = CONCAT31(local_c._1_3_,(uVar3 & local_1c0) == uVar3);
      param_2 = param_2 + 1;
      uVar4 = local_28;
      iVar5 = local_2c;
    }
    param_2 = param_2 + 2;
    local_5 = local_11;
    local_1d4 = param_2;
    if (local_10 != 0) {
      do {
        if ((*param_2 & 0x2000) != 0) {
          param_2 = param_2 + 1;
          if ((((byte)(*param_2 >> 0x1c) & 7 | (byte)(*param_2 >> 8) & 0x18) == 0xf) &&
             (local_c = local_c & 0xff, local_1d0 == 0)) {
            local_c = 0;
          }
        }
        param_2 = param_2 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_1d4 = param_2;
    }
LAB_100a1d78:
    uVar3 = local_c;
  } while ((char)local_c != '\0');
  return CONCAT31((int3)(uVar3 >> 8),(undefined1)local_c);
switchD_100a1f5e_caseD_1e:
  param_2 = param_2 + 2;
  local_1d4 = param_2;
  goto LAB_100a1d78;
}

