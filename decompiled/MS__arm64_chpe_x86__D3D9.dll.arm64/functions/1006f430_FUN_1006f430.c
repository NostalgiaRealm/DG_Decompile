/*
 * FUN_1006f430 at 1006f430
 * undefined FUN_1006f430(void)
 * Address ranges: 1006f430-1006f4d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006f430(int param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 8:
  case 10:
  case 0xc:
    *(longlong *)(param_1 + 0x18) = param_2;
    break;
  case 9:
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + param_2;
    break;
  case 0xb:
    if (*(longlong *)(param_1 + 0x18) == 0) {
      *(longlong *)(param_1 + 0x18) = param_2;
    }
  }
  if ((param_4 & 1) != 0) {
    iVar1 = FUN_1006f3d8(param_1);
    if (*(longlong *)(iVar1 + 0x20) == param_3) {
      *(undefined4 *)(iVar1 + 0x34) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined8 *)(iVar1 + 0x10) = 0;
    }
    *(undefined4 *)(iVar1 + 0x38) = 0;
  }
  return;
}

