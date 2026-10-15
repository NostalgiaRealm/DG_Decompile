/*
 * FUN_10025f4c at 10025f4c
 * bool __fastcall FUN_10025f4c(int param_1)
 * Address ranges: 10025f4c-10026035
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10025f4c(int param_1)

{
  HBITMAP h;
  int iVar1;
  bool bVar2;
  BITMAPINFO local_448;
  undefined4 local_41c;
  undefined4 local_418;
  undefined1 local_1c [12];
  undefined4 local_10;
  
  iVar1 = *(int *)(param_1 + 0x34);
  bVar2 = false;
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_100ada8e((int *)&local_448,0,0x2c);
    if (iVar1 == 8) {
      local_448.bmiColors[0].rgbBlue = '\0';
      local_448.bmiColors[0].rgbGreen = '\0';
      local_448.bmiColors[0].rgbRed = '\0';
      local_448.bmiColors[0].rgbReserved = '\0';
    }
    else {
      local_448.bmiColors[0] = *(RGBQUAD *)(param_1 + 0x38);
      local_41c = *(undefined4 *)(param_1 + 0x3c);
      local_418 = *(undefined4 *)(param_1 + 0x40);
    }
    local_448.bmiHeader.biWidth = *(LONG *)(param_1 + 0x18);
    local_448.bmiHeader.biHeight = -*(int *)(param_1 + 0x1c);
    local_448.bmiHeader.biSize = 0x28;
    local_448.bmiHeader.biPlanes = 1;
    local_448.bmiHeader.biBitCount = *(WORD *)(param_1 + 0x34);
    if ((iVar1 == 0x10) || (local_448.bmiHeader.biCompression = 0, iVar1 == 0x20)) {
      local_448.bmiHeader.biCompression = 3;
    }
    h = CreateDIBSection((HDC)0x0,&local_448,0,(void **)(param_1 + 0x58),(HANDLE)0x0,0);
    *(HBITMAP *)(param_1 + 0x44) = h;
    iVar1 = 0;
    if (h != (HBITMAP)0x0) {
      GetObjectW(h,0x18,local_1c);
      *(undefined4 *)(param_1 + 0x5c) = local_10;
      iVar1 = *(int *)(param_1 + 0x44);
      *(undefined1 *)(param_1 + 0x60) = 0;
    }
    *(undefined2 *)(param_1 + 0x61) = 0;
    bVar2 = iVar1 == 0;
  }
  return !bVar2;
}

