/*
 * FUN_10061810 at 10061810
 * undefined FUN_10061810(void)
 * Address ranges: 10061810-100618a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10061810(int param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0x88760005;
  if (*(char *)(param_1 + 0x98) == '\0') {
    uVar3 = *param_3;
    uVar2 = 0x887602c6;
    *(undefined8 *)(param_1 + 0x50) = param_3[1];
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 100) = 0;
    *(undefined8 *)(param_1 + 0x5c) = 0;
    *(undefined8 *)(param_1 + 0x74) = 0;
    *(undefined8 *)(param_1 + 0x6c) = 0;
    *(undefined8 *)(param_1 + 0x84) = 0;
    *(undefined8 *)(param_1 + 0x7c) = 0;
    iVar1 = FUN_10081da0(*(undefined4 *)(param_1 + 0x54));
    *(int *)(param_1 + 0x58) = iVar1;
    *(undefined8 *)(param_1 + 0x4c) = 4;
    if (iVar1 != 0) {
      *(char *)(param_1 + 0x98) = '\x01';
      uVar2 = 0;
    }
  }
  return uVar2;
}

