/*
 * FUN_1004d0b0 at 1004d0b0
 * undefined __thiscall FUN_1004d0b0(void * this, void * param_1, int param_2, int param_3, undefined4 * param_4)
 * Address ranges: 1004d0b0-1004d2db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004d0b0(void *this,void *param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  void *local_34 [2];
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  int local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  this_00 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  iVar3 = *(int *)((int)this + 4);
  local_34[0] = param_1;
  local_c = 0xffffffff;
  local_8 = 1;
  uVar4 = *(undefined4 *)(*(int *)(iVar3 + 0x1304) + 0x938);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x1304) + 0x93c);
  local_7 = param_4._0_1_;
  iVar2 = *(int *)((int)param_1 + 8);
  local_24 = uVar4;
  local_20 = uVar6;
  if (iVar2 == 8) {
LAB_1004d289:
    cVar1 = FUN_100c2913(*(void **)((int)this + 0xc),*(undefined4 *)(*(int *)(iVar3 + 0x1300) + 0xc)
                         ,uVar4,uVar6,&local_1c);
    iVar2 = local_14;
    if (cVar1 == '\0') goto LAB_1004d2af;
LAB_1004d2a1:
    pvVar5 = *(void **)((int)this + 0xc);
  }
  else {
    if (iVar2 != 9) {
      if (iVar2 != 10) {
        if (iVar2 != 0xb) {
          return;
        }
        FUN_1004d48e((void *)((int)this + 0x14),(uint *)&param_1);
        iVar3 = *(int *)((int)this + 4);
        uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x1304) + 0x93c);
        uVar4 = *(undefined4 *)(*(int *)(iVar3 + 0x1304) + 0x938);
        goto LAB_1004d289;
      }
      cVar1 = FUN_100c2913(*(void **)((int)this + 0x10),
                           *(undefined4 *)(*(int *)(iVar3 + 0x1300) + 0xc),uVar4,uVar6,&local_1c);
      iVar2 = local_14;
      if (cVar1 == '\0') {
        FUN_1004c05e(this_00,0,0,param_2,param_3,'\x01');
        return;
      }
      FUN_100bc28a(*(int *)(*(int *)((int)this + 4) + 0x1304),local_1c,2,local_14);
      FUN_100bc2b5(*(int *)(*(int *)((int)this + 4) + 0x1304),local_1c,2,iVar2,1,local_18,iVar2 << 3
                   ,0);
      goto LAB_1004d2a1;
    }
    iVar2 = FUN_1004d44f((void *)((int)this + 0x14),(uint *)&param_1);
    param_4 = (undefined4 *)((int)this + 0xc);
    if (*(int *)(iVar2 + 8) == 0) {
      FUN_1004d48e((void *)((int)this + 0x14),(uint *)&param_1);
      iVar2 = *(int *)(*(int *)((int)this + 4) + 0x1304);
      cVar1 = FUN_100c2913(*(void **)((int)this + 0xc),
                           *(undefined4 *)(*(int *)(*(int *)((int)this + 4) + 0x1300) + 0xc),
                           *(undefined4 *)(iVar2 + 0x938),*(undefined4 *)(iVar2 + 0x93c),&local_1c);
      if (cVar1 != '\0') {
        FUN_100bc25f(*(int *)(*(int *)((int)this + 4) + 0x1304),local_1c,0,local_14);
      }
      param_4 = (undefined4 *)((int)this + 0xc);
    }
    else {
      local_1c = *(int *)(iVar2 + 8);
      local_18 = *(int **)(iVar2 + 0xc);
      local_14 = *(int *)(iVar2 + 0x10);
      uStack_10 = *(undefined4 *)(iVar2 + 0x14);
      FUN_1004d48e((void *)((int)this + 0x14),(uint *)&param_1);
      this_00 = param_1;
    }
    FUN_100bc28a(*(int *)(*(int *)((int)this + 4) + 0x1304),local_1c,0,local_14);
    FUN_100bc2b5(*(int *)(*(int *)((int)this + 4) + 0x1304),local_1c,0,local_14,1,local_18,
                 local_14 << 3,0);
    pvVar5 = (void *)*param_4;
    iVar2 = local_14;
  }
  FUN_1004cf76(this,(int)this_00,pvVar5,local_18,iVar2);
LAB_1004d2af:
  *(undefined4 *)((int)this_00 + 0xc) =
       *(undefined4 *)(*(int *)(*(int *)((int)this + 4) + 0x1300) + 0xc);
  *(undefined4 *)((int)this_00 + 0x10) = local_24;
  *(undefined4 *)((int)this_00 + 0x14) = local_20;
  FUN_1004cde7(this,(uint *)local_34);
  return;
}

