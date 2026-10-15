/*
 * FUN_1004e19a at 1004e19a
 * undefined __thiscall FUN_1004e19a(void * this, int * param_1)
 * Address ranges: 1004e19a-1004e1f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004e19a(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      param_1 = *(int **)(*piVar1 + uVar2 * 4);
      FUN_1004ee0b(*(void **)((int)this + 0xc),(int *)&param_1);
      thunk_FUN_10060be1((LPVOID)**(undefined4 **)(*piVar1 + uVar2 * 4));
      thunk_FUN_10060be1(*(LPVOID *)(*piVar1 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)piVar1[1]);
  }
  thunk_FUN_10060be1((LPVOID)*piVar1);
  FUN_10060be1(piVar1);
  return;
}

