/*
 * FUN_100060dd at 100060dd
 * undefined __thiscall FUN_100060dd(void * this, undefined4 param_1, int param_2, uint param_3)
 * Address ranges: 100060dd-10006167
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Switch with 1 destination removed at 0x10006161 */
/* WARNING: Exceeded maximum restarts with more pending */

void __thiscall FUN_100060dd(void *this,undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0x10) {
    param_3 = FUN_10005def(this,param_3);
  }
  else if (param_2 == 0x11) {
    param_3 = FUN_10005e4f(this,param_3);
  }
  else if (param_2 == 0x12) {
    param_3 = FUN_10005eaf(this,param_3);
  }
  else if (param_2 == 0x15) {
    uVar1 = *(uint *)(*(int *)((int)this + 0xc) + 0x7dc);
    uVar2 = uVar1 & 0xff;
    if ((uVar2 < 0x11) && (uVar1 != 0)) {
      param_3 = uVar2;
    }
  }
  else if (9 < param_2 - 0xcU) {
    (**(code **)(**(int **)((int)this + 0x14) + 0x54))(param_1,param_2,param_3);
    return;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  (**(code **)(**(int **)((int)this + 0x14) + 0x58))
            (param_1,*(undefined4 *)(&UNK_1005d2c0 + (param_2 + -0xc) * 4),param_3);
  return;
}

