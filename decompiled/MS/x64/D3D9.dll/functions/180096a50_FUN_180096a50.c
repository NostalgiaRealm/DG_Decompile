/*
 * FUN_180096a50 at 180096a50
 * undefined8 * __fastcall FUN_180096a50(undefined8 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined1 param_7)
 * Address ranges: 180096a50-180096b03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180096a50(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  bool bVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1800fbccc(0x50);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 3) = param_6;
    *(undefined1 *)((longlong)puVar2 + 0x1c) = param_7;
    *(undefined4 *)(puVar2 + 1) = param_2;
    *(undefined4 *)((longlong)puVar2 + 0xc) = param_3;
    *(undefined4 *)(puVar2 + 2) = param_4;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_5;
    *(undefined2 *)((longlong)puVar2 + 0x1d) = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = param_1;
    *puVar2 = &PTR_LAB_180103a80;
    puVar2[4] = &PTR_LAB_180103a60;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0xffffffff;
    puVar2[8] = 0;
    bVar1 = FUN_1800a37f8((longlong)puVar2);
    if (bVar1) {
      return puVar2 + 4;
    }
    FUN_1800a353c(puVar2);
    FUN_1800fbcf0(puVar2);
  }
  return (undefined8 *)0x0;
}

