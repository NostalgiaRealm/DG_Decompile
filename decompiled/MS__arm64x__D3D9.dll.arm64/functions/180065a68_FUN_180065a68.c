/*
 * FUN_180065a68 at 180065a68
 * undefined FUN_180065a68(void)
 * Address ranges: 180065a68-180065af7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180065a68(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x314) == 0) {
    uVar1 = FUN_1800f42d0(param_2,1,1);
    *(undefined4 *)(param_2 + 0x314) = uVar1;
    FUN_1800f5730(param_2,param_3,0x37,uVar1,1,0x41010d,0,*(undefined4 *)(param_2 + 0xa8),0xe4,
                  0x3f800000,*(undefined4 *)(param_2 + 0xa8),0xe4,0xbf800000,0);
  }
  return *(undefined4 *)(param_2 + 0x314);
}

