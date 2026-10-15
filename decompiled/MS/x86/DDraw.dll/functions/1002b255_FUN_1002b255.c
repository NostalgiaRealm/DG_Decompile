/*
 * FUN_1002b255 at 1002b255
 * undefined4 __thiscall FUN_1002b255(void * this, undefined4 * param_1)
 * Address ranges: 1002b255-1002b298
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002b255(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80070057;
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = 0;
    if ((*(uint *)((int)this + 0x1b8) & 0x210) == 0x200) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      if (*(int *)(*(int *)((int)this + 4) + 0xb0) == 0) {
        uVar1 = *(undefined4 *)((int)this + 0x1dc);
      }
    }
    *param_1 = uVar1;
  }
  return uVar2;
}

