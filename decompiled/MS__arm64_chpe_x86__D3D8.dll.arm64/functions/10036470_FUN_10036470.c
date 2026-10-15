/*
 * FUN_10036470 at 10036470
 * undefined FUN_10036470(void)
 * Address ranges: 10036470-100365a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10036470(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_460 [12];
  undefined4 local_454;
  undefined4 local_440;
  undefined4 uStack_43c;
  int iStack_438;
  undefined2 uStack_434;
  undefined2 uStack_432;
  ulonglong local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 local_410;
  
  piVar1 = (int *)(param_1 + 0x44);
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    uStack_428 = 0;
    local_420 = 0;
    if (*(int *)(param_1 + 0x34) == 8) {
      local_418 = 0;
    }
    else {
      local_418 = *(undefined4 *)(param_1 + 0x38);
      uStack_414 = *(undefined4 *)(param_1 + 0x3c);
      local_410 = *(undefined4 *)(param_1 + 0x40);
    }
    _local_440 = CONCAT44(*(undefined4 *)(param_1 + 0x18),0x28);
    iVar2 = *(int *)(param_1 + 0x34);
    _iStack_438 = CONCAT26((short)iVar2,CONCAT24(1,-*(int *)(param_1 + 0x1c)));
    uVar3 = 0;
    if ((iVar2 - 0x10U & 0xffffffef) == 0) {
      uVar3 = 3;
    }
    local_430 = (ulonglong)uVar3;
    iVar2 = (*(code *)PTR_FUN_1013400c)(0,&local_440,0,param_1 + 0x58,0,0);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      (*(code *)PTR_FUN_10134024)(iVar2,0x18,auStack_460);
      *(undefined4 *)(param_1 + 0x5c) = local_454;
      *(undefined1 *)(param_1 + 0x60) = 0;
      iVar2 = *piVar1;
    }
    *(undefined2 *)(param_1 + 0x61) = 0;
  }
  return iVar2 != 0;
}

