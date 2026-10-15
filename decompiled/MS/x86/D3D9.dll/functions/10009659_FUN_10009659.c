/*
 * FUN_10009659 at 10009659
 * undefined4 __thiscall FUN_10009659(void * this, int * param_1, int param_2, int param_3, int param_4, uint param_5, int param_6, uint param_7)
 * Address ranges: 10009659-10009b9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10009659(void *this,int *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
            uint param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  void *extraout_ECX;
  void *this_00;
  int iVar5;
  void *extraout_ECX_00;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  int local_ec [51];
  int local_20;
  void *local_1c;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_1c = this;
  FUN_10005e41((int)this);
  bVar8 = *(int *)((int)this + 0x654) != 0;
  local_10 = CONCAT31(local_10._1_3_,bVar8);
  local_14 = *(int *)(&DAT_100d1728 + param_3 * 4);
  iVar5 = *(int *)((int)this + 0x650);
  bVar9 = *(int *)(*(int *)((int)this + 0x658c) + 0x38) == 0x66;
  local_8 = CONCAT31(local_8._1_3_,bVar9);
  iVar6 = *(int *)(&DAT_100d16f0 + local_14 * 8) * param_7 + *(int *)(&DAT_100d16f4 + local_14 * 8);
  param_7 = *(uint *)((int)this + 0x6654) & *(uint *)(*param_1 + 0x10);
  local_20 = iVar6;
  if ((*(uint *)((int)this + 0x6660) & param_7) == param_7) {
    uVar7 = *(uint *)((int)this + 0x6664) & param_7;
    uVar4 = *(undefined4 *)(*(int *)((int)this + 0x658c) + 4);
    param_5._0_1_ = *(byte *)((int)this + 0x666c) & 1;
    FUN_10008ae3(this,uVar7,(byte)param_5);
    (**(code **)(**(int **)((int)this + 0x14) + 0xbc))
              (local_14,*param_1,param_1[2],uVar4,param_2,param_6,local_20,local_8,local_10);
    FUN_10008a20(this,param_7,'\x01');
    this_00 = extraout_ECX;
LAB_1000973f:
    FUN_10008a5c(this_00,uVar7,(byte)param_5);
    uVar4 = local_c;
  }
  else if ((*(uint *)((int)this + 0x6660) & param_7) == 0) {
    if (param_1[2] == 0) {
      iVar1 = *param_1;
      if ((((*(int *)(iVar1 + 4) == 0) || (!bVar8)) || (*(uint *)((int)this + 0x31c) < 9)) ||
         (*(char *)((int)this + 0x669f) == '\0')) {
        if ((param_7 == 1) && (*(int *)(iVar1 + 0xc) == *(int *)((int)this + 0x65d0))) {
          iVar5 = 2;
          if (bVar9) {
            iVar5 = 4;
          }
          (**(code **)(**(int **)((int)this + 0x14) + 0x20))
                    (local_14,*param_1,
                     *(int *)(*(int *)((int)this + 26000) + 4) + *(int *)((int)this + 0x6610),
                     *(undefined4 *)((int)this + 0x65d0),param_5,
                     iVar5 * param_6 + *(int *)(*(int *)((int)this + 0x658c) + 4),iVar6,param_2,
                     local_8,local_10);
          uVar4 = local_c;
        }
        else {
          FUN_100088cf(this,*param_1,param_7,0,(int)local_ec);
          iVar5 = 2;
          if ((char)local_8 != '\0') {
            iVar5 = 4;
          }
          (**(code **)(**(int **)((int)this + 0x14) + 0x28))
                    (local_14,param_1[1],local_ec,param_5,
                     iVar5 * param_6 + *(int *)(*(int *)((int)this + 0x658c) + 4),iVar6,param_2,
                     local_8,local_10);
          uVar4 = local_c;
        }
      }
      else {
        param_7 = FUN_1001081d(this,iVar1);
        param_7 = FUN_10009b9e((void *)((int)this + 0x30c),&param_7);
        bVar8 = FUN_1001a891(this,param_4 + param_5,*(int *)(param_7 + 0xc));
        uVar4 = local_c;
        if (bVar8) {
          uVar7 = 0;
          if (iVar5 != 0) {
            uVar7 = 2;
          }
          uVar3 = 0;
          if ((char)local_10 != '\0') {
            uVar3 = 4;
          }
          FUN_100cfed0(local_ec,0,0xcc);
          FUN_1000896c(local_1c,*param_1,(int)local_ec);
          this = local_1c;
          uVar2 = MXCSR;
          MXCSR = 0x3fc0;
          FUN_1001acf0(local_1c,local_ec,*(int *)((int)local_1c + 0xd6c),param_7,uVar7 | uVar3 | 1,
                       param_4,param_5,param_2 + param_4,'\0');
          uVar7 = 2;
          if ((char)local_8 != '\0') {
            uVar7 = 4;
          }
          (**(code **)(**(int **)((int)this + 0x14) + 0x20))
                    (local_14,param_7,*(undefined4 *)((int)this + 0xd6c),
                     *(undefined4 *)(param_7 + 0xc),param_5,
                     uVar7 * param_6 + *(int *)(*(int *)((int)this + 0x658c) + 4),local_20,0,local_8
                     ,0);
          uVar4 = local_c;
          MXCSR = uVar2;
        }
      }
    }
    else {
      FUN_100088cf(this,*param_1,param_7,0,(int)local_ec);
      if ((param_7 == 1) && (*(int *)(*param_1 + 0xc) == *(int *)((int)this + 0x65d0))) {
        iVar5 = 2;
        if ((char)local_8 != '\0') {
          iVar5 = 4;
        }
        (**(code **)(**(int **)((int)this + 0x14) + 0xa4))
                  (local_14,*param_1,param_1[2],
                   *(int *)(*(int *)((int)this + 26000) + 4) + *(int *)((int)this + 0x6610),
                   *(undefined4 *)((int)this + 0x65d0),param_5,
                   iVar5 * param_6 + *(int *)(*(int *)((int)this + 0x658c) + 4),iVar6,param_2,
                   local_8);
        uVar4 = local_c;
      }
      else {
        iVar5 = 2;
        if ((char)local_8 != '\0') {
          iVar5 = 4;
        }
        (**(code **)(**(int **)((int)this + 0x14) + 0xac))
                  (local_14,param_1[1],param_1[2],local_ec,param_5,
                   iVar5 * param_6 + *(int *)(*(int *)((int)this + 0x658c) + 4),iVar6,param_2,
                   local_8);
        uVar4 = local_c;
      }
    }
  }
  else {
    uVar4 = FUN_10008b5a(this,~*(uint *)((int)this + 0x6660) & param_7,param_4 + param_2,param_5);
    if ((char)uVar4 != '\0') {
      uVar7 = *(uint *)((int)this + 0x6664) & param_7;
      param_5._0_1_ = *(byte *)((int)this + 0x666c) & 1;
      FUN_10008ae3(this,uVar7,(byte)param_5);
      (**(code **)(**(int **)((int)this + 0x14) + 0xbc))
                (local_14,*param_1,param_1[2],*(undefined4 *)(*(int *)((int)this + 0x658c) + 4),
                 param_2,param_6,local_20,*(int *)(*(int *)((int)this + 0x658c) + 0x38) == 0x66,
                 local_10);
      FUN_10008a20(this,param_7,'\x01');
      this_00 = extraout_ECX_00;
      goto LAB_1000973f;
    }
    uVar4 = 0x88760827;
  }
  if ((*(char *)((int)this + 0xd8d) == '\0') &&
     (*(char *)(*(int *)((int)this + 0xc) + 0x75e) == '\0')) {
    bVar8 = false;
    if (*(char *)((int)this + 0x2a1) == '\0') goto LAB_10009b34;
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
LAB_10009b34:
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
  return uVar4;
}

