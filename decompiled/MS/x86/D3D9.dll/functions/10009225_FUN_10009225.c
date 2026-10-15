/*
 * FUN_10009225 at 10009225
 * undefined4 __thiscall FUN_10009225(void * this, int * param_1, int param_2, int param_3, uint param_4)
 * Address ranges: 10009225-10009658
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10009225(void *this,int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  void *this_00;
  uint uVar7;
  bool bVar8;
  int local_e0 [51];
  uint local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_10005e41((int)this);
  local_10 = *(int *)(&DAT_100d1728 + param_2 * 4);
  uVar7 = *(int *)(&DAT_100d16f0 + local_10 * 8) * param_4 + *(int *)(&DAT_100d16f4 + local_10 * 8);
  bVar8 = *(int *)((int)this + 0x654) != 0;
  local_c = CONCAT31(local_c._1_3_,bVar8);
  iVar1 = *(int *)((int)this + 0x650);
  param_4 = *(uint *)((int)this + 0x6654) & *(uint *)(*param_1 + 0x10);
  local_14 = uVar7;
  if ((*(uint *)((int)this + 0x6660) & param_4) == param_4) {
    uVar7 = *(uint *)((int)this + 0x6664) & param_4;
    FUN_10008ae3(this,uVar7,'\0');
    (**(code **)(**(int **)((int)this + 0x14) + 0xb8))
              (local_10,*param_1,param_1[2],param_3,local_14,local_c);
    FUN_10008a5c(this,uVar7,'\0');
    FUN_10008a20(this,param_4,'\0');
    uVar6 = local_8;
  }
  else if ((*(uint *)((int)this + 0x6660) & param_4) == 0) {
    if (param_1[2] == 0) {
      iVar2 = *param_1;
      if ((((*(int *)(iVar2 + 4) == 0) || (!bVar8)) || (*(uint *)((int)this + 0x31c) < 9)) ||
         (*(char *)((int)this + 0x669f) == '\0')) {
        if ((param_4 == 1) && (*(int *)(iVar2 + 0xc) == *(int *)((int)this + 0x65d0))) {
          (**(code **)(**(int **)((int)this + 0x14) + 0x1c))
                    (local_10,*param_1,
                     *(int *)((int)this + 0x65d0) * param_3 +
                     *(int *)(*(int *)((int)this + 26000) + 4) + *(int *)((int)this + 0x6610),
                     *(undefined4 *)((int)this + 0x65d0),uVar7,local_c);
          uVar6 = local_8;
        }
        else {
          FUN_100088cf(this,*param_1,param_4,param_3,(int)local_e0);
          (**(code **)(**(int **)((int)this + 0x14) + 0x24))
                    (local_10,param_1[1],local_e0,uVar7,local_c);
          uVar6 = local_8;
        }
      }
      else {
        param_4 = FUN_1001081d(this,iVar2);
        param_4 = FUN_10009b9e((void *)((int)this + 0x30c),&param_4);
        bVar8 = FUN_1001a891(this,uVar7,*(int *)(param_4 + 0xc));
        uVar6 = local_8;
        if (bVar8) {
          uVar7 = 0;
          if (iVar1 != 0) {
            uVar7 = 2;
          }
          uVar5 = 0;
          if ((char)local_c != '\0') {
            uVar5 = 4;
          }
          FUN_100cfed0(local_e0,0,0xcc);
          FUN_1000896c(this,*param_1,(int)local_e0);
          uVar4 = param_4;
          uVar3 = MXCSR;
          MXCSR = 0x3fc0;
          FUN_1001acf0(this,local_e0,*(int *)((int)this + 0xd6c),param_4,uVar7 | uVar5 | 1,0,
                       local_14,param_3,'\0');
          (**(code **)(**(int **)((int)this + 0x14) + 0x1c))
                    (local_10,uVar4,*(undefined4 *)((int)this + 0xd6c),*(undefined4 *)(uVar4 + 0xc),
                     local_14,0);
          uVar6 = local_8;
          MXCSR = uVar3;
        }
      }
    }
    else if ((param_4 == 1) && (*(int *)(*param_1 + 0xc) == *(int *)((int)this + 0x65d0))) {
      (**(code **)(**(int **)((int)this + 0x14) + 0xa0))
                (local_10,*param_1,param_1[2],
                 *(int *)((int)this + 0x65d0) * param_3 + *(int *)(*(int *)((int)this + 26000) + 4)
                 + *(int *)((int)this + 0x6610),*(undefined4 *)((int)this + 0x65d0),uVar7);
      uVar6 = local_8;
    }
    else {
      FUN_100088cf(this,*param_1,param_4,param_3,(int)local_e0);
      (**(code **)(**(int **)((int)this + 0x14) + 0xa8))
                (local_10,param_1[1],param_1[2],local_e0,uVar7);
      uVar6 = local_8;
    }
  }
  else {
    uVar6 = FUN_10008b5a(this,~*(uint *)((int)this + 0x6660) & param_4,param_3,uVar7);
    if ((char)uVar6 == '\0') {
      uVar6 = 0x8876086d;
    }
    else {
      uVar7 = *(uint *)((int)this + 0x6664) & param_4;
      FUN_10008ae3(this,uVar7,'\0');
      (**(code **)(**(int **)((int)this + 0x14) + 0xb8))
                (local_10,*param_1,param_1[2],param_3,local_14,local_c);
      FUN_10008a20(this,param_4,'\0');
      FUN_10008a5c(this_00,uVar7,'\0');
      uVar6 = local_8;
    }
  }
  if ((*(char *)((int)this + 0xd8d) == '\0') &&
     (*(char *)(*(int *)((int)this + 0xc) + 0x75e) == '\0')) {
    bVar8 = false;
    if (*(char *)((int)this + 0x2a1) == '\0') goto LAB_100095ef;
  }
  else {
    bVar8 = true;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x14))();
  (**(code **)(**(int **)((int)this + 0x18) + 0x14))
            (*(undefined4 *)((int)this + 0x298),*(undefined4 *)((int)this + 0x29c));
  if ((bVar8) &&
     ((**(code **)(**(int **)((int)this + 0x18) + 0x14))
                (*(undefined4 *)((int)this + 0x298),*(undefined4 *)((int)this + 0x29c)),
     *(char *)(*(int *)((int)this + 0xc) + 0x75f) != '\0')) {
    DebugBreak();
  }
LAB_100095ef:
  if (*(char *)((int)this + 0x2a2) == '\0') {
    (**(code **)(**(int **)((int)this + 0x18) + 0xc))();
    if (*(int *)((int)this + 0x28) != 0) {
      (**(code **)(**(int **)((int)this + 0x28) + 0xc))();
    }
    *(undefined1 *)((int)this + 0x2a2) = 1;
  }
  if (*(char *)((int)this + 0x2a3) != '\0') {
    if (*(int *)((int)this + 0x498) != 0) {
      (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x18) + 4) + 0x50) + 0x20))
                (*(undefined4 *)((int)this + 0x298),*(undefined4 *)((int)this + 0x29c),1);
    }
    *(undefined1 *)((int)this + 0x2a3) = 0;
  }
  return uVar6;
}

