/*
 * FUN_1801e2328 at 1801e2328
 * undefined FUN_1801e2328(void)
 * Address ranges: 1801e2328-1801e23c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801e2328(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  do {
    iVar3 = FUN_180222c00(param_2,&DAT_18022f140 + uVar4 * 0x10,0x10);
    if (iVar3 == 0) {
      iVar3 = FUN_1801042e0(param_1 + 8);
      *param_3 = *(undefined8 *)(param_1 + 0x10);
      if (iVar3 == 1) {
        lVar2 = 0x6844;
        if (*(longlong *)(param_1 + -0x80) != 0) {
          lVar2 = *(longlong *)(param_1 + -0x80) + 0xc;
        }
        FUN_1801042e0(lVar2);
      }
      return 0;
    }
    uVar1 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar1;
  } while (uVar1 < 4);
  return 0x80004002;
}

