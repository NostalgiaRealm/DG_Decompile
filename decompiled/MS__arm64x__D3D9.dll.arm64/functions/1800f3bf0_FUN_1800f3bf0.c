/*
 * FUN_1800f3bf0 at 1800f3bf0
 * undefined FUN_1800f3bf0(void)
 * Address ranges: 1800f3bf0-1800f3cb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800f3bf0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = (undefined8 *)FUN_180102f80(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 5) = 0x400;
    pcVar1 = __imp_KERNEL32_dll_CreateEventW;
    *(undefined4 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[6] = 0;
    lVar3 = (*pcVar1)(0,0,0,0);
    puVar2[6] = lVar3;
    if (lVar3 != 0) {
      *puVar2 = param_1;
      *(undefined4 *)(puVar2 + 1) = param_2;
      *(undefined4 *)((longlong)puVar2 + 0x24) = param_3;
      uVar4 = FUN_1800f3970(puVar2);
      if ((uVar4 & 1) != 0) {
        return puVar2;
      }
      (*__imp_KERNEL32_dll_CloseHandle)(puVar2[6]);
      puVar2[6] = 0;
    }
    FUN_1800f3868(puVar2);
    FUN_180102fc0(puVar2,0x38);
  }
  return (undefined8 *)0x0;
}

