/*
 * FUN_10089f6f at 10089f6f
 * uint * __fastcall FUN_10089f6f(int * param_1, uint * param_2, uint param_3, uint param_4, undefined4 param_5, int param_6, uint * param_7)
 * Address ranges: 10089f6f-1008a2a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __fastcall
FUN_10089f6f(int *param_1,uint *param_2,uint param_3,uint param_4,undefined4 param_5,int param_6,
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
    if (param_7 != (uint *)0x0) goto LAB_10089fab;
  }
  else {
    bVar1 = true;
LAB_10089fab:
    bVar2 = bVar1;
    if ((*param_2 & 0x20000) != 0) {
      bVar1 = true;
      goto LAB_10089fb9;
    }
  }
  bVar1 = false;
LAB_10089fb9:
  puVar4 = (uint *)0x0;
  if (bVar1) {
    puVar4 = param_7;
  }
  puVar5 = (uint *)FUN_10089e14(param_1,param_2,param_3,param_4,puVar4);
  puVar4 = param_2 + 3;
  local_8 = puVar5;
  if (puVar5 != param_7) {
    bVar3 = 0;
    if (*(char *)((int)param_2 + 6) != '\0') {
      bVar3 = 2;
    }
    bVar3 = bVar3 | *(char *)((int)param_2 + 5) != '\0';
    if (bVar3 != 0) {
      local_8 = (uint *)FUN_100c2e34((int)puVar4,4,'\x01');
    }
    param_2[(byte)param_2[0x17] + 0x1f] = 5;
    if ((bVar3 != 0) || (puVar8 = param_7, !bVar2)) {
      puVar8 = local_8;
    }
    FUN_100c3be1((int *)puVar4,param_1,0xa7);
    if (bVar3 == 0) {
      if (puVar8 == local_8) {
        FUN_10089407(param_1,(int)param_2);
      }
    }
    else if (((bVar3 == 1) || (bVar3 == 2)) || (bVar3 == 3)) {
      puVar6 = puVar5;
      if (bVar3 == 3) {
        puVar6 = (uint *)FUN_100c2e34((int)puVar4,4,'\x01');
      }
      FUN_100c3be1((int *)puVar4,param_1,0xa7);
      if ((bVar3 != 3) || (puVar8 = param_7, !bVar2)) {
        puVar8 = local_8;
      }
      FUN_100895c8(param_1,(int)param_2);
      if (bVar3 == 3) {
        uVar7 = FUN_100c2e34((int)puVar4,4,'\x01');
        FUN_100c3be1((int *)puVar4,param_1,0xa7);
        FUN_100c3be1((int *)puVar4,param_1,0xa7);
        FUN_100895c8(param_1,(int)param_2);
        puVar8 = local_8;
        if (bVar2) {
          puVar8 = param_7;
        }
        FUN_100895c8(param_1,(int)param_2);
        if (puVar8 == local_8) {
          FUN_10089407(param_1,(int)param_2);
        }
        FUN_100c2ed2((int)puVar4,uVar7);
      }
      else if (puVar8 == local_8) {
        FUN_10089407(param_1,(int)param_2);
      }
      if (puVar6 != puVar5) {
        FUN_100c2ed2((int)puVar4,(uint)puVar6);
      }
    }
    if (local_8 != puVar5) {
      FUN_100c2ed2((int)puVar4,(uint)puVar5);
    }
    if (puVar8 != local_8) {
      FUN_100c2ed2((int)puVar4,(uint)local_8);
      local_8 = param_7;
    }
  }
  FUN_100c2ed2((int)puVar4,param_4);
  return local_8;
}

