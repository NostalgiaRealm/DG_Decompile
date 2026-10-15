/*
 * FUN_18000d540 at 18000d540
 * undefined __fastcall FUN_18000d540(longlong param_1)
 * Address ranges: 18000d540-18000d60b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000d540(longlong param_1)

{
  int iVar1;
  longlong local_28 [4];
  
  iVar1 = 0;
  local_28[0] = param_1 + 0x4770;
  local_28[1] = param_1 + 0x77b0;
  local_28[2] = param_1 + 0xa7f0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x33)) {
    do {
      FUN_180021660(local_28[iVar1]);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(*(longlong *)(param_1 + 8) + 0x33));
  }
  FUN_1800217e0(param_1 + 0x42a0);
  FUN_180013c7c((longlong *)(param_1 + 0x3668));
  FUN_18000bec8(param_1);
  if (*(ulonglong *)(param_1 + 0x33a8) != 0) {
    FUN_1800454f8(*(longlong *)(*(longlong *)(param_1 + 0x3330) + 0x1b500),
                  *(ulonglong *)(param_1 + 0x33a8),(undefined *)0x0,'\x01');
  }
  (**(code **)(**(longlong **)(param_1 + 0x33a8) + 0x10))();
  *(undefined8 *)(param_1 + 0x33a8) = 0;
  FUN_180047538(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338));
  return;
}

