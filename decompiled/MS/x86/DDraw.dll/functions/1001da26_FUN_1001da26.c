/*
 * FUN_1001da26 at 1001da26
 * uint * __fastcall FUN_1001da26(int * param_1, uint * param_2, uint param_3, uint param_4, undefined4 param_5, int param_6, uint * param_7, byte param_8)
 * Address ranges: 1001da26-1001dd1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __fastcall
FUN_1001da26(int *param_1,uint *param_2,uint param_3,uint param_4,undefined4 param_5,int param_6,
            uint *param_7,byte param_8)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  byte bVar7;
  uint *puVar8;
  byte bVar9;
  
  bVar9 = (param_8 ^ 1) + 3;
  if ((param_7 == (uint *)0x0) || ((*param_2 & 0x20000) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  puVar6 = (uint *)0x0;
  if (bVar1) {
    puVar6 = param_7;
  }
  puVar2 = (uint *)FUN_1001cbfe(param_1,param_2,param_3,param_4,puVar6);
  puVar6 = puVar2;
  if (puVar2 != param_7) {
    bVar7 = 0;
    if (*(char *)((int)param_2 + 6) != '\0') {
      bVar7 = 2;
    }
    bVar7 = bVar7 | *(char *)((int)param_2 + 5) != '\0';
    if (bVar7 == 0) {
      if (param_7 != (uint *)0x0) {
        puVar6 = param_7;
      }
      FUN_1001d7c7(param_1,param_2,puVar2,0,param_6,puVar6,param_8);
    }
    else {
      puVar8 = puVar2;
      if ((bVar7 == 1) || (bVar7 == 2)) {
        uVar4 = FUN_100569bf((int)(param_2 + 3),(uint)bVar9,'\x01');
        bVar9 = 0xaa;
        if (bVar7 == 1) {
          bVar9 = 0x55;
        }
        FUN_1001d7c7(param_1,param_2,puVar2,bVar9,1,uVar4,param_8);
        FUN_1001d7c7(param_1,param_2,puVar2,0,1,puVar2,param_8);
        if ((param_7 == (uint *)0x0) || (param_6 != 1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          puVar8 = param_7;
        }
        FUN_1001c3b2(param_1,(int)param_2);
        FUN_10056a5d((int)(param_2 + 3),uVar4);
        if (!bVar1) {
          FUN_1001c1f1(param_1,(int)param_2);
        }
      }
      else {
        if (bVar7 != 3) goto LAB_1001dd09;
        puVar3 = param_2 + 3;
        uVar4 = FUN_100569bf((int)puVar3,(uint)bVar9,'\x01');
        uVar5 = FUN_100569bf((int)puVar3,(uint)bVar9,'\x01');
        FUN_1001d7c7(param_1,param_2,puVar2,0x55,1,uVar4,param_8);
        FUN_1001d7c7(param_1,param_2,puVar2,0,1,uVar5,param_8);
        FUN_1001c3b2(param_1,(int)param_2);
        FUN_1001d7c7(param_1,param_2,puVar2,0xff,1,uVar5,param_8);
        FUN_1001d7c7(param_1,param_2,puVar2,0xaa,1,puVar2,param_8);
        FUN_1001c3b2(param_1,(int)param_2);
        FUN_10056a5d((int)puVar3,uVar5);
        if ((param_7 == (uint *)0x0) || (param_6 != 1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          puVar8 = param_7;
        }
        FUN_1001c3b2(param_1,(int)param_2);
        FUN_10056a5d((int)(param_2 + 3),uVar4);
        if (!bVar1) {
          FUN_1001c1f1(param_1,(int)param_2);
        }
      }
      if (puVar8 != param_7) goto LAB_1001dd09;
      FUN_10056a5d((int)(param_2 + 3),(uint)puVar2);
      puVar6 = param_7;
    }
    if (puVar6 != puVar2) {
      FUN_10056a5d((int)(param_2 + 3),(uint)puVar2);
    }
  }
LAB_1001dd09:
  FUN_10056a5d((int)(param_2 + 3),param_4);
  return puVar6;
}

