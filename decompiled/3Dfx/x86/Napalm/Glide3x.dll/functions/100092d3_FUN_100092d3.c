/*
 * FUN_100092d3 at 100092d3
 * undefined1 * __fastcall FUN_100092d3(undefined1 * param_1)
 * Address ranges: 100092d3-10009383
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __fastcall FUN_100092d3(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_1000903c(param_1);
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  FUN_100561f1((int *)(param_1 + 0x2f0),0,0x80);
  FUN_100561f1((int *)(param_1 + 0x122c),0,0xc00);
  FUN_100561f1((int *)(param_1 + 0x1e2c),0,0xc00);
  do {
    iVar2 = uVar1 * 0x4e8;
    *(undefined4 *)(param_1 + iVar2 + 0x374) = 0;
    *(undefined4 *)(param_1 + iVar2 + 0x378) = 0;
    FUN_100561f1((int *)(param_1 + iVar2 + 0x37c),0,0x70);
    FUN_100561f1((int *)(param_1 + iVar2 + 0x3ec),0,0x70);
    FUN_100561f1((int *)(param_1 + iVar2 + 0x45c),0,0x400);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  return param_1;
}

