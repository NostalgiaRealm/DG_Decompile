/*
 * FUN_100c26c9 at 100c26c9
 * uint __fastcall FUN_100c26c9(int * param_1)
 * Address ranges: 100c26c9-100c284b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

uint __fastcall FUN_100c26c9(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  SIZE_T SVar4;
  undefined4 *puVar5;
  int iVar6;
  int **ppiVar7;
  undefined4 local_84 [2];
  undefined8 local_7c;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int *local_4c [2];
  undefined1 local_44 [24];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = param_1[6];
  local_14 = param_1[7];
  ppiVar7 = local_4c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppiVar7 = (int *)0x0;
    ppiVar7 = ppiVar7 + 1;
  }
  local_10 = 0;
  piVar1 = *(int **)(param_1[1] * 0x18 + *param_1);
  uVar2 = (**(code **)(*piVar1 + 0x9c))(piVar1,&local_18,&DAT_100d8d64,local_4c);
  if (-1 < (int)uVar2) {
    local_84[0] = 1;
    local_2c = 3;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_7c = 0;
    local_74 = param_1[7] * 8;
    if ((*(byte *)(param_1[1] * 0x18 + 0xc + *param_1) & 1) != 0) {
      local_74 = param_1[7] * 0xc;
    }
    local_70 = 0;
    local_64 = 0;
    local_6c = 1;
    local_68 = 1;
    local_66 = 1;
    local_60 = 1;
    local_5c = 0;
    local_58 = 1;
    local_54 = 0;
    piVar1 = *(int **)(param_1[1] * 0x18 + *param_1);
    iVar6 = (**(code **)(*piVar1 + 0x6c))
                      (piVar1,&local_2c,0,local_84,0x400,0,&DAT_100d6498,local_4c + 1);
    if (-1 < iVar6) {
      local_c = 0;
      local_8 = 0;
      (**(code **)(*local_4c[1] + 0x20))(local_4c[1],0,&local_c,local_44);
      piVar1 = param_1 + 2;
      if (param_1[3] == 0) {
        iVar6 = param_1[4];
        if (param_1[3] != iVar6) {
LAB_100c2834:
          ppiVar7 = local_4c;
          puVar5 = (undefined4 *)(param_1[3] * 0x20 + *piVar1);
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar5 = *ppiVar7;
            ppiVar7 = ppiVar7 + 1;
            puVar5 = puVar5 + 1;
          }
          param_1[3] = param_1[3] + 1;
          return 1;
        }
        if (iVar6 == 0) {
          uVar2 = 0x10;
        }
        else {
          uVar2 = iVar6 * 2;
        }
        SVar4 = (SIZE_T)((ulonglong)uVar2 * 0x20);
        if ((int)((ulonglong)uVar2 * 0x20 >> 0x20) != 0) {
          SVar4 = 0xffffffff;
        }
        puVar5 = (undefined4 *)FUN_100cfd89(SVar4);
        if (puVar5 != (undefined4 *)0x0) {
          FUN_100cff00(puVar5,(undefined4 *)*piVar1,param_1[4] << 5);
          thunk_FUN_100cfd6c((LPVOID)*piVar1);
          *piVar1 = (int)puVar5;
          param_1[4] = uVar2;
          goto LAB_100c2834;
        }
      }
      else {
        uVar3 = FUN_100bfb92(piVar1,param_1[5] + 1,local_4c);
        if ((char)uVar3 != '\0') {
          return 1;
        }
      }
      (**(code **)(*local_4c[1] + 8))(local_4c[1]);
    }
    uVar2 = (**(code **)(*local_4c[0] + 8))(local_4c[0]);
  }
  return uVar2 & 0xffffff00;
}

