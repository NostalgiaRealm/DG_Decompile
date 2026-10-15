/*
 * FUN_18002f304 at 18002f304
 * undefined __fastcall FUN_18002f304(longlong param_1)
 * Address ranges: 18002f304-18002f4b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002f304(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x34) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x34) = 0;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x34) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x34) = 0;
  }
  FUN_180053e18(*(longlong *)(param_1 + 0xb0),param_1 + 0xa8);
  uVar3 = 0;
  if (*(int *)(param_1 + 0xe8) != 0) {
    do {
      lVar2 = *(longlong *)(param_1 + 0xe0);
      uVar5 = 0;
      if (*(int *)(*(longlong *)(lVar2 + uVar3 * 8) + 8) != 0) {
        do {
          FUN_180041dac((longlong *)(*(longlong *)(param_1 + 0xb8) + 0x19d8),
                        *(longlong *)
                         (*(longlong *)(**(longlong **)(lVar2 + uVar3 * 8) + uVar5 * 8) + 0x28));
          puVar1 = *(undefined8 **)
                    (**(longlong **)(*(longlong *)(param_1 + 0xe0) + uVar3 * 8) + uVar5 * 8);
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          lVar2 = *(longlong *)(param_1 + 0xe0);
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(*(longlong *)(lVar2 + uVar3 * 8) + 8));
      }
      puVar1 = *(undefined8 **)(lVar2 + uVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        FUN_18005dbc0((LPVOID)*puVar1);
        FUN_18005dbc0(puVar1);
      }
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0xe8));
  }
  FUN_18005dbc0(*(LPVOID *)(param_1 + 0xe0));
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180042800(puVar1);
    FUN_18005dbc0(puVar1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180042800(puVar1);
    FUN_18005dbc0(puVar1);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_18002f2c8(param_1);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}

