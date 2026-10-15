/*
 * FUN_1001cd59 at 1001cd59
 * uint * __fastcall FUN_1001cd59(int * param_1, uint * param_2, uint param_3, uint param_4, undefined4 param_5, int param_6, uint * param_7)
 * Address ranges: 1001cd59-1001d08d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __fastcall
FUN_1001cd59(int *param_1,uint *param_2,uint param_3,uint param_4,undefined4 param_5,int param_6,
            uint *param_7)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *local_8;
  
  if ((param_7 == (uint *)0x0) || (param_6 != 1)) {
    bVar2 = false;
    bVar1 = false;
    if (param_7 != (uint *)0x0) goto LAB_1001cd95;
  }
  else {
    bVar1 = true;
LAB_1001cd95:
    bVar2 = bVar1;
    if ((*param_2 & 0x20000) != 0) {
      bVar1 = true;
      goto LAB_1001cda3;
    }
  }
  bVar1 = false;
LAB_1001cda3:
  puVar4 = (uint *)0x0;
  if (bVar1) {
    puVar4 = param_7;
  }
  puVar5 = (uint *)FUN_1001cbfe(param_1,param_2,param_3,param_4,puVar4);
  puVar4 = param_2 + 3;
  local_8 = puVar5;
  if (puVar5 != param_7) {
    bVar3 = 0;
    if (*(char *)((int)param_2 + 6) != '\0') {
      bVar3 = 2;
    }
    bVar3 = bVar3 | *(char *)((int)param_2 + 5) != '\0';
    if (bVar3 != 0) {
      local_8 = (uint *)FUN_100569bf((int)puVar4,4,'\x01');
    }
    param_2[(byte)param_2[0x17] + 0x1f] = 5;
    if ((bVar3 != 0) || (puVar8 = param_7, !bVar2)) {
      puVar8 = local_8;
    }
    FUN_100575ba((int *)puVar4,param_1,0xa7);
    if (bVar3 == 0) {
      if (puVar8 == local_8) {
        FUN_1001c1f1(param_1,(int)param_2);
      }
    }
    else if (((bVar3 == 1) || (bVar3 == 2)) || (bVar3 == 3)) {
      puVar6 = puVar5;
      if (bVar3 == 3) {
        puVar6 = (uint *)FUN_100569bf((int)puVar4,4,'\x01');
      }
      FUN_100575ba((int *)puVar4,param_1,0xa7);
      if ((bVar3 != 3) || (puVar8 = param_7, !bVar2)) {
        puVar8 = local_8;
      }
      FUN_1001c3b2(param_1,(int)param_2);
      if (bVar3 == 3) {
        uVar7 = FUN_100569bf((int)puVar4,4,'\x01');
        FUN_100575ba((int *)puVar4,param_1,0xa7);
        FUN_100575ba((int *)puVar4,param_1,0xa7);
        FUN_1001c3b2(param_1,(int)param_2);
        puVar8 = local_8;
        if (bVar2) {
          puVar8 = param_7;
        }
        FUN_1001c3b2(param_1,(int)param_2);
        if (puVar8 == local_8) {
          FUN_1001c1f1(param_1,(int)param_2);
        }
        FUN_10056a5d((int)puVar4,uVar7);
      }
      else if (puVar8 == local_8) {
        FUN_1001c1f1(param_1,(int)param_2);
      }
      if (puVar6 != puVar5) {
        FUN_10056a5d((int)puVar4,(uint)puVar6);
      }
    }
    if (local_8 != puVar5) {
      FUN_10056a5d((int)puVar4,(uint)puVar5);
    }
    if (puVar8 != local_8) {
      FUN_10056a5d((int)puVar4,(uint)local_8);
      local_8 = param_7;
    }
  }
  FUN_10056a5d((int)puVar4,param_4);
  return local_8;
}

