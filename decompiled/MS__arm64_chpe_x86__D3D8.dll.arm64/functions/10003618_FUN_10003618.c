/*
 * FUN_10003618 at 10003618
 * undefined FUN_10003618(void)
 * Address ranges: 10003618-10003693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10003618(ulonglong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_10031650(param_1,param_2,(&DAT_101387d4)[param_2 * 0x8a]);
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    iVar2 = *(int *)((int)&DAT_1013894c + param_2 * 0x228 + 4);
    iVar1 = 0x20;
    if (iVar2 != 8) {
      iVar1 = iVar2;
    }
    uVar3 = FUN_100029f0(param_1 & 0xffffffff,iVar1);
    *(undefined4 *)(&DAT_10138250 + param_2 * 8) = uVar3;
    uVar5 = 1;
  }
  return uVar5;
}

