/*
 * FUN_1002cc78 at 1002cc78
 * undefined __thiscall FUN_1002cc78(void * this, int * param_1)
 * Address ranges: 1002cc78-1002cd14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002cc78(void *this,int *param_1)

{
  int iVar1;
  byte extraout_DL;
  byte bVar2;
  
  FUN_1001c16f(*(int **)((int)this + 0x315c));
  (**(code **)(*(int *)this + 0x150))();
  *(int *)((int)this + 0x2984) = *param_1;
  *(int *)((int)this + 0x2988) = param_1[1];
  *(int *)((int)this + 0x298c) = param_1[2];
  *(int *)((int)this + 0x2990) = param_1[3];
  *(undefined1 *)((int)this + 0x3151) = 1;
  iVar1 = FUN_1001c41a(*(int *)((int)this + 0x2964));
  bVar2 = extraout_DL;
  if (iVar1 != -1) {
    iVar1 = (**(code **)(**(int **)((int)this + 0x315c) + 0x2c))(iVar1);
    if ((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == *(int *)(iVar1 + 0x20))) &&
       (param_1[3] == *(int *)(iVar1 + 0x24))) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
  }
  if ((bool)bVar2 != (*(int *)((int)this + 0x2adc) == 0)) {
    *(undefined1 *)((int)this + 0x2bc2) = 1;
    *(uint *)((int)this + 0x2adc) = bVar2 ^ 1;
  }
  return;
}

