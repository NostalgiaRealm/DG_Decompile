/*
 * FUN_10080572 at 10080572
 * int __thiscall FUN_10080572(void * this, uint param_1)
 * Address ranges: 10080572-100805ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10080572(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_10080c3c((void *)((int)this + 0x14),param_1,0);
  if (uVar2 != *(uint *)((int)this + 0x1c)) {
    iVar1 = *(int *)((int)this + 0x18);
    iVar3 = uVar2 * 0x40;
    if ((*(uint *)(iVar3 + iVar1) == param_1) && (*(int *)(iVar3 + 4 + iVar1) == 0)) {
      return iVar3 + 0x10 + iVar1;
    }
  }
  return 0;
}

