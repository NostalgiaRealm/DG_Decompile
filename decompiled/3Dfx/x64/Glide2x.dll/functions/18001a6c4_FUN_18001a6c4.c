/*
 * FUN_18001a6c4 at 18001a6c4
 * undefined __fastcall FUN_18001a6c4(longlong param_1)
 * Address ranges: 18001a6c4-18001a78f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001a6c4(longlong param_1)

{
  int iVar1;
  longlong local_28 [4];
  
  iVar1 = 0;
  local_28[0] = param_1 + 0x3c50;
  local_28[1] = param_1 + 0x6c90;
  local_28[2] = param_1 + 0x9cd0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x33)) {
    do {
      FUN_18002ecfc(local_28[iVar1]);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(*(longlong *)(param_1 + 8) + 0x33));
  }
  FUN_18002ee5c(param_1 + 0x3b60);
  FUN_1800207d8((longlong *)(param_1 + 0x34e8));
  FUN_180018f60(param_1);
  if (*(ulonglong *)(param_1 + 0x3228) != 0) {
    FUN_180042eec(*(longlong *)(*(longlong *)(param_1 + 0x31b0) + 0x1b500),
                  *(ulonglong *)(param_1 + 0x3228),(undefined *)0x0,'\x01');
  }
  (**(code **)(**(longlong **)(param_1 + 0x3228) + 0x10))();
  *(undefined8 *)(param_1 + 0x3228) = 0;
  FUN_180044f2c(*(longlong *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8));
  return;
}

