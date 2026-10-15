/*
 * FUN_1800476b0 at 1800476b0
 * undefined __fastcall FUN_1800476b0(longlong param_1)
 * Address ranges: 1800476b0-180047706
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800476b0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xb28);
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xb20);
    FUN_1800477f0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xd0))
              (*(longlong **)(param_1 + 0x688),iVar1,uVar2);
    *(undefined4 *)(param_1 + 0xb28) = 0;
  }
  return;
}

