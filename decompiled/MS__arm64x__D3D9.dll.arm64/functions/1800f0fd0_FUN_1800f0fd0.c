/*
 * FUN_1800f0fd0 at 1800f0fd0
 * undefined FUN_1800f0fd0(void)
 * Address ranges: 1800f0fd0-1800f1043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f0fd0(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (DAT_18024e318 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_180102f80(0x58);
    if (puVar2 == (undefined8 *)0x0) {
      DAT_18024e318 = (undefined8 *)0x0;
    }
    else {
      uVar3 = thunk_FUN_180102f80(0xc00);
      *puVar2 = uVar3;
      puVar2[1] = 0x80;
      *(undefined1 *)(puVar2 + 10) = 1;
      pcVar1 = __imp_KERNEL32_dll_InitializeCriticalSection;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      (*pcVar1)(puVar2 + 5);
      DAT_18024e318 = puVar2;
    }
  }
  return;
}

