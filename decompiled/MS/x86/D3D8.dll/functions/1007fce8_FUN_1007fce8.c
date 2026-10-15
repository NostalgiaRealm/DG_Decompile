/*
 * FUN_1007fce8 at 1007fce8
 * undefined __thiscall FUN_1007fce8(void * this, int param_1)
 * Address ranges: 1007fce8-1007fd57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1007fce8(void *this,int param_1)

{
  FUN_1007fcb1(this,param_1);
  if (*(undefined4 **)(param_1 + 0x164) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x164))(1);
  }
  thunk_FUN_100ad48c(*(LPVOID *)(param_1 + 0x97c));
  thunk_FUN_100ad48c(*(LPVOID *)(param_1 + 0x978));
  FUN_100ad48c(*(LPVOID *)(param_1 + 0x980));
  FUN_100ad48c(*(LPVOID *)(param_1 + 0x168));
  if (*(LPVOID *)(param_1 + 0x984) != (LPVOID)0x0) {
    VirtualFree(*(LPVOID *)(param_1 + 0x984),0,0x8000);
  }
  return;
}

