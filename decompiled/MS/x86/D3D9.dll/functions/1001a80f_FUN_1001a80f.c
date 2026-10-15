/*
 * FUN_1001a80f at 1001a80f
 * undefined __fastcall FUN_1001a80f(int param_1)
 * Address ranges: 1001a80f-1001a86b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001a80f(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0xc9c) == '\0') {
    FUN_1001a7d4(param_1);
    iVar1 = *(int *)(param_1 + 0xd80);
    uVar2 = 0;
    do {
      uVar3 = 0;
      do {
        uVar4 = uVar3 + 1;
        *(undefined4 *)(iVar1 + 0x8500 + uVar3 * 4 + uVar2 * 0x10) =
             *(undefined4 *)(iVar1 + 0x8640 + uVar2 * 4 + uVar3 * 0x10);
        uVar3 = uVar4;
      } while (uVar4 < 4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
    *(undefined1 *)(param_1 + 0xc9c) = 1;
  }
  return;
}

