/*
 * FUN_10042e08 at 10042e08
 * undefined4 __thiscall FUN_10042e08(void * this, int param_1, int param_2, int param_3, uint param_4, int param_5, uint param_6, uint param_7, char param_8, byte param_9, char param_10)
 * Address ranges: 10042e08-100431c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10042e08(void *this,int param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6,
            uint param_7,char param_8,byte param_9,char param_10)

{
  byte bVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *this_00;
  undefined3 in_stack_00000025;
  uint local_128 [5];
  undefined4 local_114;
  undefined1 local_104;
  undefined1 local_101;
  char local_100;
  char local_ff;
  int local_f4;
  
  FUN_1003dd9f(this);
  bVar3 = FUN_1003e15a((int)this);
  bVar1 = param_9 & bVar3;
  _param_9 = CONCAT31(in_stack_00000025,bVar1);
  if ((((param_10 == '\0') || (param_7 < 3)) && (*(int *)((int)this + 0x2ac) == 0)) &&
     (*(int *)(param_2 + 4) == 0)) {
    local_128[0] = (uint)local_128[0]._1_3_ << 8;
  }
  else {
    local_128[0] = CONCAT31(local_128[0]._1_3_,1);
  }
  FUN_1000618b(this,param_10,param_10,(char)local_128[0]);
  FUN_1003e261(this,(uint)(param_7 == 2));
  FUN_1003e364((int)this);
  FUN_1003e3bb((int)this);
  bVar3 = FUN_10042db9(this,param_2,bVar1);
  if (bVar3) {
    if ((*(uint *)((int)this + 0x17c) < 9) ||
       (*(char *)(*(int *)((int)this + 0xa58) + 0x20) == '\0')) {
      FUN_1003e451(this_00,param_7,*(char *)(*(int *)((int)this + 0xa58) + 0x21),param_2);
      goto LAB_10042fe2;
    }
    local_128[0] = FUN_100091ce(this_00,param_2);
    local_128[0] = FUN_10045c74((void *)((int)this + 0x16c),local_128);
    bVar3 = FUN_10008e65(this,param_4,*(int *)(local_128[0] + 0xc));
    if (bVar3) {
      uVar6 = 0;
      if (param_8 != '\0') {
        uVar6 = 8;
      }
      uVar4 = 0;
      if (bVar1 != 0) {
        uVar4 = 4;
      }
      uVar5 = 0;
      if (param_10 != '\0') {
        uVar5 = 2;
      }
      FUN_1000901e(param_2,param_3,(int *)(local_128 + 2));
      uVar2 = MXCSR;
      local_128[1] = 0x3fc0;
      MXCSR = 0x3fc0;
      FUN_1000964d(this,(int *)(local_128 + 2),*(int *)((int)this + 0x9b8),local_128[0],
                   uVar6 | uVar4 | uVar5 | 1,0,param_4,0,'\0',param_7 != 7);
      if (param_5 == 0) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x1c))
                  (*(undefined4 *)(&DAT_1005dd08 + param_1 * 4),local_128[0],
                   *(undefined4 *)((int)this + 0x9b8),*(undefined4 *)(local_128[0] + 0xc),param_4,0)
        ;
        MXCSR = uVar2;
      }
      else {
        (**(code **)(**(int **)((int)this + 0x14) + 0x20))
                  (*(undefined4 *)(&DAT_1005dd08 + param_1 * 4),local_128[0],
                   *(undefined4 *)((int)this + 0x9b8),*(undefined4 *)(local_128[0] + 0xc),param_4,
                   param_5,param_6,0,0,0);
        MXCSR = uVar2;
      }
    }
  }
  else {
LAB_10042fe2:
    uVar2 = MXCSR;
    if ((param_8 != '\0') || (param_10 != '\0')) {
      MXCSR = 0x3fc0;
      FUN_1005c9cc((int *)(local_128 + 2),0,0x40);
      if (*(char *)(param_2 + 0x14) == -1) {
        local_128[2] = 0;
      }
      else {
        local_128[2] = param_3 + (uint)*(byte *)(param_2 + 0x17) * 4;
      }
      local_101 = *(int *)(param_2 + 4) != 0;
      local_114 = *(undefined4 *)(param_2 + 0xc);
      local_f4 = (int)this + 0x1f0;
      local_100 = param_10;
      local_ff = param_8;
      uVar6 = param_4;
      if (param_5 != 0) {
        uVar6 = param_6;
      }
      local_104 = 2;
      FUN_10011755(this,(int *)(local_128 + 2),param_5,uVar6);
    }
    MXCSR = uVar2;
    if (param_5 == 0) {
      (**(code **)(**(int **)((int)this + 0x14) + 0x1c))
                (*(undefined4 *)(&DAT_1005dd08 + param_1 * 4),param_2,param_3,
                 *(undefined4 *)(param_2 + 0xc),param_4,_param_9);
    }
    else {
      (**(code **)(**(int **)((int)this + 0x14) + 0x20))
                (*(undefined4 *)(&DAT_1005dd08 + param_1 * 4),param_2,param_3,
                 *(undefined4 *)(param_2 + 0xc),param_4,param_5,param_6,0,0);
    }
  }
  if ((*(char *)((int)this + 0x9d9) == '\0') &&
     (*(char *)(*(int *)((int)this + 0xc) + 0x75e) == '\0')) {
    bVar3 = false;
    if (*(char *)((int)this + 0xfd) == '\0') goto LAB_10043157;
  }
  else {
    bVar3 = true;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x14))();
  (**(code **)(**(int **)((int)this + 0x18) + 0x14))
            (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8));
  if ((bVar3) &&
     ((**(code **)(**(int **)((int)this + 0x18) + 0x14))
                (*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0xf8)),
     *(char *)(*(int *)((int)this + 0xc) + 0x75f) != '\0')) {
    DebugBreak();
  }
LAB_10043157:
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

