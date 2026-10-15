/*
 * FUN_1800121f8 at 1800121f8
 * undefined FUN_1800121f8(void)
 * Address ranges: 1800121f8-180012253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800121f8(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong extraout_x15;
  longlong extraout_x15_00;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  if (*(char *)(param_1 + 0xce1) == '\0') {
    uVar1 = FUN_18001ef50(*(longlong *)(param_1 + 0xe10),auStack_80,
                          *(longlong *)(param_1 + 0xe10) + 0x40);
    puVar2 = (undefined8 *)FUN_18001ef50(uVar1,auStack_40,extraout_x15 + 0xd88);
    lVar3 = *(longlong *)(extraout_x15_00 + 0xe10);
    uVar5 = *puVar2;
    uVar4 = puVar2[3];
    uVar1 = puVar2[2];
    *(undefined8 *)(lVar3 + 0x8588) = puVar2[1];
    *(undefined8 *)(lVar3 + 0x8580) = uVar5;
    *(undefined8 *)(lVar3 + 0x8598) = uVar4;
    *(undefined8 *)(lVar3 + 0x8590) = uVar1;
    uVar5 = puVar2[4];
    uVar4 = puVar2[7];
    uVar1 = puVar2[6];
    *(undefined8 *)(lVar3 + 0x85a8) = puVar2[5];
    *(undefined8 *)(lVar3 + 0x85a0) = uVar5;
    *(undefined8 *)(lVar3 + 0x85b8) = uVar4;
    *(undefined8 *)(lVar3 + 0x85b0) = uVar1;
    *(undefined1 *)(extraout_x15_00 + 0xce1) = 1;
  }
  return;
}

