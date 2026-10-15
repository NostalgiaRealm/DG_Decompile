/*
 * FUN_10011d1c at 10011d1c
 * undefined __thiscall FUN_10011d1c(void * this, int param_1, int param_2, char param_3, char param_4)
 * Address ranges: 10011d1c-10011d91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10011d1c(void *this,int param_1,int param_2,char param_3,char param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = (ulonglong)(uint)(*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28)) *
            (ulonglong)
            (uint)((*(int *)((int)this + 0x2b48) - *(int *)((int)this + 0x2b40)) *
                  (*(int *)((int)this + 0x2b44) - *(int *)((int)this + 0x2b3c)));
    uVar2 = __aulldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),
                      *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20),0);
    *(int *)((int)this + 0x2d64) = *(int *)((int)this + 0x2d64) + (int)uVar2;
    if (param_3 != '\0') {
      FUN_100165b8(param_1);
    }
  }
  if (((param_2 != 0) && (param_4 != '\0')) && (*(char *)(param_2 + 0x48) != '\0')) {
    FUN_100165b8(param_2);
  }
  return;
}

