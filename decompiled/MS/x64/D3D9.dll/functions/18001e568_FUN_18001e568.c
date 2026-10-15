/*
 * FUN_18001e568 at 18001e568
 * undefined __fastcall FUN_18001e568(longlong param_1)
 * Address ranges: 18001e568-18001e5dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e568(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_48 [16];
  
  if (*(char *)(param_1 + 0xce3) == '\0') {
    FUN_18001e49c(param_1);
    puVar3 = (undefined8 *)
             FUN_18002cfa4(*(longlong *)(param_1 + 0xe10) + 0x85c0,local_48,param_1 + 0xd88);
    lVar1 = *(longlong *)(param_1 + 0xe10);
    uVar2 = puVar3[1];
    *(undefined8 *)(lVar1 + 0x8600) = *puVar3;
    *(undefined8 *)(lVar1 + 0x8608) = uVar2;
    uVar2 = puVar3[3];
    *(undefined8 *)(lVar1 + 0x8610) = puVar3[2];
    *(undefined8 *)(lVar1 + 0x8618) = uVar2;
    uVar2 = puVar3[5];
    *(undefined8 *)(lVar1 + 0x8620) = puVar3[4];
    *(undefined8 *)(lVar1 + 0x8628) = uVar2;
    uVar2 = puVar3[7];
    *(undefined8 *)(lVar1 + 0x8630) = puVar3[6];
    *(undefined8 *)(lVar1 + 0x8638) = uVar2;
    *(undefined1 *)(param_1 + 0xce3) = 1;
  }
  return;
}

