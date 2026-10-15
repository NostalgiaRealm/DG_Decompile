/*
 * FUN_180035db8 at 180035db8
 * undefined FUN_180035db8(void)
 * Address ranges: 180035db8-180035e4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180035db8(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_30 [16];
  longlong local_20;
  
  uVar1 = FUN_180035608();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(int *)(param_1 + 0x28) == 1) &&
       (lVar3 = *(longlong *)
                 (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10),
       (**(code **)(*(longlong *)(lVar3 + 0x40) + 0x20))(lVar3 + 0x40,auStack_30,2,0,0),
       local_20 != 0)) {
      lVar3 = *(longlong *)
               (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
      (**(code **)(*(longlong *)(lVar3 + 0x40) + 0x28))(lVar3 + 0x40);
    }
    uVar2 = 1;
  }
  return uVar2;
}

