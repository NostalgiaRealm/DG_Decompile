/*
 * FUN_18005f000 at 18005f000
 * undefined FUN_18005f000(void)
 * Address ranges: 18005f000-18005f05f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005f000(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x228) == 0) {
    uVar1 = FUN_1800f42d0(param_2,4,1);
    *(undefined4 *)(param_2 + 0x228) = uVar1;
    FUN_1800f5730(param_2,param_3,0x2036,uVar1,0xf,0x410103,*(undefined1 *)(param_2 + 0x20f),0);
  }
  return;
}

