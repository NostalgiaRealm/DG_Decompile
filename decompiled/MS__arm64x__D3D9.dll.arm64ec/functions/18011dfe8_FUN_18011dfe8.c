/*
 * FUN_18011dfe8 at 18011dfe8
 * undefined FUN_18011dfe8(void)
 * Address ranges: 18011dfe8-18011e043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011dfe8(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  if (*(char *)(param_1 + 0xce1) == '\0') {
    uVar1 = FUN_18012b0f8(*(longlong *)(param_1 + 0xe10),auStack_80,
                          *(longlong *)(param_1 + 0xe10) + 0x40);
    puVar2 = (undefined8 *)FUN_18012b0f8(uVar1,auStack_40,param_1 + 0xd88);
    lVar3 = *(longlong *)(param_1 + 0xe10);
    uVar1 = *puVar2;
    uVar5 = puVar2[3];
    uVar4 = puVar2[2];
    *(undefined8 *)(lVar3 + 0x8588) = puVar2[1];
    *(undefined8 *)(lVar3 + 0x8580) = uVar1;
    *(undefined8 *)(lVar3 + 0x8598) = uVar5;
    *(undefined8 *)(lVar3 + 0x8590) = uVar4;
    uVar1 = puVar2[4];
    uVar5 = puVar2[7];
    uVar4 = puVar2[6];
    *(undefined8 *)(lVar3 + 0x85a8) = puVar2[5];
    *(undefined8 *)(lVar3 + 0x85a0) = uVar1;
    *(undefined8 *)(lVar3 + 0x85b8) = uVar5;
    *(undefined8 *)(lVar3 + 0x85b0) = uVar4;
    *(undefined1 *)(param_1 + 0xce1) = 1;
  }
  return;
}

