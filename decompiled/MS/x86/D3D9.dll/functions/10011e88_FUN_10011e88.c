/*
 * FUN_10011e88 at 10011e88
 * undefined4 __thiscall FUN_10011e88(void * this, int param_1)
 * Address ranges: 10011e88-10011ea9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10011e88(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_1 != 0) {
    uVar1 = (**(code **)**(undefined4 **)((int)this + 0xc))
                      (*(undefined4 **)((int)this + 0xc),&DAT_100d1310,param_1);
  }
  return uVar1;
}

