/*
 * FUN_1007324a at 1007324a
 * undefined __fastcall FUN_1007324a(int * param_1, int param_2)
 * Address ranges: 1007324a-1007340a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1007324a(int *param_1,int param_2)

{
  int in_stack_00000010;
  int in_stack_00000014;
  uint uVar1;
  
  if (in_stack_00000014 == 0) {
    if (in_stack_00000010 != 1) {
      if (in_stack_00000010 != 2) {
        return;
      }
      FUN_100a138c((int *)(param_2 + 0xc),param_1,0x56);
    }
LAB_100733ec:
    FUN_100a138c((int *)(param_2 + 0xc),param_1,0x38);
  }
  else {
    if (in_stack_00000014 == 1) {
      if (in_stack_00000010 == 0) goto LAB_100733ec;
      if (in_stack_00000010 != 2) {
        return;
      }
      uVar1 = 0x56;
    }
    else {
      if (in_stack_00000014 != 2) {
        return;
      }
      if (in_stack_00000010 == 0) {
        FUN_100a138c((int *)(param_2 + 0xc),param_1,0x32);
      }
      else if (in_stack_00000010 != 1) {
        return;
      }
      uVar1 = 0x1c;
    }
    FUN_100a138c((int *)(param_2 + 0xc),param_1,uVar1);
  }
  return;
}

