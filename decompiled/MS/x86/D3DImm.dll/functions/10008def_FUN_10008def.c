/*
 * FUN_10008def at 10008def
 * undefined __thiscall FUN_10008def(void * this, uint param_1)
 * Address ranges: 10008def-10008e3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10008def(void *this,uint param_1)

{
  longlong lVar1;
  SIZE_T SVar2;
  int iVar3;
  
  if (*(uint *)((int)this + 0x9b0) < param_1) {
    FUN_10008e40((int)this);
    lVar1 = (ulonglong)(param_1 * 2 | 1) * 0x10;
    SVar2 = (SIZE_T)lVar1;
    if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
      SVar2 = 0xffffffff;
    }
    iVar3 = FUN_1005c789(SVar2);
    *(int *)((int)this + 0x9a8) = iVar3;
    if (iVar3 != 0) {
      *(uint *)((int)this + 0x9b0) = param_1;
      *(uint *)((int)this + 0x9a4) = iVar3 + 0xfU & 0xfffffff0;
    }
  }
  return;
}

