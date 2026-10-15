/*
 * FUN_10008cbb at 10008cbb
 * undefined __fastcall FUN_10008cbb(int param_1)
 * Address ranges: 10008cbb-10008d17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10008cbb(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x908) == '\0') {
    FUN_10008c80(param_1);
    iVar1 = *(int *)(param_1 + 0x9cc);
    uVar2 = 0;
    do {
      uVar3 = 0;
      do {
        uVar4 = uVar3 + 1;
        *(undefined4 *)(iVar1 + 0x700 + uVar3 * 4 + uVar2 * 0x10) =
             *(undefined4 *)(iVar1 + 0x840 + uVar2 * 4 + uVar3 * 0x10);
        uVar3 = uVar4;
      } while (uVar4 < 4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
    *(undefined1 *)(param_1 + 0x908) = 1;
  }
  return;
}

