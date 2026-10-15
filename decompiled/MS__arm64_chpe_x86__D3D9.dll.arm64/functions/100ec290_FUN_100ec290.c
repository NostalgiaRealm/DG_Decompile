/*
 * FUN_100ec290 at 100ec290
 * undefined FUN_100ec290(void)
 * Address ranges: 100ec290-100ec2f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100ec290(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x8876086c;
  if (param_3 != (uint *)0x0) {
    uVar1 = *(int *)(param_1 + 0x18) << 2;
    if (param_2 == 0) {
      *param_3 = uVar1;
    }
    else {
      if (*param_3 < uVar1) {
        return 0x8876086c;
      }
      FUN_101325a0(param_2,*(undefined4 *)(param_1 + 0x14),uVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

