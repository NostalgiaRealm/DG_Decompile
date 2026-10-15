/*
 * FUN_10002fa2 at 10002fa2
 * undefined4 __thiscall FUN_10002fa2(void * this, int * param_1, int param_2, HWND param_3, int * param_4, int * param_5)
 * Address ranges: 10002fa2-10003399
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10002fa2(void *this,int *param_1,int param_2,HWND param_3,int *param_4,int *param_5)

{
  void *this_00;
  undefined1 uVar1;
  int iVar2;
  HWND pHVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar8;
  undefined4 extraout_ECX_01;
  int extraout_EDX;
  int extraout_EDX_00;
  char cVar9;
  uint uVar10;
  HWND pHVar11;
  uint *puVar12;
  uint local_58 [7];
  uint local_3c [6];
  int local_24;
  uint local_20;
  undefined *local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  char local_b;
  char local_a;
  char local_9;
  
  local_10 = this;
  local_14 = FUN_100020ae(param_4[2]);
  local_18 = FUN_100020ae(param_4[10]);
  local_1c = FUN_100035d8(this,param_2);
  iVar2 = param_4[6];
  if ((((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 3)) ||
     ((iVar2 == 4 || (local_9 = '\0', iVar2 == 5)))) {
    local_9 = '\x01';
  }
  if (((param_4[3] == 0) || (param_4[3] == 1)) || (local_a = '\0', iVar2 != 3)) {
    local_a = '\x01';
  }
  uVar10 = 0x17;
  if (*(char *)((int)local_10 + 0x47) != '\0') {
    uVar10 = 0xff7;
  }
  cVar9 = '\x01' - ((~uVar10 & param_4[0xb]) != 0);
  if ((((*(byte *)(param_4 + 0xb) & 2) != 0) && (param_4[9] != 0)) &&
     ((param_4[10] == 0x46 || (param_4[10] == 0x52)))) {
    cVar9 = '\0';
  }
  local_20 = param_4[0xd];
  if (((((local_20 == 0) || (local_20 == 0x80000000)) || (local_20 == 1)) ||
      ((local_20 == 2 || (local_20 == 4)))) || (local_b = '\0', local_20 == 8)) {
    local_b = '\x01';
  }
  uVar10 = FUN_1000285a(*(byte **)(local_1c + 0x144),local_14);
  if ((char)uVar10 == '\0') {
    return 0x8876086c;
  }
  if (0x10 < param_4[4]) {
    return 0x8876086c;
  }
  if (3 < (uint)param_4[3]) {
    return 0x8876086c;
  }
  if (local_9 == '\0') {
    return 0x8876086c;
  }
  if (local_a == '\0') {
    return 0x8876086c;
  }
  uVar8 = extraout_ECX;
  if ((param_4[9] != 0) &&
     (uVar10 = FUN_1000285a(*(byte **)(local_1c + 0x138),local_18), uVar8 = extraout_ECX_00,
     (char)uVar10 == '\0')) {
    return 0x8876086c;
  }
  this_00 = local_10;
  if (cVar9 == '\0') {
    return 0x8876086c;
  }
  if (local_b != '\0') {
    if ((param_4[4] != 0) && (param_4[6] != 1)) {
      return 0x8876086c;
    }
    local_24 = param_4[8];
    uVar10 = FUN_10002e5f((int)param_1,param_2,param_4[2],uVar8,param_4[4],param_4[5],1);
    if ((int)uVar10 < 0) {
      return 0x8876086c;
    }
    if (param_4[9] != 0) {
      iVar2 = FUN_10001f28(this_00,param_2,param_4[2],param_4[2],param_4[10]);
      if (iVar2 < 0) {
        return 0x8876086c;
      }
      uVar10 = FUN_10002e5f((int)param_1,param_2,param_4[10],extraout_ECX_01,param_4[4],param_4[5],1
                           );
      if ((int)uVar10 < 0) {
        return 0x8876086c;
      }
    }
    pHVar11 = (HWND)param_4[7];
    pHVar3 = GetDesktopWindow();
    if ((pHVar11 == pHVar3) || (pHVar11 == (HWND)0x0)) {
      pHVar11 = param_3;
    }
    *param_5 = (int)pHVar11;
    param_5[1] = *param_4;
    param_5[2] = param_4[1];
    param_5[6] = (uint)(byte)(&DAT_100d4ab4)[local_14];
    param_5[7] = *param_4;
    param_5[8] = param_4[1];
    param_5[0xb] = 1;
    param_5[0xc] = 1;
    if (local_20 == 0x80000000) {
      uVar10 = 0;
    }
    else {
      uVar10 = local_20;
      if (local_20 == 0) {
        uVar10 = (uint)(param_4[8] == 0);
      }
    }
    param_5[0xf] = uVar10;
    param_5[0xe] = param_4[6];
    iVar2 = param_4[3];
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    param_5[0x10] = iVar2;
    param_5[0x13] = param_4[2];
    param_5[0x11] = local_14;
    iVar2 = DAT_100dea74;
    if (param_4[9] == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_4[10];
    }
    param_5[0x14] = iVar4;
    uVar10 = 0x2a;
    if (param_4[9] != 0) {
      uVar10 = local_18;
    }
    param_2 = (int)param_1 * 0x228;
    param_5[0x12] = uVar10;
    param_5[0x15] = param_4[4];
    param_5[0x16] = param_4[5];
    if (param_4[2] == 0x23) {
      if (*(int *)(iVar2 + 0x836) == 0) {
        iVar5 = 1;
        iVar4 = param_2;
      }
      else {
        iVar5 = FUN_100cc488((int *)((&DAT_100df2e8)[(int)param_1 * 0x8a] + 4));
        iVar4 = extraout_EDX_00;
        param_2 = extraout_EDX_00;
      }
    }
    else {
      iVar5 = FUN_100cc488((int *)((&DAT_100df2e8)[(int)param_1 * 0x8a] + 4));
      iVar4 = extraout_EDX;
    }
    param_5[0xd] = iVar5;
    param_5[0x17] = (int)param_1;
    param_5[0x18] = *(int *)((int)&DAT_100df2fc + iVar4);
    param_5[0x19] = *(int *)((int)&DAT_100df2fc + iVar4) + 1;
    param_5[0x1a] = param_4[0xb];
    uVar1 = 1;
    *(byte *)(param_5 + 0x1b) = *(byte *)(param_4 + 0xb) & 1;
    *(bool *)((int)param_5 + 0x6d) = param_4[8] != 0;
    if ((*(char *)(iVar2 + 0x7e5) != '\0') || (*(char *)(iVar2 + 0x784) == '\0')) {
      uVar1 = 0;
    }
    *(undefined1 *)((int)param_5 + 0x6e) = uVar1;
    *(byte *)((int)param_5 + 0x6f) = (byte)(*(uint *)(local_1c + 8) >> 0x11) & 1;
    if (param_4[6] == 4) {
      return 0x80004005;
    }
    if (local_24 == 0) {
      piVar6 = FUN_1002afde(param_1,*param_4,param_4[1],param_4[0xc]);
      if (piVar6 == (int *)0x0) {
        return 0x8876086c;
      }
      param_5[3] = piVar6[2];
      param_5[4] = piVar6[3];
      param_5[5] = piVar6[4];
      puVar7 = FUN_1002b190((uint *)(param_5 + 1),(int)param_1,local_58);
      puVar12 = local_3c;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar7 = local_3c;
      puVar12 = (uint *)(param_5 + 7);
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      }
      if (param_4[0xc] != 0) {
        return 0;
      }
      iVar2 = FUN_1002a0b7();
      if ((char)iVar2 != '\0') {
        return 0;
      }
      param_5[9] = *(int *)(&DAT_100df454 + param_2);
      iVar2 = *(int *)(&DAT_100df458 + param_2);
    }
    else {
      if (param_4[0xc] != 0) {
        return 0x8876086c;
      }
      if (*param_4 == 0) {
        return 0x8876086c;
      }
      if (param_4[1] == 0) {
        return 0x8876086c;
      }
      param_5[3] = *(int *)(&DAT_100df46c + iVar4);
      param_5[4] = *(int *)(&DAT_100df470 + iVar4);
      param_5[5] = *(int *)(&DAT_100df474 + iVar4);
      param_5[9] = *(int *)(&DAT_100df46c + iVar4);
      iVar2 = *(int *)(&DAT_100df470 + iVar4);
    }
    param_5[10] = iVar2;
    return 0;
  }
  return 0x8876086c;
}

