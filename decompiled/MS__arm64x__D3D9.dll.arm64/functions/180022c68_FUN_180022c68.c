/*
 * FUN_180022c68 at 180022c68
 * undefined FUN_180022c68(void)
 * Address ranges: 180022c68-180022d33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180022c68(uint param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = false;
  if (DAT_18024de80 == 0) {
    iVar2 = FUN_1800015a0(DAT_18024e310 + 0x30);
    if ((iVar2 == 1) && (*(int *)(DAT_18024e310 + 0x2c) != 0)) {
      FUN_180001590(DAT_18024e310 + 0x30);
    }
    else {
      uVar3 = 0;
      while( true ) {
        iVar2 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024de78);
        bVar1 = iVar2 != 0;
        if (iVar2 != 0) break;
        if (param_1 <= uVar3) {
          return false;
        }
        (*__imp_KERNEL32_dll_Sleep)(1);
        uVar3 = uVar3 + 1;
      }
      DAT_18024de80 = DAT_18024de80 + 1;
    }
  }
  return bVar1;
}

