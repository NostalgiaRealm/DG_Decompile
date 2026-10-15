/*
 * FUN_1008c23f at 1008c23f
 * undefined __fastcall FUN_1008c23f(int * param_1, uint * param_2)
 * Address ranges: 1008c23f-1008c519
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1008c23f(int *param_1,uint *param_2)

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
  
  iVar1 = FUN_10089dae(*param_2 >> 4 & 7);
  uVar7 = 2;
  if (iVar1 == 2) {
    uVar7 = 0;
  }
  uVar2 = FUN_10089d81(param_2);
  if ((uVar2 & 0xff) == 0 && (*param_2 & 0x200) == 0) {
    local_18 = (uint *)FUN_100890c8((int)param_2,uVar7);
  }
  else {
    local_18 = (uint *)0x0;
  }
  uVar3 = FUN_10089d81(param_2);
  if ((char)uVar3 == '\0') {
    iVar4 = FUN_10089dae(*param_2 >> 4 & 7);
  }
  else {
    iVar4 = FUN_10089dc8(extraout_ECX);
  }
  uVar2 = *param_2;
  uVar5 = FUN_100893c7(uVar2 & 0xf,(uVar2 & 0xc00) != 0,(byte)(uVar2 >> 7) & 1,
                       (byte)(uVar2 >> 8) & 1);
  if ((char)uVar5 == '\0') {
    puVar6 = (uint *)FUN_1008c00f(param_1,param_2,(uint)local_18,iVar4);
  }
  else {
    puVar6 = FUN_1008bd3b(param_1,param_2,local_18,iVar4,(byte)(uVar2 >> 0xe) & 1);
  }
  if (puVar6 != (uint *)0x0) {
    if ((*param_2 & 0x2000) != 0) {
      FUN_100c3be1((int *)(param_2 + 3),param_1,0x38);
    }
    if (((*param_2 & 0x4000) != 0) && ((*param_2 & 0x70) != 0)) {
      FUN_100c3be1((int *)(param_2 + 3),param_1,0x36);
    }
    iVar4 = FUN_10089b34(param_1,param_2,puVar6,iVar4);
    if ((*param_2 & 0x70) == 0 && ((uint)puVar6 & 0x3f00) == 0) {
      if ((*param_2 & 0x200) == 0) {
        local_18 = (uint *)FUN_100890c8((int)param_2,uVar7);
      }
      else {
        local_18 = (uint *)0x0;
      }
      iVar4 = FUN_10089b98(param_1,(int)param_2,puVar6,iVar4);
    }
    if (local_18 == (uint *)0x0) {
      if (iVar4 == iVar1) {
        FUN_100890c8((int)param_2,uVar7);
        FUN_100c3be1((int *)(param_2 + 3),param_1,0x36);
        if ((*param_2 & 0x200) != 0) {
          FUN_100890c8((int)param_2,uVar7 | 1);
          FUN_100c3be1((int *)(param_2 + 3),param_1,0x36);
        }
      }
      else if ((*param_2 & 0x200) == 0) {
        FUN_100890c8((int)param_2,uVar7);
        FUN_10089407(param_1,(int)param_2);
      }
      else {
        FUN_10089407(param_1,(int)param_2);
        FUN_100890c8((int)param_2,uVar7);
        FUN_100c3be1((int *)(param_2 + 3),param_1,0x36);
        FUN_100890c8((int)param_2,uVar7 | 1);
        FUN_100c3be1((int *)(param_2 + 3),param_1,0x36);
      }
    }
  }
  if (puVar6 != local_18) {
    FUN_100c2ed2((int)(param_2 + 3),(uint)puVar6);
  }
  return;
}

