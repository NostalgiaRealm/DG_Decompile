/*
 * FUN_1000866f at 1000866f
 * undefined4 __thiscall FUN_1000866f(void * this, uint * param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1000866f-10008ac4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1000866f(void *this,uint *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  void *this_00;
  uint uVar5;
  bool bVar6;
  uint local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  uint local_e4;
  int local_dc;
  int local_d8 [53];
  
  local_f0 = 0;
  FUN_100055f6((int)this);
  local_e8 = *(int *)(&DAT_100af648 + param_2 * 4);
  uVar5 = *(int *)(&DAT_100af610 + local_e8 * 8) * param_4 + *(int *)(&DAT_100af614 + local_e8 * 8);
  bVar6 = *(int *)((int)this + 0x4b0) != 0;
  local_ec = CONCAT31(local_ec._1_3_,bVar6);
  iVar1 = *(int *)((int)this + 0x4ac);
  local_f4 = *(uint *)((int)this + 0x5880) & *(uint *)(*param_1 + 0x10);
  local_e4 = uVar5;
  if ((*(uint *)((int)this + 0x588c) & local_f4) == local_f4) {
    uVar5 = *(uint *)((int)this + 0x5890) & local_f4;
    FUN_10007f44(this,uVar5,'\0');
    (**(code **)(**(int **)((int)this + 0x14) + 0xb8))
              (local_e8,*param_1,param_1[2],param_3,local_e4,local_ec);
    FUN_10007ebd(this,uVar5,'\0');
    FUN_10007e81(this,local_f4,'\0');
    uVar4 = local_f0;
  }
  else if ((*(uint *)((int)this + 0x588c) & local_f4) == 0) {
    if (param_1[2] == 0) {
      uVar3 = *param_1;
      if ((((*(int *)(uVar3 + 4) == 0) || (!bVar6)) || (*(uint *)((int)this + 0x178) < 9)) ||
         (*(char *)((int)this + 0x58bf) == '\0')) {
        if ((local_f4 == 1) && (*(int *)(uVar3 + 0xc) == *(int *)((int)this + 0x57fc))) {
          (**(code **)(**(int **)((int)this + 0x14) + 0x1c))
                    (local_e8,*param_1,
                     *(int *)((int)this + 0x57fc) * param_3 +
                     *(int *)(*(int *)((int)this + 0x57bc) + 4) + *(int *)((int)this + 0x583c),
                     *(undefined4 *)((int)this + 0x57fc),uVar5,local_ec);
          uVar4 = local_f0;
        }
        else {
          FUN_10007d7c(this,*param_1,local_f4,param_3,(int)local_d8);
          (**(code **)(**(int **)((int)this + 0x14) + 0x24))
                    (local_e8,param_1[1],local_d8,uVar5,local_ec);
          uVar4 = local_f0;
        }
      }
      else {
        local_f4 = FUN_1000cefd(this,uVar3);
        local_dc = FUN_1000903f((void *)((int)this + 0x168),&local_f4);
        bVar6 = FUN_10016851(this,uVar5,*(int *)(local_dc + 0xc));
        uVar4 = local_f0;
        if (bVar6) {
          uVar5 = 0;
          if (iVar1 != 0) {
            uVar5 = 2;
          }
          uVar3 = 0;
          if ((char)local_ec != '\0') {
            uVar3 = 4;
          }
          FUN_100ada8e(local_d8,0,0xcc);
          FUN_10007e02(this,*param_1,(int)local_d8);
          iVar2 = local_dc;
          iVar1 = MXCSR;
          local_f4 = 0x3fc0;
          MXCSR = 0x3fc0;
          FUN_10016cb2(this,local_d8,*(int *)((int)this + 0xaa8),local_dc,uVar5 | uVar3 | 1,0,
                       local_e4,param_3,'\0');
          (**(code **)(**(int **)((int)this + 0x14) + 0x1c))
                    (local_e8,iVar2,*(undefined4 *)((int)this + 0xaa8),*(undefined4 *)(iVar2 + 0xc),
                     local_e4,0);
          uVar4 = local_f0;
          MXCSR = iVar1;
          local_dc = iVar1;
        }
      }
    }
    else if ((local_f4 == 1) && (*(int *)(*param_1 + 0xc) == *(int *)((int)this + 0x57fc))) {
      (**(code **)(**(int **)((int)this + 0x14) + 0xa0))
                (local_e8,*param_1,param_1[2],
                 *(int *)((int)this + 0x57fc) * param_3 + *(int *)(*(int *)((int)this + 0x57bc) + 4)
                 + *(int *)((int)this + 0x583c),*(undefined4 *)((int)this + 0x57fc),uVar5);
      uVar4 = local_f0;
    }
    else {
      FUN_10007d7c(this,*param_1,local_f4,param_3,(int)local_d8);
      (**(code **)(**(int **)((int)this + 0x14) + 0xa8))
                (local_e8,param_1[1],param_1[2],local_d8,uVar5);
      uVar4 = local_f0;
    }
  }
  else {
    uVar4 = FUN_10007fbb(this,~*(uint *)((int)this + 0x588c) & local_f4,param_3,uVar5);
    if ((char)uVar4 == '\0') {
      uVar4 = 0x8876086d;
    }
    else {
      uVar5 = *(uint *)((int)this + 0x5890) & local_f4;
      FUN_10007f44(this,uVar5,'\0');
      (**(code **)(**(int **)((int)this + 0x14) + 0xb8))
                (local_e8,*param_1,param_1[2],param_3,local_e4,local_ec);
      FUN_10007e81(this,local_f4,'\0');
      FUN_10007ebd(this_00,uVar5,'\0');
      uVar4 = local_f0;
    }
  }
  if ((*(char *)((int)this + 0xac9) == '\0') &&
     (*(char *)(*(int *)((int)this + 0xc) + 0x75e) == '\0')) {
    bVar6 = false;
    if (*(char *)((int)this + 0xfd) == '\0') goto LAB_10008a59;
  }
  else {
    bVar6 = true;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x14))();
  (**(code **)(**(int **)((int)this + 0x18) + 0x14))
            (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8));
  if ((bVar6) &&
     ((**(code **)(**(int **)((int)this + 0x18) + 0x14))
                (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8)),
     *(char *)(*(int *)((int)this + 0xc) + 0x75f) != '\0')) {
    DebugBreak();
  }
LAB_10008a59:
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
  return uVar4;
}

