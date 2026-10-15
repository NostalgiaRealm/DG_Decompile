/*
 * FUN_1003bc5a at 1003bc5a
 * undefined __thiscall FUN_1003bc5a(void * this, undefined4 param_1, int param_2)
 * Address ranges: 1003bc5a-1003bc87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003bc5a(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x178) == 0) {
    uVar1 = (*(code *)**(undefined4 **)this)(param_1,param_2,6,*(undefined1 *)(param_2 + 0x18e));
    *(undefined4 *)(param_2 + 0x178) = uVar1;
  }
  return;
}

