/*
 * FUN_10008a86 at 10008a86
 * undefined4 __fastcall FUN_10008a86(int param_1)
 * Address ranges: 10008a86-10008b05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10008a86(int param_1)

{
  undefined4 uVar1;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  uVar1 = 0x887602f9;
  if (*(char *)(param_1 + 0x931) != '\0') {
    local_c = &local_10;
    local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
    local_10 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_10 = (uint)in_FPUControlWord;
      local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
    }
    (**(code **)(**(int **)(param_1 + 0x14) + 0x14))();
    uVar1 = 0;
    *(undefined1 *)(param_1 + 0x931) = 0;
  }
  return uVar1;
}

