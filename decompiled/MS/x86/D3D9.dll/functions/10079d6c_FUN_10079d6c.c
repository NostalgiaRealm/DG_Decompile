/*
 * FUN_10079d6c at 10079d6c
 * byte __fastcall FUN_10079d6c(void * param_1)
 * Address ranges: 10079d6c-1007a096
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_10079d6c(void *param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  void *this;
  int *piVar6;
  undefined4 uVar7;
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
  
  cVar2 = FUN_1003a4d0(*(int *)((int)param_1 + 0x34));
  if (cVar2 == '\0') {
    iVar4 = FUN_10077c40((int)param_1);
    if ((char)iVar4 != '\0') {
LAB_10079eee:
      if ((((*(int *)(*(int *)((int)param_1 + 0x10) * 0x1510 + 0x520 + *(int *)((int)param_1 + 0x40)
                     ) != 0xa000) && (*(float *)((int)param_1 + 0x148) == 1.0)) &&
          (*(float *)((int)param_1 + 0x14c) == 1.0)) && (*(int *)((int)param_1 + 0xe4) == 1)) {
        bVar3 = 0;
        goto LAB_10079d9b;
      }
    }
  }
  else if (*(uint *)(*(int *)((int)param_1 + 0xa8) + 0x1cef4) <=
           *(uint *)(&DAT_100d2658 + *(int *)((int)param_1 + 0x1c) * 4)) goto LAB_10079eee;
  bVar3 = 1;
LAB_10079d9b:
  *(byte *)((int)param_1 + 0x152) = bVar3;
  bVar3 = bVar3 ^ 1;
  if (bVar3 == 0) {
    uVar5 = *(uint *)((int)param_1 + 0x28);
    if (uVar5 == 0) {
      uVar5 = *(uint *)((int)param_1 + 0x20);
    }
    FUN_10077958((void *)((int)param_1 + 0xac),uVar5,*(uint *)((int)param_1 + 0x24));
    uVar5 = *(uint *)((int)param_1 + 0x28);
    if (uVar5 == 0) {
      uVar5 = *(uint *)((int)param_1 + 0x20);
    }
    FUN_10077958((void *)((int)param_1 + 0x128),uVar5,*(uint *)((int)param_1 + 0x24));
    FUN_100773d5(local_28,*(int *)((int)param_1 + 0x40),*(int *)((int)param_1 + 0x10));
    cVar2 = FUN_1003a4d0(*(int *)((int)param_1 + 0x34));
    if (cVar2 == '\0') {
      FUN_1008f5b4(param_1,local_54);
      if (*(char *)((int)param_1 + 0x150) == '\0') {
        local_60 = local_54[0];
      }
      else {
        bVar12 = *(int *)((int)param_1 + 0x1c) != 0x15;
        iVar4 = 0x2c;
        if (bVar12) {
          iVar4 = 0x1c;
        }
        local_60 = *(int *)(iVar4 + *(int *)((int)param_1 + 4));
        iVar4 = 0x30;
        if (bVar12) {
          iVar4 = 0x20;
        }
        local_54[1] = *(int *)(iVar4 + *(int *)((int)param_1 + 4));
        iVar4 = 0x34;
        if (bVar12) {
          iVar4 = 0x24;
        }
        local_54[3] = *(int *)(iVar4 + *(int *)((int)param_1 + 4));
      }
      uVar5 = *(uint *)((int)param_1 + 0x28);
      if (uVar5 == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x20);
      }
      uVar1 = *(uint *)((int)param_1 + 0x24);
      if ((1 < uVar5) || (1 < uVar1)) {
        *(undefined4 *)((int)param_1 + 0xe4) = 1;
      }
      if ((*(int *)(*(int *)((int)param_1 + 0x10) * 0x1510 + 0x520 + *(int *)((int)param_1 + 0x40))
           == 0xa000) && (uVar1 != 1)) {
        local_54[1] = 0;
      }
      cVar2 = FUN_100777a5(*(undefined4 *)((int)param_1 + 0xdc),*(undefined4 *)((int)param_1 + 0xe0)
                           ,uVar5,uVar1,*(int *)((int)param_1 + 0xe4),local_60,local_54[1],
                           local_54[3],0,0,0x28,0,-(uint)(uVar1 != 1) & 4,0,'\0','\0');
      if (cVar2 == '\0') {
        return 0;
      }
      puVar9 = (undefined4 *)((int)param_1 + 0x48);
      FUN_10079aeb(param_1,(int)puVar9,(int)local_28);
      if (*(int *)((int)param_1 + 0x1c) == 0) {
        iVar4 = *(int *)((int)param_1 + 0x74);
        puVar11 = (undefined4 *)((int)param_1 + 0xe8);
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        if (iVar4 != 0) {
          FUN_1007a097(param_1);
        }
      }
      else {
        FUN_10077958(puVar9,*(uint *)((int)param_1 + 0x2c),*(uint *)((int)param_1 + 0x24));
      }
      *(uint *)((int)param_1 + 0x2c) = uVar5;
    }
    else {
      this = (void *)FUN_10079ab8((int)param_1);
      piVar6 = FUN_1008f0a2(this,local_40);
      iVar4 = *(int *)((int)param_1 + 0x40);
      piVar10 = local_54;
      for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar10 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar10 = piVar10 + 1;
      }
      uVar7 = 0x48;
      if (*(int *)(*(int *)((int)param_1 + 0x10) * 0x1510 + 0x520 + iVar4) == 0xa000) {
        bVar12 = *(int *)((int)param_1 + 0xe4) != 1;
        if (bVar12) {
          local_54[1] = 0;
        }
        uVar7 = 0x40;
        if (!bVar12) {
          uVar7 = 0x48;
        }
        if (*(int *)((int)param_1 + 0x24) != 1) {
          local_54[1] = 0;
        }
      }
      cVar2 = FUN_100777a5(*(undefined4 *)((int)param_1 + 0xdc),*(undefined4 *)((int)param_1 + 0xe0)
                           ,*(uint *)((int)param_1 + 0x20),*(uint *)((int)param_1 + 0x24),
                           *(int *)((int)param_1 + 0xe4),local_54[0],local_54[1],0,local_44,0,uVar7,
                           0,-(uint)(*(int *)((int)param_1 + 0x24) != 1) & 4,0,'\0','\x01');
      if (cVar2 == '\0') {
        return 0;
      }
      FUN_10079aeb(param_1,(int)param_1 + 0x48,(int)local_28);
      FUN_10077958((void *)((int)param_1 + 0x48),1,1);
    }
    bVar3 = 1;
    puVar9 = local_28;
    puVar11 = (undefined4 *)((int)param_1 + 0x48);
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  return bVar3;
}

