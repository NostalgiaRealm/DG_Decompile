/*
 * FUN_10006eed at 10006eed
 * undefined __thiscall FUN_10006eed(void * this, int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 10006eed-10006f93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006eed(void *this,int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar2 = FUN_10005e0b((int)this);
    if ((((&DAT_1005b1b9)[uVar2 * 0x18] == '\0') &&
        (*(char *)(*(int *)((int)this + 0x1c) + 0x7b5) != '\0')) && (param_1 != 0)) {
      if ((param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) &&
         (((param_2 == 0 || (param_2 == 1)) || (param_2 == 2)))) {
        FUN_10008e33(*(void **)((int)this + 0xc),param_1,param_2,param_3,0,0x100);
        (**(code **)(**(int **)((int)this + 0xc) + 0x15c))(param_1,param_2,param_3,0,0x100);
      }
    }
    else {
      FUN_10006f94(this,param_2,param_3,0,0xff);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

