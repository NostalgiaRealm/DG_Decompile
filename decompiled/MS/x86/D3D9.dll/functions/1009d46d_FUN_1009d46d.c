/*
 * FUN_1009d46d at 1009d46d
 * undefined4 __stdcall FUN_1009d46d(int param_1, int param_2)
 * Address ranges: 1009d46d-1009d508
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009d46d(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  iVar1 = *(int *)(param_1 + -0x58);
  if ((*(int *)(iVar1 + 0x94) != 0) && (*(int *)(iVar1 + 0x94) == param_2)) {
    GdiFlush();
    *(undefined1 *)(iVar1 + 0xad) = 1;
    if (*(int *)(iVar1 + 0x9c) != *(int *)(iVar1 + 0x20)) {
      FUN_1002d73c(*(int *)(param_1 + -0x58) + 0x4c);
      *(undefined1 *)(*(int *)(param_1 + -0x58) + 0xae) = 0;
      iVar2 = *(int *)(param_1 + -0x58);
      *(undefined4 *)(iVar2 + 0x9c) = 0;
      *(undefined4 *)(iVar2 + 0xa0) = 0;
    }
    iVar2 = FUN_10012c66((void *)(param_1 + -0x5c));
    if (-1 < iVar2) {
      SelectObject(*(HDC *)(iVar1 + 0x94),*(HGDIOBJ *)(iVar1 + 0x98));
      DeleteDC(*(HDC *)(iVar1 + 0x94));
      *(undefined4 *)(iVar1 + 0x94) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

