/*
 * FUN_100431c2 at 100431c2
 * undefined4 __thiscall FUN_100431c2(void * this, int param_1, int param_2, int param_3, undefined4 param_4, int param_5, uint param_6, int param_7, uint param_8, uint param_9, char param_10, char param_11, byte param_12, char param_13, char param_14)
 * Address ranges: 100431c2-100435fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_100431c2(void *this,int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
            uint param_6,int param_7,uint param_8,uint param_9,char param_10,char param_11,
            byte param_12,char param_13,char param_14)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *this_00;
  undefined3 in_stack_00000031;
  uint local_128 [4];
  int local_118;
  undefined4 local_114;
  undefined4 local_10c;
  uint local_108;
  undefined1 local_104;
  undefined1 local_102;
  undefined1 local_101;
  char local_100;
  char local_ff;
  int local_f4;
  
  if (param_9 < 7) {
    FUN_1003dd9f(this);
    bVar2 = FUN_1003e15a((int)this);
    param_12 = param_12 & bVar2;
  }
  if ((((param_13 == '\0') || ((param_14 == '\0' && (param_9 != 3)))) &&
      (*(int *)((int)this + 0x2ac) == 0)) && (*(int *)(param_2 + 4) == 0)) {
    local_128[0] = (uint)local_128[0]._1_3_ << 8;
  }
  else {
    local_128[0] = CONCAT31(local_128[0]._1_3_,1);
  }
  FUN_1000618b(this,param_13,param_13,(char)local_128[0]);
  FUN_1003e261(this,0);
  FUN_1003e364((int)this);
  FUN_1003e3bb((int)this);
  FUN_1003f577((int)this);
  bVar2 = FUN_10042db9(this,param_2,param_12);
  if (bVar2) {
    if ((*(uint *)((int)this + 0x17c) < 9) ||
       (*(char *)(*(int *)((int)this + 0xa58) + 0x20) == '\0')) {
      FUN_1003e451(this_00,param_9,*(char *)(*(int *)((int)this + 0xa58) + 0x21),param_2);
      goto LAB_100433a5;
    }
    local_128[0] = FUN_100091ce(this_00,param_2);
    local_128[0] = FUN_10045c74((void *)((int)this + 0x16c),local_128);
    bVar2 = FUN_10008e65(this,param_6,*(int *)(local_128[0] + 0xc));
    if (bVar2) {
      uVar5 = 0;
      if (param_10 != '\0') {
        uVar5 = 8;
      }
      uVar3 = 0;
      if (param_11 != '\0') {
        uVar3 = 2;
      }
      uVar4 = 0;
      if (param_12 != 0) {
        uVar4 = 4;
      }
      FUN_1000901e(param_2,param_5,(int *)(local_128 + 2));
      uVar1 = MXCSR;
      local_128[1] = 0x3fc0;
      MXCSR = 0x3fc0;
      FUN_1000964d(this,(int *)(local_128 + 2),*(int *)((int)this + 0x9b8),local_128[0],
                   uVar5 | uVar3 | uVar4 | 1,0,param_6,0,'\0',param_9 != 7);
      if (param_7 == 0) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x1c))
                  (*(undefined4 *)(&DAT_1005dd08 + param_1 * 4),local_128[0],
                   *(undefined4 *)((int)this + 0x9b8),*(undefined4 *)(local_128[0] + 0xc),param_6,0)
        ;
        MXCSR = uVar1;
      }
      else {
        (**(code **)(**(int **)((int)this + 0x14) + 0x20))
                  (*(undefined4 *)(&DAT_1005dd08 + param_1 * 4),local_128[0],
                   *(undefined4 *)((int)this + 0x9b8),*(undefined4 *)(local_128[0] + 0xc),param_6,
                   param_7,param_8,0,0,0);
        MXCSR = uVar1;
      }
    }
  }
  else {
LAB_100433a5:
    uVar1 = MXCSR;
    if ((param_10 != '\0') || (param_11 != '\0')) {
      MXCSR = 0x3fc0;
      FUN_1005c9cc((int *)(local_128 + 2),0,0x40);
      if (*(char *)(param_2 + 0x14) == -1) {
        local_128[2] = 0;
      }
      else {
        local_128[2] = param_5 + (uint)*(byte *)(param_2 + 0x17) * 4;
      }
      local_114 = *(undefined4 *)(param_2 + 0xc);
      local_104 = 2;
      if (*(char *)(param_2 + 0x1c) == -1) {
        local_118 = 0;
      }
      else {
        local_118 = param_5 + (uint)*(byte *)(param_2 + 0x1f) * 4;
      }
      local_101 = *(int *)(param_2 + 4) != 0;
      local_10c = *(undefined4 *)(param_2 + 0xc);
      local_108 = (uint)*(byte *)(param_2 + 0x1d);
      local_102 = *(undefined1 *)(param_2 + 0x20);
      local_f4 = (int)this + 0x1f0;
      local_100 = param_11;
      local_ff = param_10;
      uVar5 = param_6;
      if (param_7 != 0) {
        uVar5 = param_8;
      }
      FUN_10011755(this,(int *)(local_128 + 2),param_7,uVar5);
    }
    MXCSR = uVar1;
    if (param_3 == 0) {
      if (param_7 == 0) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x1c))
                  (*(undefined4 *)(&DAT_1005dd08 + param_1 * 4),param_2,param_5,
                   *(undefined4 *)(param_2 + 0xc),param_6,_param_12);
      }
      else {
        (**(code **)(**(int **)((int)this + 0x14) + 0x20))
                  (*(undefined4 *)(&DAT_1005dd08 + param_1 * 4),param_2,param_5,
                   *(undefined4 *)(param_2 + 0xc),param_6,param_7,param_8,0,0);
      }
    }
    else if (param_7 == 0) {
      (**(code **)(**(int **)((int)this + 0x14) + 0x24))
                (*(undefined4 *)(&DAT_1005dd08 + param_1 * 4),param_2,param_3,param_4,param_6);
    }
    else {
      (**(code **)(**(int **)((int)this + 0x14) + 0x28))
                (*(undefined4 *)(&DAT_1005dd08 + param_1 * 4),param_2,param_3,param_7,param_4,
                 param_8);
    }
  }
  if ((*(char *)((int)this + 0x9d9) == '\0') &&
     (*(char *)(*(int *)((int)this + 0xc) + 0x75e) == '\0')) {
    bVar2 = false;
    if (*(char *)((int)this + 0xfd) == '\0') goto LAB_10043590;
  }
  else {
    bVar2 = true;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x14))();
  (**(code **)(**(int **)((int)this + 0x18) + 0x14))
            (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8));
  if ((bVar2) &&
     ((**(code **)(**(int **)((int)this + 0x18) + 0x14))
                (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8)),
     *(char *)(*(int *)((int)this + 0xc) + 0x75f) != '\0')) {
    DebugBreak();
  }
LAB_10043590:
  if (*(char *)((int)this + 0xfe) == '\0') {
    (**(code **)(**(int **)((int)this + 0x18) + 0xc))();
    if (*(int *)((int)this + 0x28) != 0) {
      (**(code **)(**(int **)((int)this + 0x28) + 0xc))();
    }
    *(undefined1 *)((int)this + 0xfe) = 1;
  }
  if (*(char *)((int)this + 0xff) != '\0') {
    if (*(int *)((int)this + 0x2f8) != 0) {
      (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x18) + 4) + 0x50) + 0x20))
                (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8),1);
    }
    *(undefined1 *)((int)this + 0xff) = 0;
  }
  return 0;
}

