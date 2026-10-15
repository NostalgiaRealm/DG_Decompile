/*
 * FUN_10063f60 at 10063f60
 * byte __fastcall FUN_10063f60(void * param_1)
 * Address ranges: 10063f60-10064260
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_10063f60(void *param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  void *this;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  bool bVar12;
  int local_60;
  int local_54 [4];
  int local_44;
  undefined4 local_40 [6];
  undefined4 local_28 [9];
  
  cVar2 = FUN_100306bf(*(int *)((int)param_1 + 0x34));
  if (((((cVar2 == '\0') ||
        (*(uint *)(&DAT_100b04f0 + *(int *)((int)param_1 + 0x1c) * 4) <
         *(uint *)(*(int *)((int)param_1 + 0xa8) + 0x1cef4))) ||
       (*(int *)(*(int *)((int)param_1 + 0x10) * 0x1510 + 0x520 + *(int *)((int)param_1 + 0x40)) ==
        0xa000)) ||
      ((*(float *)((int)param_1 + 0x148) != 1.0 || (*(float *)((int)param_1 + 0x14c) != 1.0)))) ||
     (*(int *)((int)param_1 + 0xe4) != 1)) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  *(byte *)((int)param_1 + 0x152) = bVar3;
  bVar3 = bVar3 ^ 1;
  if (bVar3 == 0) {
    uVar4 = *(uint *)((int)param_1 + 0x28);
    if (uVar4 == 0) {
      uVar4 = *(uint *)((int)param_1 + 0x20);
    }
    FUN_10061cbb((void *)((int)param_1 + 0xac),uVar4,*(uint *)((int)param_1 + 0x24));
    uVar4 = *(uint *)((int)param_1 + 0x28);
    if (uVar4 == 0) {
      uVar4 = *(uint *)((int)param_1 + 0x20);
    }
    FUN_10061cbb((void *)((int)param_1 + 0x128),uVar4,*(uint *)((int)param_1 + 0x24));
    FUN_10061738(local_28,*(int *)((int)param_1 + 0x40),*(int *)((int)param_1 + 0x10));
    cVar2 = FUN_100306bf(*(int *)((int)param_1 + 0x34));
    if (cVar2 == '\0') {
      FUN_1007923c(param_1,local_54);
      if (*(char *)((int)param_1 + 0x150) == '\0') {
        local_60 = local_54[0];
      }
      else {
        bVar12 = *(int *)((int)param_1 + 0x1c) != 0x15;
        iVar8 = 0x2c;
        if (bVar12) {
          iVar8 = 0x1c;
        }
        local_60 = *(int *)(iVar8 + *(int *)((int)param_1 + 4));
        iVar8 = 0x30;
        if (bVar12) {
          iVar8 = 0x20;
        }
        local_54[1] = *(int *)(iVar8 + *(int *)((int)param_1 + 4));
        iVar8 = 0x34;
        if (bVar12) {
          iVar8 = 0x24;
        }
        local_54[3] = *(int *)(iVar8 + *(int *)((int)param_1 + 4));
      }
      uVar4 = *(uint *)((int)param_1 + 0x28);
      if (uVar4 == 0) {
        uVar4 = *(uint *)((int)param_1 + 0x20);
      }
      uVar1 = *(uint *)((int)param_1 + 0x24);
      if ((1 < uVar4) || (1 < uVar1)) {
        *(undefined4 *)((int)param_1 + 0xe4) = 1;
      }
      if ((*(int *)(*(int *)((int)param_1 + 0x10) * 0x1510 + 0x520 + *(int *)((int)param_1 + 0x40))
           == 0xa000) && (uVar1 != 1)) {
        local_54[1] = 0;
      }
      cVar2 = FUN_10061b08(*(undefined4 *)((int)param_1 + 0xdc),*(undefined4 *)((int)param_1 + 0xe0)
                           ,uVar4,uVar1,*(int *)((int)param_1 + 0xe4),local_60,local_54[1],
                           local_54[3],0,0,0x28,0,-(uint)(uVar1 != 1) & 4,0,'\0','\0');
      if (cVar2 == '\0') {
        return 0;
      }
      puVar9 = (undefined4 *)((int)param_1 + 0x48);
      FUN_10063cdf(param_1,(int)puVar9,(int)local_28);
      if (*(int *)((int)param_1 + 0x1c) == 0) {
        iVar8 = *(int *)((int)param_1 + 0x74);
        puVar11 = (undefined4 *)((int)param_1 + 0xe8);
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        if (iVar8 != 0) {
          FUN_10064261(param_1);
        }
      }
      else {
        FUN_10061cbb(puVar9,*(uint *)((int)param_1 + 0x2c),*(uint *)((int)param_1 + 0x24));
      }
      *(uint *)((int)param_1 + 0x2c) = uVar4;
    }
    else {
      this = (void *)FUN_10063cac((int)param_1);
      piVar5 = FUN_10078e00(this,local_40);
      iVar8 = *(int *)((int)param_1 + 0x40);
      piVar10 = local_54;
      for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar10 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar10 = piVar10 + 1;
      }
      uVar6 = 0x48;
      if (*(int *)(*(int *)((int)param_1 + 0x10) * 0x1510 + 0x520 + iVar8) == 0xa000) {
        bVar12 = *(int *)((int)param_1 + 0xe4) != 1;
        if (bVar12) {
          local_54[1] = 0;
        }
        uVar6 = 0x40;
        if (!bVar12) {
          uVar6 = 0x48;
        }
        if (*(int *)((int)param_1 + 0x24) != 1) {
          local_54[1] = 0;
        }
      }
      cVar2 = FUN_10061b08(*(undefined4 *)((int)param_1 + 0xdc),*(undefined4 *)((int)param_1 + 0xe0)
                           ,*(uint *)((int)param_1 + 0x20),*(uint *)((int)param_1 + 0x24),
                           *(int *)((int)param_1 + 0xe4),local_54[0],local_54[1],0,local_44,0,uVar6,
                           0,-(uint)(*(int *)((int)param_1 + 0x24) != 1) & 4,0,'\0','\x01');
      if (cVar2 == '\0') {
        return 0;
      }
      FUN_10063cdf(param_1,(int)param_1 + 0x48,(int)local_28);
      FUN_10061cbb((void *)((int)param_1 + 0x48),1,1);
    }
    bVar3 = 1;
    puVar9 = local_28;
    puVar11 = (undefined4 *)((int)param_1 + 0x48);
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  return bVar3;
}

