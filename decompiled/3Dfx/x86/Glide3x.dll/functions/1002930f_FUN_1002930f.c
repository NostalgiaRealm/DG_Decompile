/*
 * FUN_1002930f at 1002930f
 * undefined __fastcall FUN_1002930f(int param_1, int * param_2, int * param_3)
 * Address ranges: 1002930f-10029a58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002930f(int param_1,int *param_2,int *param_3)

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
  piVar10 = param_2;
  do {
    bVar3 = '\x01' << ((char)local_14 - 1U & 0x1f);
    bVar11 = (local_6 & bVar3) != 0;
    bVar12 = (local_7 & bVar3) != 0;
    if ((local_6 == bVar3) || (((char)piVar10[0x48] == '\0' && (local_14 == 1)))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((local_7 == bVar3) || ((*(char *)((int)piVar10 + 0x121) == '\0' && (local_14 == 1)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    local_6 = local_6 & ~bVar3;
    local_7 = local_7 & ~bVar3;
    if (((bVar2) && ((char)piVar10[0x6d] == '\0')) && (*(char *)((int)piVar10 + 0x1b7) == '\0')) {
      bVar11 = true;
    }
    if ((bVar1) && (*(char *)((int)piVar10 + 0x1b6) == '\0')) {
      bVar12 = true;
    }
    if ((bVar11) || (local_14 == 1)) {
      FUN_100291d4(param_1,piVar10,param_3,local_14 - 1,'\0');
    }
    if (((bVar12) || (local_14 == 1)) &&
       (FUN_100291d4(param_1,piVar10,param_3,local_14 - 1,'\x01'), local_14 == 1)) {
      iVar8 = *(int *)(param_1 + 0x634);
      if ((*(int *)(param_1 + 0x4c) != 0) || (iVar8 != 0)) {
        FUN_10026a69((undefined2 *)(piVar10 + 0x2c),(uint)*(ushort *)(piVar10 + 0x2f),0.0,
                     -(uint)(*(int *)(param_1 + 0x4c) != 0) & 0x40,
                     (float)(-(uint)(iVar8 != 0) & 0x640),-(uint)(iVar8 != 0) & 0x650,piVar10,
                     param_3);
      }
    }
    if ((!bVar1) || (local_20 = 0x70, *(char *)((int)piVar10 + 0x1b6) != '\0')) {
      local_20 = 0xf0;
    }
    if (((!bVar2) || ((char)piVar10[0x6d] != '\0')) ||
       (local_1c = 0x70, *(char *)((int)piVar10 + 0x1b7) != '\0')) {
      local_1c = 0xf0;
    }
    iVar8 = local_14 * 0xe;
    if ((((*(ushort *)(iVar8 + 0xac + (int)piVar10) & 0xefff) ==
          (*(ushort *)(iVar8 + 0xe4 + (int)piVar10) & 0xefff)) &&
        ((*(ushort *)(iVar8 + 0xa2 + (int)piVar10) & 0xefff) ==
         (*(ushort *)(iVar8 + 0xda + (int)piVar10) & 0xefff))) &&
       (((*(ushort *)(iVar8 + 0xa4 + (int)piVar10) & 0xefff) ==
         (*(ushort *)(iVar8 + 0xdc + (int)piVar10) & 0xefff) &&
        (((*(ushort *)(iVar8 + 0xa6 + (int)piVar10) & 0xefff) ==
          (*(ushort *)(iVar8 + 0xde + (int)piVar10) & 0xefff) &&
         ((*(ushort *)(iVar8 + 0xa8 + (int)piVar10) & 0xefff) ==
          (*(ushort *)(iVar8 + 0xe0 + (int)piVar10) & 0xefff))))))) {
      if (!bVar11) goto LAB_1002956f;
      if ((!bVar12) || ((short)local_20 != (short)local_1c)) goto LAB_10029557;
      cVar13 = '\x01';
      bVar3 = 1;
      iVar6 = (int)piVar10 + 0xa2;
LAB_10029582:
      FUN_10026845((ushort *)(iVar6 + iVar8),piVar10,param_3,local_1c,bVar3,cVar13);
    }
    else {
      if (bVar11) {
LAB_10029557:
        FUN_10026845((ushort *)((int)piVar10 + iVar8 + 0xa2),piVar10,param_3,local_1c,1,'\0');
      }
LAB_1002956f:
      if (bVar12) {
        cVar13 = '\0';
        bVar3 = 0;
        iVar6 = (int)piVar10 + 0xda;
        local_1c = local_20;
        goto LAB_10029582;
      }
    }
    if (bVar1) {
      if (*(char *)((int)piVar10 + 0x1b6) != '\0') {
        FUN_10023f43(piVar10,*(ushort *)(iVar8 + 0xe4 + (int)piVar10),0x70,0,8,param_3,'\x01');
      }
      FUN_10027bdf(param_1,piVar10,param_3,(uint)*(ushort *)(iVar8 + 0xe4 + (int)piVar10));
    }
    if (bVar2) {
      piVar10 = (int *)FUN_10027dca(param_1,piVar10,param_3,
                                    (uint)*(ushort *)(iVar8 + 0xac + (int)piVar10),
                                    *(char *)((int)piVar10 + 0x1b7));
      uVar7 = extraout_EAX & 0xffff;
      uVar4 = (ushort)extraout_EAX & 0xf0;
      uVar9 = uVar7;
      if ((uVar4 != 0x80) && (uVar4 != 0xf0)) {
        uVar9 = (uint)*(ushort *)(iVar8 + 0xac + (int)piVar10);
      }
      FUN_10028f9f(param_1,piVar10,param_3,uVar9);
      FUN_10023c8c((int)piVar10,uVar7);
    }
    uVar9 = 0;
    local_14 = local_14 - 1;
    do {
      if (*(byte *)((int)piVar10 + uVar9 + 0xa8) == local_14) {
        FUN_1004a6b6((int)piVar10,piVar10[uVar9 + 0x1e]);
        piVar10[uVar9 + 0x1e] = 0;
      }
      if (*(byte *)((int)piVar10 + uVar9 + 0xab) == local_14) {
        FUN_1004a6b6((int)piVar10,piVar10[uVar9 + 0x1b]);
        piVar10[uVar9 + 0x1b] = 0;
      }
      if (*(byte *)((int)piVar10 + uVar9 + 0xa5) == local_14) {
        FUN_1004a6b6((int)piVar10,piVar10[uVar9 + 0x21]);
        piVar10[uVar9 + 0x21] = 0;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 3);
  } while (local_14 != 0);
  FUN_1002680b((int)piVar10,*(char *)((int)piVar10 + 0x1b9));
  bVar12 = false;
  if (*(char *)((int)piVar10 + 0x1b9) == '\0') {
    uVar9 = *(uint *)(param_1 + 0x28) & *(uint *)(param_1 + 0x24);
    if (uVar9 == 1) {
LAB_1002994c:
      FUN_1004a618((int)piVar10,1,'\x01');
      FUN_1004b1c7(piVar10,param_3,0x2036);
      FUN_1004b1c7(piVar10,param_3,0x38);
      FUN_1004b1c7(piVar10,param_3,0x1c);
    }
    else {
      if (uVar9 != 2) {
        if (uVar9 == 3) goto LAB_1002994c;
        if (uVar9 != 4) goto LAB_100299b7;
      }
      uVar9 = FUN_1004a618((int)piVar10,1,'\x01');
      uVar7 = FUN_1004a618((int)piVar10,1,'\x01');
      uVar5 = FUN_1004a618((int)param_2,1,'\x01');
      FUN_100267c2(param_2,param_3);
      FUN_1004b1c7(param_2,param_3,0x34);
      FUN_1004b1c7(param_2,param_3,0x33);
      FUN_1004b1c7(param_2,param_3,0x2f);
      FUN_1004b1c7(param_2,param_3,0x43);
      FUN_1004b1c7(param_2,param_3,0x1c);
      FUN_1004b1c7(param_2,param_3,0x19);
      FUN_1004b1c7(param_2,param_3,0xe);
      FUN_1004b1c7(param_2,param_3,0x32);
      FUN_1004b1c7(param_2,param_3,0x29);
      FUN_1004b1c7(param_2,param_3,0x1c);
      FUN_1004b1c7(param_2,param_3,0x3c);
      FUN_1004b1c7(param_2,param_3,0x1e);
      FUN_1004b1c7(param_2,param_3,0x24);
      FUN_1004b1c7(param_2,param_3,0x25);
      FUN_1004a6b6((int)param_2,uVar5);
      FUN_1004a6b6((int)param_2,uVar7);
      FUN_1004a6b6((int)param_2,uVar9);
      piVar10 = param_2;
    }
    bVar12 = true;
  }
LAB_100299b7:
  uVar4 = *(ushort *)((int)piVar10 + 0xf2);
  if ((*(int *)(param_1 + 0x1c) == 0x400) || (*(int *)(param_1 + 0x1c) == 0x404)) {
    if ((uVar4 & 0xf0) != 0) {
      FUN_10026553(piVar10,param_3,(uint)uVar4,0xff,(uint)uVar4,0x71,1,0.01,'\x01');
      goto LAB_10029a3d;
    }
  }
  else if (bVar12) goto LAB_10029a3d;
  FUN_1004b1c7(piVar10,param_3,0x36);
LAB_10029a3d:
  FUN_1004a6b6((int)piVar10,piVar10[0x28]);
  piVar10[0x28] = 0;
  return;
}

