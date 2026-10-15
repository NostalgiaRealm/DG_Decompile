/*
 * FUN_10017cb4 at 10017cb4
 * undefined __thiscall FUN_10017cb4(void * this, undefined4 param_1, int param_2, uint param_3)
 * Address ranges: 10017cb4-10017d4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10017cb4(void *this,undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0x10) {
    param_3 = FUN_100179ed(this,param_3);
  }
  else if (param_2 == 0x11) {
    param_3 = FUN_100179ed(this,param_3);
  }
  else if (param_2 == 0x12) {
    param_3 = FUN_10017a4d(this,param_3);
  }
  else if (param_2 == 0x15) {
    uVar1 = *(uint *)(*(int *)((int)this + 0xc) + 0x7dc);
    uVar2 = uVar1 & 0xff;
    if ((uVar2 < 0x11) && (uVar1 != 0)) {
      param_3 = uVar2;
    }
  }
  else if (0xc < param_2 - 0xdU) goto switchD_10017d32_caseD_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x10017d4b)) {
  case 0:
    (**(code **)(**(int **)((int)this + 0x14) + 0x50))
              (param_1,*(undefined4 *)(&DAT_100d4df4 + param_2 * 4),param_3);
    return;
  }
switchD_10017d32_caseD_1:
  (**(code **)(**(int **)((int)this + 0x14) + 0x4c))(param_1,param_2,param_3);
  return;
}

