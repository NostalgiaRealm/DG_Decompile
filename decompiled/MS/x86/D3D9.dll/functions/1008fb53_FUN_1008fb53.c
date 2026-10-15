/*
 * FUN_1008fb53 at 1008fb53
 * undefined4 * __fastcall FUN_1008fb53(undefined4 param_1, undefined4 * param_2, undefined4 param_3, undefined1 param_4, undefined1 param_5)
 * Address ranges: 1008fb53-1008fbca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_1008fb53(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_100cfd55(0x27c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[3] = puVar1;
    puVar1[4] = param_1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_100d7248;
    puVar3 = puVar1 + 5;
    for (iVar2 = 0x95; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar1[0x9d] = param_3;
    *(undefined1 *)((int)puVar1 + 0x27a) = param_4;
    puVar1[0x9a] = 0;
    puVar1[0x9b] = 0;
    puVar1[0x9c] = 0;
    *(undefined2 *)(puVar1 + 0x9e) = 0;
    *(undefined1 *)((int)puVar1 + 0x27b) = param_5;
  }
  return puVar1;
}

