/*
 * FUN_100078db at 100078db
 * undefined4 __thiscall FUN_100078db(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 100078db-1000797e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_100078db(void *this,uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if ((param_1 < 6) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)((int)this + (param_1 + 0x23) * 0x10);
    param_2[1] = *(undefined4 *)((int)this + param_1 * 0x10 + 0x234);
    param_2[2] = *(undefined4 *)((int)this + param_1 * 0x10 + 0x238);
    param_2[3] = *(undefined4 *)((int)this + param_1 * 0x10 + 0x23c);
    uVar1 = 0;
  }
  return uVar1;
}

