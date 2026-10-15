/*
 * FUN_18008cae8 at 18008cae8
 * undefined FUN_18008cae8(void)
 * Address ranges: 18008cae8-18008cbb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18008cae8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined8 *)FUN_180102f80(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = param_2;
    *(undefined4 *)((longlong)puVar1 + 0xc) = param_3;
    *(undefined4 *)(puVar1 + 2) = param_4;
    *(undefined4 *)((longlong)puVar1 + 0x14) = param_5;
    *(undefined4 *)(puVar1 + 3) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x1c) = param_7;
    *(undefined2 *)((longlong)puVar1 + 0x1d) = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_180235a60;
    puVar1[4] = &PTR_FUN_180235a40;
    puVar1[7] = param_1;
    puVar1[8] = 0;
    puVar1[9] = 0xffffffffffffffff;
    uVar2 = FUN_18009a298();
    if ((uVar2 & 1) != 0) {
      if (puVar1 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      return puVar1 + 4;
    }
    FUN_18009a118(puVar1);
    FUN_180102fc0(puVar1,0x50);
  }
  return (undefined8 *)0x0;
}

