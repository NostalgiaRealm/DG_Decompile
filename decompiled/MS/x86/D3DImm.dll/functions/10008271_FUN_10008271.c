/*
 * FUN_10008271 at 10008271
 * int __thiscall FUN_10008271(void * this, uint * param_1)
 * Address ranges: 10008271-100082aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10008271(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *param_1;
  uVar3 = FUN_1000867f(this,uVar1,0);
  if (uVar3 != *(uint *)((int)this + 8)) {
    iVar2 = *(int *)((int)this + 4);
    iVar4 = uVar3 * 0x78;
    if ((*(uint *)(iVar4 + iVar2) == uVar1) && (*(int *)(iVar4 + 4 + iVar2) == 0)) {
      return iVar4 + 0xc + iVar2;
    }
  }
  return 0;
}

