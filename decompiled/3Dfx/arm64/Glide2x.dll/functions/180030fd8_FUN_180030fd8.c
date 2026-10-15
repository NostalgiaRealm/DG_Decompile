/*
 * FUN_180030fd8 at 180030fd8
 * undefined __cdecl FUN_180030fd8(longlong param_1)
 * Address ranges: 180030fd8-18003115f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030fd8(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x34) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x34) = 0;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x34) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x34) = 0;
  }
  FUN_180055628(*(longlong *)(param_1 + 0xb0),param_1 + 0xa8);
  uVar5 = 0;
  if (*(int *)(param_1 + 0xe8) != 0) {
    do {
      lVar4 = *(longlong *)(param_1 + 0xe0);
      if (*(int *)(*(longlong *)(lVar4 + uVar5 * 8) + 8) != 0) {
        uVar6 = 0;
        do {
          FUN_180044888((longlong *)(*(longlong *)(param_1 + 0xb8) + 0x19d8),
                        *(longlong *)
                         (*(longlong *)(**(longlong **)(lVar4 + uVar5 * 8) + uVar6 * 8) + 0x28));
          puVar2 = *(undefined8 **)
                    (**(longlong **)(*(longlong *)(param_1 + 0xe0) + uVar5 * 8) + uVar6 * 8);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          lVar4 = *(longlong *)(param_1 + 0xe0);
          uVar1 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(*(longlong *)(lVar4 + uVar5 * 8) + 8));
      }
      puVar2 = *(undefined8 **)(lVar4 + uVar5 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        thunk_FUN_18005fbc8((LPVOID)*puVar2);
        FUN_18005fbc8(puVar2);
      }
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xe8));
  }
  thunk_FUN_18005fbc8(*(LPVOID *)(param_1 + 0xe0));
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x98);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_180044f00(puVar2);
    FUN_18005fbc8(puVar2);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_180044f00(puVar2);
    FUN_18005fbc8(puVar2);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  uVar3 = FUN_180044888((longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 0x19d8)
                        ,*(longlong *)(param_1 + 0x80));
  FUN_180048f30(uVar3,1,param_1 + 0x80);
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

