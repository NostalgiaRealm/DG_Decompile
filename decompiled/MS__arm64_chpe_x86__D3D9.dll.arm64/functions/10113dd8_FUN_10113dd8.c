/*
 * FUN_10113dd8 at 10113dd8
 * undefined FUN_10113dd8(void)
 * Address ranges: 10113dd8-10113e93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10113dd8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x8e0);
  if ((iVar1 != 0) && (param_2 != 0)) {
    uVar2 = FUN_1011ef68(*(undefined4 *)(param_1 + 0x8e4),param_2,param_3,param_4,iVar1,param_1,
                         param_5,*(undefined8 *)(param_1 + 0x938));
    uVar2 = uVar2 & 0xffffffff;
    if ((*(int *)(*(int *)(param_1 + 0x8e0) + 0x20) != 3) &&
       (uVar3 = FUN_1011e760(uVar2,param_5,param_4), (uVar3 & 1) != 0)) {
      FUN_10112f60(param_1,param_2,param_3,uVar2 & 0xffffffff,param_5);
    }
  }
  return;
}

