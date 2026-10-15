/*
 * FUN_10034cc9 at 10034cc9
 * undefined __fastcall FUN_10034cc9(int param_1, int * param_2, int * param_3)
 * Address ranges: 10034cc9-100353e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10034cc9(int param_1,int *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  uint local_20;
  uint local_1c;
  uint local_18;
  byte local_7;
  byte local_6;
  
  local_6 = *(byte *)(param_2 + 0x48);
  local_7 = *(byte *)((int)param_2 + 0x121);
  local_18 = 4;
  do {
    bVar3 = '\x01' << ((char)local_18 - 1U & 0x1f);
    bVar10 = (local_6 & bVar3) != 0;
    bVar11 = (local_7 & bVar3) != 0;
    if ((local_6 == bVar3) || (((char)param_2[0x48] == '\0' && (local_18 == 1)))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((local_7 == bVar3) || ((*(char *)((int)param_2 + 0x121) == '\0' && (local_18 == 1)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    local_6 = local_6 & ~bVar3;
    local_7 = local_7 & ~bVar3;
    if (((bVar2) && ((char)param_2[0x6d] == '\0')) && (*(char *)((int)param_2 + 0x1b7) == '\0')) {
      bVar10 = true;
    }
    if ((bVar1) && (*(char *)((int)param_2 + 0x1b6) == '\0')) {
      bVar11 = true;
    }
    if ((bVar10) || (local_18 == 1)) {
      FUN_10034bfc(param_1,param_2,param_3,local_18 - 1,'\0');
    }
    if ((((bVar11) || (local_18 == 1)) &&
        (FUN_10034bfc(param_1,param_2,param_3,local_18 - 1,'\x01'), local_18 == 1)) &&
       (*(int *)(param_1 + 0x4c) != 0)) {
      FUN_10032ebc((undefined2 *)(param_2 + 0x2c),(uint)*(ushort *)(param_2 + 0x2f));
    }
    if ((!bVar1) || (local_20 = 0x70, *(char *)((int)param_2 + 0x1b6) != '\0')) {
      local_20 = 0xf0;
    }
    if (((!bVar2) || ((char)param_2[0x6d] != '\0')) ||
       (local_1c = 0x70, *(char *)((int)param_2 + 0x1b7) != '\0')) {
      local_1c = 0xf0;
    }
    iVar8 = local_18 * 0xe;
    if (((((*(ushort *)(iVar8 + 0xac + (int)param_2) & 0xefff) ==
           (*(ushort *)(iVar8 + 0xe4 + (int)param_2) & 0xefff)) &&
         ((*(ushort *)(iVar8 + 0xa2 + (int)param_2) & 0xefff) ==
          (*(ushort *)(iVar8 + 0xda + (int)param_2) & 0xefff))) &&
        ((*(ushort *)(iVar8 + 0xa4 + (int)param_2) & 0xefff) ==
         (*(ushort *)(iVar8 + 0xdc + (int)param_2) & 0xefff))) &&
       (((*(ushort *)(iVar8 + 0xa6 + (int)param_2) & 0xefff) ==
         (*(ushort *)(iVar8 + 0xde + (int)param_2) & 0xefff) &&
        ((*(ushort *)(iVar8 + 0xa8 + (int)param_2) & 0xefff) ==
         (*(ushort *)(iVar8 + 0xe0 + (int)param_2) & 0xefff))))) {
      if (!bVar10) goto LAB_10034f00;
      if ((!bVar11) || ((short)local_20 != (short)local_1c)) goto LAB_10034ee8;
      cVar12 = '\x01';
      bVar3 = 1;
      iVar6 = (int)param_2 + 0xa2;
LAB_10034f13:
      FUN_10032c98((ushort *)(iVar6 + iVar8),param_2,param_3,local_1c,bVar3,cVar12);
    }
    else {
      if (bVar10) {
LAB_10034ee8:
        FUN_10032c98((ushort *)((int)param_2 + iVar8 + 0xa2),param_2,param_3,local_1c,1,'\0');
      }
LAB_10034f00:
      if (bVar11) {
        cVar12 = '\0';
        bVar3 = 0;
        iVar6 = (int)param_2 + 0xda;
        local_1c = local_20;
        goto LAB_10034f13;
      }
    }
    if (bVar1) {
      if (*(char *)((int)param_2 + 0x1b6) != '\0') {
        FUN_10030396(param_2,*(ushort *)(iVar8 + 0xe4 + (int)param_2),0x70,0,8,param_3,'\x01');
      }
      FUN_100335d0(param_1,param_2,param_3,(uint)*(ushort *)(iVar8 + 0xe4 + (int)param_2));
    }
    if (bVar2) {
      uVar4 = FUN_100337bb(param_1,param_2,param_3,(uint)*(ushort *)(iVar8 + 0xac + (int)param_2),
                           *(char *)((int)param_2 + 0x1b7));
      uVar7 = (uint)uVar4;
      uVar9 = uVar7;
      if (((uVar4 & 0xf0) != 0x80) && ((uVar4 & 0xf0) != 0xf0)) {
        uVar9 = (uint)*(ushort *)(iVar8 + 0xac + (int)param_2);
      }
      FUN_100349c7(param_1,param_2,param_3,uVar9);
      FUN_100300df((int)param_2,uVar7);
    }
    uVar9 = 0;
    local_18 = local_18 - 1;
    do {
      if (*(byte *)((int)param_2 + uVar9 + 0xa8) == local_18) {
        FUN_10047bce((int)param_2,param_2[uVar9 + 0x1e]);
        param_2[uVar9 + 0x1e] = 0;
      }
      if (*(byte *)((int)param_2 + uVar9 + 0xab) == local_18) {
        FUN_10047bce((int)param_2,param_2[uVar9 + 0x1b]);
        param_2[uVar9 + 0x1b] = 0;
      }
      if (*(byte *)((int)param_2 + uVar9 + 0xa5) == local_18) {
        FUN_10047bce((int)param_2,param_2[uVar9 + 0x21]);
        param_2[uVar9 + 0x21] = 0;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 3);
  } while (local_18 != 0);
  FUN_10032c5e((int)param_2,*(char *)((int)param_2 + 0x1b9));
  bVar11 = false;
  if (*(char *)((int)param_2 + 0x1b9) == '\0') {
    uVar9 = *(uint *)(param_1 + 0x28) & *(uint *)(param_1 + 0x24);
    if (uVar9 == 1) {
LAB_100352dd:
      FUN_10047b30((int)param_2,1,'\x01');
      FUN_100486df(param_2,param_3,0x2036);
      FUN_100486df(param_2,param_3,0x38);
      FUN_100486df(param_2,param_3,0x1c);
    }
    else {
      if (uVar9 != 2) {
        if (uVar9 == 3) goto LAB_100352dd;
        if (uVar9 != 4) goto LAB_10035348;
      }
      uVar9 = FUN_10047b30((int)param_2,1,'\x01');
      uVar7 = FUN_10047b30((int)param_2,1,'\x01');
      uVar5 = FUN_10047b30((int)param_2,1,'\x01');
      FUN_10032c15(param_2,param_3);
      FUN_100486df(param_2,param_3,0x34);
      FUN_100486df(param_2,param_3,0x33);
      FUN_100486df(param_2,param_3,0x2f);
      FUN_100486df(param_2,param_3,0x43);
      FUN_100486df(param_2,param_3,0x1c);
      FUN_100486df(param_2,param_3,0x19);
      FUN_100486df(param_2,param_3,0xe);
      FUN_100486df(param_2,param_3,0x32);
      FUN_100486df(param_2,param_3,0x29);
      FUN_100486df(param_2,param_3,0x1c);
      FUN_100486df(param_2,param_3,0x3c);
      FUN_100486df(param_2,param_3,0x1e);
      FUN_100486df(param_2,param_3,0x24);
      FUN_100486df(param_2,param_3,0x25);
      FUN_10047bce((int)param_2,uVar5);
      FUN_10047bce((int)param_2,uVar7);
      FUN_10047bce((int)param_2,uVar9);
    }
    bVar11 = true;
  }
LAB_10035348:
  uVar4 = *(ushort *)((int)param_2 + 0xf2);
  if ((*(int *)(param_1 + 0x1c) == 0x400) || (*(int *)(param_1 + 0x1c) == 0x404)) {
    if ((uVar4 & 0xf0) != 0) {
      FUN_100329a6(param_2,param_3,(uint)uVar4,0xff,(uint)uVar4,0x71,1,0.01,'\x01');
      goto LAB_100353ce;
    }
  }
  else if (bVar11) goto LAB_100353ce;
  FUN_100486df(param_2,param_3,0x36);
LAB_100353ce:
  FUN_10047bce((int)param_2,param_2[0x28]);
  param_2[0x28] = 0;
  return;
}

