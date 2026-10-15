/*
 * FUN_18008c2fc at 18008c2fc
 * undefined8 * __fastcall FUN_18008c2fc(undefined8 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined1 param_7)
 * Address ranges: 18008c2fc-18008c3ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18008c2fc(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1800fbccc(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x1c) = param_7;
    *(undefined4 *)(puVar1 + 1) = param_2;
    *(undefined4 *)((longlong)puVar1 + 0xc) = param_3;
    *(undefined4 *)(puVar1 + 2) = param_4;
    *(undefined4 *)((longlong)puVar1 + 0x14) = param_5;
    *(undefined2 *)((longlong)puVar1 + 0x1d) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = param_1;
    *puVar1 = &PTR_LAB_180103288;
    puVar1[4] = &PTR_LAB_1801032b8;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    uVar2 = FUN_180093a34((longlong)puVar1);
    if ((char)uVar2 != '\0') {
      return puVar1 + 4;
    }
    FUN_1800939c8(puVar1);
    FUN_1800fbcf0(puVar1);
  }
  return (undefined8 *)0x0;
}

