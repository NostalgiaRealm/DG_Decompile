/*
 * FUN_10036d7f at 10036d7f
 * undefined __stdcall FUN_10036d7f(void)
 * Address ranges: 10036d7f-10036dd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036d7f(void)

{
  char cVar1;
  char cVar2;
  CHAR local_204 [512];
  
  cVar1 = FUN_1005f530();
  cVar2 = '\0';
  if (DAT_10070a26 == -0x559c) {
    cVar2 = cVar1;
  }
  if (cVar2 != '\0') {
    FUN_10060ba1(local_204,
                 "%s %s module type is native x86 so it is running through emulation. Consider using the ARM64 CHPE version instead for better performance and no additional JIT codegen cache overhead.\n"
                );
    OutputDebugStringA(local_204);
  }
  return;
}

