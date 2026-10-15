/*
 * FUN_18011e110 at 18011e110
 * undefined FUN_18011e110(void)
 * Address ranges: 18011e110-18011e17b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011e110(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(char *)(param_1 + 0xce5) == '\0') {
    puVar2 = *(undefined8 **)(param_1 + 0xe10);
    puVar2[0x10c9] = puVar2[1];
    puVar2[0x10c8] = *puVar2;
    puVar2[0x10cb] = puVar2[3];
    puVar2[0x10ca] = puVar2[2];
    puVar2[0x10cd] = puVar2[5];
    puVar2[0x10cc] = puVar2[4];
    puVar2[0x10cf] = puVar2[7];
    puVar2[0x10ce] = puVar2[6];
    lVar1 = *(longlong *)(param_1 + 0xe10);
    uStack_48 = *(undefined8 *)(lVar1 + 0x8648);
    local_50 = *(undefined8 *)(lVar1 + 0x8640);
    uStack_38 = *(undefined8 *)(lVar1 + 0x8658);
    uStack_40 = *(undefined8 *)(lVar1 + 0x8650);
    uStack_28 = *(undefined8 *)(lVar1 + 0x8668);
    local_30 = *(undefined8 *)(lVar1 + 0x8660);
    uStack_18 = *(undefined8 *)(lVar1 + 0x8678);
    uStack_20 = *(undefined8 *)(lVar1 + 0x8670);
    FUN_18012b1a0(&local_50,(undefined8 *)(lVar1 + 0x8640),0);
    *(undefined1 *)(param_1 + 0xce5) = 1;
  }
  return;
}

