/*
 * FUN_10008ac5 at 10008ac5
 * undefined4 __thiscall FUN_10008ac5(void * this, uint * param_1, int param_2, int param_3, int param_4, uint param_5, int param_6, int param_7)
 * Address ranges: 10008ac5-1000903e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10008ac5(void *this,uint *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
            int param_7)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  void *extraout_ECX;
  void *this_00;
  int iVar4;
  void *extraout_ECX_00;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  uint local_f0;
  void *local_ec;
  undefined4 local_e8;
  int local_e0;
  int local_dc;
  int local_d8 [53];
  
  local_e8 = 0;
  local_ec = this;
  FUN_100055f6((int)this);
  bVar7 = *(int *)((int)this + 0x4b0) != 0;
  local_e0 = *(int *)(&DAT_100af648 + param_3 * 4);
  iVar4 = *(int *)((int)this + 0x4ac);
  bVar8 = *(int *)(*(int *)((int)this + 0x57b8) + 0x38) == 0x66;
  iVar5 = *(int *)(&DAT_100af610 + local_e0 * 8) * param_7 + *(int *)(&DAT_100af614 + local_e0 * 8);
  local_f0 = *(uint *)((int)this + 0x5880) & *(uint *)(*param_1 + 0x10);
  local_dc = iVar5;
  if ((*(uint *)((int)this + 0x588c) & local_f0) == local_f0) {
    uVar6 = *(uint *)((int)this + 0x5890) & local_f0;
    uVar3 = *(undefined4 *)(*(int *)((int)this + 0x57b8) + 4);
    local_ec = (void *)(CONCAT31(local_ec._1_3_,*(undefined1 *)((int)this + 0x5898)) & 0xffffff01);
    FUN_10007f44(this,uVar6,(char)local_ec);
    (**(code **)(**(int **)((int)this + 0x14) + 0xbc))
              (local_e0,*param_1,param_1[2],uVar3,param_2,param_6,local_dc,bVar8,bVar7);
    FUN_10007e81(this,local_f0,'\x01');
    this_00 = extraout_ECX;
LAB_10008bbe:
    FUN_10007ebd(this_00,uVar6,(char)local_ec);
    uVar3 = local_e8;
  }
  else if ((*(uint *)((int)this + 0x588c) & local_f0) == 0) {
    if (param_1[2] == 0) {
      uVar6 = *param_1;
      if ((((*(int *)(uVar6 + 4) == 0) || (!bVar7)) || (*(uint *)((int)this + 0x178) < 9)) ||
         (*(char *)((int)this + 0x58bf) == '\0')) {
        if ((local_f0 == 1) && (*(int *)(uVar6 + 0xc) == *(int *)((int)this + 0x57fc))) {
          iVar4 = 2;
          if (bVar8) {
            iVar4 = 4;
          }
          (**(code **)(**(int **)((int)this + 0x14) + 0x20))
                    (local_e0,*param_1,
                     *(int *)(*(int *)((int)this + 0x57bc) + 4) + *(int *)((int)this + 0x583c),
                     *(undefined4 *)((int)this + 0x57fc),param_5,
                     iVar4 * param_6 + *(int *)(*(int *)((int)this + 0x57b8) + 4),iVar5,param_2,
                     bVar8,bVar7);
          uVar3 = local_e8;
        }
        else {
          FUN_10007d7c(this,*param_1,local_f0,0,(int)local_d8);
          iVar4 = 2;
          if (bVar8) {
            iVar4 = 4;
          }
          (**(code **)(**(int **)((int)this + 0x14) + 0x28))
                    (local_e0,param_1[1],local_d8,param_5,
                     iVar4 * param_6 + *(int *)(*(int *)((int)this + 0x57b8) + 4),iVar5,param_2,
                     bVar8,bVar7);
          uVar3 = local_e8;
        }
      }
      else {
        local_f0 = FUN_1000cefd(this,uVar6);
        local_f0 = FUN_1000903f((void *)((int)this + 0x168),&local_f0);
        bVar1 = FUN_10016851(this,param_4 + param_5,*(int *)(local_f0 + 0xc));
        uVar3 = local_e8;
        if (bVar1) {
          uVar6 = 0;
          if (iVar4 != 0) {
            uVar6 = 2;
          }
          uVar2 = 0;
          if (bVar7) {
            uVar2 = 4;
          }
          FUN_100ada8e(local_d8,0,0xcc);
          FUN_10007e02(local_ec,*param_1,(int)local_d8);
          this = local_ec;
          iVar4 = MXCSR;
          MXCSR = 0x3fc0;
          FUN_10016cb2(local_ec,local_d8,*(int *)((int)local_ec + 0xaa8),local_f0,uVar6 | uVar2 | 1,
                       param_4,param_5,param_2 + param_4,'\0');
          uVar6 = 2;
          if (bVar8) {
            uVar6 = 4;
          }
          (**(code **)(**(int **)((int)this + 0x14) + 0x20))
                    (local_e0,local_f0,*(undefined4 *)((int)this + 0xaa8),
                     *(undefined4 *)(local_f0 + 0xc),param_5,
                     uVar6 * param_6 + *(int *)(*(int *)((int)this + 0x57b8) + 4),local_dc,0,bVar8,0
                    );
          uVar3 = local_e8;
          MXCSR = iVar4;
          local_dc = iVar4;
        }
      }
    }
    else {
      FUN_10007d7c(this,*param_1,local_f0,0,(int)local_d8);
      if ((local_f0 == 1) && (*(int *)(*param_1 + 0xc) == *(int *)((int)this + 0x57fc))) {
        iVar4 = 2;
        if (bVar8) {
          iVar4 = 4;
        }
        (**(code **)(**(int **)((int)this + 0x14) + 0xa4))
                  (local_e0,*param_1,param_1[2],
                   *(int *)(*(int *)((int)this + 0x57bc) + 4) + *(int *)((int)this + 0x583c),
                   *(undefined4 *)((int)this + 0x57fc),param_5,
                   iVar4 * param_6 + *(int *)(*(int *)((int)this + 0x57b8) + 4),iVar5,param_2,bVar8)
        ;
        uVar3 = local_e8;
      }
      else {
        iVar4 = 2;
        if (bVar8) {
          iVar4 = 4;
        }
        (**(code **)(**(int **)((int)this + 0x14) + 0xac))
                  (local_e0,param_1[1],param_1[2],local_d8,param_5,
                   iVar4 * param_6 + *(int *)(*(int *)((int)this + 0x57b8) + 4),iVar5,param_2,bVar8)
        ;
        uVar3 = local_e8;
      }
    }
  }
  else {
    uVar3 = FUN_10007fbb(this,~*(uint *)((int)this + 0x588c) & local_f0,param_4 + param_2,param_5);
    if ((char)uVar3 != '\0') {
      uVar6 = *(uint *)((int)this + 0x5890) & local_f0;
      local_ec = (void *)(CONCAT31(local_ec._1_3_,*(undefined1 *)((int)this + 0x5898)) & 0xffffff01)
      ;
      FUN_10007f44(this,uVar6,(char)local_ec);
      (**(code **)(**(int **)((int)this + 0x14) + 0xbc))
                (local_e0,*param_1,param_1[2],*(undefined4 *)(*(int *)((int)this + 0x57b8) + 4),
                 param_2,param_6,local_dc,*(int *)(*(int *)((int)this + 0x57b8) + 0x38) == 0x66,
                 bVar7);
      FUN_10007e81(this,local_f0,'\x01');
      this_00 = extraout_ECX_00;
      goto LAB_10008bbe;
    }
    uVar3 = 0x88760827;
  }
  if ((*(char *)((int)this + 0xac9) == '\0') &&
     (*(char *)(*(int *)((int)this + 0xc) + 0x75e) == '\0')) {
    bVar7 = false;
    if (*(char *)((int)this + 0xfd) == '\0') goto LAB_10008fd3;
  }
  else {
    bVar7 = true;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x14))();
  (**(code **)(**(int **)((int)this + 0x18) + 0x14))
            (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8));
  if ((bVar7) &&
     ((**(code **)(**(int **)((int)this + 0x18) + 0x14))
                (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8)),
     *(char *)(*(int *)((int)this + 0xc) + 0x75f) != '\0')) {
    DebugBreak();
  }
LAB_10008fd3:
  if (*(char *)((int)this + 0xfe) == '\0') {
    (**(code **)(**(int **)((int)this + 0x18) + 0xc))();
    if (*(int *)((int)this + 0x28) != 0) {
      (**(code **)(**(int **)((int)this + 0x28) + 0xc))();
    }
    *(undefined1 *)((int)this + 0xfe) = 1;
  }
  if (*(char *)((int)this + 0xff) != '\0') {
    if (*(int *)((int)this + 0x2f4) != 0) {
      (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x18) + 4) + 0x50) + 0x20))
                (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8),1);
    }
    *(undefined1 *)((int)this + 0xff) = 0;
  }
  return uVar3;
}

