/*
 * FUN_180025798 at 180025798
 * undefined __cdecl FUN_180025798(longlong param_1)
 * Address ranges: 180025798-180025913
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180025798(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (*(int *)(*(longlong *)(param_1 + 0x2c8) + 0x34) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + 0x34) = 0;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x2c0) + 0x34) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x2c0) + 0x34) = 0;
  }
  FUN_180058ef8(*(longlong *)(param_1 + 0x2e0),param_1 + 0x2d8);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x318) != 0) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x310);
      if (*(int *)(*(longlong *)(lVar3 + uVar4 * 8) + 8) != 0) {
        uVar5 = 0;
        do {
          FUN_180048418((longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x19d8),
                        *(longlong *)
                         (*(longlong *)(**(longlong **)(lVar3 + uVar4 * 8) + uVar5 * 8) + 0x28));
          puVar2 = *(undefined8 **)
                    (**(longlong **)(*(longlong *)(param_1 + 0x310) + uVar4 * 8) + uVar5 * 8);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          lVar3 = *(longlong *)(param_1 + 0x310);
          uVar1 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(*(longlong *)(lVar3 + uVar4 * 8) + 8));
      }
      puVar2 = *(undefined8 **)(lVar3 + uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        thunk_FUN_180063700((LPVOID)*puVar2);
        FUN_180063700(puVar2);
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x318));
  }
  thunk_FUN_180063700(*(LPVOID *)(param_1 + 0x310));
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x2c8);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_180048a90(puVar2);
    FUN_180063700(puVar2);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_180048a90(puVar2);
    FUN_180063700(puVar2);
  }
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  FUN_180025738(param_1);
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x234) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined1 *)(param_1 + 600) = 0;
  return;
}

