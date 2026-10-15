/*
 * _grSstQueryBoards@4 at 180002280
 * undefined8 __cdecl _grSstQueryBoards@4(undefined4 * param_1)
 * Address ranges: 180002280-1800022cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 _grSstQueryBoards_4(undefined4 *param_1)

{
  longlong lVar1;
  
                    /* 0x2280  71  _grSstQueryBoards@4
                       0x2280  228  grSstQueryBoards */
  lVar1 = FUN_180016878();
  FUN_180016a28(lVar1);
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)(param_1 + 0x23) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *param_1 = 1;
  return 1;
}

