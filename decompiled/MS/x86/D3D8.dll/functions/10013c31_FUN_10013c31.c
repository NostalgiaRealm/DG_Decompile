/*
 * FUN_10013c31 at 10013c31
 * undefined __thiscall FUN_10013c31(void * this, undefined4 param_1, int param_2, uint param_3)
 * Address ranges: 10013c31-10013cca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10013c31(void *this,undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0x10) {
    param_3 = FUN_1001396a(this,param_3);
  }
  else if (param_2 == 0x11) {
    param_3 = FUN_1001396a(this,param_3);
  }
  else if (param_2 == 0x12) {
    param_3 = FUN_100139ca(this,param_3);
  }
  else if (param_2 == 0x15) {
    uVar1 = *(uint *)(*(int *)((int)this + 0xc) + 0x7dc);
    uVar2 = uVar1 & 0xff;
    if ((uVar2 < 0x11) && (uVar1 != 0)) {
      param_3 = uVar2;
    }
  }
  else if (0xc < param_2 - 0xdU) goto switchD_10013caf_caseD_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x10013cc8)) {
  case 0:
    (**(code **)(**(int **)((int)this + 0x14) + 0x50))
              (param_1,*(undefined4 *)(&DAT_100b1944 + param_2 * 4),param_3);
    return;
  }
switchD_10013caf_caseD_1:
  (**(code **)(**(int **)((int)this + 0x14) + 0x4c))(param_1,param_2,param_3);
  return;
}

