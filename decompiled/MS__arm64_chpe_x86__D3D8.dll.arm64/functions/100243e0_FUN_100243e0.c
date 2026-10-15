/*
 * FUN_100243e0 at 100243e0
 * undefined FUN_100243e0(void)
 * Address ranges: 100243e0-10024457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100243e0(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(char *)(param_1 + 0x9d9) == '\0') {
    puVar1 = *(undefined8 **)(param_1 + 0xabc);
    puVar1[0x10c9] = puVar1[1];
    puVar1[0x10c8] = *puVar1;
    puVar1[0x10cb] = puVar1[3];
    puVar1[0x10ca] = puVar1[2];
    puVar1[0x10cd] = puVar1[5];
    puVar1[0x10cc] = puVar1[4];
    puVar1[0x10cf] = puVar1[7];
    puVar1[0x10ce] = puVar1[6];
    iVar2 = *(int *)(param_1 + 0xabc);
    uStack_48 = *(undefined8 *)(iVar2 + 0x8648);
    local_50 = *(undefined8 *)(iVar2 + 0x8640);
    uStack_38 = *(undefined8 *)(iVar2 + 0x8658);
    uStack_40 = *(undefined8 *)(iVar2 + 0x8650);
    uStack_28 = *(undefined8 *)(iVar2 + 0x8668);
    local_30 = *(undefined8 *)(iVar2 + 0x8660);
    uStack_18 = *(undefined8 *)(iVar2 + 0x8678);
    uStack_20 = *(undefined8 *)(iVar2 + 0x8670);
    FUN_1002f7f0(&local_50,(undefined8 *)(iVar2 + 0x8640),0);
    *(char *)(param_1 + 0x9d9) = '\x01';
  }
  return;
}

