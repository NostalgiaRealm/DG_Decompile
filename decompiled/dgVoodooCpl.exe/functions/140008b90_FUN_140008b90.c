/*
 * FUN_140008b90 at 140008b90
 * undefined8 __fastcall FUN_140008b90(longlong param_1)
 * Address ranges: 140008b90-140008d3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140008b90(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_14000e340(param_1,0x3f9,0x140027fd8,0);
  FUN_14000e340(param_1,0x3f9,0x140028000,1);
  FUN_14000e340(param_1,0x3f9,0x140028028,2);
  FUN_14000e340(param_1,0x3f9,0x140028050,3);
  FUN_14000e340(param_1,0x3f9,0x140028078,4);
  FUN_14000e340(param_1,0x401,0x140026678,0);
  FUN_14000e340(param_1,0x401,0x140027510,0x100);
  FUN_14000e340(param_1,0x401,0x140027528,0x200);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,2,20000);
  FUN_14000eea0(param_1,0x3f9);
  FUN_14000eea0(param_1,0x3fa);
  FUN_14000eea0(param_1,0x3f2);
  FUN_14000eea0(param_1,0x3f7);
  FUN_14000eea0(param_1,0x401);
  FUN_14000eea0(param_1,0x3f1);
  FUN_14000eea0(param_1,0x3f4);
  FUN_14000eea0(param_1,0x3f6);
  FUN_14000eea0(param_1,0x3f5);
  FUN_14000eea0(param_1,0x3f8);
  FUN_14000eea0(param_1,0x3fb);
  FUN_14000eea0(param_1,0x3fd);
  FUN_14000eea0(param_1,0x3fe);
  FUN_14000eea0(param_1,0x3ff);
  FUN_14000eea0(param_1,0x3fc);
  uVar1 = FUN_14000eea0(param_1,0x400);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}

