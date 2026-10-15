/*
 * FUN_10098917 at 10098917
 * int __thiscall FUN_10098917(void * this, undefined4 * param_1, int param_2, uint param_3, int * param_4, int * param_5, int * param_6, undefined4 * param_7, undefined4 * param_8)
 * Address ranges: 10098917-10098afe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10098917(void *this,undefined4 *param_1,int param_2,uint param_3,int *param_4,int *param_5,
            int *param_6,undefined4 *param_7,undefined4 *param_8)

{
  void *this_00;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_2c [6];
  undefined4 local_14;
  undefined1 local_10;
  undefined3 uStack_f;
  void *local_c;
  int local_8;
  
  local_8 = -0x7ff8fff2;
  puVar4 = (undefined4 *)(-(uint)(param_2 != 0) & param_2 - 8U);
  local_c = this;
  if (puVar4 == (undefined4 *)0x0) {
    piVar5 = *(int **)((int)this + 0xde8);
    _local_10 = CONCAT31(uStack_f,*(undefined1 *)((int)this + 0x6700));
    this_00 = (void *)FUN_100cfd55(0x128);
    if (this_00 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_1009d509(this_00,(int)this,piVar5,param_1,param_3,(char)_local_10,(char)param_5);
    }
    if (puVar4 == (undefined4 *)0x0) {
      return local_8;
    }
  }
  else {
    puVar6 = param_1;
    puVar7 = puVar4 + 0x14;
    for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar4[0x35] = param_3;
    *(undefined1 *)(puVar4 + 0x37) = 0;
  }
  param_5 = puVar4 + 2;
  uVar1 = FUN_10013290(param_5,*(byte *)((int)puVar4 + 0x125),(char)param_6);
  if ((char)uVar1 != '\0') {
    if ((char)param_6 != '\0') {
      FUN_1009d746((int)puVar4);
    }
    piVar5 = param_5;
    if ((char)param_4 != '\0') {
      if (param_2 == 0) {
        LOCK();
        puVar4[0x3a] = puVar4[0x3a] + 1;
        UNLOCK();
      }
      *(undefined2 *)((int)this + 0xc2ef) = 0x101;
      local_8 = 0;
LAB_10098a71:
      if (puVar4 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      *param_7 = piVar5;
      puVar4 = (undefined4 *)((int)this + 0x66f8);
      if (*(char *)((int)param_1 + 0x6d) == '\0') {
        uVar2 = param_1[0x11];
        puVar7 = local_2c;
        puVar6 = param_1;
        for (iVar3 = 6; puVar6 = puVar6 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar6;
          puVar7 = puVar7 + 1;
        }
        local_14 = uVar2;
        FUN_100034ed((void *)*puVar4,param_1[0x17],local_2c,param_1 + 7);
        this = local_c;
      }
      uVar2 = FUN_10003558((void *)*puVar4,*(int *)((int)this + 0xdf0));
      *(undefined4 *)((int)this + 0xde0) = uVar2;
      return local_8;
    }
    param_4 = param_5;
    if (puVar4 == (undefined4 *)0x0) {
      param_4 = (int *)0x0;
    }
    param_6 = param_4;
    uVar2 = FUN_10003d8f((void *)((int)this + 0xdf4),&param_4);
    if ((char)uVar2 != '\0') {
      param_4 = (int *)0x0;
      local_8 = FUN_1009d780((int)puVar4,0x100d1390,(uint *)&param_4);
      if (-1 < local_8) {
        if (param_8 != (undefined4 *)0x0) {
          *param_8 = param_4;
        }
        iVar3 = *(int *)((int)this + 0xdf0) * 0x228;
        uVar1 = *(uint *)(&DAT_100df4e0 + iVar3);
        *(uint *)(&DAT_100df4e0 + iVar3) = uVar1 - param_3;
        *(uint *)(&DAT_100df4e4 + iVar3) = *(int *)(&DAT_100df4e4 + iVar3) - (uint)(uVar1 < param_3)
        ;
        goto LAB_10098a71;
      }
      FUN_10006d7f(this,(int)param_6);
    }
    FUN_100136b0(piVar5);
  }
  FUN_1009d6b8((int)puVar4);
  FUN_1009d5a5(puVar4);
  FUN_100cfd6c(puVar4);
  return local_8;
}

