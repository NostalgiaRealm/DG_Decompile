/*
 * FUN_1001ca73 at 1001ca73
 * undefined __thiscall FUN_1001ca73(void * this, int param_1, int param_2, char param_3, char param_4)
 * Address ranges: 1001ca73-1001cae8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001ca73(void *this,int param_1,int param_2,char param_3,char param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = (ulonglong)(uint)(*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28)) *
            (ulonglong)
            (uint)((*(int *)((int)this + 0x2990) - *(int *)((int)this + 0x2988)) *
                  (*(int *)((int)this + 0x298c) - *(int *)((int)this + 0x2984)));
    uVar2 = __aulldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),
                      *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20),0);
    *(int *)((int)this + 0x2b7c) = *(int *)((int)this + 0x2b7c) + (int)uVar2;
    if (param_3 != '\0') {
      FUN_10021e9a(param_1);
    }
  }
  if (((param_2 != 0) && (param_4 != '\0')) && (*(char *)(param_2 + 0x48) != '\0')) {
    FUN_10021e9a(param_2);
  }
  return;
}

