/*
 * FUN_10076082 at 10076082
 * undefined __fastcall FUN_10076082(int * param_1, uint * param_2)
 * Address ranges: 10076082-1007635c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10076082(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *extraout_ECX;
  uint uVar7;
  uint *local_18;
  
  iVar1 = FUN_10073bf1(*param_2 >> 4 & 7);
  uVar7 = 2;
  if (iVar1 == 2) {
    uVar7 = 0;
  }
  uVar2 = FUN_10073bc4(param_2);
  if ((uVar2 & 0xff) == 0 && (*param_2 & 0x200) == 0) {
    local_18 = (uint *)FUN_10072f0b((int)param_2,uVar7);
  }
  else {
    local_18 = (uint *)0x0;
  }
  uVar3 = FUN_10073bc4(param_2);
  if ((char)uVar3 == '\0') {
    iVar4 = FUN_10073bf1(*param_2 >> 4 & 7);
  }
  else {
    iVar4 = FUN_10073c0b(extraout_ECX);
  }
  uVar2 = *param_2;
  uVar5 = FUN_1007320a(uVar2 & 0xf,(uVar2 & 0xc00) != 0,(byte)(uVar2 >> 7) & 1,
                       (byte)(uVar2 >> 8) & 1);
  if ((char)uVar5 == '\0') {
    puVar6 = (uint *)FUN_10075e52(param_1,param_2,(uint)local_18,iVar4);
  }
  else {
    puVar6 = FUN_10075b7e(param_1,param_2,local_18,iVar4,(byte)(uVar2 >> 0xe) & 1);
  }
  if (puVar6 != (uint *)0x0) {
    if ((*param_2 & 0x2000) != 0) {
      FUN_100a138c((int *)(param_2 + 3),param_1,0x38);
    }
    if (((*param_2 & 0x4000) != 0) && ((*param_2 & 0x70) != 0)) {
      FUN_100a138c((int *)(param_2 + 3),param_1,0x36);
    }
    iVar4 = FUN_10073977(param_1,param_2,puVar6,iVar4);
    if ((*param_2 & 0x70) == 0 && ((uint)puVar6 & 0x3f00) == 0) {
      if ((*param_2 & 0x200) == 0) {
        local_18 = (uint *)FUN_10072f0b((int)param_2,uVar7);
      }
      else {
        local_18 = (uint *)0x0;
      }
      iVar4 = FUN_100739db(param_1,(int)param_2,puVar6,iVar4);
    }
    if (local_18 == (uint *)0x0) {
      if (iVar4 == iVar1) {
        FUN_10072f0b((int)param_2,uVar7);
        FUN_100a138c((int *)(param_2 + 3),param_1,0x36);
        if ((*param_2 & 0x200) != 0) {
          FUN_10072f0b((int)param_2,uVar7 | 1);
          FUN_100a138c((int *)(param_2 + 3),param_1,0x36);
        }
      }
      else if ((*param_2 & 0x200) == 0) {
        FUN_10072f0b((int)param_2,uVar7);
        FUN_1007324a(param_1,(int)param_2);
      }
      else {
        FUN_1007324a(param_1,(int)param_2);
        FUN_10072f0b((int)param_2,uVar7);
        FUN_100a138c((int *)(param_2 + 3),param_1,0x36);
        FUN_10072f0b((int)param_2,uVar7 | 1);
        FUN_100a138c((int *)(param_2 + 3),param_1,0x36);
      }
    }
  }
  if (puVar6 != local_18) {
    FUN_100a068b((int)(param_2 + 3),(uint)puVar6);
  }
  return;
}

