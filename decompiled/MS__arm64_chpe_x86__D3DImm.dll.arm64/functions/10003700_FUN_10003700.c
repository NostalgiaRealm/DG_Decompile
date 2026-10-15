/*
 * FUN_10003700 at 10003700
 * undefined FUN_10003700(void)
 * Address ranges: 10003700-100037f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10003700(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 local_30 [4];
  
  *(undefined4 *)(param_1 + 0x184) = 3;
  *(undefined4 *)(param_1 + 400) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x188) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x194) = 0;
  *(undefined8 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 0x19c) = 0;
  *(undefined8 *)(param_1 + 0x1b4) = 0;
  *(undefined8 *)(param_1 + 0x1ac) = 0;
  *(undefined8 *)(param_1 + 0x1bc) = 0;
  *(undefined8 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  puVar1 = (undefined8 *)(param_1 + 0x178);
  *(undefined1 *)(param_1 + 0x1ec) = 0;
  FUN_10081dc0(*(undefined4 *)puVar1);
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  iVar2 = 8;
  do {
    local_30[0] = 0xffffffff;
    FUN_100059f0(puVar1,local_30);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_10002ca0(param_1);
  return;
}

