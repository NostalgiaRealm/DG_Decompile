/*
 * FUN_1801e1138 at 1801e1138
 * undefined FUN_1801e1138(void)
 * Address ranges: 1801e1138-1801e11db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801e1138(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x130);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = FUN_180222c00(param_2,param_1 + 0x148 + uVar4 * 0x10,0x10);
      if (iVar3 == 0) {
        iVar3 = FUN_1801042e0(param_1 + 0x134);
        *param_3 = *(undefined8 *)(param_1 + 0x140);
        if (iVar3 != 1) {
          return 0;
        }
        FUN_1801042e0(*(longlong *)(param_1 + 0x178) + 0x6844);
        return 0;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < uVar2);
  }
  return 0x80004002;
}

