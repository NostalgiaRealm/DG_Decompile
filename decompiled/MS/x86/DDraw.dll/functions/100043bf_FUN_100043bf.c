/*
 * FUN_100043bf at 100043bf
 * undefined __stdcall FUN_100043bf(void)
 * Address ranges: 100043bf-10004411
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100043bf(void)

{
  int iVar1;
  WNDCLASSA local_2c;
  
  iVar1 = DAT_1006c228 + 1;
  if (DAT_1006c228 == 0) {
    local_2c.hInstance = DAT_1006c250;
    local_2c.style = 0x20;
    local_2c.lpfnWndProc = FUN_10003f7f;
    local_2c.cbClsExtra = DAT_1006c228;
    local_2c.cbWndExtra = DAT_1006c228;
    local_2c.hIcon = (HICON)0x0;
    local_2c.hCursor = (HCURSOR)0x0;
    local_2c.hbrBackground = (HBRUSH)0x0;
    local_2c.lpszMenuName = (LPCSTR)0x0;
    local_2c.lpszClassName = "DGDEVICEWINDOW";
    DAT_1006c228 = DAT_1006c228 + 1;
    DAT_1006c220 = RegisterClassA(&local_2c);
    iVar1 = DAT_1006c228;
  }
  DAT_1006c228 = iVar1;
  return;
}

