/*
 * FUN_180069d50 at 180069d50
 * undefined FUN_180069d50(void)
 * Address ranges: 180069d50-180069fff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180069d50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_3 + 0x53e) != '\0') {
    uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
    uVar2 = FUN_18006a008();
    uVar2 = FUN_18006a008(uVar2,param_2,param_3,*(undefined4 *)(param_3 + 0x518),
                          *(undefined4 *)(param_3 + 0x4f4),*(undefined4 *)(param_3 + 0x4f8),
                          *(undefined4 *)(param_3 + 0x4c4),*(undefined4 *)(param_3 + 0x4c0),
                          *(undefined4 *)(param_3 + 0x4dc),
                          CONCAT44(uVar1,*(undefined4 *)(param_3 + 0x4d8)));
    FUN_18006a008(uVar2,param_2,param_3,*(undefined4 *)(param_3 + 0x51c),
                  *(undefined4 *)(param_3 + 0x4fc),*(undefined4 *)(param_3 + 0x500),
                  *(undefined4 *)(param_3 + 0x4bc),*(undefined4 *)(param_3 + 0x4c0),
                  *(undefined4 *)(param_3 + 0x4d4),*(undefined4 *)(param_3 + 0x4d8));
    uVar1 = FUN_1800f42d0(param_3 + 0x20,3,1);
    FUN_1800f5730(param_3 + 0x20,param_2,0,*(undefined4 *)(param_3 + 0x504),7,
                  *(undefined4 *)(param_3 + 0x4ec),0x1a4,*(undefined4 *)(param_3 + 0x4f0),0x1a4,0);
    FUN_1800f5730(param_3 + 0x20,param_2,0,*(undefined4 *)(param_3 + 0x504),7,
                  *(undefined4 *)(param_3 + 0x504),0x1a4,*(undefined4 *)(param_3 + 0x4f4),0x1a4,0);
    FUN_1800f5730(param_3 + 0x20,param_2,0,*(undefined4 *)(param_3 + 0x504),7,
                  *(undefined4 *)(param_3 + 0x504),0x1a4,*(undefined4 *)(param_3 + 0x4f8),0x1a4,0);
    FUN_1800f5730(param_3 + 0x20,param_2,0,*(undefined4 *)(param_3 + 0x504),7,
                  *(undefined4 *)(param_3 + 0x504),0x1a4,*(undefined4 *)(param_3 + 0x4fc),0x1a4,0);
    FUN_1800f5730(param_3 + 0x20,param_2,0,*(undefined4 *)(param_3 + 0x504),7,
                  *(undefined4 *)(param_3 + 0x504),0x1a4,*(undefined4 *)(param_3 + 0x500),0x1a4,0);
    FUN_1800f5730(param_3 + 0x20,param_2,0,uVar1,7,*(undefined4 *)(param_3 + 0x4bc),0x1a4,
                  *(undefined4 *)(param_3 + 0x4c0),0x1a4,0);
    uVar3 = 0;
    FUN_1800f5730(param_3 + 0x20,param_2,0,uVar1,7,uVar1,0x1a4,*(undefined4 *)(param_3 + 0x4c4),
                  0x1a4,0);
    uVar4 = 0;
    FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar1,7,uVar1,0x1a4,*(undefined4 *)(param_3 + 0x49c),
                  0xe4,CONCAT44(uVar3,0x3e2aaaab),0x3e2aaaab,0x3e2aaaab,0x3e2aaaab,0);
    FUN_1800f5730(param_3 + 0x20,param_2,0x32,*(undefined4 *)(param_3 + 0x504),7,
                  *(undefined4 *)(param_3 + 0x504),0x1a4,*(undefined4 *)(param_3 + 0x49c),0xe4,
                  0x3e800000,0x3e800000,0x3e800000,0x3e800000,CONCAT44(uVar4,uVar1) | 0x80000000,
                  0x1a4,0);
    FUN_1800f4370(param_3 + 0x20,uVar1);
  }
  return;
}

