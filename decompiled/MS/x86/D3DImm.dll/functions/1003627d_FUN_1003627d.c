/*
 * FUN_1003627d at 1003627d
 * undefined __stdcall FUN_1003627d(uint * param_1)
 * Address ranges: 1003627d-10036412
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003627d(uint *param_1)

{
  uint uVar1;
  int *in_stack_00000024;
  uint in_stack_0000002c;
  
  FUN_10057c8a((int *)param_1,in_stack_00000024,0x2d);
  if ((in_stack_0000002c >> 0x12 & 1) != 0) {
    FUN_10057c8a((int *)param_1,in_stack_00000024,0x32);
    FUN_10057c8a((int *)param_1,in_stack_00000024,0x40);
    FUN_10057c8a((int *)param_1,in_stack_00000024,0x1c);
  }
  uVar1 = FUN_10057dfe(*param_1);
  if (uVar1 < 0x50) {
    FUN_10057c8a((int *)param_1,in_stack_00000024,0x26);
  }
  else {
    FUN_10057c8a((int *)param_1,in_stack_00000024,0x29);
  }
  FUN_10057c8a((int *)param_1,in_stack_00000024,0x3c);
  FUN_10057c8a((int *)param_1,in_stack_00000024,0x3c);
  return;
}

