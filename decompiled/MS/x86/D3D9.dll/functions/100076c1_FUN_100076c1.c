/*
 * FUN_100076c1 at 100076c1
 * undefined __thiscall FUN_100076c1(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 100076c1-1000773e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100076c1(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((((param_2 == 0) || (param_2 == 1)) && (param_3 != 0)) &&
     (*(char *)((int)this + 0x66a0) == '\0')) {
    FUN_10003e40((void *)((int)&param_2 + 3),(byte)(*(uint *)((int)this + 0xdd0) >> 2) & 1);
    (**(code **)(**(int **)((int)this + 0xde8) + 0x50))
              (*(undefined4 *)(*(int *)(*(int *)((int)this + 0xd94) + param_1 * 4) + 0xa8),iVar1,
               iVar1 + 0x200,iVar1 + 0x400,0x477fff00);
    FUN_10003e89((char *)((int)&param_2 + 3));
  }
  return;
}

