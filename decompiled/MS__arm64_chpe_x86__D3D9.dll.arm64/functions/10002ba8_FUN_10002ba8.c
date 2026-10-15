/*
 * FUN_10002ba8 at 10002ba8
 * undefined FUN_10002ba8(void)
 * Address ranges: 10002ba8-10002c4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10002ba8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  iVar2 = FUN_10004ff0(param_1,param_2);
  uVar3 = FUN_10003020(param_3);
  uVar4 = FUN_10003900(*(undefined4 *)(iVar2 + 0x144),uVar3);
  uVar3 = 0x8876086a;
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_10003020(param_4);
    uVar4 = FUN_10003900(*(undefined4 *)(iVar2 + 0x130),uVar3);
    uVar3 = 0x8876086c;
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_10003020(param_5);
      cVar1 = FUN_10003900(*(undefined4 *)(iVar2 + 0x138),uVar3);
      uVar3 = 0;
      if (cVar1 == '\0') {
        uVar3 = 0x8876086c;
      }
    }
  }
  return uVar3;
}

