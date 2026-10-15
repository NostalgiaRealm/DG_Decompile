/*
 * FUN_18001e5e0 at 18001e5e0
 * undefined __fastcall FUN_18001e5e0(longlong param_1)
 * Address ranges: 18001e5e0-18001e66e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e5e0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(char *)(param_1 + 0xce5) == '\0') {
    puVar1 = *(undefined8 **)(param_1 + 0xe10);
    puVar1[0x10c8] = *puVar1;
    puVar1[0x10c9] = puVar1[1];
    puVar1[0x10ca] = puVar1[2];
    puVar1[0x10cb] = puVar1[3];
    puVar1[0x10cc] = puVar1[4];
    puVar1[0x10cd] = puVar1[5];
    puVar1[0x10ce] = puVar1[6];
    puVar1[0x10cf] = puVar1[7];
    lVar2 = *(longlong *)(param_1 + 0xe10);
    local_48 = *(undefined8 *)(lVar2 + 0x8640);
    uStack_40 = *(undefined8 *)(lVar2 + 0x8648);
    local_38 = *(undefined8 *)(lVar2 + 0x8650);
    uStack_30 = *(undefined8 *)(lVar2 + 0x8658);
    local_28 = *(undefined8 *)(lVar2 + 0x8660);
    uStack_20 = *(undefined8 *)(lVar2 + 0x8668);
    local_18 = *(undefined8 *)(lVar2 + 0x8670);
    uStack_10 = *(undefined8 *)(lVar2 + 0x8678);
    FUN_18002d088((float *)&local_48,(undefined8 *)(lVar2 + 0x8640),'\0');
    *(undefined1 *)(param_1 + 0xce5) = 1;
  }
  return;
}

