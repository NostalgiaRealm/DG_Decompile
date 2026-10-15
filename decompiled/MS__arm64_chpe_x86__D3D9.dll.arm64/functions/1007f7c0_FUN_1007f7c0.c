/*
 * FUN_1007f7c0 at 1007f7c0
 * undefined FUN_1007f7c0(void)
 * Address ranges: 1007f7c0-1007f833
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007f7c0(int param_1,int param_2)

{
  ulonglong uVar1;
  
  switch(param_2) {
  case 0:
    if (*(int *)(param_1 + 0xe7c) != 2) {
      *(undefined1 *)(param_1 + 0xf66c) = 1;
      goto switchD_1007f7dc_default;
    }
    break;
  case 1:
  case 2:
    *(undefined1 *)(param_1 + 0xf66c) = 1;
    break;
  default:
    goto switchD_1007f7dc_default;
  }
  *(undefined1 *)(param_1 + 0xf668) = 1;
switchD_1007f7dc_default:
  *(int *)(param_1 + 0xe7c) = param_2;
  uVar1 = 0x1000000000000;
  if (param_2 != 2) {
    uVar1 = 0;
  }
  *(ulonglong *)(param_1 + 0xfc0) = uVar1 | *(ulonglong *)(param_1 + 0xfc0) & 0xfffeffffffffffff;
  return;
}

