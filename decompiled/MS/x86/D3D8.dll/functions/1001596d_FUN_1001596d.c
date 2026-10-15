/*
 * FUN_1001596d at 1001596d
 * undefined __thiscall FUN_1001596d(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 1001596d-10015a04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001596d(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  if (*(char *)((int)this + 0x220) == '\0') {
    *(undefined4 *)((int)this + 0x2c) = param_1;
    *(undefined4 *)((int)this + 0x30) = param_2;
    *(undefined4 *)((int)this + 0x3c) = param_5;
    *(undefined4 *)((int)this + 0x34) = param_3;
    *(undefined4 *)((int)this + 0x38) = param_4;
    *(undefined4 *)((int)this + 0x40) = param_6;
    (**(code **)(**(int **)((int)this + 0x14) + 0x3c))((undefined4 *)((int)this + 0x2c));
  }
  else {
    iVar1 = *(int *)(*(int *)((int)this + 0x210) + *(int *)((int)this + 0x21c) * 4);
    *(undefined4 *)(iVar1 + 0x4924) = param_1;
    *(undefined4 *)(iVar1 + 0x4928) = param_2;
    *(undefined4 *)(iVar1 + 0x4934) = param_5;
    *(undefined4 *)(iVar1 + 0x492c) = param_3;
    *(undefined4 *)(iVar1 + 0x4930) = param_4;
    *(undefined4 *)(iVar1 + 0x4938) = param_6;
    *(undefined1 *)(iVar1 + 0x9398) = 1;
  }
  return;
}

