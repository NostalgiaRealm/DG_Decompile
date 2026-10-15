/*
 * FUN_1006f6e8 at 1006f6e8
 * byte __fastcall FUN_1006f6e8(void * param_1)
 * Address ranges: 1006f6e8-1006f977
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_1006f6e8(void *param_1)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  void *this;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  int local_74 [4];
  int local_64;
  undefined4 local_60 [7];
  undefined4 local_44 [16];
  
  cVar2 = FUN_100306bf(*(int *)((int)param_1 + 0x34));
  if ((((cVar2 == '\0') ||
       (*(uint *)(&DAT_100b04f0 + *(int *)((int)param_1 + 0x1c) * 4) <
        *(uint *)(*(int *)((int)param_1 + 0xe0) + 0x1cef4))) ||
      (*(float *)((int)param_1 + 0x1b4) != 1.0)) ||
     ((*(float *)((int)param_1 + 0x1b8) != 1.0 || (*(int *)((int)param_1 + 0x138) != 1)))) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  *(byte *)((int)param_1 + 0x1be) = bVar3;
  bVar3 = bVar3 ^ 1;
  if (bVar3 == 0) {
    FUN_1006bcc0((void *)((int)param_1 + 0xf0),*(int *)((int)param_1 + 0x20),
                 *(int *)((int)param_1 + 0x24));
    FUN_1006b13e(local_44,*(int *)((int)param_1 + 0x40),*(int *)((int)param_1 + 0x10));
    cVar2 = FUN_100306bf(*(int *)((int)param_1 + 0x34));
    if (cVar2 == '\0') {
      FUN_1007923c(param_1,local_74);
      if (*(char *)((int)param_1 + 0x1bc) != '\0') {
        bVar13 = *(int *)((int)param_1 + 0x1c) != 0x15;
        iVar8 = 0x2c;
        if (bVar13) {
          iVar8 = 0x1c;
        }
        local_74[0] = *(int *)(iVar8 + *(int *)((int)param_1 + 0xe0));
        iVar8 = 0x30;
        if (bVar13) {
          iVar8 = 0x20;
        }
        local_74[1] = *(int *)(iVar8 + *(int *)((int)param_1 + 0xe0));
        iVar8 = 0x34;
        if (bVar13) {
          iVar8 = 0x24;
        }
        local_74[3] = *(int *)(iVar8 + *(int *)((int)param_1 + 0xe0));
      }
      uVar5 = *(uint *)((int)param_1 + 0x28);
      if (uVar5 == 0) {
        uVar5 = *(uint *)((int)param_1 + 0x20);
      }
      if ((1 < uVar5) || (1 < *(uint *)((int)param_1 + 0x24))) {
        *(undefined4 *)((int)param_1 + 0x138) = 1;
      }
      cVar2 = FUN_1006b825(local_44,*(uint *)((int)param_1 + 0x130),*(uint *)((int)param_1 + 0x134),
                           uVar5,*(uint *)((int)param_1 + 0x24),*(int *)((int)param_1 + 0x138),
                           local_74[0],local_74[1],0,
                           *(undefined4 *)(&DAT_100b0408 + *(int *)((int)param_1 + 0x1c) * 4),0,
                           local_74[3],0,'\x01','\x01',0,0);
      if (cVar2 == '\0') {
        return 0;
      }
      puVar12 = (undefined4 *)((int)param_1 + 0x48);
      FUN_1006f1b5(param_1,(int)puVar12,(int)local_44);
      if (*(int *)((int)param_1 + 0x1c) == 0) {
        puVar9 = (undefined4 *)((int)param_1 + 0x48);
        puVar11 = (undefined4 *)((int)param_1 + 0x13c);
        for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        FUN_1006f978(param_1);
      }
      else {
        FUN_1006bcc0(puVar12,*(uint *)((int)param_1 + 0x2c),*(int *)((int)param_1 + 0x24));
      }
      puVar9 = local_44;
      for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      }
      *(uint *)((int)param_1 + 0x2c) = uVar5;
    }
    else {
      this = (void *)FUN_1006f182((int)param_1);
      piVar4 = FUN_10078e00(this,local_60);
      iVar8 = *(int *)((int)param_1 + 0x1c);
      uVar1 = *(undefined4 *)(&DAT_100b0408 + iVar8 * 4);
      piVar10 = local_74;
      for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar10 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar10 = piVar10 + 1;
      }
      uVar7 = 0x1688;
      if ((iVar8 == 0x19) || (iVar8 == 0x1a)) {
        uVar7 = 0x1249;
      }
      cVar2 = FUN_1006b825(local_44,*(uint *)((int)param_1 + 0x130),*(uint *)((int)param_1 + 0x134),
                           *(uint *)((int)param_1 + 0x20),*(uint *)((int)param_1 + 0x24),
                           *(int *)((int)param_1 + 0x138),local_74[0],local_74[1],local_74[2],uVar1,
                           uVar7,0,local_64,'\x01','\x01',0,1);
      if (cVar2 == '\0') {
        return 0;
      }
      puVar12 = (undefined4 *)((int)param_1 + 0x48);
      FUN_1006f1b5(param_1,(int)puVar12,(int)local_44);
      FUN_1006bcc0(puVar12,*(int *)((int)param_1 + 0x2c),*(int *)((int)param_1 + 0x24));
      puVar9 = local_44;
      for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      }
    }
    bVar3 = 1;
  }
  return bVar3;
}

