/*
 * FUN_10008e65 at 10008e65
 * bool __thiscall FUN_10008e65(void * this, int param_1, int param_2)
 * Address ranges: 10008e65-10008ea2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10008e65(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 * param_2;
  if (*(uint *)((int)this + 0x9bc) <= uVar2 && uVar2 - *(uint *)((int)this + 0x9bc) != 0) {
    FUN_10008ea3((int)this);
    *(uint *)((int)this + 0x9bc) = uVar2;
    iVar1 = FUN_1005c789(uVar2);
    *(int *)((int)this + 0x9b8) = iVar1;
  }
  return *(int *)((int)this + 0x9b8) != 0;
}

