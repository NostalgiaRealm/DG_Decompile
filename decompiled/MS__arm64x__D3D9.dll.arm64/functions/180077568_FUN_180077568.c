/*
 * FUN_180077568 at 180077568
 * undefined FUN_180077568(void)
 * Address ranges: 180077568-18007765f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180077568(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 extraout_x14;
  uint extraout_w15;
  
  if ((*(int *)(param_2 + 0x484) == -1) || (*(int *)(param_2 + 0x484) == 0)) {
    uVar1 = 0x1b;
    if (*(int *)(param_2 + 800) != *(int *)(param_2 + 0x238)) {
      uVar1 = 0x36;
    }
    FUN_1800796a8(param_1,param_2,param_3,uVar1 | *(uint *)(param_2 + 0x480),param_2 + 800,
                  param_2 + 0x3d0,0);
  }
  else {
    FUN_1800f5ea8(0xe4,*(undefined1 *)(param_2 + 0x324));
    uVar1 = *(uint *)(param_2 + 0x480) | 0x37;
    if ((extraout_w15 & 0xf000000) == 0xd000000) {
      FUN_1800796a8(extraout_x14,param_2,param_3,uVar1);
    }
    else {
      FUN_1800796a8(extraout_x14,param_2,param_3,uVar1);
    }
  }
  *(undefined4 *)(param_2 + 0x484) = 0xffffffff;
  return;
}

