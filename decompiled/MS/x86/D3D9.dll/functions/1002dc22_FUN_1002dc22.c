/*
 * FUN_1002dc22 at 1002dc22
 * undefined4 __thiscall FUN_1002dc22(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 1002dc22-1002dc48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002dc22(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0x50) + 0x2c))
                    (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70),0,1,param_1
                     ,param_2);
  return CONCAT31((int3)((uint)-iVar1 >> 8),'\x01' - (iVar1 != 0));
}

