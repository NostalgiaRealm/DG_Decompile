/*
 * FUN_10003a58 at 10003a58
 * undefined FUN_10003a58(void)
 * Address ranges: 10003a58-10003ad3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10003a58(ulonglong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_1003b520(param_1,param_2,(&DAT_10171394)[param_2 * 0x8a]);
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    iVar2 = *(int *)((int)&DAT_1017150c + param_2 * 0x228 + 4);
    iVar1 = 0x20;
    if (iVar2 != 8) {
      iVar1 = iVar2;
    }
    uVar3 = FUN_10002b10(param_1 & 0xffffffff,iVar1);
    *(undefined4 *)(&DAT_10170f70 + param_2 * 0x20) = uVar3;
    uVar5 = 1;
  }
  return uVar5;
}

