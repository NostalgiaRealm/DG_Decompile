/*
 * FUN_18001e49c at 18001e49c
 * undefined __fastcall FUN_18001e49c(longlong param_1)
 * Address ranges: 18001e49c-18001e566
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e49c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_48 [16];
  
  if (*(char *)(param_1 + 0xce2) == '\0') {
    if (*(char *)(param_1 + 0xce0) == '\0') {
      puVar3 = (undefined8 *)
               FUN_18002cfa4(*(longlong *)(param_1 + 0xe10) + 0x280,local_48,
                             *(longlong *)(param_1 + 0xe10));
      lVar1 = *(longlong *)(param_1 + 0xe10);
      uVar2 = puVar3[1];
      *(undefined8 *)(lVar1 + 0x8540) = *puVar3;
      *(undefined8 *)(lVar1 + 0x8548) = uVar2;
      uVar2 = puVar3[3];
      *(undefined8 *)(lVar1 + 0x8550) = puVar3[2];
      *(undefined8 *)(lVar1 + 0x8558) = uVar2;
      uVar2 = puVar3[5];
      *(undefined8 *)(lVar1 + 0x8560) = puVar3[4];
      *(undefined8 *)(lVar1 + 0x8568) = uVar2;
      uVar2 = puVar3[7];
      *(undefined8 *)(lVar1 + 0x8570) = puVar3[6];
      *(undefined8 *)(lVar1 + 0x8578) = uVar2;
      *(undefined1 *)(param_1 + 0xce0) = 1;
    }
    puVar3 = (undefined8 *)
             FUN_18002cfa4(*(longlong *)(param_1 + 0xe10) + 0x8540,local_48,
                           *(longlong *)(param_1 + 0xe10) + 0x40);
    lVar1 = *(longlong *)(param_1 + 0xe10);
    uVar2 = puVar3[1];
    *(undefined8 *)(lVar1 + 0x85c0) = *puVar3;
    *(undefined8 *)(lVar1 + 0x85c8) = uVar2;
    uVar2 = puVar3[3];
    *(undefined8 *)(lVar1 + 0x85d0) = puVar3[2];
    *(undefined8 *)(lVar1 + 0x85d8) = uVar2;
    uVar2 = puVar3[5];
    *(undefined8 *)(lVar1 + 0x85e0) = puVar3[4];
    *(undefined8 *)(lVar1 + 0x85e8) = uVar2;
    uVar2 = puVar3[7];
    *(undefined8 *)(lVar1 + 0x85f0) = puVar3[6];
    *(undefined8 *)(lVar1 + 0x85f8) = uVar2;
    *(undefined1 *)(param_1 + 0xce2) = 1;
  }
  return;
}

