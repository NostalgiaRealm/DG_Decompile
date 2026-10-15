/*
 * FUN_1003f8be at 1003f8be
 * undefined4 * __fastcall FUN_1003f8be(int param_1, int param_2, undefined4 param_3, int param_4, undefined4 param_5, undefined1 param_6)
 * Address ranges: 1003f8be-1003f954
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_1003f8be(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined1 param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar3 = (undefined4 *)FUN_100ad475(0x58);
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = *(undefined1 *)(param_4 + 0x125);
    uVar2 = *(undefined1 *)(param_4 + 0x126);
    *puVar3 = &PTR_FUN_100b202c;
    FUN_1003fa4f(puVar3 + 2,param_1,param_2,param_6);
    puVar3[2] = &PTR_FUN_100b23f4;
    *puVar3 = &PTR_FUN_100b23fc;
    puVar3[0x13] = param_3;
    puVar3[0x12] = (uint)CONCAT11(uVar1,uVar2);
    puVar3[0x14] = param_5;
    puVar3[1] = param_4;
    uVar4 = FUN_1002d89a((int)puVar3);
    if ((char)uVar4 != '\0') {
      return puVar3;
    }
    FUN_1003f7eb(puVar3);
    FUN_100ad48c(puVar3);
  }
  return (undefined4 *)0x0;
}

