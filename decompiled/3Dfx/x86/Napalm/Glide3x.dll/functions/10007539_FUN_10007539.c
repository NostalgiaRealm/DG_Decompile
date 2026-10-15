/*
 * FUN_10007539 at 10007539
 * undefined __thiscall FUN_10007539(void * this, int param_1, undefined4 * param_2, int param_3, int param_4)
 * Address ranges: 10007539-100075dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007539(void *this,int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (((((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) ||
        ((param_1 == 3 && (uVar2 = FUN_100061fc((int)this), (&DAT_1005f38d)[uVar2 * 0x18] != '\0')))
        ) && (0 < *(int *)(*(int *)((int)this + 0x1c) + 0x797))) {
      iVar3 = 0;
      do {
        FUN_1000967f(*(void **)((int)this + 0xc),iVar3,param_1,param_2,param_3,param_4 + 1);
        (**(code **)(**(int **)((int)this + 0xc) + 0x150))
                  (iVar3,param_1,param_2,param_3,param_4 + 1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*(int *)((int)this + 0x1c) + 0x797));
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

