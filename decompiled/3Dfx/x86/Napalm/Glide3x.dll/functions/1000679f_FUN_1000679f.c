/*
 * FUN_1000679f at 1000679f
 * undefined __thiscall FUN_1000679f(void * this, uint param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 1000679f-1000686f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000679f(void *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (0xf < (int)param_1) {
      param_1 = 0;
    }
    if (0xf < (int)param_2) {
      param_2 = 0;
    }
    piVar2 = *(int **)((int)this + 0xc);
    if ((((param_1 != *(byte *)((int)piVar2 + 0xe6)) || (param_2 != *(byte *)((int)piVar2 + 0xe7)))
        || (param_3 != *(byte *)(piVar2 + 0x3a))) ||
       (((param_4 != *(byte *)((int)piVar2 + 0xe9) || (*(char *)((int)piVar2 + 0xea) != '\0')) ||
        (*(char *)((int)piVar2 + 0xeb) != '\0')))) {
      (**(code **)(*piVar2 + 0xa4))(param_1,param_2,0,param_3,param_4,0);
      *(char *)(*(int *)((int)this + 0xc) + 0xe6) = (char)param_1;
      *(char *)(*(int *)((int)this + 0xc) + 0xe7) = (char)param_2;
      *(char *)(*(int *)((int)this + 0xc) + 0xe8) = (char)param_3;
      *(char *)(*(int *)((int)this + 0xc) + 0xe9) = (char)param_4;
      *(undefined1 *)(*(int *)((int)this + 0xc) + 0xea) = 0;
      *(undefined1 *)(*(int *)((int)this + 0xc) + 0xeb) = 0;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

