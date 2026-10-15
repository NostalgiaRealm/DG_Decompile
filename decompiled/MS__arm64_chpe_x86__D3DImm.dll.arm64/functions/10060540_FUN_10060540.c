/*
 * FUN_10060540 at 10060540
 * undefined FUN_10060540(void)
 * Address ranges: 10060540-100605f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10060540(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar3 = 0x80070057;
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = (undefined8 *)FUN_10081cb0(0x40);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      *(undefined4 *)((int)puVar2 + 0x3c) = 0x3f800000;
      *(undefined4 *)(puVar2 + 5) = 0x3f800000;
      *(undefined4 *)puVar2 = 0x3f800000;
      *(undefined4 *)((int)puVar2 + 0x14) = 0x3f800000;
    }
    *param_2 = puVar2;
    uVar3 = 0;
    if (puVar2 == (undefined8 *)0x0) {
      uVar3 = 0x8007000e;
    }
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar3;
}

