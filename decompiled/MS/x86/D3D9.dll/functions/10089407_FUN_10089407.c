/*
 * FUN_10089407 at 10089407
 * undefined __fastcall FUN_10089407(int * param_1, int param_2)
 * Address ranges: 10089407-100895c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10089407(int *param_1,int param_2)

{
  int in_stack_00000010;
  int in_stack_00000014;
  uint uVar1;
  
  if (in_stack_00000014 == 0) {
    if (in_stack_00000010 != 1) {
      if (in_stack_00000010 != 2) {
        return;
      }
      FUN_100c3be1((int *)(param_2 + 0xc),param_1,0x56);
    }
LAB_100895a9:
    FUN_100c3be1((int *)(param_2 + 0xc),param_1,0x38);
  }
  else {
    if (in_stack_00000014 == 1) {
      if (in_stack_00000010 == 0) goto LAB_100895a9;
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
        FUN_100c3be1((int *)(param_2 + 0xc),param_1,0x32);
      }
      else if (in_stack_00000010 != 1) {
        return;
      }
      uVar1 = 0x1c;
    }
    FUN_100c3be1((int *)(param_2 + 0xc),param_1,uVar1);
  }
  return;
}

