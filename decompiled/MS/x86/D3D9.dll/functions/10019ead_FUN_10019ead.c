/*
 * FUN_10019ead at 10019ead
 * int __thiscall FUN_10019ead(void * this, uint * param_1)
 * Address ranges: 10019ead-10019ee6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10019ead(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *param_1;
  uVar3 = FUN_1001a2fa(this,uVar1,0);
  if (uVar3 != *(uint *)((int)this + 8)) {
    iVar2 = *(int *)((int)this + 4);
    iVar4 = uVar3 * 0x80;
    if ((*(uint *)(iVar4 + iVar2) == uVar1) && (*(int *)(iVar4 + 4 + iVar2) == 0)) {
      return iVar4 + 0xc + iVar2;
    }
  }
  return 0;
}

