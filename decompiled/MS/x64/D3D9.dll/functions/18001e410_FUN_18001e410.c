/*
 * FUN_18001e410 at 18001e410
 * undefined __fastcall FUN_18001e410(longlong param_1)
 * Address ranges: 18001e410-18001e49b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e410(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 local_88 [16];
  undefined4 local_48 [16];
  
  if (*(char *)(param_1 + 0xce1) == '\0') {
    puVar3 = FUN_18002cfa4(*(longlong *)(param_1 + 0xe10),local_88,
                           *(longlong *)(param_1 + 0xe10) + 0x40);
    puVar4 = (undefined8 *)FUN_18002cfa4((longlong)puVar3,local_48,param_1 + 0xd88);
    lVar1 = *(longlong *)(param_1 + 0xe10);
    uVar2 = puVar4[1];
    *(undefined8 *)(lVar1 + 0x8580) = *puVar4;
    *(undefined8 *)(lVar1 + 0x8588) = uVar2;
    uVar2 = puVar4[3];
    *(undefined8 *)(lVar1 + 0x8590) = puVar4[2];
    *(undefined8 *)(lVar1 + 0x8598) = uVar2;
    uVar2 = puVar4[5];
    *(undefined8 *)(lVar1 + 0x85a0) = puVar4[4];
    *(undefined8 *)(lVar1 + 0x85a8) = uVar2;
    uVar2 = puVar4[7];
    *(undefined8 *)(lVar1 + 0x85b0) = puVar4[6];
    *(undefined8 *)(lVar1 + 0x85b8) = uVar2;
    *(undefined1 *)(param_1 + 0xce1) = 1;
  }
  return;
}

