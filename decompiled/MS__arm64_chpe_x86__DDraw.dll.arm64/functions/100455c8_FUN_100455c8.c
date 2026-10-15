/*
 * FUN_100455c8 at 100455c8
 * undefined FUN_100455c8(void)
 * Address ranges: 100455c8-1004562f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100455c8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_2 != (undefined4 *)0x0) {
    if ((*(uint *)(param_1 + 0x1b8) & 0x210) == 0x200) {
      uVar1 = 0;
    }
    else if (*(int *)(*(int *)(param_1 + 4) + 0xb0) == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x1dc);
    }
    else {
      uVar1 = 0;
    }
    *param_2 = uVar1;
    uVar1 = 0;
  }
  return uVar1;
}

