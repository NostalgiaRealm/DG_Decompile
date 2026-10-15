/*
 * FUN_1009d5d6 at 1009d5d6
 * undefined __fastcall FUN_1009d5d6(int param_1)
 * Address ranges: 1009d5d6-1009d651
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009d5d6(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  HWND hWnd;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x118);
  uVar4 = 0;
  if (*(int *)(iVar1 + 0xd98) != 0) {
    do {
      iVar2 = *(int *)(*(int *)(iVar1 + 0xd94) + uVar4 * 4);
      uVar5 = iVar2 - 8;
      if (iVar2 == 0) {
        uVar5 = 0;
      }
      if (uVar5 != param_1 - 8U) {
        uVar3 = FUN_10092264(*(void **)(uVar5 + 0x120),uVar5);
        hWnd = (HWND)(**(code **)(*(int *)(uVar5 + 8) + 0x14))();
        PostMessageW(hWnd,0x400,0x44454745,(uint)(byte)((byte)uVar3 ^ 1));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(iVar1 + 0xd98));
  }
  return;
}

