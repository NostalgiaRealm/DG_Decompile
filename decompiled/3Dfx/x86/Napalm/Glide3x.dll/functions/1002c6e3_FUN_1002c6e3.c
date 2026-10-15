/*
 * FUN_1002c6e3 at 1002c6e3
 * undefined __fastcall FUN_1002c6e3(int param_1, int * param_2, int * param_3)
 * Address ranges: 1002c6e3-1002cebe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002c6e3(int param_1,int *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  uint extraout_EAX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  uint local_20;
  uint local_1c;
  uint local_14;
  byte local_7;
  byte local_6;
  
  local_6 = *(byte *)(param_2 + 0x48);
  local_7 = *(byte *)((int)param_2 + 0x121);
  local_14 = 4;
  piVar10 = param_3;
  do {
    bVar3 = '\x01' << ((char)local_14 - 1U & 0x1f);
    bVar11 = (local_6 & bVar3) != 0;
    bVar12 = (local_7 & bVar3) != 0;
    if ((local_6 == bVar3) || (((char)param_2[0x48] == '\0' && (local_14 == 1)))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((local_7 == bVar3) || ((*(char *)((int)param_2 + 0x121) == '\0' && (local_14 == 1)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    local_6 = local_6 & ~bVar3;
    local_7 = local_7 & ~bVar3;
    if (((bVar2) && ((char)param_2[0x6d] == '\0')) && (*(char *)((int)param_2 + 0x1b7) == '\0')) {
      bVar11 = true;
    }
    if ((bVar1) && (*(char *)((int)param_2 + 0x1b6) == '\0')) {
      bVar12 = true;
    }
    if ((bVar11) || (local_14 == 1)) {
      FUN_1002c5a8(param_1,param_2,piVar10,local_14 - 1,'\0');
    }
    if (((bVar12) || (local_14 == 1)) &&
       (FUN_1002c5a8(param_1,param_2,piVar10,local_14 - 1,'\x01'), local_14 == 1)) {
      iVar8 = *(int *)(param_1 + 0x864);
      if ((*(int *)(param_1 + 0x4c) != 0) || (iVar8 != 0)) {
        FUN_10029bad((undefined2 *)(param_2 + 0x2c),(uint)*(ushort *)(param_2 + 0x2f),0.0,
                     -(uint)(*(int *)(param_1 + 0x4c) != 0) & 0x40,
                     (float)(-(uint)(iVar8 != 0) & 0x870),-(uint)(iVar8 != 0) & 0x880,param_2,
                     piVar10);
      }
    }
    if ((!bVar1) || (local_20 = 0x70, *(char *)((int)param_2 + 0x1b6) != '\0')) {
      local_20 = 0xf0;
    }
    if (((!bVar2) || ((char)param_2[0x6d] != '\0')) ||
       (local_1c = 0x70, *(char *)((int)param_2 + 0x1b7) != '\0')) {
      local_1c = 0xf0;
    }
    iVar8 = local_14 * 0xe;
    if ((((*(ushort *)(iVar8 + 0xac + (int)param_2) & 0xefff) ==
          (*(ushort *)(iVar8 + 0xe4 + (int)param_2) & 0xefff)) &&
        ((*(ushort *)(iVar8 + 0xa2 + (int)param_2) & 0xefff) ==
         (*(ushort *)(iVar8 + 0xda + (int)param_2) & 0xefff))) &&
       (((*(ushort *)(iVar8 + 0xa4 + (int)param_2) & 0xefff) ==
         (*(ushort *)(iVar8 + 0xdc + (int)param_2) & 0xefff) &&
        (((*(ushort *)(iVar8 + 0xa6 + (int)param_2) & 0xefff) ==
          (*(ushort *)(iVar8 + 0xde + (int)param_2) & 0xefff) &&
         ((*(ushort *)(iVar8 + 0xa8 + (int)param_2) & 0xefff) ==
          (*(ushort *)(iVar8 + 0xe0 + (int)param_2) & 0xefff))))))) {
      if (!bVar11) goto LAB_1002c943;
      if ((!bVar12) || ((short)local_20 != (short)local_1c)) goto LAB_1002c92b;
      cVar13 = '\x01';
      bVar3 = 1;
      iVar6 = (int)param_2 + 0xa2;
LAB_1002c956:
      FUN_10029989((ushort *)(iVar6 + iVar8),param_2,piVar10,local_1c,bVar3,cVar13);
    }
    else {
      if (bVar11) {
LAB_1002c92b:
        FUN_10029989((ushort *)((int)param_2 + iVar8 + 0xa2),param_2,piVar10,local_1c,1,'\0');
      }
LAB_1002c943:
      if (bVar12) {
        cVar13 = '\0';
        bVar3 = 0;
        iVar6 = (int)param_2 + 0xda;
        local_1c = local_20;
        goto LAB_1002c956;
      }
    }
    if (bVar1) {
      if (*(char *)((int)param_2 + 0x1b6) != '\0') {
        FUN_10026db5(param_2,*(ushort *)(iVar8 + 0xe4 + (int)param_2),0x70,0,8,piVar10,'\x01');
      }
      FUN_1002aec5(param_1,param_2,piVar10,(uint)*(ushort *)(iVar8 + 0xe4 + (int)param_2));
    }
    if (bVar2) {
      piVar10 = (int *)FUN_1002b0b0(param_1,param_2,piVar10,
                                    (uint)*(ushort *)(iVar8 + 0xac + (int)param_2),
                                    *(char *)((int)param_2 + 0x1b7));
      uVar7 = extraout_EAX & 0xffff;
      uVar4 = (ushort)extraout_EAX & 0xf0;
      uVar9 = uVar7;
      if ((uVar4 != 0x80) && (uVar4 != 0xf0)) {
        uVar9 = (uint)*(ushort *)(iVar8 + 0xac + (int)param_2);
      }
      FUN_1002c367(param_1,param_2,piVar10,uVar9);
      FUN_10026afe((int)param_2,uVar7);
    }
    uVar9 = 0;
    local_14 = local_14 - 1;
    do {
      if (*(byte *)((int)param_2 + uVar9 + 0xa8) == local_14) {
        FUN_1004dabf((int)param_2,param_2[uVar9 + 0x1e]);
        param_2[uVar9 + 0x1e] = 0;
      }
      if (*(byte *)((int)param_2 + uVar9 + 0xab) == local_14) {
        FUN_1004dabf((int)param_2,param_2[uVar9 + 0x1b]);
        param_2[uVar9 + 0x1b] = 0;
      }
      if (*(byte *)((int)param_2 + uVar9 + 0xa5) == local_14) {
        FUN_1004dabf((int)param_2,param_2[uVar9 + 0x21]);
        param_2[uVar9 + 0x21] = 0;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 3);
  } while (local_14 != 0);
  FUN_1002994f((int)param_2,*(char *)((int)param_2 + 0x1b9));
  bVar12 = false;
  if (*(char *)((int)param_2 + 0x1b9) == '\0') {
    uVar9 = *(uint *)(param_1 + 0x28) & *(uint *)(param_1 + 0x24);
    if (uVar9 == 1) {
LAB_1002cd3b:
      FUN_1004da21((int)param_2,1,'\x01');
      FUN_1004e5d0(param_2,piVar10,0x2036);
      FUN_1004e5d0(param_2,piVar10,0x38);
    }
    else {
      if (uVar9 != 2) {
        if (uVar9 == 3) goto LAB_1002cd3b;
        if (uVar9 != 4) goto LAB_1002cd92;
      }
      uVar9 = FUN_1004da21((int)param_2,1,'\x01');
      uVar7 = FUN_1004da21((int)param_2,1,'\x01');
      uVar5 = FUN_1004da21((int)param_2,1,'\x01');
      FUN_10029906(param_2,param_3);
      FUN_1004e5d0(param_2,param_3,0x34);
      FUN_1004e5d0(param_2,param_3,0x33);
      FUN_1004e5d0(param_2,param_3,0x2f);
      FUN_1004e5d0(param_2,param_3,0x43);
      FUN_1004e5d0(param_2,param_3,0x1c);
      FUN_1004e5d0(param_2,param_3,0x19);
      FUN_1004e5d0(param_2,param_3,0xe);
      FUN_1004e5d0(param_2,param_3,0x32);
      FUN_1004e5d0(param_2,param_3,0x29);
      FUN_1004e5d0(param_2,param_3,0x1c);
      FUN_1004e5d0(param_2,param_3,0x3c);
      FUN_1004e5d0(param_2,param_3,0x1e);
      FUN_1004e5d0(param_2,param_3,0x24);
      FUN_1004e5d0(param_2,param_3,0x25);
      FUN_1004e5d0(param_2,param_3,0x56);
      FUN_1004dabf((int)param_2,uVar5);
      FUN_1004dabf((int)param_2,uVar7);
      FUN_1004dabf((int)param_2,uVar9);
      piVar10 = param_3;
    }
    bVar12 = true;
  }
LAB_1002cd92:
  uVar4 = *(ushort *)((int)param_2 + 0xf2);
  if ((*(int *)(param_1 + 0x1c) == 0x400) || (*(int *)(param_1 + 0x1c) == 0x404)) {
    if ((uVar4 & 0xf0) != 0) {
      uVar9 = FUN_10026a4e((int)param_2,0,0,0,0,1,'\0');
      uVar9 = uVar9 & 0xffff;
      FUN_10029697(param_2,piVar10,(uint)uVar4,0xff,uVar9,uVar9,1,0.01,'\0');
      FUN_1002657e((int)param_2,0x71,8);
      FUN_1002664a(param_2,0,uVar9,0,0,'\0');
      piVar10 = param_2 + 0x5d;
      FUN_100269ca(piVar10,-1,0x43800000);
      FUN_1004e6d0(param_3,(*piVar10 + param_2[0x55] + param_2[0x4d]) * 0x1000000 + 0x1000000U &
                           0x7f000000 | 0x38,param_2 + 0x4d,param_2 + 0x55,piVar10,(int *)0x0);
      goto LAB_1002cea3;
    }
  }
  else if (bVar12) goto LAB_1002cea3;
  FUN_1004e5d0(param_2,piVar10,0x36);
LAB_1002cea3:
  FUN_1004dabf((int)param_2,param_2[0x28]);
  param_2[0x28] = 0;
  return;
}

