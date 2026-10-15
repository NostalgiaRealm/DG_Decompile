/*
 * FUN_1004fb1d at 1004fb1d
 * uint __cdecl FUN_1004fb1d(byte * param_1, undefined4 * param_2, uint param_3, uint param_4)
 * Address ranges: 1004fb1d-1004fc98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_1004fb1d(byte *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  byte local_5;
  
  uVar8 = 0;
  local_5 = *param_1;
  pbVar1 = param_1;
  while (pbVar7 = pbVar1 + 1, (&DAT_10058058)[local_5] == '\x01') {
    pbVar1 = pbVar7;
    local_5 = *pbVar7;
  }
  if (local_5 == 0x2d) {
    param_4 = param_4 | 2;
LAB_1004fb56:
    local_5 = *pbVar7;
    pbVar7 = pbVar1 + 2;
  }
  else if (local_5 == 0x2b) goto LAB_1004fb56;
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (local_5 != 0x30) {
      param_3 = 10;
      goto LAB_1004fbc4;
    }
    if ((*pbVar7 != 0x78) && (*pbVar7 != 0x58)) {
      param_3 = 8;
      goto LAB_1004fbc4;
    }
    param_3 = 0x10;
  }
  else if ((param_3 != 0x10) || (local_5 != 0x30)) goto LAB_1004fbc4;
  if ((*pbVar7 == 0x78) || (*pbVar7 == 0x58)) {
    local_5 = pbVar7[1];
    pbVar7 = pbVar7 + 2;
  }
LAB_1004fbc4:
  uVar2 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    if (local_5 - 0x30 < 10) {
      uVar5 = (int)(char)local_5 - 0x30;
    }
    else {
      iVar3 = ___ascii_iswalpha((uint)local_5);
      if (iVar3 == 0) break;
      iVar4 = (int)(char)local_5;
      iVar3 = iVar4 + -0x20;
      if (0x19 < iVar4 - 0x61U) {
        iVar3 = iVar4;
      }
      uVar5 = iVar3 - 0x37;
    }
    if (param_3 <= uVar5) break;
    uVar6 = param_4 | 8;
    if ((uVar8 < uVar2) || ((uVar8 == uVar2 && (uVar5 <= (uint)(0xffffffff % (ulonglong)param_3)))))
    {
      uVar8 = uVar8 * param_3 + uVar5;
    }
    else {
      uVar6 = param_4 | 0xc;
    }
    local_5 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    param_4 = uVar6;
  } while( true );
  pbVar7 = pbVar7 + -1;
  if ((param_4 & 8) == 0) {
    if (param_2 != (undefined4 *)0x0) {
      pbVar7 = param_1;
    }
    uVar8 = 0;
    goto LAB_1004fc77;
  }
  if ((param_4 & 4) == 0) {
    if ((param_4 & 1) != 0) goto LAB_1004fc77;
    if ((param_4 & 2) == 0) {
      if (uVar8 < 0x80000000) goto LAB_1004fc77;
      goto LAB_1004fc62;
    }
    if (uVar8 < 0x80000001) goto LAB_1004fc77;
  }
  else {
LAB_1004fc62:
    if ((param_4 & 1) != 0) {
      uVar8 = 0xffffffff;
      goto LAB_1004fc77;
    }
    if ((param_4 & 2) == 0) {
      uVar8 = 0x7fffffff;
      goto LAB_1004fc77;
    }
  }
  uVar8 = 0x80000000;
LAB_1004fc77:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar7;
  }
  if ((param_4 & 2) != 0) {
    return -uVar8;
  }
  return uVar8;
}

