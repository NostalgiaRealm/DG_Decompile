/*
 * FUN_1000e164 at 1000e164
 * undefined4 __thiscall FUN_1000e164(void * this, int param_1)
 * Address ranges: 1000e164-1000e185
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1000e164(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_1 != 0) {
    uVar1 = (**(code **)**(undefined4 **)((int)this + 0xc))
                      (*(undefined4 **)((int)this + 0xc),&DAT_100af310,param_1);
  }
  return uVar1;
}

