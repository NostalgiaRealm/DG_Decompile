/*
 * FUN_10009d7c at 10009d7c
 * undefined __thiscall FUN_10009d7c(void * this, int param_1, int param_2)
 * Address ranges: 10009d7c-10009ded
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10009d7c(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_2;
  iVar1 = param_1;
  if (param_2 != 0) {
    FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)((int)this + 0xdd0) >> 2) & 1);
    iVar1 = *(int *)(*(int *)((int)this + 0xd94) + iVar1 * 4);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + 0xa8);
    }
    (**(code **)(**(int **)((int)this + 0xde8) + 0x4c))
              (uVar3,iVar2,iVar2 + 0x200,iVar2 + 0x400,0x437f0000);
    FUN_10003e89((char *)((int)&param_1 + 3));
  }
  return;
}

