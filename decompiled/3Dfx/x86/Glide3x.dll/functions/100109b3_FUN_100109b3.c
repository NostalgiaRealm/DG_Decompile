/*
 * FUN_100109b3 at 100109b3
 * undefined __thiscall FUN_100109b3(void * this, int param_1, int param_2, char param_3, char param_4)
 * Address ranges: 100109b3-10010a28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100109b3(void *this,int param_1,int param_2,char param_3,char param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = (ulonglong)(uint)(*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28)) *
            (ulonglong)
            (uint)((*(int *)((int)this + 0x2a0c) - *(int *)((int)this + 0x2a04)) *
                  (*(int *)((int)this + 0x2a08) - *(int *)((int)this + 0x2a00)));
    uVar2 = __aulldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),
                      *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20),0);
    *(int *)((int)this + 0x2c1c) = *(int *)((int)this + 0x2c1c) + (int)uVar2;
    if (param_3 != '\0') {
      FUN_10014f27(param_1);
    }
  }
  if (((param_2 != 0) && (param_4 != '\0')) && (*(char *)(param_2 + 0x48) != '\0')) {
    FUN_10014f27(param_2);
  }
  return;
}

