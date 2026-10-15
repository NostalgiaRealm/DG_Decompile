/*
 * FUN_1004e8c1 at 1004e8c1
 * undefined __stdcall FUN_1004e8c1(void)
 * Address ranges: 1004e8c1-1004e913
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004e8c1(void)

{
  char cVar1;
  char cVar2;
  CHAR local_204 [512];
  
  cVar1 = FUN_1005c340();
  cVar2 = '\0';
  if (DAT_1006bbde == -0x559c) {
    cVar2 = cVar1;
  }
  if (cVar2 != '\0') {
    FUN_1005c72c(local_204,
                 "%s %s module type is native x86 so it is running through emulation. Consider using the ARM64 CHPE version instead for better performance and no additional JIT codegen cache overhead.\n"
                );
    OutputDebugStringA(local_204);
  }
  return;
}

