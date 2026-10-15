/*
 * FUN_100858ce at 100858ce
 * byte __fastcall FUN_100858ce(void * param_1)
 * Address ranges: 100858ce-10085b71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_100858ce(void *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  void *this;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 extraout_EDX;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  int local_74 [4];
  int local_64;
  undefined4 local_60 [7];
  undefined4 local_44 [16];
  
  cVar1 = FUN_1003a4d0(*(int *)((int)param_1 + 0x34));
  if (cVar1 == '\0') {
    iVar3 = FUN_10077c40((int)param_1);
    if ((char)iVar3 != '\0') {
LAB_100859fc:
      if (((*(float *)((int)param_1 + 0x1b4) == 1.0) && (*(float *)((int)param_1 + 0x1b8) == 1.0))
         && (*(int *)((int)param_1 + 0x138) == 1)) {
        bVar2 = 0;
        goto LAB_100858fd;
      }
    }
  }
  else if (*(uint *)(*(int *)((int)param_1 + 0xe0) + 0x1cef4) <=
           *(uint *)(&DAT_100d2658 + *(int *)((int)param_1 + 0x1c) * 4)) goto LAB_100859fc;
  bVar2 = 1;
LAB_100858fd:
  *(byte *)((int)param_1 + 0x1be) = bVar2;
  bVar2 = bVar2 ^ 1;
  if (bVar2 == 0) {
    FUN_10081bba((void *)((int)param_1 + 0xf0),*(int *)((int)param_1 + 0x20),
                 *(int *)((int)param_1 + 0x24));
    FUN_10081034(local_44,*(int *)((int)param_1 + 0x40),*(int *)((int)param_1 + 0x10));
    cVar1 = FUN_1003a4d0(*(int *)((int)param_1 + 0x34));
    if (cVar1 == '\0') {
      FUN_1008f5b4(param_1,local_74);
      if (*(char *)((int)param_1 + 0x1bc) != '\0') {
        bVar11 = *(int *)((int)param_1 + 0x1c) != 0x15;
        iVar3 = 0x2c;
        if (bVar11) {
          iVar3 = 0x1c;
        }
        local_74[0] = *(int *)(iVar3 + *(int *)((int)param_1 + 0xe0));
        iVar3 = 0x30;
        if (bVar11) {
          iVar3 = 0x20;
        }
        local_74[1] = *(int *)(iVar3 + *(int *)((int)param_1 + 0xe0));
        iVar3 = 0x34;
        if (bVar11) {
          iVar3 = 0x24;
        }
        local_74[3] = *(int *)(iVar3 + *(int *)((int)param_1 + 0xe0));
      }
      uVar6 = *(uint *)((int)param_1 + 0x28);
      if (uVar6 == 0) {
        uVar6 = *(uint *)((int)param_1 + 0x20);
      }
      if ((1 < uVar6) || (1 < *(uint *)((int)param_1 + 0x24))) {
        *(undefined4 *)((int)param_1 + 0x138) = 1;
      }
      cVar1 = FUN_10081718(local_44,*(uint *)((int)param_1 + 0x130),*(uint *)((int)param_1 + 0x134),
                           uVar6,*(uint *)((int)param_1 + 0x24),*(int *)((int)param_1 + 0x138),
                           local_74[0],local_74[1],0,
                           *(undefined4 *)(&DAT_100d2550 + *(int *)((int)param_1 + 0x1c) * 4),0,
                           local_74[3],0,'\x01','\x01',0,0);
      if (cVar1 == '\0') {
        return 0;
      }
      puVar10 = (undefined4 *)((int)param_1 + 0x48);
      FUN_1008539b(param_1,(int)puVar10,(int)local_44);
      if (*(int *)((int)param_1 + 0x1c) == 0) {
        puVar7 = (undefined4 *)((int)param_1 + 0x48);
        puVar9 = (undefined4 *)((int)param_1 + 0x13c);
        for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        FUN_10085b72(param_1);
      }
      else {
        FUN_10081bba(puVar10,*(uint *)((int)param_1 + 0x2c),*(int *)((int)param_1 + 0x24));
      }
      puVar7 = local_44;
      for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      }
      *(uint *)((int)param_1 + 0x2c) = uVar6;
    }
    else {
      this = (void *)FUN_10085368((int)param_1);
      piVar4 = FUN_1008f0a2(this,local_60);
      piVar8 = local_74;
      for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar8 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar8 = piVar8 + 1;
      }
      iVar13 = 1;
      bVar2 = 0;
      cVar12 = '\x01';
      cVar1 = '\x01';
      iVar3 = 0;
      uVar5 = FUN_10082049(*(int *)((int)param_1 + 0x1c));
      cVar1 = FUN_10081718(local_44,*(uint *)((int)param_1 + 0x130),*(uint *)((int)param_1 + 0x134),
                           *(uint *)((int)param_1 + 0x20),*(uint *)((int)param_1 + 0x24),
                           *(int *)((int)param_1 + 0x138),local_74[0],local_74[1],local_74[2],
                           extraout_EDX,uVar5,iVar3,local_64,cVar1,cVar12,bVar2,iVar13);
      if (cVar1 == '\0') {
        return 0;
      }
      puVar10 = (undefined4 *)((int)param_1 + 0x48);
      FUN_1008539b(param_1,(int)puVar10,(int)local_44);
      FUN_10081bba(puVar10,*(int *)((int)param_1 + 0x2c),*(int *)((int)param_1 + 0x24));
      puVar7 = local_44;
      for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    bVar2 = 1;
  }
  return bVar2;
}

