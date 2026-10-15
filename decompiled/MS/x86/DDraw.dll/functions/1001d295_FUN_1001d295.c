/*
 * FUN_1001d295 at 1001d295
 * uint * __fastcall FUN_1001d295(int * param_1, uint * param_2, uint param_3, uint param_4, undefined4 param_5, int param_6, uint * param_7)
 * Address ranges: 1001d295-1001d7c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __fastcall
FUN_1001d295(int *param_1,uint *param_2,uint param_3,uint param_4,undefined4 param_5,int param_6,
            uint *param_7)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  
  if ((param_7 == (uint *)0x0) || (param_6 != 1)) {
    bVar2 = false;
    if (param_7 != (uint *)0x0) goto LAB_1001d2ce;
  }
  else {
    bVar2 = true;
LAB_1001d2ce:
    if ((*param_2 & 0x20000) != 0) {
      bVar1 = true;
      goto LAB_1001d2dc;
    }
  }
  bVar1 = false;
LAB_1001d2dc:
  puVar3 = (uint *)0x0;
  if (bVar1) {
    puVar3 = param_7;
  }
  puVar3 = (uint *)FUN_1001cbfe(param_1,param_2,param_3,param_4,puVar3);
  if (puVar3 != param_7) {
    bVar8 = 0;
    if (*(char *)((int)param_2 + 6) != '\0') {
      bVar8 = 2;
    }
    bVar8 = bVar8 | *(char *)((int)param_2 + 5) != '\0';
    param_2[(byte)param_2[0x17] + 0x1f] = 5;
    param_2[*(byte *)((int)param_2 + 0x5d) + 0x1f] = 5;
    if (bVar8 == 0) {
      puVar6 = param_2 + 3;
      puVar5 = (uint *)FUN_100569bf((int)puVar6,4,'\x01');
      puVar7 = puVar5;
      if (bVar2) {
        puVar7 = param_7;
      }
      if (*puVar6 < 0x50) {
        FUN_100575ba((int *)(param_2 + 3),param_1,0x55);
        FUN_100575ba((int *)(param_2 + 3),param_1,1);
      }
      else {
        FUN_100575ba((int *)(param_2 + 3),param_1,0x8a);
      }
      FUN_100575ba((int *)puVar6,param_1,0xa7);
      FUN_100575ba((int *)puVar6,param_1,0xa7);
      FUN_100575ba((int *)puVar6,param_1,0);
      if (puVar7 == param_7) {
        FUN_10056a5d((int)puVar6,(uint)puVar5);
        puVar5 = param_7;
      }
      else {
        FUN_1001c1f1(param_1,(int)param_2);
      }
    }
    else if ((bVar8 == 1) || (bVar8 == 2)) {
      puVar6 = param_2 + 3;
      if (*puVar6 < 0x50) {
        FUN_100575ba((int *)puVar6,param_1,0x55);
        FUN_100575ba((int *)(param_2 + 3),param_1,1);
      }
      else {
        FUN_100575ba((int *)puVar6,param_1,0x8a);
      }
      puVar5 = (uint *)FUN_1001d08e(param_1,(int)param_2);
      FUN_10056a5d((int)(param_2 + 3),(uint)puVar3);
    }
    else {
      puVar5 = (uint *)0x0;
      if (bVar8 == 3) {
        uVar4 = FUN_100569bf((int)(param_2 + 3),4,'\x01');
        if (param_2[3] < 0x50) {
          FUN_100575ba((int *)(param_2 + 3),param_1,0x55);
          FUN_100575ba((int *)(param_2 + 3),param_1,1);
        }
        else {
          FUN_100575ba((int *)(param_2 + 3),param_1,0x8a);
        }
        puVar5 = (uint *)FUN_1001d08e(param_1,(int)param_2);
        FUN_10056a5d((int)(param_2 + 3),uVar4);
        puVar6 = param_2 + 3;
        if (*puVar6 < 0x50) {
          FUN_100575ba((int *)puVar6,param_1,1);
          FUN_100575ba((int *)(param_2 + 3),param_1,0x55);
        }
        else {
          FUN_100575ba((int *)puVar6,param_1,0x8a);
        }
        uVar4 = FUN_1001d08e(param_1,(int)param_2);
        if ((param_7 == (uint *)0x0) || (param_6 != 1)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        puVar6 = puVar5;
        if (bVar2) {
          puVar6 = param_7;
        }
        FUN_1001c3b2(param_1,(int)param_2);
        if (puVar6 == puVar5) {
          FUN_1001c1f1(param_1,(int)param_2);
        }
        FUN_10056a5d((int)(param_2 + 3),uVar4);
        if (puVar6 == param_7) {
          FUN_10056a5d((int)(param_2 + 3),(uint)puVar5);
          puVar5 = param_7;
        }
      }
    }
    FUN_10056a5d((int)(param_2 + 3),(uint)puVar3);
    puVar3 = puVar5;
  }
  FUN_10056a5d((int)(param_2 + 3),param_4);
  return puVar3;
}

