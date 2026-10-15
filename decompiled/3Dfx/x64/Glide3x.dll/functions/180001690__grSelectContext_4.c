/*
 * _grSelectContext@4 at 180001690
 * bool __fastcall _grSelectContext@4(int param_1)
 * Address ranges: 180001690-1800016a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grSelectContext_4(int param_1)

{
  undefined *puVar1;
  
                    /* 0x1690  62  _grSelectContext@4
                       0x1690  162  grSelectContext */
  puVar1 = FUN_1800069ac();
  return param_1 == *(int *)(puVar1 + 0x58);
}

