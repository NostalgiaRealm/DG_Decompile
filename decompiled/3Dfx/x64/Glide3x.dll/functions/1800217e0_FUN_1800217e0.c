/*
 * FUN_1800217e0 at 1800217e0
 * undefined __fastcall FUN_1800217e0(longlong param_1)
 * Address ranges: 1800217e0-1800219a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800217e0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(int *)(*(longlong *)(param_1 + 0x2c8) + 0x34) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + 0x34) = 0;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x2c0) + 0x34) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x2c0) + 0x34) = 0;
  }
  FUN_180055f7c(*(longlong *)(param_1 + 0x2e0),param_1 + 0x2d8);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x318) != 0) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x310);
      uVar5 = 0;
      if (*(int *)(*(longlong *)(lVar2 + uVar3 * 8) + 8) != 0) {
        do {
          FUN_180043f10((longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x19d8),
                        *(longlong *)
                         (*(longlong *)(**(longlong **)(lVar2 + uVar3 * 8) + uVar5 * 8) + 0x28));
          puVar1 = *(undefined8 **)
                    (**(longlong **)(*(longlong *)(param_1 + 0x310) + uVar3 * 8) + uVar5 * 8);
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          lVar2 = *(longlong *)(param_1 + 0x310);
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(*(longlong *)(lVar2 + uVar3 * 8) + 8));
      }
      puVar1 = *(undefined8 **)(lVar2 + uVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        FUN_180060ac0((LPVOID)*puVar1);
        FUN_180060ac0(puVar1);
      }
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x318));
  }
  FUN_180060ac0(*(LPVOID *)(param_1 + 0x310));
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x2c8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180044964(puVar1);
    FUN_180060ac0(puVar1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180044964(puVar1);
    FUN_180060ac0(puVar1);
  }
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  FUN_180021784(param_1);
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x234) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined1 *)(param_1 + 600) = 0;
  return;
}

