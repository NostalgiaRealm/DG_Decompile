/*
 * FUN_1801999f0 at 1801999f0
 * undefined FUN_1801999f0(void)
 * Address ranges: 1801999f0-180199a83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801999f0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = (ulonglong)(uint)(param_2 + *(int *)(param_1 + 0x3c) * param_3);
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x148) + uVar3 * 0x28;
      thunk_FUN_180223c70(lVar1 + 0x18,lVar1 + 0x18,
                          *(longlong *)(param_1 + 0xd0) + uVar3 * 0x28 + 0x18);
    }
    uVar2 = FUN_180199710(param_1,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0xb8),
                          param_2,param_3,*(longlong *)(param_1 + 0xd0) + uVar3 * 0x28 + 0x18);
  }
  return uVar2;
}

