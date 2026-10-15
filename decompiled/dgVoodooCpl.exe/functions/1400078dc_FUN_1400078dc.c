/*
 * FUN_1400078dc at 1400078dc
 * undefined8 __fastcall FUN_1400078dc(longlong param_1, int param_2)
 * Address ranges: 1400078dc-140007915
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400078dc(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = param_2 + -0x3ed;
  if (iVar2 == 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x20) = 0;
  }
  else if (iVar2 == 3) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x20) = 1;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
                    (*(longlong **)(param_1 + 0x20),CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1));
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}

