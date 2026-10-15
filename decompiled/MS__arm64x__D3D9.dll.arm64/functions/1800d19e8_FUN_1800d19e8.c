/*
 * FUN_1800d19e8 at 1800d19e8
 * undefined FUN_1800d19e8(void)
 * Address ranges: 1800d19e8-1800d1bf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800d19e8(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  int *param_5,int *param_6,undefined8 param_7,undefined4 *param_8,uint param_9,
                  undefined8 param_10,uint param_11)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  cVar2 = true;
  bVar8 = false;
  if (param_9 == 1) {
    uVar5 = (**(code **)(*param_2 + 0x50))(param_2,param_3,param_4,0);
    uVar6 = FUN_1800d9068(uVar5,param_5,param_6);
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_1800d1950(uVar5,param_5,param_6,param_7,param_8);
      if ((uVar6 & 1) == 0) {
        cVar2 = false;
      }
    }
    else {
      iVar4 = *param_5;
      if (iVar4 == -8) {
        if (param_11 < 0x275) {
          cVar2 = false;
          bVar8 = (bool)cVar2;
          goto LAB_1800d1aa8;
        }
      }
      else {
        bVar8 = (bool)cVar2;
        if (iVar4 == 0 || iVar4 == -7) goto LAB_1800d1aa8;
      }
      cVar2 = *param_6 == iVar4 || 0x277 < param_11;
      bVar8 = (bool)cVar2;
    }
  }
  else if (1 < param_9) {
    return '\0';
  }
LAB_1800d1aa8:
  for (uVar7 = 0;
      (cVar2 != '\0' &&
      (uVar3 = (**(code **)(*param_2 + 0x60))(param_2,param_3,param_4), uVar7 < uVar3));
      uVar7 = uVar7 + 1) {
    uVar5 = (**(code **)(*param_2 + 0x68))(param_2,param_3,param_4,uVar7);
    iVar4 = func_0x000180222cb8(uVar5,&DAT_18023a0a4);
    piVar1 = param_5;
    if ((iVar4 == 0) ||
       (iVar4 = func_0x000180222cb8(uVar5,&DAT_180233844), piVar1 = param_6, iVar4 == 0)) {
      if (bVar8 == false) {
        cVar2 = (**(code **)(*param_2 + 0x78))(param_2,param_3,param_4,uVar7,piVar1);
      }
      else {
        cVar2 = '\0';
      }
    }
    else {
      iVar4 = func_0x000180222cb8(uVar5,s_refrate_18023a0c0);
      if (iVar4 == 0) {
        cVar2 = (**(code **)(*param_2 + 0x78))(param_2,param_3,param_4,uVar7,param_7);
        *param_8 = 1;
      }
    }
  }
  return cVar2;
}

