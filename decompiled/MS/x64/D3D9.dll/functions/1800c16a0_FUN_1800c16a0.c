/*
 * FUN_1800c16a0 at 1800c16a0
 * undefined8 __fastcall FUN_1800c16a0(longlong param_1, longlong param_2)
 * Address ranges: 1800c16a0-1800c175a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c16a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + -0x78);
  uVar4 = 0x8876086c;
  if ((*(longlong *)(lVar1 + 0xc0) != 0) && (*(longlong *)(lVar1 + 0xc0) == param_2)) {
    GdiFlush();
    *(undefined1 *)(lVar1 + 0xed) = 1;
    if (*(longlong *)(lVar1 + 0xd0) != *(longlong *)(lVar1 + 0x28)) {
      FUN_180033020(*(longlong *)(param_1 + -0x78));
      *(undefined1 *)(*(longlong *)(param_1 + -0x78) + 0xee) = 0;
      lVar2 = *(longlong *)(param_1 + -0x78);
      *(undefined8 *)(lVar2 + 0xd0) = 0;
      *(undefined4 *)(lVar2 + 0xd8) = 0;
    }
    iVar3 = FUN_1800157d8((longlong *)(param_1 + -0x80));
    if (-1 < iVar3) {
      SelectObject(*(HDC *)(lVar1 + 0xc0),*(HGDIOBJ *)(lVar1 + 200));
      DeleteDC(*(HDC *)(lVar1 + 0xc0));
      uVar4 = 0;
      *(undefined8 *)(lVar1 + 0xc0) = 0;
    }
  }
  return uVar4;
}

