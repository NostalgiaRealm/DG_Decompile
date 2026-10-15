/*
 * FUN_10022150 at 10022150
 * undefined FUN_10022150(void)
 * Address ranges: 10022150-10022347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10022150(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 local_70;
  uint local_6c;
  int *local_68;
  int local_64;
  undefined8 local_60;
  undefined4 local_58;
  uint uStack_54;
  uint local_50;
  undefined4 uStack_4c;
  
  iVar5 = *(int *)(param_1 + 0x98);
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
    iVar2 = param_2 + param_3 * *(int *)(param_1 + 0x2c);
    iVar5 = (*(code *)PTR_FUN_100ba248)(iVar5 + iVar2 * 0x20 + 0x10);
    if (iVar5 == 0) {
      if (*(int *)(param_1 + 0x1c) - 0x19U < 2) {
        local_70 = 0;
        local_6c = 0;
        uVar7 = FUN_10022800(param_1,param_2,param_3,&local_6c,&local_70,&local_64);
        uVar3 = local_6c;
        if ((uVar7 & 1) != 0) {
          local_68 = (int *)(param_1 + 0x44);
          local_60 = 0;
          uVar1 = *(undefined4 *)(*local_68 + 0x1304);
          uStack_54 = *(uint *)(param_1 + 0x14) >> (ulonglong)(param_2 & 0x1f);
          if (uStack_54 == 0) {
            uStack_54 = 1;
          }
          local_58 = 0;
          local_50 = *(uint *)(param_1 + 0x18) >> (ulonglong)(param_2 & 0x1f);
          if (local_50 == 0) {
            local_50 = 1;
          }
          uStack_4c = 1;
          iVar5 = *(int *)(param_1 + 0x2c);
          local_64 = param_2 + (*(int *)(param_1 + 0x24) + param_3) * iVar5;
          uVar4 = FUN_10022b18(param_1,uVar1,*(undefined4 *)(param_1 + 0x54),
                               param_2 + iVar5 * param_3,*local_68 + 0x1430,&local_60,local_6c,
                               local_70);
          local_6c = CONCAT31(local_6c._1_3_,uVar4);
          uVar6 = FUN_10022b18(param_1,uVar1,*(undefined4 *)(param_1 + 0x54),local_64,
                               *local_68 + 0x1430,&local_60,uVar3,local_70);
          uVar6 = uVar6 & 0xff & local_6c & 0xff;
          FUN_100229b8(param_1,param_2,param_3);
          (*(code *)PTR_FUN_100ba2bc)(*(int *)(param_1 + 0x98) + iVar2 * 0x20 + 0x10);
        }
      }
      else {
        uVar6 = FUN_10021df0(param_1,param_1 + 0x48,param_1 + 0x84);
        uVar6 = uVar6 & 0xff;
      }
    }
  }
  return uVar6;
}

