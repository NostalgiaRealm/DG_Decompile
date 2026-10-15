/*
 * FUN_100a4e68 at 100a4e68
 * undefined __stdcall FUN_100a4e68(void)
 * Address ranges: 100a4e68-100a4eba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a4e68(void)

{
  char cVar1;
  char cVar2;
  CHAR local_204 [512];
  
  cVar1 = FUN_100ce450();
  cVar2 = '\0';
  if (DAT_100e3a3e == -0x559c) {
    cVar2 = cVar1;
  }
  if (cVar2 != '\0') {
    FUN_100cfd2c(local_204,
                 "%s %s module type is native x86 so it is running through emulation. Consider using the ARM64 CHPE version instead for better performance and no additional JIT codegen cache overhead.\n"
                );
    OutputDebugStringA(local_204);
  }
  return;
}

