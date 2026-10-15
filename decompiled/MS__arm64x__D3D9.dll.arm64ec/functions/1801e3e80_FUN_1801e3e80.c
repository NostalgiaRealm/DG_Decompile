/*
 * FUN_1801e3e80 at 1801e3e80
 * undefined FUN_1801e3e80(void)
 * Address ranges: 1801e3e80-1801e3f13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Authoritative hybrid metadata starts this function at 1801e3e80. Ghidra inferred an entry 12 bytes later at 1801e3e8c; a continuous straight-line prologue with no incoming call to the later entry was merged. Instruction bytes unchanged.
 */

/* Authoritative hybrid metadata starts this function at 1801e3e80. Ghidra inferred an entry 12
   bytes later at 1801e3e8c; a continuous straight-line prologue with no incoming call to the later
   entry was merged. Instruction bytes unchanged. */

undefined4 FUN_1801e3e80(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    iVar2 = FUN_180222c00(param_2,&DAT_18022f258 + uVar3 * 0x10,0x10);
    if (iVar2 == 0) {
      iVar2 = FUN_1801042e0(param_1 + 8);
      *param_3 = *(undefined8 *)(param_1 + 0x10);
      if (iVar2 == 1) {
        FUN_1801042e0(*(longlong *)(param_1 + 0x18) + 0x6844);
      }
      return 0;
    }
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
  } while (uVar1 < 2);
  return 0x80004002;
}

