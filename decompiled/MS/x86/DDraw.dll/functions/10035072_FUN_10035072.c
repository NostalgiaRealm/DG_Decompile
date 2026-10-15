/*
 * FUN_10035072 at 10035072
 * int __stdcall FUN_10035072(int param_1, HWND param_2, uint param_3)
 * Address ranges: 10035072-100350b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10035072(int param_1,HWND param_2,uint param_3)

{
  char cVar1;
  int local_8;
  
  local_8 = 0;
  cVar1 = FUN_10036586(param_2,param_3,*(uint *)(param_1 + 4),&local_8);
  if (cVar1 == '\0') {
    local_8 = FUN_10026cef(*(void **)(param_1 + 4),param_2,param_3,'\x01');
  }
  return local_8;
}

