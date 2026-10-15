/*
 * FUN_18009bb6c at 18009bb6c
 * undefined __fastcall FUN_18009bb6c(longlong param_1, int param_2, int param_3)
 * Address ranges: 18009bb6c-18009bbd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009bb6c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffd8;
  
  if (*(longlong *)(param_1 + 0xc4) != 0) {
    lVar2 = ((ulonglong)(uint)(param_3 * *(int *)(param_1 + 0x3c) + param_2) << 5 | 0x10) +
            *(longlong *)(param_1 + 0x84);
    uVar1 = FUN_18009b92c(param_1,(uint *)(param_1 + 0xb0),param_1 + 0x60,lVar2,
                          in_stack_ffffffffffffffd8,param_2,param_3,(RECT *)lVar2);
    if ((char)uVar1 != '\0') {
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
  }
  return;
}

