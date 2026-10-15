/*
 * FUN_10082c09 at 10082c09
 * undefined __stdcall FUN_10082c09(void)
 * Address ranges: 10082c09-10082c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10082c09(void)

{
  char cVar1;
  char cVar2;
  CHAR local_204 [512];
  
  cVar1 = FUN_100abb80();
  cVar2 = '\0';
  if (DAT_100bf01a == -0x559c) {
    cVar2 = cVar1;
  }
  if (cVar2 != '\0') {
    FUN_100ad44c(local_204,
                 "%s %s module type is native x86 so it is running through emulation. Consider using the ARM64 CHPE version instead for better performance and no additional JIT codegen cache overhead.\n"
                );
    OutputDebugStringA(local_204);
  }
  return;
}

