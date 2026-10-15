/*
 * FUN_18004e320 at 18004e320
 * undefined __cdecl FUN_18004e320(longlong param_1)
 * Address ranges: 18004e320-18004e36f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004e320(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xb28);
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xb20);
    FUN_18004e3c0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xd0))
              (*(longlong **)(param_1 + 0x688),iVar1,uVar2);
    *(undefined4 *)(param_1 + 0xb28) = 0;
  }
  return;
}

