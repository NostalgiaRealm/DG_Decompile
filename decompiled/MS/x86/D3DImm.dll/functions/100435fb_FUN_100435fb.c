/*
 * FUN_100435fb at 100435fb
 * undefined4 __thiscall FUN_100435fb(void * this, int param_1, int param_2, int * param_3, uint param_4, int param_5, uint param_6, uint param_7, char param_8, char param_9, byte param_10, char param_11)
 * Address ranges: 100435fb-10043a4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_100435fb(void *this,int param_1,int param_2,int *param_3,uint param_4,int param_5,uint param_6,
            uint param_7,char param_8,char param_9,byte param_10,char param_11)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *this_00;
  uint uVar6;
  undefined3 in_stack_00000029;
  uint local_1e8;
  void *local_1e4;
  int local_1e0 [2];
  int local_1d8;
  int local_1d4;
  undefined4 local_1cc;
  uint local_1c8;
  undefined1 local_1c4;
  undefined1 local_1c2;
  undefined1 local_1c1;
  char local_1c0;
  char local_1bf;
  int local_1b4;
  int local_c8 [49];
  
  local_1e4 = this;
  if (param_7 < 7) {
    FUN_1003dd9f(this);
    bVar2 = FUN_1003e15a((int)this);
    param_10 = param_10 & bVar2;
  }
  if ((((param_11 == '\0') || (param_7 < 3)) && (*(int *)((int)this + 0x2ac) == 0)) &&
     (*(int *)(param_2 + 4) == 0)) {
    local_1e8 = (uint)local_1e8._1_3_ << 8;
  }
  else {
    local_1e8 = CONCAT31(local_1e8._1_3_,1);
  }
  FUN_1000618b(this,param_11,param_11,(char)local_1e8);
  FUN_1003e261(this,0);
  FUN_1003e364((int)this);
  FUN_1003e3bb((int)this);
  FUN_1003f577((int)this);
  bVar2 = FUN_10042db9(this,param_2,param_10);
  if (bVar2) {
    if ((*(uint *)((int)this + 0x17c) < 9) ||
       (*(char *)(*(int *)((int)this + 0xa58) + 0x20) == '\0')) {
      FUN_1003e451(this_00,param_7,*(char *)(*(int *)((int)this + 0xa58) + 0x21),param_2);
      goto LAB_100437df;
    }
    local_1e8 = FUN_100091ce(this_00,param_2);
    local_1e8 = FUN_10045c74((void *)((int)this + 0x16c),&local_1e8);
    bVar2 = FUN_10008e65(this,param_4,*(int *)(local_1e8 + 0xc));
    if (bVar2) {
      uVar6 = 0;
      if (param_8 != '\0') {
        uVar6 = 8;
      }
      uVar4 = 0;
      if (param_9 != '\0') {
        uVar4 = 2;
      }
      uVar3 = 0;
      if (param_10 != 0) {
        uVar3 = 4;
      }
      FUN_10042d32(param_2,(int)param_3,(int)local_c8);
      this = local_1e4;
      uVar1 = MXCSR;
      MXCSR = 0x3fc0;
      FUN_1000964d(local_1e4,local_c8,*(int *)((int)local_1e4 + 0x9b8),local_1e8,
                   uVar6 | uVar4 | uVar3 | 1,0,param_4,0,'\0',param_7 != 7);
      if (param_5 == 0) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x1c))
                  (*(undefined4 *)(&DAT_1005dd08 + param_1 * 4),local_1e8,
                   *(undefined4 *)((int)this + 0x9b8),*(undefined4 *)(local_1e8 + 0xc),param_4,0);
        MXCSR = uVar1;
      }
      else {
        (**(code **)(**(int **)((int)this + 0x14) + 0x20))
                  (*(undefined4 *)(&DAT_1005dd08 + param_1 * 4),local_1e8,
                   *(undefined4 *)((int)this + 0x9b8),*(undefined4 *)(local_1e8 + 0xc),param_4,
                   param_5,param_6,0,0,0);
        MXCSR = uVar1;
      }
    }
  }
  else {
LAB_100437df:
    uVar1 = MXCSR;
    if ((param_8 != '\0') || (param_9 != '\0')) {
      MXCSR = 0x3fc0;
      FUN_1005c9cc(local_1e0,0,0x40);
      if (*(char *)(param_2 + 0x14) == -1) {
        local_1e0[0] = 0;
      }
      else {
        local_1e0[0] = *param_3 + (uint)*(byte *)(param_2 + 0x17) * 4;
      }
      local_1c4 = 2;
      local_1d4 = param_3[1];
      if (*(char *)(param_2 + 0x1c) == -1) {
        local_1d8 = 0;
      }
      else {
        local_1d8 = *param_3 + (uint)*(byte *)(param_2 + 0x1f) * 4;
      }
      local_1c1 = *(int *)(param_2 + 4) != 0;
      local_1cc = *(undefined4 *)(param_2 + 0xc);
      local_1c8 = (uint)*(byte *)(param_2 + 0x1d);
      local_1c2 = *(undefined1 *)(param_2 + 0x20);
      local_1b4 = (int)this + 0x1f0;
      local_1c0 = param_9;
      local_1bf = param_8;
      uVar6 = param_4;
      if (param_5 != 0) {
        uVar6 = param_6;
      }
      FUN_10011755(this,local_1e0,param_5,uVar6);
    }
    uVar6 = 0;
    if (*(int *)(param_2 + 8) != 0) {
      do {
        uVar4 = (uint)*(byte *)(uVar6 + 0x9c + param_2);
        local_1e8 = (uint)(byte)(&DAT_1005f498)[uVar4];
        if (uVar4 == 1) {
          iVar5 = param_3[local_1e8 * 2] + (uint)*(byte *)(param_2 + 0x15) * 4;
        }
        else {
          iVar5 = param_3[local_1e8 * 2];
        }
        local_c8[uVar6 * 2] = iVar5;
        local_c8[uVar6 * 2 + 1] = param_3[local_1e8 * 2 + 1];
        uVar6 = uVar6 + 1;
        this = local_1e4;
      } while (uVar6 < *(uint *)(param_2 + 8));
    }
    MXCSR = uVar1;
    if (param_5 == 0) {
      (**(code **)(**(int **)((int)this + 0x14) + 0x2c))
                (*(undefined4 *)(&DAT_1005dd08 + param_1 * 4),param_2,local_c8,param_4,_param_10);
    }
    else {
      (**(code **)(**(int **)((int)this + 0x14) + 0x30))
                (*(undefined4 *)(&DAT_1005dd08 + param_1 * 4),param_2,local_c8,param_4,param_5,
                 param_6,0,0);
    }
  }
  if ((*(char *)((int)this + 0x9d9) == '\0') &&
     (*(char *)(*(int *)((int)this + 0xc) + 0x75e) == '\0')) {
    bVar2 = false;
    if (*(char *)((int)this + 0xfd) == '\0') goto LAB_100439e1;
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
LAB_100439e1:
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

