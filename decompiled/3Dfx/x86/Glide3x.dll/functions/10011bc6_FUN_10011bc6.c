/*
 * FUN_10011bc6 at 10011bc6
 * undefined __thiscall FUN_10011bc6(void * this, float * param_1, float * param_2, int param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, uint param_13, uint param_14, uint param_15, uint param_16, uint param_17, uint param_18, uint param_19, uint param_20)
 * Address ranges: 10011bc6-10011f43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10011bc6(void *this,float *param_1,float *param_2,int param_3,uint param_4,uint param_5,
            uint param_6,uint param_7,uint param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,uint param_13,uint param_14,uint param_15,
            uint param_16,uint param_17,uint param_18,uint param_19,uint param_20)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 extraout_ECX;
  uint uVar9;
  int local_4c;
  int local_48;
  undefined1 local_44 [4];
  undefined4 local_40 [3];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  int local_c;
  int local_8;
  
  local_c = (param_5 != 0) + 1;
  iVar8 = *(int *)(*(int *)((int)this + 0x138) + 0x3308);
  iVar2 = *(int *)(iVar8 + 0x1304);
  local_10 = this;
  cVar5 = FUN_1003e7c7(*(void **)(*(int *)((int)this + 0x138) + 0x330c),local_c,
                       *(uint *)(*(int *)(iVar8 + 0x1300) + 0xc),*(uint *)(iVar2 + 0x938),
                       *(uint *)(iVar2 + 0x93c),&local_4c);
  if (cVar5 != '\0') {
    iVar8 = *(int *)(*(int *)((int)this + 0x138) + 0x3308);
    local_8 = iVar8;
    puVar6 = FUN_1003a2b5((void *)(iVar8 + 0x1630),(byte *)&PTR_s_POSITION_1005b51c,
                          (undefined4 *)0x1);
    FUN_10009e7a(*(void **)((int)this + 0x138),5,puVar6,
                 *(undefined4 *)((int)this + (param_20 & 0xff) * 8 + 0x97c),param_3);
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x3378) = param_9;
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x337c) = param_10;
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x3398) = param_11;
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x339c) = param_12;
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x33a0) = 0;
    piVar7 = FUN_1003f057(*(void **)(iVar8 + 0x15dc),&param_3,param_15,0);
    puVar6 = (undefined4 *)(iVar8 + 0x1304);
    local_1c = *piVar7;
    if (param_6 != 0) {
      FUN_1003fc13((void *)*puVar6,param_6,0,0,4);
    }
    if (param_7 != 0) {
      piVar7 = FUN_1003f057(*(void **)(iVar8 + 0x15dc),(int *)&param_6,param_16,0);
      local_18 = *piVar7;
      FUN_1003fc13((void *)*puVar6,param_7,0,0,4);
    }
    if (param_8 != 0) {
      piVar7 = FUN_1003f057(*(void **)(iVar8 + 0x15e0),(int *)&param_6,param_17,0);
      uVar4 = param_8;
      uVar9 = 0;
      local_14 = *piVar7;
      iVar8 = local_8;
      if (param_19 != 0) {
        do {
          FUN_1003fc13((void *)*puVar6,uVar4,uVar9,0,0x10);
          uVar9 = uVar9 + 1;
          iVar8 = local_8;
          this = local_10;
        } while (uVar9 < param_19);
      }
    }
    FUN_100407ba(*(int *)(iVar8 + 0x1304),(param_7 != 0) + 1,&local_1c,0,
                 (int *)(-(uint)(param_8 != 0) & (uint)&local_14));
    FUN_10040011(*(int *)(*(int *)(*(int *)((int)this + 0x138) + 0x3308) + 0x1304),1,local_40);
    iVar2 = *(int *)((int)this + 0x138);
    param_8 = *(uint *)(iVar2 + 0x3300);
    iVar3 = *(int *)(iVar2 + 0x3304);
    piVar7 = FUN_1003f057(*(void **)(*(int *)(iVar2 + 0x3308) + 0x15d8),(int *)&param_7,param_13,0);
    local_24 = *piVar7;
    FUN_1003fc13(*(void **)(iVar8 + 0x1304),param_4,0,0,0x80);
    if (param_5 != 0) {
      piVar7 = FUN_1003f057(*(void **)(*(int *)(*(int *)((int)this + 0x138) + 0x3308) + 0x15d8),
                            (int *)&param_7,param_14,0);
      local_20 = *piVar7;
      FUN_1003fc13(*(void **)(iVar8 + 0x1304),param_5,param_18,0,0x80);
    }
    piVar7 = *(int **)(iVar3 * 0x18 + 0x520 + param_8);
    (**(code **)(*piVar7 + 0x5c))(piVar7,1,local_44,&local_c,local_c,&local_24,&DAT_10055e78,0);
    FUN_1004027c(*(int *)(*(int *)(*(int *)((int)this + 0x138) + 0x3308) + 0x1304),2,local_4c,
                 local_48);
    FUN_1000a860(*(void **)((int)this + 0x138),
                 *(char *)((int)*(void **)((int)this + 0x138) + 0x33b4));
    pbVar1 = (byte *)(*(int *)((int)this + 0x138) + 0x411c);
    *pbVar1 = *pbVar1 | *(byte *)(*(int *)((int)this + 0x138) + 0x32d0);
    FUN_1000a166(*(void **)((int)this + 0x138),
                 *(byte *)((int)*(void **)((int)this + 0x138) + 0x33b4),'\0');
    param_8 = 0;
    iVar8 = FUN_10011b29(this,extraout_ECX,&param_8);
    if (param_8 != 0) {
      FUN_1000f80f(this,param_1,param_2,(float *)(iVar8 * 0x10 + param_8),(char)param_20);
      FUN_1003b77d(*(int *)((int)this + 0x988) + 0x38);
    }
    iVar2 = *(int *)((int)this + 0x988);
    local_28 = 0x10;
    local_34 = *(undefined4 *)(iVar2 + 0x68);
    local_30 = *(undefined4 *)(iVar2 + 0x6c);
    local_2c = *(undefined4 *)(iVar2 + 0x28);
    FUN_100404bd(*(int *)(*(int *)(*(int *)((int)this + 0x138) + 0x3308) + 0x1304),0,1,
                 (int)&local_34);
    FUN_10040c01(*(int *)(*(int *)(*(int *)((int)this + 0x138) + 0x3308) + 0x1304),4,1,iVar8,0);
  }
  return;
}

