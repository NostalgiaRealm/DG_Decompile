/*
 * FUN_1007dd9c at 1007dd9c
 * int __thiscall FUN_1007dd9c(void * this, undefined4 * param_1, int param_2, uint param_3, int * param_4, undefined4 param_5, undefined4 param_6, undefined4 * param_7, int * param_8)
 * Address ranges: 1007dd9c-1007df49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1007dd9c(void *this,undefined4 *param_1,int param_2,uint param_3,int *param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 *param_7,int *param_8)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_2c [6];
  undefined4 local_14;
  void *local_10;
  int *local_c;
  int local_8;
  
  local_8 = -0x7ff8fff2;
  puVar5 = (undefined4 *)(-(uint)(param_2 != 0) & param_2 - 8U);
  local_10 = this;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = FUN_100796eb((int)this,*(int **)((int)this + 0xb24),param_1,param_3);
    if (puVar5 == (undefined4 *)0x0) {
      return local_8;
    }
  }
  else {
    puVar7 = param_1;
    puVar8 = puVar5 + 0x14;
    for (iVar4 = 0x1c; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5[0x35] = param_3;
    *(undefined1 *)(puVar5 + 0x37) = 0;
  }
  local_c = puVar5 + 2;
  uVar1 = FUN_1000f4c7(local_c,local_c,(char)param_4);
  piVar6 = local_c;
  if ((char)uVar1 != '\0') {
    if ((char)param_4 != '\0') {
      FUN_100814c0((int)puVar5);
      if (param_2 == 0) {
        LOCK();
        puVar5[0x39] = puVar5[0x39] + 1;
        UNLOCK();
      }
      local_8 = 0;
      piVar6 = local_c;
LAB_1007deb9:
      if (puVar5 == (undefined4 *)0x0) {
        piVar6 = (int *)0x0;
      }
      *param_7 = piVar6;
      puVar5 = (undefined4 *)((int)this + 0x58f0);
      if (*(char *)((int)param_1 + 0x6d) == '\0') {
        uVar3 = param_1[0x11];
        puVar8 = local_2c;
        puVar7 = param_1;
        for (iVar4 = 6; this = local_10, puVar7 = puVar7 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar7;
          puVar8 = puVar8 + 1;
        }
        local_14 = uVar3;
        FUN_100030d5((void *)*puVar5,*(int *)((int)local_10 + 0xb2c),local_2c,param_1 + 7);
      }
      uVar3 = FUN_1000313f((void *)*puVar5,*(int *)((int)this + 0xb2c));
      *(undefined4 *)((int)this + 0xb1c) = uVar3;
      return local_8;
    }
    piVar2 = local_c;
    if (puVar5 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    param_4 = piVar2;
    uVar3 = FUN_10003787((void *)((int)this + 0xb30),&param_4);
    if ((char)uVar3 != '\0') {
      param_4 = (int *)0x0;
      local_8 = FUN_100814ff((int)puVar5,0x100af3b0,&param_4);
      if (-1 < local_8) {
        if (param_8 != (int *)0x0) {
          *param_8 = (int)param_4;
        }
        iVar4 = *(int *)((int)this + 0xb2c) * 0x228;
        uVar1 = *(uint *)(&DAT_100ba918 + iVar4);
        *(uint *)(&DAT_100ba918 + iVar4) = uVar1 - param_3;
        *(uint *)(&DAT_100ba91c + iVar4) = *(int *)(&DAT_100ba91c + iVar4) - (uint)(uVar1 < param_3)
        ;
        goto LAB_1007deb9;
      }
      FUN_10006476(this,(int)piVar2);
    }
    FUN_1000f8d0(piVar6);
  }
  FUN_10081432((int)puVar5);
  FUN_100813b2(puVar5);
  FUN_100ad48c(puVar5);
  return local_8;
}

