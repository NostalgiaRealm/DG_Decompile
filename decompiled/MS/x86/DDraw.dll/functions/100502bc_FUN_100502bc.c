/*
 * FUN_100502bc at 100502bc
 * int __thiscall FUN_100502bc(void * this, uint param_1, undefined4 param_2, uint param_3, uint param_4, int * param_5, uint param_6, uint param_7, undefined4 param_8, void * param_9)
 * Address ranges: 100502bc-10050432
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_100502bc(void *this,uint param_1,undefined4 param_2,uint param_3,uint param_4,int *param_5,
            uint param_6,uint param_7,undefined4 param_8,void *param_9)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint local_30;
  int *local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  LPCRITICAL_SECTION local_14;
  int local_10;
  undefined4 *local_c;
  
  local_14 = (LPCRITICAL_SECTION)((int)this + 0x1c);
  EnterCriticalSection(local_14);
  local_10 = 0;
  if (*(char *)((int)this + 0x34) == '\0') {
    uVar2 = FUN_1005081c(this,&param_1);
    if ((char)uVar2 == '\0') goto LAB_10050420;
  }
  puVar3 = (undefined4 *)FUN_100507cd(this,&param_1);
  if (puVar3 != (undefined4 *)0x0) {
    local_c = puVar3 + 1;
    *puVar3 = 0;
    param_1 = 0xffffffff;
    iVar4 = FUN_10050857(local_c,&param_1);
    piVar1 = param_5;
    uVar2 = param_4;
    if (iVar4 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = *(uint *)(iVar4 + 0xc);
    }
    iVar4 = extraout_ECX;
    uVar5 = puVar3[3];
    while (uVar5 != 0) {
      param_4 = uVar5 - 1;
      if (param_4 < (uint)puVar3[3]) {
        iVar4 = param_4 * 0x28;
        param_5 = (int *)(puVar3[2] + 0x10 + iVar4);
      }
      else {
        param_5 = (int *)&DAT_00000008;
      }
      uVar5 = param_4;
      if (param_5[2] != -1) {
        uVar5 = FUN_10050050(param_5,iVar4,uVar2,(int)piVar1);
        if (uVar5 != param_1) {
          local_20 = param_3;
          local_1c = param_5[2];
          local_24 = uVar5;
          FUN_1005064a(param_9,&local_24);
        }
        FUN_10050ac6(puVar3 + 1,param_4);
        iVar4 = extraout_ECX_00;
        uVar5 = param_4;
      }
    }
    param_1 = 0xffffffff;
    puVar6 = (uint *)FUN_10050857(local_c,&param_1);
    if (puVar6 == (uint *)0x0) {
      local_24 = param_3;
      local_20 = param_6;
      local_30 = uVar2;
      local_2c = piVar1;
      local_28 = 0xffffffff;
      local_1c = param_7;
      param_3 = 0xffffffff;
      FUN_10050891(local_c,&param_3,&local_30);
    }
    else {
      local_10 = FUN_10050050((int *)puVar6,extraout_ECX_01,uVar2,(int)piVar1);
      *puVar6 = uVar2;
      puVar6[1] = (uint)piVar1;
      puVar6[2] = 0xffffffff;
      puVar6[3] = param_3;
      puVar6[4] = param_6;
      puVar6[5] = param_7;
    }
  }
LAB_10050420:
  LeaveCriticalSection(local_14);
  return local_10;
}

