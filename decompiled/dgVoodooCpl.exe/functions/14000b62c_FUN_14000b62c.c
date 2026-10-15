/*
 * FUN_14000b62c at 14000b62c
 * undefined4 __fastcall FUN_14000b62c(longlong param_1, undefined8 param_2, int param_3, undefined8 param_4, undefined8 * param_5)
 * Address ranges: 14000b62c-14000b67f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_14000b62c(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  uint in_EAX;
  undefined4 uVar1;
  uint uVar2;
  LRESULT LVar3;
  
  if ((param_3 == 0x4e) && (*(int *)(param_5 + 2) == -0x227)) {
    LVar3 = SendMessageW((HWND)*param_5,0x130b,0,0);
    uVar1 = FUN_14000ec20(param_1,*(int *)(param_5 + 1),(uint)LVar3);
    uVar2 = CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  else {
    uVar2 = in_EAX & 0xffffff00;
  }
  return uVar2;
}

