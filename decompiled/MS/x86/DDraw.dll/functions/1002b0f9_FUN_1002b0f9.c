/*
 * FUN_1002b0f9 at 1002b0f9
 * undefined4 __thiscall FUN_1002b0f9(void * this, int param_1, int param_2)
 * Address ranges: 1002b0f9-1002b16d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002b0f9(void *this,int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80070057;
  if (((param_1 != 0) && (param_2 == 0)) &&
     (uVar2 = 0x88760250, (*(uint *)((int)this + 0x1b8) & 0x24034) == 0)) {
    uVar1 = *(uint *)(param_1 + 4);
    uVar2 = 0x88760064;
    if ((((((uVar1 & 1) == 0) || (*(int *)(param_1 + 0x68) == 0)) &&
         ((uVar2 = 0x80070057, (uVar1 & 0xffffe7f0) == 0 && (uVar1 != 0)))) &&
        (((uVar1 & 0xc) == 0xc || ((uVar1 & 0xc) == 0)))) &&
       (uVar2 = 0x887601ae, *(int *)(*(int *)((int)this + 4) + 0xb0) == 0)) {
      uVar2 = FUN_100305b6(this,param_1);
    }
  }
  return uVar2;
}

