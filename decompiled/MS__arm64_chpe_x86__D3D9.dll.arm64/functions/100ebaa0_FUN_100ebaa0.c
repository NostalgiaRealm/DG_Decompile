/*
 * FUN_100ebaa0 at 100ebaa0
 * undefined FUN_100ebaa0(void)
 * Address ranges: 100ebaa0-100ebaf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100ebaa0(int param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_3 != (uint *)0x0) {
    *param_3 = *(uint *)(param_1 + 0x270);
    if (param_2 != 0) {
      FUN_101325a0(param_2,*(undefined4 *)(param_1 + 0x26c),
                   ((ulonglong)*(uint *)(param_1 + 0x270) & 0x1fffffff) << 3);
    }
    uVar1 = 0;
  }
  return uVar1;
}

